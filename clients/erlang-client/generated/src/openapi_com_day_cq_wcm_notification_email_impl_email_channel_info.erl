-module(openapi_com_day_cq_wcm_notification_email_impl_email_channel_info).

-export([encode/1]).

-export_type([openapi_com_day_cq_wcm_notification_email_impl_email_channel_info/0]).

-type openapi_com_day_cq_wcm_notification_email_impl_email_channel_info() ::
    #{ 'pid' => binary(),
       'title' => binary(),
       'description' => binary(),
       'properties' => openapi_com_day_cq_wcm_notification_email_impl_email_channel_properties:openapi_com_day_cq_wcm_notification_email_impl_email_channel_properties()
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
