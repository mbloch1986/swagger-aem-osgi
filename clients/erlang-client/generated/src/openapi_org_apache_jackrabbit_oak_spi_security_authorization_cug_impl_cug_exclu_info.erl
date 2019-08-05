-module(openapi_org_apache_jackrabbit_oak_spi_security_authorization_cug_impl_cug_exclu_info).

-export([encode/1]).

-export_type([openapi_org_apache_jackrabbit_oak_spi_security_authorization_cug_impl_cug_exclu_info/0]).

-type openapi_org_apache_jackrabbit_oak_spi_security_authorization_cug_impl_cug_exclu_info() ::
    #{ 'pid' => binary(),
       'title' => binary(),
       'description' => binary(),
       'properties' => openapi_org_apache_jackrabbit_oak_spi_security_authorization_cug_impl_cug_exclu_properties:openapi_org_apache_jackrabbit_oak_spi_security_authorization_cug_impl_cug_exclu_properties()
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