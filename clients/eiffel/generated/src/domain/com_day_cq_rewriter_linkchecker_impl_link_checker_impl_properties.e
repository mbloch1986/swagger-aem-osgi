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
class COM_DAY_CQ_REWRITER_LINKCHECKER_IMPL_LINK_CHECKER_IMPL_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    scheduler_period: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    scheduler_concurrent: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    service_bad_link_tolerance_interval: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    service_check_override_patterns: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    service_cache_broken_internal_links: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    service_special_link_prefix: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    service_special_link_patterns: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

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

    set_service_bad_link_tolerance_interval (a_name: like service_bad_link_tolerance_interval)
        -- Set 'service_bad_link_tolerance_interval' with 'a_name'.
      do
        service_bad_link_tolerance_interval := a_name
      ensure
        service_bad_link_tolerance_interval_set: service_bad_link_tolerance_interval = a_name		
      end

    set_service_check_override_patterns (a_name: like service_check_override_patterns)
        -- Set 'service_check_override_patterns' with 'a_name'.
      do
        service_check_override_patterns := a_name
      ensure
        service_check_override_patterns_set: service_check_override_patterns = a_name		
      end

    set_service_cache_broken_internal_links (a_name: like service_cache_broken_internal_links)
        -- Set 'service_cache_broken_internal_links' with 'a_name'.
      do
        service_cache_broken_internal_links := a_name
      ensure
        service_cache_broken_internal_links_set: service_cache_broken_internal_links = a_name		
      end

    set_service_special_link_prefix (a_name: like service_special_link_prefix)
        -- Set 'service_special_link_prefix' with 'a_name'.
      do
        service_special_link_prefix := a_name
      ensure
        service_special_link_prefix_set: service_special_link_prefix = a_name		
      end

    set_service_special_link_patterns (a_name: like service_special_link_patterns)
        -- Set 'service_special_link_patterns' with 'a_name'.
      do
        service_special_link_patterns := a_name
      ensure
        service_special_link_patterns_set: service_special_link_patterns = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_REWRITER_LINKCHECKER_IMPL_LINK_CHECKER_IMPL_PROPERTIES%N")
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
        if attached service_bad_link_tolerance_interval as l_service_bad_link_tolerance_interval then
          Result.append ("%Nservice_bad_link_tolerance_interval:")
          Result.append (l_service_bad_link_tolerance_interval.out)
          Result.append ("%N")    
        end  
        if attached service_check_override_patterns as l_service_check_override_patterns then
          Result.append ("%Nservice_check_override_patterns:")
          Result.append (l_service_check_override_patterns.out)
          Result.append ("%N")    
        end  
        if attached service_cache_broken_internal_links as l_service_cache_broken_internal_links then
          Result.append ("%Nservice_cache_broken_internal_links:")
          Result.append (l_service_cache_broken_internal_links.out)
          Result.append ("%N")    
        end  
        if attached service_special_link_prefix as l_service_special_link_prefix then
          Result.append ("%Nservice_special_link_prefix:")
          Result.append (l_service_special_link_prefix.out)
          Result.append ("%N")    
        end  
        if attached service_special_link_patterns as l_service_special_link_patterns then
          Result.append ("%Nservice_special_link_patterns:")
          Result.append (l_service_special_link_patterns.out)
          Result.append ("%N")    
        end  
      end
end

