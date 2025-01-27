note
 description:"[
		Adobe Experience Manager OSGI config (AEM) API
 		Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
  		OpenAPI spec version: 1.0.0-pre.0
 	    Contact: opensource@shinesolutions.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class COM_DAY_CQ_DAM_CORE_IMPL_SERVLET_BATCH_METADATA_SERVLET_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    cq_dam_batch_metadata_asset_default: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    cq_dam_batch_metadata_collection_default: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    cq_dam_batch_metadata_maxresources: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_cq_dam_batch_metadata_asset_default (a_name: like cq_dam_batch_metadata_asset_default)
        -- Set 'cq_dam_batch_metadata_asset_default' with 'a_name'.
      do
        cq_dam_batch_metadata_asset_default := a_name
      ensure
        cq_dam_batch_metadata_asset_default_set: cq_dam_batch_metadata_asset_default = a_name		
      end

    set_cq_dam_batch_metadata_collection_default (a_name: like cq_dam_batch_metadata_collection_default)
        -- Set 'cq_dam_batch_metadata_collection_default' with 'a_name'.
      do
        cq_dam_batch_metadata_collection_default := a_name
      ensure
        cq_dam_batch_metadata_collection_default_set: cq_dam_batch_metadata_collection_default = a_name		
      end

    set_cq_dam_batch_metadata_maxresources (a_name: like cq_dam_batch_metadata_maxresources)
        -- Set 'cq_dam_batch_metadata_maxresources' with 'a_name'.
      do
        cq_dam_batch_metadata_maxresources := a_name
      ensure
        cq_dam_batch_metadata_maxresources_set: cq_dam_batch_metadata_maxresources = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_DAM_CORE_IMPL_SERVLET_BATCH_METADATA_SERVLET_PROPERTIES%N")
        if attached cq_dam_batch_metadata_asset_default as l_cq_dam_batch_metadata_asset_default then
          Result.append ("%Ncq_dam_batch_metadata_asset_default:")
          Result.append (l_cq_dam_batch_metadata_asset_default.out)
          Result.append ("%N")    
        end  
        if attached cq_dam_batch_metadata_collection_default as l_cq_dam_batch_metadata_collection_default then
          Result.append ("%Ncq_dam_batch_metadata_collection_default:")
          Result.append (l_cq_dam_batch_metadata_collection_default.out)
          Result.append ("%N")    
        end  
        if attached cq_dam_batch_metadata_maxresources as l_cq_dam_batch_metadata_maxresources then
          Result.append ("%Ncq_dam_batch_metadata_maxresources:")
          Result.append (l_cq_dam_batch_metadata_maxresources.out)
          Result.append ("%N")    
        end  
      end
end


