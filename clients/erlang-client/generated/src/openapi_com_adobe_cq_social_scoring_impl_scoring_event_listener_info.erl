-module(openapi_com_adobe_cq_social_scoring_impl_scoring_event_listener_info).

-export([encode/1]).

-export_type([openapi_com_adobe_cq_social_scoring_impl_scoring_event_listener_info/0]).

-type openapi_com_adobe_cq_social_scoring_impl_scoring_event_listener_info() ::
    #{ 'pid' => binary(),
       'title' => binary(),
       'description' => binary(),
       'properties' => openapi_com_adobe_cq_social_scoring_impl_scoring_event_listener_properties:openapi_com_adobe_cq_social_scoring_impl_scoring_event_listener_properties()
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
