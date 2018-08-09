#include "BatchRequests.h"
#include <unordered_map>
#include "Transaction/Methods.h"

namespace arangodb {
namespace batch {

namespace {

// Operation Helper

struct OperationHash {
  size_t operator()(Operation value) const noexcept {
    typedef std::underlying_type<decltype(value)>::type UnderlyingType;
    return std::hash<UnderlyingType>()(UnderlyingType(value));
  }
};

static
std::unordered_map<Operation, std::string, OperationHash> const&
getBatchToStingMap(){
  static const std::unordered_map<Operation, std::string, OperationHash>
  // NOLINTNEXTLINE(cert-err58-cpp)
  batchToStringMap{
      {Operation::READ, "read"},
      {Operation::INSERT, "insert"},
      {Operation::REMOVE, "remove"},
      {Operation::REPLACE, "replace"},
      {Operation::UPDATE, "update"},
      {Operation::UPSERT, "upsert"},
      {Operation::REPSERT, "repsert"},
  };
  return batchToStringMap;
};

static
std::unordered_map<std::string, Operation>
ensureStringToBatchMapIsInitialized() {
 std::unordered_map<std::string, Operation> stringToBatchMap;
  for (auto const& it : getBatchToStingMap()) {
    stringToBatchMap.insert({it.second, it.first});
  }
  return stringToBatchMap;
}

}

std::string batchToString(Operation op) {
  auto const& map = getBatchToStingMap();
  return map.at(op);
}

boost::optional<Operation> stringToBatch(std::string const& op) {
  static const auto stringToBatchMap = ensureStringToBatchMapIsInitialized();
  auto it = stringToBatchMap.find(op);
  if (it == stringToBatchMap.end()) {
    return boost::none;
  }
  return it->second;
}


// request parsing and verification
auto batchSlice<RemoveDoc>::fromVPack(VPackSlice slice) -> std::pair<OperationOptions,std::vector<RemoveDoc>> {
  return {};
}
auto batchSlice<UpdateDoc>::fromVPack(VPackSlice slice) -> std::pair<OperationOptions,std::vector<UpdateDoc>> {
  return {};
}

auto batchSlice<ReplaceDoc>::fromVPack(VPackSlice slice) -> std::pair<OperationOptions,std::vector<ReplaceDoc>> {
  return {};
}

// execute
OperationResult batchSlice<RemoveDoc>::execute(transaction::Methods* trx, std::string const& collection, Request<RemoveDoc> const& request){
    //return trx->remove(collection, request);
    return {};
}

OperationResult batchSlice<UpdateDoc>::execute(transaction::Methods* trx, std::string const& collection, Request<UpdateDoc> const& request){
    //return trx->update(collection, request);
    return {};
}

OperationResult batchSlice<ReplaceDoc>::execute(transaction::Methods* trx, std::string const& collection, Request<ReplaceDoc> const& request){
    //return trx->replace(collection, request);
    return {};
}

}}
