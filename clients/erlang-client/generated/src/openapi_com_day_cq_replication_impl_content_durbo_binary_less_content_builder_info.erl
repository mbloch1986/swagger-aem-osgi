-module(openapi_com_day_cq_replication_impl_content_durbo_binary_less_content_builder_info).

-export([encode/1]).

-export_type([openapi_com_day_cq_replication_impl_content_durbo_binary_less_content_builder_info/0]).

-type openapi_com_day_cq_replication_impl_content_durbo_binary_less_content_builder_info() ::
    #{ 'pid' => binary(),
       'title' => binary(),
       'description' => binary(),
       'properties' => openapi_com_day_cq_replication_impl_content_durbo_binary_less_content_builder_properties:openapi_com_day_cq_replication_impl_content_durbo_binary_less_content_builder_properties()
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