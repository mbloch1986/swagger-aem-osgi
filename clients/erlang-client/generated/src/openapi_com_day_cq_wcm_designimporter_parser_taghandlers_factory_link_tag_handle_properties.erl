-module(openapi_com_day_cq_wcm_designimporter_parser_taghandlers_factory_link_tag_handle_properties).

-export([encode/1]).

-export_type([openapi_com_day_cq_wcm_designimporter_parser_taghandlers_factory_link_tag_handle_properties/0]).

-type openapi_com_day_cq_wcm_designimporter_parser_taghandlers_factory_link_tag_handle_properties() ::
    #{ 'service_ranking' => openapi_config_node_property_integer:openapi_config_node_property_integer(),
       'tagpattern' => openapi_config_node_property_string:openapi_config_node_property_string()
     }.

encode(#{ 'service_ranking' := ServiceRanking,
          'tagpattern' := Tagpattern
        }) ->
    #{ 'service.ranking' => ServiceRanking,
       'tagpattern' => Tagpattern
     }.