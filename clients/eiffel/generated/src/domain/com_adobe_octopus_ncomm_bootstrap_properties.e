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
class COM_ADOBE_OCTOPUS_NCOMM_BOOTSTRAP_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    max_connections: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    max_requests: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    request_timeout: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    request_retries: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    launch_timeout: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_max_connections (a_name: like max_connections)
        -- Set 'max_connections' with 'a_name'.
      do
        max_connections := a_name
      ensure
        max_connections_set: max_connections = a_name		
      end

    set_max_requests (a_name: like max_requests)
        -- Set 'max_requests' with 'a_name'.
      do
        max_requests := a_name
      ensure
        max_requests_set: max_requests = a_name		
      end

    set_request_timeout (a_name: like request_timeout)
        -- Set 'request_timeout' with 'a_name'.
      do
        request_timeout := a_name
      ensure
        request_timeout_set: request_timeout = a_name		
      end

    set_request_retries (a_name: like request_retries)
        -- Set 'request_retries' with 'a_name'.
      do
        request_retries := a_name
      ensure
        request_retries_set: request_retries = a_name		
      end

    set_launch_timeout (a_name: like launch_timeout)
        -- Set 'launch_timeout' with 'a_name'.
      do
        launch_timeout := a_name
      ensure
        launch_timeout_set: launch_timeout = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_OCTOPUS_NCOMM_BOOTSTRAP_PROPERTIES%N")
        if attached max_connections as l_max_connections then
          Result.append ("%Nmax_connections:")
          Result.append (l_max_connections.out)
          Result.append ("%N")    
        end  
        if attached max_requests as l_max_requests then
          Result.append ("%Nmax_requests:")
          Result.append (l_max_requests.out)
          Result.append ("%N")    
        end  
        if attached request_timeout as l_request_timeout then
          Result.append ("%Nrequest_timeout:")
          Result.append (l_request_timeout.out)
          Result.append ("%N")    
        end  
        if attached request_retries as l_request_retries then
          Result.append ("%Nrequest_retries:")
          Result.append (l_request_retries.out)
          Result.append ("%N")    
        end  
        if attached launch_timeout as l_launch_timeout then
          Result.append ("%Nlaunch_timeout:")
          Result.append (l_launch_timeout.out)
          Result.append ("%N")    
        end  
      end
end


