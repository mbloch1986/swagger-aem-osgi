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
class COM_ADOBE_FD_FP_CONFIG_FORMS_PORTAL_DRAFTSAND_SUBMISSION_CONFIG_SERVICE_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    portal_outboxes: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    draft_data_service: detachable CONFIG_NODE_PROPERTY_STRING 
      
    draft_metadata_service: detachable CONFIG_NODE_PROPERTY_STRING 
      
    submit_data_service: detachable CONFIG_NODE_PROPERTY_STRING 
      
    submit_metadata_service: detachable CONFIG_NODE_PROPERTY_STRING 
      
    pending_sign_data_service: detachable CONFIG_NODE_PROPERTY_STRING 
      
    pending_sign_metadata_service: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_portal_outboxes (a_name: like portal_outboxes)
        -- Set 'portal_outboxes' with 'a_name'.
      do
        portal_outboxes := a_name
      ensure
        portal_outboxes_set: portal_outboxes = a_name		
      end

    set_draft_data_service (a_name: like draft_data_service)
        -- Set 'draft_data_service' with 'a_name'.
      do
        draft_data_service := a_name
      ensure
        draft_data_service_set: draft_data_service = a_name		
      end

    set_draft_metadata_service (a_name: like draft_metadata_service)
        -- Set 'draft_metadata_service' with 'a_name'.
      do
        draft_metadata_service := a_name
      ensure
        draft_metadata_service_set: draft_metadata_service = a_name		
      end

    set_submit_data_service (a_name: like submit_data_service)
        -- Set 'submit_data_service' with 'a_name'.
      do
        submit_data_service := a_name
      ensure
        submit_data_service_set: submit_data_service = a_name		
      end

    set_submit_metadata_service (a_name: like submit_metadata_service)
        -- Set 'submit_metadata_service' with 'a_name'.
      do
        submit_metadata_service := a_name
      ensure
        submit_metadata_service_set: submit_metadata_service = a_name		
      end

    set_pending_sign_data_service (a_name: like pending_sign_data_service)
        -- Set 'pending_sign_data_service' with 'a_name'.
      do
        pending_sign_data_service := a_name
      ensure
        pending_sign_data_service_set: pending_sign_data_service = a_name		
      end

    set_pending_sign_metadata_service (a_name: like pending_sign_metadata_service)
        -- Set 'pending_sign_metadata_service' with 'a_name'.
      do
        pending_sign_metadata_service := a_name
      ensure
        pending_sign_metadata_service_set: pending_sign_metadata_service = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_FD_FP_CONFIG_FORMS_PORTAL_DRAFTSAND_SUBMISSION_CONFIG_SERVICE_PROPERTIES%N")
        if attached portal_outboxes as l_portal_outboxes then
          Result.append ("%Nportal_outboxes:")
          Result.append (l_portal_outboxes.out)
          Result.append ("%N")    
        end  
        if attached draft_data_service as l_draft_data_service then
          Result.append ("%Ndraft_data_service:")
          Result.append (l_draft_data_service.out)
          Result.append ("%N")    
        end  
        if attached draft_metadata_service as l_draft_metadata_service then
          Result.append ("%Ndraft_metadata_service:")
          Result.append (l_draft_metadata_service.out)
          Result.append ("%N")    
        end  
        if attached submit_data_service as l_submit_data_service then
          Result.append ("%Nsubmit_data_service:")
          Result.append (l_submit_data_service.out)
          Result.append ("%N")    
        end  
        if attached submit_metadata_service as l_submit_metadata_service then
          Result.append ("%Nsubmit_metadata_service:")
          Result.append (l_submit_metadata_service.out)
          Result.append ("%N")    
        end  
        if attached pending_sign_data_service as l_pending_sign_data_service then
          Result.append ("%Npending_sign_data_service:")
          Result.append (l_pending_sign_data_service.out)
          Result.append ("%N")    
        end  
        if attached pending_sign_metadata_service as l_pending_sign_metadata_service then
          Result.append ("%Npending_sign_metadata_service:")
          Result.append (l_pending_sign_metadata_service.out)
          Result.append ("%N")    
        end  
      end
end

