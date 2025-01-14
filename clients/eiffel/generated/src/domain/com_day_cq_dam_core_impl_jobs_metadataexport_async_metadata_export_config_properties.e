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
class COM_DAY_CQ_DAM_CORE_IMPL_JOBS_METADATAEXPORT_ASYNC_METADATA_EXPORT_CONFIG_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    operation: detachable CONFIG_NODE_PROPERTY_STRING 
      
    email_enabled: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_operation (a_name: like operation)
        -- Set 'operation' with 'a_name'.
      do
        operation := a_name
      ensure
        operation_set: operation = a_name		
      end

    set_email_enabled (a_name: like email_enabled)
        -- Set 'email_enabled' with 'a_name'.
      do
        email_enabled := a_name
      ensure
        email_enabled_set: email_enabled = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_DAM_CORE_IMPL_JOBS_METADATAEXPORT_ASYNC_METADATA_EXPORT_CONFIG_PROPERTIES%N")
        if attached operation as l_operation then
          Result.append ("%Noperation:")
          Result.append (l_operation.out)
          Result.append ("%N")    
        end  
        if attached email_enabled as l_email_enabled then
          Result.append ("%Nemail_enabled:")
          Result.append (l_email_enabled.out)
          Result.append ("%N")    
        end  
      end
end


