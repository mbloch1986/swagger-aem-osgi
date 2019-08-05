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
class COM_DAY_CQ_DAM_CORE_IMPL_SERVLET_RESOURCE_COLLECTION_SERVLET_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    sling_servlet_resource_types: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    sling_servlet_methods: detachable CONFIG_NODE_PROPERTY_STRING 
      
    sling_servlet_selectors: detachable CONFIG_NODE_PROPERTY_STRING 
      
    download_config: detachable CONFIG_NODE_PROPERTY_STRING 
      
    view_selector: detachable CONFIG_NODE_PROPERTY_STRING 
      
    send_email: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_sling_servlet_resource_types (a_name: like sling_servlet_resource_types)
        -- Set 'sling_servlet_resource_types' with 'a_name'.
      do
        sling_servlet_resource_types := a_name
      ensure
        sling_servlet_resource_types_set: sling_servlet_resource_types = a_name		
      end

    set_sling_servlet_methods (a_name: like sling_servlet_methods)
        -- Set 'sling_servlet_methods' with 'a_name'.
      do
        sling_servlet_methods := a_name
      ensure
        sling_servlet_methods_set: sling_servlet_methods = a_name		
      end

    set_sling_servlet_selectors (a_name: like sling_servlet_selectors)
        -- Set 'sling_servlet_selectors' with 'a_name'.
      do
        sling_servlet_selectors := a_name
      ensure
        sling_servlet_selectors_set: sling_servlet_selectors = a_name		
      end

    set_download_config (a_name: like download_config)
        -- Set 'download_config' with 'a_name'.
      do
        download_config := a_name
      ensure
        download_config_set: download_config = a_name		
      end

    set_view_selector (a_name: like view_selector)
        -- Set 'view_selector' with 'a_name'.
      do
        view_selector := a_name
      ensure
        view_selector_set: view_selector = a_name		
      end

    set_send_email (a_name: like send_email)
        -- Set 'send_email' with 'a_name'.
      do
        send_email := a_name
      ensure
        send_email_set: send_email = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_DAM_CORE_IMPL_SERVLET_RESOURCE_COLLECTION_SERVLET_PROPERTIES%N")
        if attached sling_servlet_resource_types as l_sling_servlet_resource_types then
          Result.append ("%Nsling_servlet_resource_types:")
          Result.append (l_sling_servlet_resource_types.out)
          Result.append ("%N")    
        end  
        if attached sling_servlet_methods as l_sling_servlet_methods then
          Result.append ("%Nsling_servlet_methods:")
          Result.append (l_sling_servlet_methods.out)
          Result.append ("%N")    
        end  
        if attached sling_servlet_selectors as l_sling_servlet_selectors then
          Result.append ("%Nsling_servlet_selectors:")
          Result.append (l_sling_servlet_selectors.out)
          Result.append ("%N")    
        end  
        if attached download_config as l_download_config then
          Result.append ("%Ndownload_config:")
          Result.append (l_download_config.out)
          Result.append ("%N")    
        end  
        if attached view_selector as l_view_selector then
          Result.append ("%Nview_selector:")
          Result.append (l_view_selector.out)
          Result.append ("%N")    
        end  
        if attached send_email as l_send_email then
          Result.append ("%Nsend_email:")
          Result.append (l_send_email.out)
          Result.append ("%N")    
        end  
      end
end

