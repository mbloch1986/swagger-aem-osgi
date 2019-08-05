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
class COM_DAY_CQ_REWRITER_LINKCHECKER_IMPL_LINK_CHECKER_TASK_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    scheduler_period: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    scheduler_concurrent: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    good_link_test_interval: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    bad_link_test_interval: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    link_unused_interval: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    connection_timeout: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_scheduler_period (a_name: like scheduler_period)
        -- Set 'scheduler_period' with 'a_name'.
      do
        scheduler_period := a_name
      ensure
        scheduler_period_set: scheduler_period = a_name		
      end

    set_scheduler_concurrent (a_name: like scheduler_concurrent)
        -- Set 'scheduler_concurrent' with 'a_name'.
      do
        scheduler_concurrent := a_name
      ensure
        scheduler_concurrent_set: scheduler_concurrent = a_name		
      end

    set_good_link_test_interval (a_name: like good_link_test_interval)
        -- Set 'good_link_test_interval' with 'a_name'.
      do
        good_link_test_interval := a_name
      ensure
        good_link_test_interval_set: good_link_test_interval = a_name		
      end

    set_bad_link_test_interval (a_name: like bad_link_test_interval)
        -- Set 'bad_link_test_interval' with 'a_name'.
      do
        bad_link_test_interval := a_name
      ensure
        bad_link_test_interval_set: bad_link_test_interval = a_name		
      end

    set_link_unused_interval (a_name: like link_unused_interval)
        -- Set 'link_unused_interval' with 'a_name'.
      do
        link_unused_interval := a_name
      ensure
        link_unused_interval_set: link_unused_interval = a_name		
      end

    set_connection_timeout (a_name: like connection_timeout)
        -- Set 'connection_timeout' with 'a_name'.
      do
        connection_timeout := a_name
      ensure
        connection_timeout_set: connection_timeout = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_REWRITER_LINKCHECKER_IMPL_LINK_CHECKER_TASK_PROPERTIES%N")
        if attached scheduler_period as l_scheduler_period then
          Result.append ("%Nscheduler_period:")
          Result.append (l_scheduler_period.out)
          Result.append ("%N")    
        end  
        if attached scheduler_concurrent as l_scheduler_concurrent then
          Result.append ("%Nscheduler_concurrent:")
          Result.append (l_scheduler_concurrent.out)
          Result.append ("%N")    
        end  
        if attached good_link_test_interval as l_good_link_test_interval then
          Result.append ("%Ngood_link_test_interval:")
          Result.append (l_good_link_test_interval.out)
          Result.append ("%N")    
        end  
        if attached bad_link_test_interval as l_bad_link_test_interval then
          Result.append ("%Nbad_link_test_interval:")
          Result.append (l_bad_link_test_interval.out)
          Result.append ("%N")    
        end  
        if attached link_unused_interval as l_link_unused_interval then
          Result.append ("%Nlink_unused_interval:")
          Result.append (l_link_unused_interval.out)
          Result.append ("%N")    
        end  
        if attached connection_timeout as l_connection_timeout then
          Result.append ("%Nconnection_timeout:")
          Result.append (l_connection_timeout.out)
          Result.append ("%N")    
        end  
      end
end

