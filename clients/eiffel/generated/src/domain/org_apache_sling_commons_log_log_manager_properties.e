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
class ORG_APACHE_SLING_COMMONS_LOG_LOG_MANAGER_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    org_apache_sling_commons_log_level: detachable CONFIG_NODE_PROPERTY_DROP_DOWN 
      
    org_apache_sling_commons_log_file: detachable CONFIG_NODE_PROPERTY_STRING 
      
    org_apache_sling_commons_log_file_number: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    org_apache_sling_commons_log_file_size: detachable CONFIG_NODE_PROPERTY_STRING 
      
    org_apache_sling_commons_log_pattern: detachable CONFIG_NODE_PROPERTY_STRING 
      
    org_apache_sling_commons_log_configuration_file: detachable CONFIG_NODE_PROPERTY_STRING 
      
    org_apache_sling_commons_log_packaging_data_enabled: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    org_apache_sling_commons_log_max_caller_data_depth: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    org_apache_sling_commons_log_max_old_file_count_in_dump: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    org_apache_sling_commons_log_num_of_lines: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_org_apache_sling_commons_log_level (a_name: like org_apache_sling_commons_log_level)
        -- Set 'org_apache_sling_commons_log_level' with 'a_name'.
      do
        org_apache_sling_commons_log_level := a_name
      ensure
        org_apache_sling_commons_log_level_set: org_apache_sling_commons_log_level = a_name		
      end

    set_org_apache_sling_commons_log_file (a_name: like org_apache_sling_commons_log_file)
        -- Set 'org_apache_sling_commons_log_file' with 'a_name'.
      do
        org_apache_sling_commons_log_file := a_name
      ensure
        org_apache_sling_commons_log_file_set: org_apache_sling_commons_log_file = a_name		
      end

    set_org_apache_sling_commons_log_file_number (a_name: like org_apache_sling_commons_log_file_number)
        -- Set 'org_apache_sling_commons_log_file_number' with 'a_name'.
      do
        org_apache_sling_commons_log_file_number := a_name
      ensure
        org_apache_sling_commons_log_file_number_set: org_apache_sling_commons_log_file_number = a_name		
      end

    set_org_apache_sling_commons_log_file_size (a_name: like org_apache_sling_commons_log_file_size)
        -- Set 'org_apache_sling_commons_log_file_size' with 'a_name'.
      do
        org_apache_sling_commons_log_file_size := a_name
      ensure
        org_apache_sling_commons_log_file_size_set: org_apache_sling_commons_log_file_size = a_name		
      end

    set_org_apache_sling_commons_log_pattern (a_name: like org_apache_sling_commons_log_pattern)
        -- Set 'org_apache_sling_commons_log_pattern' with 'a_name'.
      do
        org_apache_sling_commons_log_pattern := a_name
      ensure
        org_apache_sling_commons_log_pattern_set: org_apache_sling_commons_log_pattern = a_name		
      end

    set_org_apache_sling_commons_log_configuration_file (a_name: like org_apache_sling_commons_log_configuration_file)
        -- Set 'org_apache_sling_commons_log_configuration_file' with 'a_name'.
      do
        org_apache_sling_commons_log_configuration_file := a_name
      ensure
        org_apache_sling_commons_log_configuration_file_set: org_apache_sling_commons_log_configuration_file = a_name		
      end

    set_org_apache_sling_commons_log_packaging_data_enabled (a_name: like org_apache_sling_commons_log_packaging_data_enabled)
        -- Set 'org_apache_sling_commons_log_packaging_data_enabled' with 'a_name'.
      do
        org_apache_sling_commons_log_packaging_data_enabled := a_name
      ensure
        org_apache_sling_commons_log_packaging_data_enabled_set: org_apache_sling_commons_log_packaging_data_enabled = a_name		
      end

    set_org_apache_sling_commons_log_max_caller_data_depth (a_name: like org_apache_sling_commons_log_max_caller_data_depth)
        -- Set 'org_apache_sling_commons_log_max_caller_data_depth' with 'a_name'.
      do
        org_apache_sling_commons_log_max_caller_data_depth := a_name
      ensure
        org_apache_sling_commons_log_max_caller_data_depth_set: org_apache_sling_commons_log_max_caller_data_depth = a_name		
      end

    set_org_apache_sling_commons_log_max_old_file_count_in_dump (a_name: like org_apache_sling_commons_log_max_old_file_count_in_dump)
        -- Set 'org_apache_sling_commons_log_max_old_file_count_in_dump' with 'a_name'.
      do
        org_apache_sling_commons_log_max_old_file_count_in_dump := a_name
      ensure
        org_apache_sling_commons_log_max_old_file_count_in_dump_set: org_apache_sling_commons_log_max_old_file_count_in_dump = a_name		
      end

    set_org_apache_sling_commons_log_num_of_lines (a_name: like org_apache_sling_commons_log_num_of_lines)
        -- Set 'org_apache_sling_commons_log_num_of_lines' with 'a_name'.
      do
        org_apache_sling_commons_log_num_of_lines := a_name
      ensure
        org_apache_sling_commons_log_num_of_lines_set: org_apache_sling_commons_log_num_of_lines = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_SLING_COMMONS_LOG_LOG_MANAGER_PROPERTIES%N")
        if attached org_apache_sling_commons_log_level as l_org_apache_sling_commons_log_level then
          Result.append ("%Norg_apache_sling_commons_log_level:")
          Result.append (l_org_apache_sling_commons_log_level.out)
          Result.append ("%N")    
        end  
        if attached org_apache_sling_commons_log_file as l_org_apache_sling_commons_log_file then
          Result.append ("%Norg_apache_sling_commons_log_file:")
          Result.append (l_org_apache_sling_commons_log_file.out)
          Result.append ("%N")    
        end  
        if attached org_apache_sling_commons_log_file_number as l_org_apache_sling_commons_log_file_number then
          Result.append ("%Norg_apache_sling_commons_log_file_number:")
          Result.append (l_org_apache_sling_commons_log_file_number.out)
          Result.append ("%N")    
        end  
        if attached org_apache_sling_commons_log_file_size as l_org_apache_sling_commons_log_file_size then
          Result.append ("%Norg_apache_sling_commons_log_file_size:")
          Result.append (l_org_apache_sling_commons_log_file_size.out)
          Result.append ("%N")    
        end  
        if attached org_apache_sling_commons_log_pattern as l_org_apache_sling_commons_log_pattern then
          Result.append ("%Norg_apache_sling_commons_log_pattern:")
          Result.append (l_org_apache_sling_commons_log_pattern.out)
          Result.append ("%N")    
        end  
        if attached org_apache_sling_commons_log_configuration_file as l_org_apache_sling_commons_log_configuration_file then
          Result.append ("%Norg_apache_sling_commons_log_configuration_file:")
          Result.append (l_org_apache_sling_commons_log_configuration_file.out)
          Result.append ("%N")    
        end  
        if attached org_apache_sling_commons_log_packaging_data_enabled as l_org_apache_sling_commons_log_packaging_data_enabled then
          Result.append ("%Norg_apache_sling_commons_log_packaging_data_enabled:")
          Result.append (l_org_apache_sling_commons_log_packaging_data_enabled.out)
          Result.append ("%N")    
        end  
        if attached org_apache_sling_commons_log_max_caller_data_depth as l_org_apache_sling_commons_log_max_caller_data_depth then
          Result.append ("%Norg_apache_sling_commons_log_max_caller_data_depth:")
          Result.append (l_org_apache_sling_commons_log_max_caller_data_depth.out)
          Result.append ("%N")    
        end  
        if attached org_apache_sling_commons_log_max_old_file_count_in_dump as l_org_apache_sling_commons_log_max_old_file_count_in_dump then
          Result.append ("%Norg_apache_sling_commons_log_max_old_file_count_in_dump:")
          Result.append (l_org_apache_sling_commons_log_max_old_file_count_in_dump.out)
          Result.append ("%N")    
        end  
        if attached org_apache_sling_commons_log_num_of_lines as l_org_apache_sling_commons_log_num_of_lines then
          Result.append ("%Norg_apache_sling_commons_log_num_of_lines:")
          Result.append (l_org_apache_sling_commons_log_num_of_lines.out)
          Result.append ("%N")    
        end  
      end
end


