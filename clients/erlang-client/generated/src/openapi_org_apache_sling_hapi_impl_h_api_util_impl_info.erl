-module(openapi_org_apache_sling_hapi_impl_h_api_util_impl_info).

-export([encode/1]).

-export_type([openapi_org_apache_sling_hapi_impl_h_api_util_impl_info/0]).

-type openapi_org_apache_sling_hapi_impl_h_api_util_impl_info() ::
    #{ 'pid' => binary(),
       'title' => binary(),
       'description' => binary(),
       'properties' => openapi_org_apache_sling_hapi_impl_h_api_util_impl_properties:openapi_org_apache_sling_hapi_impl_h_api_util_impl_properties()
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