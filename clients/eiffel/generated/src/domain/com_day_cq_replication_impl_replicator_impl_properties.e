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
class COM_DAY_CQ_REPLICATION_IMPL_REPLICATOR_IMPL_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    distribute_events: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_distribute_events (a_name: like distribute_events)
        -- Set 'distribute_events' with 'a_name'.
      do
        distribute_events := a_name
      ensure
        distribute_events_set: distribute_events = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_REPLICATION_IMPL_REPLICATOR_IMPL_PROPERTIES%N")
        if attached distribute_events as l_distribute_events then
          Result.append ("%Ndistribute_events:")
          Result.append (l_distribute_events.out)
          Result.append ("%N")    
        end  
      end
end

