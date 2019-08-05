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
class COM_DAY_CQ_REPLICATION_IMPL_AGENT_MANAGER_IMPL_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    job_topics: detachable CONFIG_NODE_PROPERTY_STRING 
      
    service_user_target: detachable CONFIG_NODE_PROPERTY_STRING 
      
    agent_provider_target: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_job_topics (a_name: like job_topics)
        -- Set 'job_topics' with 'a_name'.
      do
        job_topics := a_name
      ensure
        job_topics_set: job_topics = a_name		
      end

    set_service_user_target (a_name: like service_user_target)
        -- Set 'service_user_target' with 'a_name'.
      do
        service_user_target := a_name
      ensure
        service_user_target_set: service_user_target = a_name		
      end

    set_agent_provider_target (a_name: like agent_provider_target)
        -- Set 'agent_provider_target' with 'a_name'.
      do
        agent_provider_target := a_name
      ensure
        agent_provider_target_set: agent_provider_target = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_REPLICATION_IMPL_AGENT_MANAGER_IMPL_PROPERTIES%N")
        if attached job_topics as l_job_topics then
          Result.append ("%Njob_topics:")
          Result.append (l_job_topics.out)
          Result.append ("%N")    
        end  
        if attached service_user_target as l_service_user_target then
          Result.append ("%Nservice_user_target:")
          Result.append (l_service_user_target.out)
          Result.append ("%N")    
        end  
        if attached agent_provider_target as l_agent_provider_target then
          Result.append ("%Nagent_provider_target:")
          Result.append (l_agent_provider_target.out)
          Result.append ("%N")    
        end  
      end
end

