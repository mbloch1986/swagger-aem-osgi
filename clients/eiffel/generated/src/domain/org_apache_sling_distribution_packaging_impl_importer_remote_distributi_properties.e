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
class ORG_APACHE_SLING_DISTRIBUTION_PACKAGING_IMPL_IMPORTER_REMOTE_DISTRIBUTI_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    endpoints: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    transport_secret_provider_target: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_name (a_name: like name)
        -- Set 'name' with 'a_name'.
      do
        name := a_name
      ensure
        name_set: name = a_name		
      end

    set_endpoints (a_name: like endpoints)
        -- Set 'endpoints' with 'a_name'.
      do
        endpoints := a_name
      ensure
        endpoints_set: endpoints = a_name		
      end

    set_transport_secret_provider_target (a_name: like transport_secret_provider_target)
        -- Set 'transport_secret_provider_target' with 'a_name'.
      do
        transport_secret_provider_target := a_name
      ensure
        transport_secret_provider_target_set: transport_secret_provider_target = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_SLING_DISTRIBUTION_PACKAGING_IMPL_IMPORTER_REMOTE_DISTRIBUTI_PROPERTIES%N")
        if attached name as l_name then
          Result.append ("%Nname:")
          Result.append (l_name.out)
          Result.append ("%N")    
        end  
        if attached endpoints as l_endpoints then
          Result.append ("%Nendpoints:")
          Result.append (l_endpoints.out)
          Result.append ("%N")    
        end  
        if attached transport_secret_provider_target as l_transport_secret_provider_target then
          Result.append ("%Ntransport_secret_provider_target:")
          Result.append (l_transport_secret_provider_target.out)
          Result.append ("%N")    
        end  
      end
end


