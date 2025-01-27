-module(openapi_com_adobe_granite_distribution_core_impl_diff_diff_event_listener_info).

-export([encode/1]).

-export_type([openapi_com_adobe_granite_distribution_core_impl_diff_diff_event_listener_info/0]).

-type openapi_com_adobe_granite_distribution_core_impl_diff_diff_event_listener_info() ::
    #{ 'pid' => binary(),
       'title' => binary(),
       'description' => binary(),
       'properties' => openapi_com_adobe_granite_distribution_core_impl_diff_diff_event_listener_properties:openapi_com_adobe_granite_distribution_core_impl_diff_diff_event_listener_properties()
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
