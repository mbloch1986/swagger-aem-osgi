-module(openapi_com_adobe_granite_taskmanagement_impl_jcr_task_archive_service_info).

-export([encode/1]).

-export_type([openapi_com_adobe_granite_taskmanagement_impl_jcr_task_archive_service_info/0]).

-type openapi_com_adobe_granite_taskmanagement_impl_jcr_task_archive_service_info() ::
    #{ 'pid' => binary(),
       'title' => binary(),
       'description' => binary(),
       'properties' => openapi_com_adobe_granite_taskmanagement_impl_jcr_task_archive_service_properties:openapi_com_adobe_granite_taskmanagement_impl_jcr_task_archive_service_properties()
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