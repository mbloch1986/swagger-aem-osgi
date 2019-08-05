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
class ORG_APACHE_HTTP_PROXYCONFIGURATOR_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    proxy_enabled: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    proxy_host: detachable CONFIG_NODE_PROPERTY_STRING 
      
    proxy_port: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    proxy_user: detachable CONFIG_NODE_PROPERTY_STRING 
      
    proxy_password: detachable CONFIG_NODE_PROPERTY_STRING 
      
    proxy_exceptions: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_proxy_enabled (a_name: like proxy_enabled)
        -- Set 'proxy_enabled' with 'a_name'.
      do
        proxy_enabled := a_name
      ensure
        proxy_enabled_set: proxy_enabled = a_name		
      end

    set_proxy_host (a_name: like proxy_host)
        -- Set 'proxy_host' with 'a_name'.
      do
        proxy_host := a_name
      ensure
        proxy_host_set: proxy_host = a_name		
      end

    set_proxy_port (a_name: like proxy_port)
        -- Set 'proxy_port' with 'a_name'.
      do
        proxy_port := a_name
      ensure
        proxy_port_set: proxy_port = a_name		
      end

    set_proxy_user (a_name: like proxy_user)
        -- Set 'proxy_user' with 'a_name'.
      do
        proxy_user := a_name
      ensure
        proxy_user_set: proxy_user = a_name		
      end

    set_proxy_password (a_name: like proxy_password)
        -- Set 'proxy_password' with 'a_name'.
      do
        proxy_password := a_name
      ensure
        proxy_password_set: proxy_password = a_name		
      end

    set_proxy_exceptions (a_name: like proxy_exceptions)
        -- Set 'proxy_exceptions' with 'a_name'.
      do
        proxy_exceptions := a_name
      ensure
        proxy_exceptions_set: proxy_exceptions = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_HTTP_PROXYCONFIGURATOR_PROPERTIES%N")
        if attached proxy_enabled as l_proxy_enabled then
          Result.append ("%Nproxy_enabled:")
          Result.append (l_proxy_enabled.out)
          Result.append ("%N")    
        end  
        if attached proxy_host as l_proxy_host then
          Result.append ("%Nproxy_host:")
          Result.append (l_proxy_host.out)
          Result.append ("%N")    
        end  
        if attached proxy_port as l_proxy_port then
          Result.append ("%Nproxy_port:")
          Result.append (l_proxy_port.out)
          Result.append ("%N")    
        end  
        if attached proxy_user as l_proxy_user then
          Result.append ("%Nproxy_user:")
          Result.append (l_proxy_user.out)
          Result.append ("%N")    
        end  
        if attached proxy_password as l_proxy_password then
          Result.append ("%Nproxy_password:")
          Result.append (l_proxy_password.out)
          Result.append ("%N")    
        end  
        if attached proxy_exceptions as l_proxy_exceptions then
          Result.append ("%Nproxy_exceptions:")
          Result.append (l_proxy_exceptions.out)
          Result.append ("%N")    
        end  
      end
end

