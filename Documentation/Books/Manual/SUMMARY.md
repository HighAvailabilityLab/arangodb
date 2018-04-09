
# Summary

* [Introduction](README.md)
* [Highlights](Highlights.md)

## GETTING FAMILIAR 

* [Getting Started](GettingStarted/README.md)
  * [Installation](GettingStarted/Installation.md) 
  * [Authentication](GettingStarted/Authentication.md)
  * [Web Interface](GettingStarted/WebInterface.md) 
  * [Databases, Collections and Documents](GettingStarted/DatabasesCollectionsDocuments.md)   
  * [Querying the Database](GettingStarted/QueryingTheDatabase.md)   
  * [Coming from SQL](GettingStarted/ComingFromSql.md)
  * [Next Steps](GettingStarted/NextSteps.md) 
* [Tutorials](Tutorials/README.md)  
#   https://@github.com/arangodb-helper/arangodb.git;arangodb;docs/Manual;;/ 
  * [ArangoDB Starter](Tutorials/Starter/README.md)
# https://@github.com/arangodb/arangosync.git;arangosync;docs/Manual;;/  
  * [Datacenter to datacenter Replication](Tutorials/DC2DC/README.md)
#   https://@github.com/arangodb/kube-arangodb.git;kube-arangodb;docs/Manual;;/
  * [Kubernetes](Tutorials/Kubernetes/README.md)
* [ArangoDB Programs](Programs/README.md)
#   https://@github.com//arangodb-helper/arangodb.git;arangodb;docs/Manual;;/ 
  * [ArangoDB Starter](Programs/Starter/README.md)
    * [Options](Programs/Starter/Options.md)
    * [Security](Programs/Starter/Security.md)

## CORE TOPICS	

* [Data models & modeling](DataModeling/README.md)
  * [Concepts](DataModeling/Concepts.md)
  * [Databases](DataModeling/Databases/README.md)
    * [Working with Databases](DataModeling/Databases/WorkingWith.md)
    * [Notes about Databases](DataModeling/Databases/Notes.md)
  * [Collections](DataModeling/Collections/README.md)
    * [Collection Methods](DataModeling/Collections/CollectionMethods.md)
    * [Database Methods](DataModeling/Collections/DatabaseMethods.md)
  * [Documents](DataModeling/Documents/README.md)
    * [Basics and Terminology](DataModeling/Documents/DocumentAddress.md)
    * [Collection Methods](DataModeling/Documents/DocumentMethods.md)
    * [Database Methods](DataModeling/Documents/DatabaseMethods.md)
  * [Graphs, Vertices & Edges](DataModeling/GraphsVerticesEdges.md)
  * [Views](DataModeling/Views/README.md)
    * [Database Methods](DataModeling/Views/DatabaseMethods.md)
    * [View Methods](DataModeling/Views/ViewMethods.md)
  * [Naming Conventions](DataModeling/NamingConventions/README.md)
    * [Database Names](DataModeling/NamingConventions/DatabaseNames.md)
    * [Collection Names](DataModeling/NamingConventions/CollectionNames.md)
    * [Document Keys](DataModeling/NamingConventions/DocumentKeys.md)
    * [Attribute Names](DataModeling/NamingConventions/AttributeNames.md)
* [Indexing](Indexing/README.md)
  * [Index Basics](Indexing/IndexBasics.md)
  * [Which index to use when](Indexing/WhichIndex.md)
  * [Index Utilization](Indexing/IndexUtilization.md)
  * [Working with Indexes](Indexing/WorkingWithIndexes.md)
    * [Hash Indexes](Indexing/Hash.md)
    * [Skiplists](Indexing/Skiplist.md)
    * [Persistent](Indexing/Persistent.md)
    * [Fulltext Indexes](Indexing/Fulltext.md)
    * [Geo Indexes](Indexing/Geo.md)
    * [Vertex Centric Indexes](Indexing/VertexCentric.md)
* [Transactions](Transactions/README.md)
  * [Transaction invocation](Transactions/TransactionInvocation.md)
  * [Passing parameters](Transactions/Passing.md)
  * [Locking and isolation](Transactions/LockingAndIsolation.md)
  * [Durability](Transactions/Durability.md)
  * [Limitations](Transactions/Limitations.md)
* [Graphs](Graphs/README.md)
  * [General Graphs](Graphs/GeneralGraphs/README.md)
    * [Graph Management](Graphs/GeneralGraphs/Management.md)
    * [Graph Functions](Graphs/GeneralGraphs/Functions.md)
  * [SmartGraphs](Graphs/SmartGraphs/README.md)
    * [SmartGraph Management](Graphs/SmartGraphs/Management.md)
  * [Traversals](Graphs/Traversals/README.md)
    * [Using Traversal Objects](Graphs/Traversals/UsingTraversalObjects.md)
    * [Example Data](Graphs/Traversals/ExampleData.md)
  * [Working with Edges](Graphs/Edges/README.md)
  * [Pregel](Graphs/Pregel/README.md)
* [Views](Views/README.md)
  * [ArangoSearch](Views/ArangoSearch.md)
    * [Analyzers](Views/ArangoSearch/Analyzers.md)

## ADVANCED TOPICS	

* [Architecture](Architecture/README.md)
  * [Replication](Architecture/Replication/README.md)
  * [Write-ahead log](Architecture/WriteAheadLog.md)
  * [Storage Engines](Architecture/StorageEngines.md)
* [Foxx Microservices](Foxx/README.md)
  * [At a glance](Foxx/AtAGlance.md)
  * [Getting started](Foxx/GettingStarted.md)
  * [Service manifest](Foxx/Manifest.md)
  * [Service context](Foxx/Context.md)
  * [Configuration](Foxx/Configuration.md)
  * [Dependencies](Foxx/Dependencies.md)
  * [Routers](Foxx/Router/README.md)
    * [Endpoints](Foxx/Router/Endpoints.md)
    * [Middleware](Foxx/Router/Middleware.md)
    * [Request](Foxx/Router/Request.md)
    * [Response](Foxx/Router/Response.md)
  * [Using GraphQL](Foxx/GraphQL.md)
  * [Sessions middleware](Foxx/Sessions/README.md)
    * [Session storages](Foxx/Sessions/Storages/README.md)
      * [Collection storage](Foxx/Sessions/Storages/Collection.md)
      * [JWT storage](Foxx/Sessions/Storages/JWT.md)
    * [Session transports](Foxx/Sessions/Transports/README.md)
      * [Cookie transport](Foxx/Sessions/Transports/Cookie.md)
      * [Header transport](Foxx/Sessions/Transports/Header.md)
  * [Serving files](Foxx/Assets.md)
  * [Writing tests](Foxx/Testing.md)
  * [Cross Origin](Foxx/Cors.md)
  * [Scripts and queued jobs](Foxx/Scripts.md)
  * [Migrating 2.x services](Foxx/Migrating2x/README.md)
    * [Migrating from pre-2.8](Foxx/Migrating2x/Wayback.md)
    * [manifest.json](Foxx/Migrating2x/Manifest.md)
    * [applicationContext](Foxx/Migrating2x/Context.md)
    * [Repositories and Models](Foxx/Migrating2x/Repositories.md)
    * [Controllers](Foxx/Migrating2x/Controllers/README.md)
      * [Request context](Foxx/Migrating2x/Controllers/Endpoints.md)
      * [Error handling](Foxx/Migrating2x/Controllers/Errors.md)
      * [Before/After/Around](Foxx/Migrating2x/Controllers/Middleware.md)
      * [Request object](Foxx/Migrating2x/Controllers/Request.md)
      * [Response object](Foxx/Migrating2x/Controllers/Response.md)
      * [Dependency Injection](Foxx/Migrating2x/Controllers/IoC.md)
    * [Sessions](Foxx/Migrating2x/Sessions.md)
    * [Auth and OAuth2](Foxx/Migrating2x/Auth.md)
    * [Foxx Queries](Foxx/Migrating2x/Queries.md)
  * [Legacy compatibility mode](Foxx/LegacyMode.md)
  * [User management](Foxx/Users.md)
  * [Related modules](Foxx/Modules.md)
    * [Authentication](Foxx/Auth.md)
    * [OAuth 1.0a](Foxx/OAuth1.md)
    * [OAuth 2.0](Foxx/OAuth2.md)	
* [Scalability](Scalability/README.md)
  * [Master/Slave](Scalability/MasterSlave/README.md)
    * [Architecture](Scalability/MasterSlave/Architecture.md)
    * [Limitations](Scalability/MasterSlave/Limitations.md)
  * [Active Failover](Scalability/ActiveFailover/README.md)
    * [Architecture](Scalability/ActiveFailover/Architecture.md)
    * [Limitations](Scalability/ActiveFailover/Limitations.md)
  * [Cluster](Scalability/Cluster/README.md)
    * [Architecture](Scalability/Cluster/Architecture.md)
    * [Data models](Scalability/Cluster/DataModels.md)
    * [Limitations](Scalability/Cluster/Limitations.md)
# https://@github.com/arangodb/arangosync.git;arangosync;docs/Manual;;/   
  * [Datacenter to datacenter replication](Scalability/DC2DC/README.md)
    * [Introduction](Scalability/DC2DC/Introduction.md)
    * [Applicability](Scalability/DC2DC/Applicability.md)
    * [Requirements](Scalability/DC2DC/Requirements.md)

## OPERATIONS		

* [Installation](Installation/README.md)
  * [Linux](Installation/Linux.md)
  * [Mac OS X](Installation/MacOSX.md)
  * [Windows](Installation/Windows.md)
  * [Compiling](Installation/Compiling.md)
* [Deployment](Deployment/README.md)
  * [Single instance](Deployment/SingleInstance/README.md)
  * [Master/Slave](Deployment/MasterSlave/README.md)
    * [Manual Start](Deployment/MasterSlave/ManualStart.md)
  * [Active Failover](Deployment/ActiveFailover/README.md)
    * [Manual Start](Deployment/ActiveFailover/ManualStart.md)
    * [Using the ArangoDB Starter](Deployment/ActiveFailover/UsingTheStarter.md)	
  * [Cluster](Deployment/Cluster/README.md)  
    * [Cluster: Mesos, DC/OS](Deployment/Mesos.md)
    * [Cluster: Generic & Docker](Deployment/ArangoDBStarter.md)
    * [Advanced Topics](Deployment/Advanced.md)
        * [Standalone Agency](Deployment/Agency.md)
        * [Cluster: Local test setups](Deployment/Local.md)
        * [Cluster: Processes](Deployment/Distributed.md)
        * [Cluster: Docker](Deployment/Docker.md)
#   https://@github.com/arangodb/arangosync.git;arangosync;docs/Manual;;/
  * [Multiple Datacenters](Deployment/DC2DC.md)
    * [Cluster](Deployment/DC2DC/Cluster.md)
    * [Kafka & Zookeeper](Deployment/DC2DC/KafkaZookeeper.md)
    * [ArangoSync Master](Deployment/DC2DC/ArangoSyncMaster.md)
    * [ArangoSync Workers](Deployment/DC2DC/ArangoSyncWorkers.md)
    * [Prometheus & Grafana](Deployment/DC2DC/PrometheusGrafana.md)  
#   https://@github.com/arangodb/kube-arangodb.git;kube-arangodb;docs/Manual;;/
  * [Kubernetes](Deployment/Kubernetes/README.md)
    * [Using the Operator](Deployment/Kubernetes/Usage.md)
    * [Deployment Resource](Deployment/Kubernetes/DeploymentResource.md)
    * [ArangoDB Configuration & Secrets](Deployment/Kubernetes/ConfigAndSecrets.md)
    * [Metrics](Deployment/Kubernetes/Metrics.md)
    * [Scaling](Deployment/Kubernetes/Scaling.md)
    * [Services & Load balancer](Deployment/Kubernetes/ServicesAndLoadBalancer.md)
    * [Storage](Deployment/Kubernetes/Storage.md)
    * [Storage Resource](Deployment/Kubernetes/StorageResource.md)
    * [TLS](Deployment/Kubernetes/Tls.md)
    * [Upgrading](Deployment/Kubernetes/Upgrading.md)
* [Administration](Administration/README.md)
  * [Web Interface](Administration/WebInterface/README.md)
    * [Dashboard](Administration/WebInterface/Dashboard.md)
    * [Cluster](Administration/WebInterface/Cluster.md)
    * [Collections](Administration/WebInterface/Collections.md)
    * [Document](Administration/WebInterface/Document.md)
    * [Queries](Administration/WebInterface/AqlEditor.md)
    * [Graphs](Administration/WebInterface/Graphs.md)
    * [Services](Administration/WebInterface/Services.md)
    * [Users](Administration/WebInterface/Users.md)
    * [Logs](Administration/WebInterface/Logs.md)
  * [ArangoDB Shell](Administration/Arangosh/README.md)
    * [Shell Output](Administration/Arangosh/Output.md)
    * [Configuration](Administration/Arangosh/Configuration.md)
    * [Details](GettingStarted/Arangosh.md)
  * [Arangoimport](Administration/Arangoimport.md)
  * [Arangodump](Administration/Arangodump.md)
  * [Arangorestore](Administration/Arangorestore.md)
  * [Arangoexport](Administration/Arangoexport.md)
  * [Managing Users](Administration/ManagingUsers/README.md)
    * [In Arangosh](Administration/ManagingUsers/InArangosh.md)
  * [Server Configuration](Administration/Configuration/README.md)
    * [Operating System Configuration](Administration/Configuration/OperatingSystem.md)
    * [Managing Endpoints](Administration/Configuration/Endpoint.md)
    * [SSL Configuration](Administration/Configuration/SSL.md)
    * [LDAP Options](Administration/Configuration/Ldap.md)
    * [Logging Options](Administration/Configuration/Logging.md)
    * [General Options](Administration/Configuration/GeneralArangod.md)
    * [Write-Ahead Log Options](Administration/Configuration/Wal.md)
    * [Compaction Options](Administration/Configuration/Compaction.md)
    * [Cluster Options](Administration/Configuration/Cluster.md)
    * [RocksDB Engine Options](Administration/Configuration/RocksDB.md)
    * [Hash Cache Options](Administration/Configuration/Cache.md)
    * [Asynchronous Tasks](Administration/Configuration/Asynchronous.md)
  * [Durability](Administration/Durability.md)
  * [Encryption](Administration/Encryption/README.md)
  * [Auditing](Administration/Auditing/README.md)
    * [Configuration](Administration/Auditing/AuditConfiguration.md)
    * [Events](Administration/Auditing/AuditEvents.md)  
  * [Satellite Collections](Administration/Satellites.md) 
  * [Master/Slave](Administration/MasterSlave/README.md)
    * [Setting up](Administration/MasterSlave/SettingUp.md)
      * [Replication Applier](Administration/MasterSlave/ReplicationApplier.md)
      * [Per-Database Setup](Administration/MasterSlave/DatabaseSetup.md)
      * [Server-Level Setup](Administration/MasterSlave/ServerLevelSetup.md)
    * [Syncing Collections](Administration/MasterSlave/SyncingCollections.md)
  * [Active Failover](Administration/ActiveFailover/README.md)  
  * [Cluster](Administration/Cluster/README.md)
#   https://@github.com/arangodb/arangosync.git;arangosync;docs/Manual;;/ 
  * [Datacenter to datacenter replication](Administration/DC2DC/README.md)
  * [Upgrading](Administration/Upgrading/README.md)
    * [Upgrading to 3.3](Administration/Upgrading/Upgrading33.md)
    * [Upgrading to 3.2](Administration/Upgrading/Upgrading32.md)
    * [Upgrading to 3.1](Administration/Upgrading/Upgrading31.md)
    * [Upgrading to 3.0](Administration/Upgrading/Upgrading30.md)
    * [Upgrading to 2.8](Administration/Upgrading/Upgrading28.md)
    * [Upgrading to 2.6](Administration/Upgrading/Upgrading26.md)
    * [Upgrading to 2.5](Administration/Upgrading/Upgrading25.md)
    * [Upgrading to 2.4](Administration/Upgrading/Upgrading24.md)
    * [Upgrading to 2.3](Administration/Upgrading/Upgrading23.md)
    * [Upgrading to 2.2](Administration/Upgrading/Upgrading22.md)
* [Security](Security/README.md)
# https://@github.com/arangodb/arangosync.git;arangosync;docs/Manual;;/   
  * [Datacenter to datacenter replication](Security/DC2DC/README.md)
* [Monitoring](Monitoring/README.md)
# https://@github.com/arangodb/arangosync.git;arangosync;docs/Manual;;/   
  * [Datacenter to datacenter replication](Monitoring/DC2DC/README.md)
* [Troubleshooting](Troubleshooting/README.md)
  * [arangod](Troubleshooting/Arangod.md)
  * [Emergency Console](Troubleshooting/EmergencyConsole.md)
  * [Datafile Debugger](Troubleshooting/DatafileDebugger.md)
  * [Arangobench](Troubleshooting/Arangobench.md)
  * [Cluster](Troubleshooting/Cluster/README.md)  
# https://@github.com/arangodb/arangosync.git;arangosync;docs/Manual;;/   
  * [Datacenter to datacenter replication](Troubleshooting/DC2DC/README.md)  

---

* [Release Notes](ReleaseNotes/README.md)
  * [Version 3.4](ReleaseNotes/34.md)
    * [What's New in 3.4](ReleaseNotes/NewFeatures34.md)
    * [Incompatible changes in 3.4](ReleaseNotes/UpgradingChanges34.md)
  * [Version 3.3](ReleaseNotes/33.md)
    * [What's New in 3.3](ReleaseNotes/NewFeatures33.md)
    * [Incompatible changes in 3.3](ReleaseNotes/UpgradingChanges33.md)
  * [Version 3.2](ReleaseNotes/32.md)  
    * [What's New in 3.2](ReleaseNotes/NewFeatures32.md)
    * [Known Issues in 3.2](ReleaseNotes/KnownIssues32.md)
    * [Incompatible changes in 3.2](ReleaseNotes/UpgradingChanges32.md)
  * [Version 3.1](ReleaseNotes/31.md)  
    * [What's New in 3.1](ReleaseNotes/NewFeatures31.md)
    * [Incompatible changes in 3.1](ReleaseNotes/UpgradingChanges31.md)
  * [Version 3.0](ReleaseNotes/30.md)
    * [What's New in 3.0](ReleaseNotes/NewFeatures30.md)
    * [Incompatible changes in 3.0](ReleaseNotes/UpgradingChanges30.md)
  * [Version 2.8](ReleaseNotes/28.md)
    * [What's New in 2.8](ReleaseNotes/NewFeatures28.md)
    * [Incompatible changes in 2.8](ReleaseNotes/UpgradingChanges28.md)
  * [Version 2.7](ReleaseNotes/27.md)
    * [What's New in 2.7](ReleaseNotes/NewFeatures27.md)
    * [Incompatible changes in 2.7](ReleaseNotes/UpgradingChanges27.md)
  * [Version 2.6](ReleaseNotes/26.md)
    * [What's New in 2.6](ReleaseNotes/NewFeatures26.md)
    * [Incompatible changes in 2.6](ReleaseNotes/UpgradingChanges26.md)
  * [Version 2.5](ReleaseNotes/25.md)
    * [What's New in 2.5](ReleaseNotes/NewFeatures25.md)
    * [Incompatible changes in 2.5](ReleaseNotes/UpgradingChanges25.md)
  * [Version 2.4](ReleaseNotes/24.md)
    * [What's New in 2.4](ReleaseNotes/NewFeatures24.md)
    * [Incompatible changes in 2.4](ReleaseNotes/UpgradingChanges24.md)
  * [Version 2.3](ReleaseNotes/23.md)
    * [What's New in 2.3](ReleaseNotes/NewFeatures23.md)
    * [Incompatible changes in 2.3](ReleaseNotes/UpgradingChanges23.md)
  * [Version 2.2](ReleaseNotes/22.md)
    * [What's New in 2.2](ReleaseNotes/NewFeatures22.md)
  * [Version 2.1](ReleaseNotes/21.md)
    * [What's New in 2.1](ReleaseNotes/NewFeatures21.md)  
* [Appendix](Appendix/README.md)
  * [References](Appendix/References/README.md)
    * [db](Appendix/References/DBObject.md)
    * [collection](Appendix/References/CollectionObject.md)
    * [cursor](Appendix/References/CursorObject.md)
  * [JavaScript Modules](Appendix/JavaScriptModules/README.md)
    * [@arangodb](Appendix/JavaScriptModules/ArangoDB.md)
    * [console](Appendix/JavaScriptModules/Console.md)
    * [crypto](Appendix/JavaScriptModules/Crypto.md)
    * [fs](Appendix/JavaScriptModules/FileSystem.md)
    * [request](Appendix/JavaScriptModules/Request.md)
    * [actions](Appendix/JavaScriptModules/Actions.md)
    * [queries](Appendix/JavaScriptModules/Queries.md)
    * [Write-ahead log](Appendix/JavaScriptModules/WAL.md)
    * [Task Management](Appendix/JavaScriptModules/Tasks.md)
  * [Deprecated](Appendix/Deprecated/README.md)
      * [Simple Queries](Appendix/Deprecated/SimpleQueries/README.md)
        * [Pagination](Appendix/Deprecated/SimpleQueries/Pagination.md)
        * [Modification Queries](Appendix/Deprecated/SimpleQueries/ModificationQueries.md)
        * [Geo Queries](Appendix/Deprecated/SimpleQueries/GeoQueries.md)
        * [Fulltext Queries](Appendix/Deprecated/SimpleQueries/FulltextQueries.md)
      * [Actions](Appendix/Deprecated/Actions/README.md)
        * [Delivering HTML Pages](Appendix/Deprecated/Actions/HtmlExample.md)
        * [Json Objects](Appendix/Deprecated/Actions/JsonExample.md)
        * [Modifying](Appendix/Deprecated/Actions/Modifying.md)
  * [Error codes and meanings](Appendix/ErrorCodes.md)
  * [Glossary](Appendix/Glossary.md)