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
class COM_DAY_CQ_DAM_PERFORMANCE_INTERNAL_ASSET_PERFORMANCE_REPORT_SYNC_JOB_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    scheduler_expression: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_scheduler_expression (a_name: like scheduler_expression)
        -- Set 'scheduler_expression' with 'a_name'.
      do
        scheduler_expression := a_name
      ensure
        scheduler_expression_set: scheduler_expression = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_DAM_PERFORMANCE_INTERNAL_ASSET_PERFORMANCE_REPORT_SYNC_JOB_PROPERTIES%N")
        if attached scheduler_expression as l_scheduler_expression then
          Result.append ("%Nscheduler_expression:")
          Result.append (l_scheduler_expression.out)
          Result.append ("%N")    
        end  
      end
end


