-module(openapi_com_adobe_cq_security_hc_bundles_impl_wcm_filter_health_check_properties).

-export([encode/1]).

-export_type([openapi_com_adobe_cq_security_hc_bundles_impl_wcm_filter_health_check_properties/0]).

-type openapi_com_adobe_cq_security_hc_bundles_impl_wcm_filter_health_check_properties() ::
    #{ 'hc_tags' => openapi_config_node_property_array:openapi_config_node_property_array()
     }.

encode(#{ 'hc_tags' := HcTags
        }) ->
    #{ 'hc.tags' => HcTags
     }.
