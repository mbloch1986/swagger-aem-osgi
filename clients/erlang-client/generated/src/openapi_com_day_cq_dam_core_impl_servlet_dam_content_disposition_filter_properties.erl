-module(openapi_com_day_cq_dam_core_impl_servlet_dam_content_disposition_filter_properties).

-export([encode/1]).

-export_type([openapi_com_day_cq_dam_core_impl_servlet_dam_content_disposition_filter_properties/0]).

-type openapi_com_day_cq_dam_core_impl_servlet_dam_content_disposition_filter_properties() ::
    #{ 'cq_mime_type_blacklist' => openapi_config_node_property_array:openapi_config_node_property_array(),
       'cq_dam_empty_mime' => openapi_config_node_property_boolean:openapi_config_node_property_boolean()
     }.

encode(#{ 'cq_mime_type_blacklist' := CqMimeTypeBlacklist,
          'cq_dam_empty_mime' := CqDamEmptyMime
        }) ->
    #{ 'cq.mime.type.blacklist' => CqMimeTypeBlacklist,
       'cq.dam.empty.mime' => CqDamEmptyMime
     }.