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
class COM_DAY_CQ_DAM_CORE_IMPL_SERVLET_HEALTH_CHECK_SERVLET_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    cq_dam_sync_workflow_id: detachable CONFIG_NODE_PROPERTY_STRING 
      
    cq_dam_sync_folder_types: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_cq_dam_sync_workflow_id (a_name: like cq_dam_sync_workflow_id)
        -- Set 'cq_dam_sync_workflow_id' with 'a_name'.
      do
        cq_dam_sync_workflow_id := a_name
      ensure
        cq_dam_sync_workflow_id_set: cq_dam_sync_workflow_id = a_name		
      end

    set_cq_dam_sync_folder_types (a_name: like cq_dam_sync_folder_types)
        -- Set 'cq_dam_sync_folder_types' with 'a_name'.
      do
        cq_dam_sync_folder_types := a_name
      ensure
        cq_dam_sync_folder_types_set: cq_dam_sync_folder_types = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_DAM_CORE_IMPL_SERVLET_HEALTH_CHECK_SERVLET_PROPERTIES%N")
        if attached cq_dam_sync_workflow_id as l_cq_dam_sync_workflow_id then
          Result.append ("%Ncq_dam_sync_workflow_id:")
          Result.append (l_cq_dam_sync_workflow_id.out)
          Result.append ("%N")    
        end  
        if attached cq_dam_sync_folder_types as l_cq_dam_sync_folder_types then
          Result.append ("%Ncq_dam_sync_folder_types:")
          Result.append (l_cq_dam_sync_folder_types.out)
          Result.append ("%N")    
        end  
      end
end

