-module(openapi_com_day_cq_dam_core_impl_servlet_asset_download_servlet_info).

-export([encode/1]).

-export_type([openapi_com_day_cq_dam_core_impl_servlet_asset_download_servlet_info/0]).

-type openapi_com_day_cq_dam_core_impl_servlet_asset_download_servlet_info() ::
    #{ 'pid' => binary(),
       'title' => binary(),
       'description' => binary(),
       'properties' => openapi_com_day_cq_dam_core_impl_servlet_asset_download_servlet_properties:openapi_com_day_cq_dam_core_impl_servlet_asset_download_servlet_properties(),
       'bundle_location' => binary(),
       'service_location' => binary()
     }.

encode(#{ 'pid' := Pid,
          'title' := Title,
          'description' := Description,
          'properties' := Properties,
          'bundle_location' := BundleLocation,
          'service_location' := ServiceLocation
        }) ->
    #{ 'pid' => Pid,
       'title' => Title,
       'description' => Description,
       'properties' => Properties,
       'bundle_location' => BundleLocation,
       'service_location' => ServiceLocation
     }.
