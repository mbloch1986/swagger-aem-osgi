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
class ORG_APACHE_FELIX_JAAS_CONFIGURATION_SPI_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    jaas_default_realm_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    jaas_config_provider_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    jaas_global_config_policy: detachable CONFIG_NODE_PROPERTY_DROP_DOWN 
      

feature -- Change Element  
 
    set_jaas_default_realm_name (a_name: like jaas_default_realm_name)
        -- Set 'jaas_default_realm_name' with 'a_name'.
      do
        jaas_default_realm_name := a_name
      ensure
        jaas_default_realm_name_set: jaas_default_realm_name = a_name		
      end

    set_jaas_config_provider_name (a_name: like jaas_config_provider_name)
        -- Set 'jaas_config_provider_name' with 'a_name'.
      do
        jaas_config_provider_name := a_name
      ensure
        jaas_config_provider_name_set: jaas_config_provider_name = a_name		
      end

    set_jaas_global_config_policy (a_name: like jaas_global_config_policy)
        -- Set 'jaas_global_config_policy' with 'a_name'.
      do
        jaas_global_config_policy := a_name
      ensure
        jaas_global_config_policy_set: jaas_global_config_policy = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_FELIX_JAAS_CONFIGURATION_SPI_PROPERTIES%N")
        if attached jaas_default_realm_name as l_jaas_default_realm_name then
          Result.append ("%Njaas_default_realm_name:")
          Result.append (l_jaas_default_realm_name.out)
          Result.append ("%N")    
        end  
        if attached jaas_config_provider_name as l_jaas_config_provider_name then
          Result.append ("%Njaas_config_provider_name:")
          Result.append (l_jaas_config_provider_name.out)
          Result.append ("%N")    
        end  
        if attached jaas_global_config_policy as l_jaas_global_config_policy then
          Result.append ("%Njaas_global_config_policy:")
          Result.append (l_jaas_global_config_policy.out)
          Result.append ("%N")    
        end  
      end
end

