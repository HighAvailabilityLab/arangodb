Incompatible changes in ArangoDB 3.5
====================================

It is recommended to check the following list of incompatible changes **before**
upgrading to ArangoDB 3.5, and adjust any client programs if necessary.

The following incompatible changes have been made in ArangoDB 3.5:

* Numerical primary index keys will be sorted in lexicographical order,
  when shown in the UI (e.g "10" < "9").

