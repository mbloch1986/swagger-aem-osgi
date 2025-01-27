-module(openapi_org_apache_jackrabbit_oak_security_authentication_authentication_config_info).

-export([encode/1]).

-export_type([openapi_org_apache_jackrabbit_oak_security_authentication_authentication_config_info/0]).

-type openapi_org_apache_jackrabbit_oak_security_authentication_authentication_config_info() ::
    #{ 'pid' => binary(),
       'title' => binary(),
       'description' => binary(),
       'properties' => openapi_org_apache_jackrabbit_oak_security_authentication_authentication_config_properties:openapi_org_apache_jackrabbit_oak_security_authentication_authentication_config_properties()
     }.

encode(#{ 'pid' := Pid,
          'title' := Title,
          'description' := Description,
          'properties' := Properties
        }) ->
    #{ 'pid' => Pid,
       'title' => Title,
       'description' => Description,
       'properties' => Properties
     }.
