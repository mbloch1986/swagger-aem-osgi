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
class COM_DAY_CQ_DAM_S7DAM_COMMON_ANALYTICS_IMPL_SITE_CATALYST_REPORT_RUNNER_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    scheduler_expression: detachable CONFIG_NODE_PROPERTY_STRING 
      
    scheduler_concurrent: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_scheduler_expression (a_name: like scheduler_expression)
        -- Set 'scheduler_expression' with 'a_name'.
      do
        scheduler_expression := a_name
      ensure
        scheduler_expression_set: scheduler_expression = a_name		
      end

    set_scheduler_concurrent (a_name: like scheduler_concurrent)
        -- Set 'scheduler_concurrent' with 'a_name'.
      do
        scheduler_concurrent := a_name
      ensure
        scheduler_concurrent_set: scheduler_concurrent = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_DAM_S7DAM_COMMON_ANALYTICS_IMPL_SITE_CATALYST_REPORT_RUNNER_PROPERTIES%N")
        if attached scheduler_expression as l_scheduler_expression then
          Result.append ("%Nscheduler_expression:")
          Result.append (l_scheduler_expression.out)
          Result.append ("%N")    
        end  
        if attached scheduler_concurrent as l_scheduler_concurrent then
          Result.append ("%Nscheduler_concurrent:")
          Result.append (l_scheduler_concurrent.out)
          Result.append ("%N")    
        end  
      end
end


