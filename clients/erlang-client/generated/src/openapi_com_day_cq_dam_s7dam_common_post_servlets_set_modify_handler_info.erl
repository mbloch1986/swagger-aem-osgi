-module(openapi_com_day_cq_dam_s7dam_common_post_servlets_set_modify_handler_info).

-export([encode/1]).

-export_type([openapi_com_day_cq_dam_s7dam_common_post_servlets_set_modify_handler_info/0]).

-type openapi_com_day_cq_dam_s7dam_common_post_servlets_set_modify_handler_info() ::
    #{ 'pid' => binary(),
       'title' => binary(),
       'description' => binary(),
       'properties' => openapi_com_day_cq_dam_s7dam_common_post_servlets_set_modify_handler_properties:openapi_com_day_cq_dam_s7dam_common_post_servlets_set_modify_handler_properties()
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