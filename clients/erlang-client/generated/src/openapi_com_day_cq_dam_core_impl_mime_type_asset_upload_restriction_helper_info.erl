-module(openapi_com_day_cq_dam_core_impl_mime_type_asset_upload_restriction_helper_info).

-export([encode/1]).

-export_type([openapi_com_day_cq_dam_core_impl_mime_type_asset_upload_restriction_helper_info/0]).

-type openapi_com_day_cq_dam_core_impl_mime_type_asset_upload_restriction_helper_info() ::
    #{ 'pid' => binary(),
       'title' => binary(),
       'description' => binary(),
       'properties' => openapi_com_day_cq_dam_core_impl_mime_type_asset_upload_restriction_helper_properties:openapi_com_day_cq_dam_core_impl_mime_type_asset_upload_restriction_helper_properties()
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