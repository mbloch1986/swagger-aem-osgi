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
class COM_DAY_CQ_WCM_DESIGNIMPORTER_IMPL_CANVAS_PAGE_DELETE_HANDLER_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    min_thread_pool_size: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    max_thread_pool_size: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_min_thread_pool_size (a_name: like min_thread_pool_size)
        -- Set 'min_thread_pool_size' with 'a_name'.
      do
        min_thread_pool_size := a_name
      ensure
        min_thread_pool_size_set: min_thread_pool_size = a_name		
      end

    set_max_thread_pool_size (a_name: like max_thread_pool_size)
        -- Set 'max_thread_pool_size' with 'a_name'.
      do
        max_thread_pool_size := a_name
      ensure
        max_thread_pool_size_set: max_thread_pool_size = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_WCM_DESIGNIMPORTER_IMPL_CANVAS_PAGE_DELETE_HANDLER_PROPERTIES%N")
        if attached min_thread_pool_size as l_min_thread_pool_size then
          Result.append ("%Nmin_thread_pool_size:")
          Result.append (l_min_thread_pool_size.out)
          Result.append ("%N")    
        end  
        if attached max_thread_pool_size as l_max_thread_pool_size then
          Result.append ("%Nmax_thread_pool_size:")
          Result.append (l_max_thread_pool_size.out)
          Result.append ("%N")    
        end  
      end
end


