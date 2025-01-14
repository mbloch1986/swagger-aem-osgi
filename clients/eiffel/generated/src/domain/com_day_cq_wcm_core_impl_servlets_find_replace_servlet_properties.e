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
class COM_DAY_CQ_WCM_CORE_IMPL_SERVLETS_FIND_REPLACE_SERVLET_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    scope: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_scope (a_name: like scope)
        -- Set 'scope' with 'a_name'.
      do
        scope := a_name
      ensure
        scope_set: scope = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_WCM_CORE_IMPL_SERVLETS_FIND_REPLACE_SERVLET_PROPERTIES%N")
        if attached scope as l_scope then
          Result.append ("%Nscope:")
          Result.append (l_scope.out)
          Result.append ("%N")    
        end  
      end
end


