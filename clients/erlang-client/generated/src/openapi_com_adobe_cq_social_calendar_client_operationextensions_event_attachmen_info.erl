-module(openapi_com_adobe_cq_social_calendar_client_operationextensions_event_attachmen_info).

-export([encode/1]).

-export_type([openapi_com_adobe_cq_social_calendar_client_operationextensions_event_attachmen_info/0]).

-type openapi_com_adobe_cq_social_calendar_client_operationextensions_event_attachmen_info() ::
    #{ 'pid' => binary(),
       'title' => binary(),
       'description' => binary(),
       'properties' => openapi_com_adobe_cq_social_calendar_client_operationextensions_event_attachmen_properties:openapi_com_adobe_cq_social_calendar_client_operationextensions_event_attachmen_properties()
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
