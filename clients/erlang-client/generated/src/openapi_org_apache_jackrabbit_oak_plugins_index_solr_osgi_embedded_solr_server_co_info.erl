-module(openapi_org_apache_jackrabbit_oak_plugins_index_solr_osgi_embedded_solr_server_co_info).

-export([encode/1]).

-export_type([openapi_org_apache_jackrabbit_oak_plugins_index_solr_osgi_embedded_solr_server_co_info/0]).

-type openapi_org_apache_jackrabbit_oak_plugins_index_solr_osgi_embedded_solr_server_co_info() ::
    #{ 'pid' => binary(),
       'title' => binary(),
       'description' => binary(),
       'properties' => openapi_org_apache_jackrabbit_oak_plugins_index_solr_osgi_embedded_solr_server_co_properties:openapi_org_apache_jackrabbit_oak_plugins_index_solr_osgi_embedded_solr_server_co_properties()
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
