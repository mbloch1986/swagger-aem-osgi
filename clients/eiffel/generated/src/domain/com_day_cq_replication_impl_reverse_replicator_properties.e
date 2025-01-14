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
class COM_DAY_CQ_REPLICATION_IMPL_REVERSE_REPLICATOR_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    scheduler_period: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_scheduler_period (a_name: like scheduler_period)
        -- Set 'scheduler_period' with 'a_name'.
      do
        scheduler_period := a_name
      ensure
        scheduler_period_set: scheduler_period = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_REPLICATION_IMPL_REVERSE_REPLICATOR_PROPERTIES%N")
        if attached scheduler_period as l_scheduler_period then
          Result.append ("%Nscheduler_period:")
          Result.append (l_scheduler_period.out)
          Result.append ("%N")    
        end  
      end
end


