swaggeraemosgi4j
------------

swaggeraemosgi4j is a Java client generated from [Swagger AEM specification](https://github.com/shinesolutions/swagger-aem-osgi) using [Swagger Code Generator](https://github.com/swagger-api/swagger-codegen).

This Java client returns raw HTTP response AS-IS. An abstraction layer with resource-oriented API and convenient response handling (a la [ruby_aem](https://github.com/shinesolutions/ruby_aem)) is still a work in progress.

Learn more about swaggeraemosgi4j:

* [Installation](https://github.com/shinesolutions/swagger-aem-osgi/tree/master/java#installation)
* [Usage](https://github.com/shinesolutions/swagger-aem-osgi/tree/master/java#usage)
* [Error Handling](https://github.com/shinesolutions/swagger-aem-osgi/tree/master/java#error-handling)
* [Development](https://github.com/shinesolutions/swagger-aem-osgi/tree/master/java#development)
* [Versions History](https://github.com/shinesolutions/swagger-aem-osgi/blob/master/docs/java/versions.md)

swaggeraemosgi4j is part of [AEM OpenCloud](https://aemopencloud.io) platform.

Installation
------------

Maven:

    <dependency>
        <groupId>com.shinesolutions</groupId>
        <artifactId>swaggeraemosgi4j</artifactId>
    </dependency>

Gradle:

    compile group: 'com.shinesolutions', name: 'swaggeraemosgi4j'

Usage
-----

Initialise client:

    import com.shinesolutions.swaggeraemosgi4j.ApiClient;
    import com.shinesolutions.swaggeraemosgi4j.api.ConsoleApi;
    import com.shinesolutions.swaggeraemosgi4j.api.CqApi;
    import com.shinesolutions.swaggeraemosgi4j.api.CrxApi;
    import com.shinesolutions.swaggeraemosgi4j.api.SlingApi;

    ApiClient client = new ApiClient();
    client.setBasePath("http://localhost:4502");
    client.setUsername("admin");
    client.setPassword("admin");
    client.setDebugging(false);

    ConsoleApi console = new ConsoleApi(client);
    SlingApi sling = new SlingApi(client);
    CqApi cq = new CqApi(client);
    CrxApi crx = new CrxApi(client);

Console API - Bundle:

    // stop bundle
    String name = "com.adobe.cq.social.cq-social-forum";
		String action = "stop";
		ApiResponse<Void> response = console.postBundleWithHttpInfo(name, action);

    // start bundle
    String name = "com.adobe.cq.social.cq-social-forum";
		String action = "start";
		ApiResponse<Void> response = console.postBundleWithHttpInfo(name, action);

Console API - Repository:

    // block repository writes
    String action = "blockRepositoryWrites";
		ApiResponse<Void> response = console.postJmxRepositoryWithHttpInfo(action);

    // unblock repository writes
    String action = "unblockRepositoryWrites";
		ApiResponse<Void> response = console.postJmxRepositoryWithHttpInfo(action);

CQ API - AEM:

    # retrieve login page
    ApiResponse<Void> response = cq.getLoginPageWithHttpInfo();

CQ API - Group:

    // set permission
    String id = "somegroup";
		String changelog = "path:/etc/replication,read:true,modify:true";
		ApiResponse<Void> response = cq.postCqActionsWithHttpInfo(id, changelog);

CRX API - Package:

    // create package
    String path = "etc/packages/somepackage";
		String cmd = "create";
		String groupName = "somepackagegroup";
		String packageName = "somepackage";
		String packageVersion = "1.2.3";
		String charset = "utf-8";
		ApiResponse<String> response = crx.postPackageServiceJsonWithHttpInfo(path, cmd, groupName,
				packageName, packageVersion, charset, false, fakeFile);

    // build package
    String path = "etc/packages/somepackagegroup/somepackage-1.2.3.zip";
		String cmd = "build";
		ApiResponse<String> response = crx.postPackageServiceJsonWithHttpInfo(
				path, cmd, "", "", "", "", false, fakeFile);

    // upload package
    path = "";
		cmd = "upload";
		boolean force = true;
		File packageFile = new File(tmpDir.getRoot().toString()
				+ "/somepackage-1.2.3.zip");
    ApiResponse<String> response = crx.postPackageServiceJsonWithHttpInfo(path, cmd, "", "", "", "", force, packageFile);

    // update package filter
    String groupName = "somepackagegroup";
		String packageName = "somepackage";
		String version = "1.2.3";
		String path = "/etc/packages/somepackagegroup/somepackage-1.2.3.zip";
		String filter = "[{\"root\":\"/apps/geometrixx\",\"rules\":[]}]";
		String charset = "utf-8";
		ApiResponse<String> response = crx.postPackageUpdateWithHttpInfo(groupName, packageName, version, path, filter, charset);

    // install package
    String path = "etc/packages/somepackagegroup/somepackage-1.2.3.zip";
		String cmd = "install";
		ApiResponse<String> response = crx.postPackageServiceJsonWithHttpInfo(path, cmd, "", "", "", "", false, someFile);

    // replicate package
    path = "etc/packages/somepackagegroup/somepackage-1.2.3.zip";
		cmd = "replicate";
		ApiResponse<String> response = crx.postPackageServiceJsonWithHttpInfo(path, cmd, "", "", "", "", false, someFile);

    // list packages
    String cmd = "ls";
		ApiResponse<String> response = crx.postPackageServiceWithHttpInfo(cmd);

    // delete package
    String path = "etc/packages/somepackagegroup/somepackage-1.2.3.zip";
		String cmd = "delete";
		ApiResponse<String> response = crx.postPackageServiceJsonWithHttpInfo(path, cmd, "", "", "", "", false, someFile);

CRX API - User:

    // change user password
    String old = "admin";
		String plain = "admin";
		String verify = "admin";
		ApiResponse<Void> response = crx.postSetPasswordWithHttpInfo(old, plain, verify);

Sling API - Flush agent:

    // create flush agent
    String runMode = "author";
    String name = "some-flush-agent";
    String jcrPrimaryType = "cq:Page";
    String jcrContentCqName = "some-flush-agent";
    String jcrContentJcrTitle = "Some Flush Agent Title";
    String jcrContentJcrDescription = "Some Flush Agent Description";
    String jcrContentSlingResourceType = "/libs/cq/replication/components/agent";
    String jcrContentTransportUri = "http://somehost:8080/dispatcher/invalidate.cache";
    String jcrContentTransportUser = "";
    String jcrContentTransportPassword = "";
    String jcrContentLogLevel = "error";
    boolean jcrContentNoVersioning = true;
    List<String> jcrContentProtocolHTTPHeaders = Arrays.asList(
        "CQ-Action:{action}", "CQ-Handle:{path}",
        "CQ-Path:{path}");
    String jcrContentProtocolHTTPHeadersTypeHint = "String[]";
    String jcrContentProtocolHTTPMethod = "GET";
    String jcrContentRetryDelay = "30000";
    String jcrContentSerializationType = "flush";
    String jcrContentJcrMixinTypes = "cq:ReplicationStatus";
    boolean jcrContentTriggerReceive = true;
    boolean jcrContentTriggerSpecific = true;
    String jcrContentCqTemplate = "/libs/cq/replication/templates/agent";
    boolean jcrContentEnabled = true;
    boolean jcrReverseReplication = false;
    String operation = null;

    ApiResponse<Void> response = sling.postAgentWithHttpInfo(runMode, name,
        jcrPrimaryType, jcrContentCqName, jcrContentJcrTitle,
        jcrContentJcrDescription, jcrContentSlingResourceType,
        jcrContentTransportUri, jcrContentTransportUser,
        jcrContentTransportPassword, jcrContentLogLevel,
        jcrContentNoVersioning, jcrContentProtocolHTTPHeaders,
        jcrContentProtocolHTTPHeadersTypeHint,
        jcrContentProtocolHTTPMethod, jcrContentRetryDelay,
        jcrContentSerializationType, jcrContentJcrMixinTypes,
        jcrContentTriggerReceive, jcrContentTriggerSpecific,
        jcrContentCqTemplate, jcrContentEnabled,
        jcrReverseReplication, operation);

    // delete flush agent
    String runMode = "author";
    String name = "some-flush-agent";
    ApiResponse<Void> response = sling.deleteAgentWithHttpInfo(runMode, name);

Sling API - Group:

    // create group
    String id = "somegroup";
		String intermediatePath = "/home/groups/s";
		String createUser = null;
		String createGroup = "";
		String reppassword = null;
		String profilegivenName = "somegroup";
		ApiResponse<String> response = sling.postAuthorizablesWithHttpInfo(id, intermediatePath, createUser, createGroup, reppassword, profilegivenName);

    // find group's authorizable ID
    BigDecimal pLimit = new BigDecimal(-1.0);
    String _1Property = "rep:authorizableId";
    String _1PropertyValue = name;
    ApiResponse<String> response = sling.postQueryWithHttpInfo(path, pLimit, _1Property, _1PropertyValue);

    // check group's existence
    String path = "home/groups/s";
    String name = "somegroup-authorizable-id";
    try {
        sling.getNodeWithHttpInfo(path, name);
    } catch (ApiException e) {
        // AEM returns 302 when node exists, which Swagger considers to be an error
    }

    // add member
    String path = "home/groups/s";
		String name = "somegroup-authorizable-id";
		String addMembers = "somemembergroup";
		response = sling.postNodeRwWithHttpInfo(path, name, addMembers);

    // delete group
    String path = "home/groups/s";
    String name = "somegroup-authorizable-id";
    ApiResponse<Void> response = sling.deleteNodeWithHttpInfo(path, name);

Sling API - Node:

    // create node
    String path = "apps/system";
		String jcrPrimaryType = "sling:Folder";
		String name = "somefolder";
		ApiResponse<Void> response = sling.postPathWithHttpInfo(path, jcrPrimaryType, name);

    // check node's existence
    String path = "apps/system";
    String name = "somefolder";
    try {
        sling.getNodeWithHttpInfo(path, name);
    } catch (ApiException e) {
        // AEM returns 302 when node exists, which Swagger considers to be an error
    }

    // delete node
    String path = "apps/system";
		String name = "somefolder";
		ApiResponse<Void> response = sling.deleteNodeWithHttpInfo(path, name);

Sling API - Node Property:

    // create node
    String path = "apps/system/config.author";
		String jcrPrimaryType = "sling:OsgiConfig";
		String name = "org.apache.felix.http";
		ApiResponse<Void> response = sling.postPathWithHttpInfo(path, jcrPrimaryType, name);

    // set node Property
    // due to Swagger not allowing dynamic params,
    // parameters have to be declared in Swagger spec
    // TODO: add sample snippet

Sling API - Package:

    // download package
    String group = "somepackagegroup";
		String name = "somepackage";
		String version = "1.2.3";
		ApiResponse<File> fileResponse = sling.getPackageWithHttpInfo(group, name, version);

    // get package filter
    String group = "somepackagegroup";
		String name = "somepackage";
		String version = "1.2.3";
		ApiResponse<String> response = sling.getPackageFilterWithHttpInfo(group, name, version);

Sling API - Path:

    // activate path
    boolean ignoreDeactivated = true;
    boolean onlyModified = false;
    String path = "/some/inexisting/path";
    ApiResponse<Void> response = sling.postTreeActivationWithHttpInfo(ignoreDeactivated, onlyModified, path);

Sling API - Replication agent:

    // create replication agent
    String runMode = "author";
    String name = "some-replication-agent";
    String jcrPrimaryType = "cq:Page";
    String jcrContentCqName = "some-replication-agent";
    String jcrContentJcrTitle = "Some Replication Agent Title";
    String jcrContentJcrDescription = "Some Replication Agent Description";
    String jcrContentSlingResourceType = "/libs/cq/replication/components/agent";
    String jcrContentTransportUri = "http://somehost:8080/bin/receive?sling:authRequestLogin=1";
    String jcrContentTransportUser = "admin";
    String jcrContentTransportPassword = "admin";
    String jcrContentLogLevel = "error";
    boolean jcrContentNoVersioning = false;
    List<String> jcrContentProtocolHTTPHeaders = Collections.emptyList();
    String jcrContentProtocolHTTPHeadersTypeHint = "";
    String jcrContentProtocolHTTPMethod = "";
    String jcrContentRetryDelay = "30000";
    String jcrContentSerializationType = "durbo";
    String jcrContentJcrMixinTypes = null;
    boolean jcrContentTriggerReceive = false;
    boolean jcrContentTriggerSpecific = false;
    String jcrContentCqTemplate = "/libs/cq/replication/templates/agent";
    boolean jcrContentEnabled = true;
    boolean jcrReverseReplication = false;
    String operation = null;

    ApiResponse<Void> response = sling.postAgentWithHttpInfo(runMode, name,
        jcrPrimaryType, jcrContentCqName, jcrContentJcrTitle,
        jcrContentJcrDescription, jcrContentSlingResourceType,
        jcrContentTransportUri, jcrContentTransportUser,
        jcrContentTransportPassword, jcrContentLogLevel,
        jcrContentNoVersioning, jcrContentProtocolHTTPHeaders,
        jcrContentProtocolHTTPHeadersTypeHint,
        jcrContentProtocolHTTPMethod, jcrContentRetryDelay,
        jcrContentSerializationType, jcrContentJcrMixinTypes,
        jcrContentTriggerReceive, jcrContentTriggerSpecific,
        jcrContentCqTemplate, jcrContentEnabled,
        jcrReverseReplication, operation);

    // delete replication agent
    String runMode = "author";
    String name = "some-replication-agent";
    ApiResponse<Void> response = sling.deleteAgentWithHttpInfo(runMode, name);

Sling API - Reverse Replication agent:

    // create reverse replication agent
    String runMode = "author";
    String name = "some-replication-agent";
    String jcrPrimaryType = "cq:Page";
    String jcrContentCqName = "some-replication-agent";
    String jcrContentJcrTitle = "Some Replication Agent Title";
    String jcrContentJcrDescription = "Some Replication Agent Description";
    String jcrContentSlingResourceType = "/libs/cq/replication/components/agent";
    String jcrContentTransportUri = "http://somehost:8080/bin/receive?sling:authRequestLogin=1";
    String jcrContentTransportUser = "admin";
    String jcrContentTransportPassword = "admin";
    String jcrContentLogLevel = "error";
    boolean jcrContentNoVersioning = false;
    List<String> jcrContentProtocolHTTPHeaders = Collections.emptyList();
    String jcrContentProtocolHTTPHeadersTypeHint = "";
    String jcrContentProtocolHTTPMethod = "";
    String jcrContentRetryDelay = "30000";
    String jcrContentSerializationType = "durbo";
    String jcrContentJcrMixinTypes = null;
    boolean jcrContentTriggerReceive = false;
    boolean jcrContentTriggerSpecific = false;
    String jcrContentCqTemplate = "/libs/cq/replication/templates/agent";
    boolean jcrContentEnabled = true;
    boolean jcrReverseReplication = true;
    String operation = null;

    ApiResponse<Void> response = sling.postAgentWithHttpInfo(runMode, name,
        jcrPrimaryType, jcrContentCqName, jcrContentJcrTitle,
        jcrContentJcrDescription, jcrContentSlingResourceType,
        jcrContentTransportUri, jcrContentTransportUser,
        jcrContentTransportPassword, jcrContentLogLevel,
        jcrContentNoVersioning, jcrContentProtocolHTTPHeaders,
        jcrContentProtocolHTTPHeadersTypeHint,
        jcrContentProtocolHTTPMethod, jcrContentRetryDelay,
        jcrContentSerializationType, jcrContentJcrMixinTypes,
        jcrContentTriggerReceive, jcrContentTriggerSpecific,
        jcrContentCqTemplate, jcrContentEnabled,
        jcrReverseReplication, operation);

    // delete reverse replication agent
    String runMode = "author";
    String name = "some-reverse-replication-agent";
    ApiResponse<Void> response = sling.deleteAgentWithHttpInfo(runMode, name);

Sling API - User:

    // create user
    String id = "someuser";
		String intermediatePath = "/home/users/s";
		String createUser = "";
		String createGroup = "";
		String reppassword = "somepassword";
		String profilegivenName = "";
		ApiResponse<String> response = sling.postAuthorizablesWithHttpInfo(id, intermediatePath, createUser, createGroup, reppassword, profilegivenName);

Error Handling
--------------

Any API error will be thrown as [ApiException](https://shinesolutions.github.io/swagger-aem-osgi/java/master/com/shinesolutions/swaggeraemosgi4j/ApiException.html) .

    try {
      String name = "someinexistingbundle";
      String action = "stop";
      console.postBundleWithHttpInfo(name, action);
    } catch (ApiException e) {
      System.out.println(e.getResponseBody());
      System.out.println(e.getCode());
      System.out.println(e.getResponseHeaders());
    }

Development
-----------

To regenerate the client with a custom Swagger Codegen:

    SWAGGER_CODEGEN_CLI_JAR=/path/to/swagger-codegen-cli.jar make build
