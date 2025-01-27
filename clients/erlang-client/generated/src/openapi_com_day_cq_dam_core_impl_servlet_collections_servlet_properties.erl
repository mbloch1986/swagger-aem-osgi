-module(openapi_com_day_cq_dam_core_impl_servlet_collections_servlet_properties).

-export([encode/1]).

-export_type([openapi_com_day_cq_dam_core_impl_servlet_collections_servlet_properties/0]).

-type openapi_com_day_cq_dam_core_impl_servlet_collections_servlet_properties() ::
    #{ 'cq_dam_batch_collections_properties' => openapi_config_node_property_array:openapi_config_node_property_array(),
       'cq_dam_batch_collections_limit' => openapi_config_node_property_integer:openapi_config_node_property_integer()
     }.

encode(#{ 'cq_dam_batch_collections_properties' := CqDamBatchCollectionsProperties,
          'cq_dam_batch_collections_limit' := CqDamBatchCollectionsLimit
        }) ->
    #{ 'cq.dam.batch.collections.properties' => CqDamBatchCollectionsProperties,
       'cq.dam.batch.collections.limit' => CqDamBatchCollectionsLimit
     }.
