-module(openapi_com_day_cq_wcm_core_impl_event_template_post_processor_properties).

-export([encode/1]).

-export_type([openapi_com_day_cq_wcm_core_impl_event_template_post_processor_properties/0]).

-type openapi_com_day_cq_wcm_core_impl_event_template_post_processor_properties() ::
    #{ 'paths' => openapi_config_node_property_string:openapi_config_node_property_string()
     }.

encode(#{ 'paths' := Paths
        }) ->
    #{ 'paths' => Paths
     }.
