-module(openapi_com_day_cq_wcm_designimporter_parser_taghandlers_factory_canvas_compone_info).

-export([encode/1]).

-export_type([openapi_com_day_cq_wcm_designimporter_parser_taghandlers_factory_canvas_compone_info/0]).

-type openapi_com_day_cq_wcm_designimporter_parser_taghandlers_factory_canvas_compone_info() ::
    #{ 'pid' => binary(),
       'title' => binary(),
       'description' => binary(),
       'properties' => openapi_com_day_cq_wcm_designimporter_parser_taghandlers_factory_canvas_compone_properties:openapi_com_day_cq_wcm_designimporter_parser_taghandlers_factory_canvas_compone_properties()
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
