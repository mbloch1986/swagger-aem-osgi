-module(openapi_com_day_cq_wcm_foundation_impl_page_impressions_tracker_info).

-export([encode/1]).

-export_type([openapi_com_day_cq_wcm_foundation_impl_page_impressions_tracker_info/0]).

-type openapi_com_day_cq_wcm_foundation_impl_page_impressions_tracker_info() ::
    #{ 'pid' => binary(),
       'title' => binary(),
       'description' => binary(),
       'properties' => openapi_com_day_cq_wcm_foundation_impl_page_impressions_tracker_properties:openapi_com_day_cq_wcm_foundation_impl_page_impressions_tracker_properties()
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