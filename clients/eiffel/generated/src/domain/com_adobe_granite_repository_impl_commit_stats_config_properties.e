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
class COM_ADOBE_GRANITE_REPOSITORY_IMPL_COMMIT_STATS_CONFIG_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    enabled: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    interval_seconds: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    commits_per_interval_threshold: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    max_location_length: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    max_details_shown: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    min_details_percentage: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    thread_matchers: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    max_greedy_depth: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    greedy_stack_matchers: detachable CONFIG_NODE_PROPERTY_STRING 
      
    stack_filters: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    stack_matchers: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    stack_categorizers: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    stack_shorteners: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_enabled (a_name: like enabled)
        -- Set 'enabled' with 'a_name'.
      do
        enabled := a_name
      ensure
        enabled_set: enabled = a_name		
      end

    set_interval_seconds (a_name: like interval_seconds)
        -- Set 'interval_seconds' with 'a_name'.
      do
        interval_seconds := a_name
      ensure
        interval_seconds_set: interval_seconds = a_name		
      end

    set_commits_per_interval_threshold (a_name: like commits_per_interval_threshold)
        -- Set 'commits_per_interval_threshold' with 'a_name'.
      do
        commits_per_interval_threshold := a_name
      ensure
        commits_per_interval_threshold_set: commits_per_interval_threshold = a_name		
      end

    set_max_location_length (a_name: like max_location_length)
        -- Set 'max_location_length' with 'a_name'.
      do
        max_location_length := a_name
      ensure
        max_location_length_set: max_location_length = a_name		
      end

    set_max_details_shown (a_name: like max_details_shown)
        -- Set 'max_details_shown' with 'a_name'.
      do
        max_details_shown := a_name
      ensure
        max_details_shown_set: max_details_shown = a_name		
      end

    set_min_details_percentage (a_name: like min_details_percentage)
        -- Set 'min_details_percentage' with 'a_name'.
      do
        min_details_percentage := a_name
      ensure
        min_details_percentage_set: min_details_percentage = a_name		
      end

    set_thread_matchers (a_name: like thread_matchers)
        -- Set 'thread_matchers' with 'a_name'.
      do
        thread_matchers := a_name
      ensure
        thread_matchers_set: thread_matchers = a_name		
      end

    set_max_greedy_depth (a_name: like max_greedy_depth)
        -- Set 'max_greedy_depth' with 'a_name'.
      do
        max_greedy_depth := a_name
      ensure
        max_greedy_depth_set: max_greedy_depth = a_name		
      end

    set_greedy_stack_matchers (a_name: like greedy_stack_matchers)
        -- Set 'greedy_stack_matchers' with 'a_name'.
      do
        greedy_stack_matchers := a_name
      ensure
        greedy_stack_matchers_set: greedy_stack_matchers = a_name		
      end

    set_stack_filters (a_name: like stack_filters)
        -- Set 'stack_filters' with 'a_name'.
      do
        stack_filters := a_name
      ensure
        stack_filters_set: stack_filters = a_name		
      end

    set_stack_matchers (a_name: like stack_matchers)
        -- Set 'stack_matchers' with 'a_name'.
      do
        stack_matchers := a_name
      ensure
        stack_matchers_set: stack_matchers = a_name		
      end

    set_stack_categorizers (a_name: like stack_categorizers)
        -- Set 'stack_categorizers' with 'a_name'.
      do
        stack_categorizers := a_name
      ensure
        stack_categorizers_set: stack_categorizers = a_name		
      end

    set_stack_shorteners (a_name: like stack_shorteners)
        -- Set 'stack_shorteners' with 'a_name'.
      do
        stack_shorteners := a_name
      ensure
        stack_shorteners_set: stack_shorteners = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_GRANITE_REPOSITORY_IMPL_COMMIT_STATS_CONFIG_PROPERTIES%N")
        if attached enabled as l_enabled then
          Result.append ("%Nenabled:")
          Result.append (l_enabled.out)
          Result.append ("%N")    
        end  
        if attached interval_seconds as l_interval_seconds then
          Result.append ("%Ninterval_seconds:")
          Result.append (l_interval_seconds.out)
          Result.append ("%N")    
        end  
        if attached commits_per_interval_threshold as l_commits_per_interval_threshold then
          Result.append ("%Ncommits_per_interval_threshold:")
          Result.append (l_commits_per_interval_threshold.out)
          Result.append ("%N")    
        end  
        if attached max_location_length as l_max_location_length then
          Result.append ("%Nmax_location_length:")
          Result.append (l_max_location_length.out)
          Result.append ("%N")    
        end  
        if attached max_details_shown as l_max_details_shown then
          Result.append ("%Nmax_details_shown:")
          Result.append (l_max_details_shown.out)
          Result.append ("%N")    
        end  
        if attached min_details_percentage as l_min_details_percentage then
          Result.append ("%Nmin_details_percentage:")
          Result.append (l_min_details_percentage.out)
          Result.append ("%N")    
        end  
        if attached thread_matchers as l_thread_matchers then
          Result.append ("%Nthread_matchers:")
          Result.append (l_thread_matchers.out)
          Result.append ("%N")    
        end  
        if attached max_greedy_depth as l_max_greedy_depth then
          Result.append ("%Nmax_greedy_depth:")
          Result.append (l_max_greedy_depth.out)
          Result.append ("%N")    
        end  
        if attached greedy_stack_matchers as l_greedy_stack_matchers then
          Result.append ("%Ngreedy_stack_matchers:")
          Result.append (l_greedy_stack_matchers.out)
          Result.append ("%N")    
        end  
        if attached stack_filters as l_stack_filters then
          Result.append ("%Nstack_filters:")
          Result.append (l_stack_filters.out)
          Result.append ("%N")    
        end  
        if attached stack_matchers as l_stack_matchers then
          Result.append ("%Nstack_matchers:")
          Result.append (l_stack_matchers.out)
          Result.append ("%N")    
        end  
        if attached stack_categorizers as l_stack_categorizers then
          Result.append ("%Nstack_categorizers:")
          Result.append (l_stack_categorizers.out)
          Result.append ("%N")    
        end  
        if attached stack_shorteners as l_stack_shorteners then
          Result.append ("%Nstack_shorteners:")
          Result.append (l_stack_shorteners.out)
          Result.append ("%N")    
        end  
      end
end


