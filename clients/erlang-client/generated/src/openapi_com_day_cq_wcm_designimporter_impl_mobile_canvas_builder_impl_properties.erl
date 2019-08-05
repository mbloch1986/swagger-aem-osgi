-module(openapi_com_day_cq_wcm_designimporter_impl_mobile_canvas_builder_impl_properties).

-export([encode/1]).

-export_type([openapi_com_day_cq_wcm_designimporter_impl_mobile_canvas_builder_impl_properties/0]).

-type openapi_com_day_cq_wcm_designimporter_impl_mobile_canvas_builder_impl_properties() ::
    #{ 'filepattern' => openapi_config_node_property_string:openapi_config_node_property_string(),
       'device_groups' => openapi_config_node_property_array:openapi_config_node_property_array(),
       'build_page_nodes' => openapi_config_node_property_boolean:openapi_config_node_property_boolean(),
       'build_client_libs' => openapi_config_node_property_boolean:openapi_config_node_property_boolean(),
       'build_canvas_component' => openapi_config_node_property_boolean:openapi_config_node_property_boolean()
     }.

encode(#{ 'filepattern' := Filepattern,
          'device_groups' := DeviceGroups,
          'build_page_nodes' := BuildPageNodes,
          'build_client_libs' := BuildClientLibs,
          'build_canvas_component' := BuildCanvasComponent
        }) ->
    #{ 'filepattern' => Filepattern,
       'device.groups' => DeviceGroups,
       'build.page.nodes' => BuildPageNodes,
       'build.client.libs' => BuildClientLibs,
       'build.canvas.component' => BuildCanvasComponent
     }.