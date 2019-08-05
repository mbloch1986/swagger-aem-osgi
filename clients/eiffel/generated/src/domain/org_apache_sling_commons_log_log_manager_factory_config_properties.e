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
class ORG_APACHE_SLING_COMMONS_LOG_LOG_MANAGER_FACTORY_CONFIG_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    org_apache_sling_commons_log_level: detachable CONFIG_NODE_PROPERTY_DROP_DOWN 
      
    org_apache_sling_commons_log_file: detachable CONFIG_NODE_PROPERTY_STRING 
      
    org_apache_sling_commons_log_pattern: detachable CONFIG_NODE_PROPERTY_STRING 
      
    org_apache_sling_commons_log_names: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    org_apache_sling_commons_log_additiv: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

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

    set_org_apache_sling_commons_log_pattern (a_name: like org_apache_sling_commons_log_pattern)
        -- Set 'org_apache_sling_commons_log_pattern' with 'a_name'.
      do
        org_apache_sling_commons_log_pattern := a_name
      ensure
        org_apache_sling_commons_log_pattern_set: org_apache_sling_commons_log_pattern = a_name		
      end

    set_org_apache_sling_commons_log_names (a_name: like org_apache_sling_commons_log_names)
        -- Set 'org_apache_sling_commons_log_names' with 'a_name'.
      do
        org_apache_sling_commons_log_names := a_name
      ensure
        org_apache_sling_commons_log_names_set: org_apache_sling_commons_log_names = a_name		
      end

    set_org_apache_sling_commons_log_additiv (a_name: like org_apache_sling_commons_log_additiv)
        -- Set 'org_apache_sling_commons_log_additiv' with 'a_name'.
      do
        org_apache_sling_commons_log_additiv := a_name
      ensure
        org_apache_sling_commons_log_additiv_set: org_apache_sling_commons_log_additiv = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_SLING_COMMONS_LOG_LOG_MANAGER_FACTORY_CONFIG_PROPERTIES%N")
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
        if attached org_apache_sling_commons_log_pattern as l_org_apache_sling_commons_log_pattern then
          Result.append ("%Norg_apache_sling_commons_log_pattern:")
          Result.append (l_org_apache_sling_commons_log_pattern.out)
          Result.append ("%N")    
        end  
        if attached org_apache_sling_commons_log_names as l_org_apache_sling_commons_log_names then
          Result.append ("%Norg_apache_sling_commons_log_names:")
          Result.append (l_org_apache_sling_commons_log_names.out)
          Result.append ("%N")    
        end  
        if attached org_apache_sling_commons_log_additiv as l_org_apache_sling_commons_log_additiv then
          Result.append ("%Norg_apache_sling_commons_log_additiv:")
          Result.append (l_org_apache_sling_commons_log_additiv.out)
          Result.append ("%N")    
        end  
      end
end

