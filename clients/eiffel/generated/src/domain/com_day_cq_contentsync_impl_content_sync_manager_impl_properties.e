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
class COM_DAY_CQ_CONTENTSYNC_IMPL_CONTENT_SYNC_MANAGER_IMPL_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    contentsync_fallback_authorizable: detachable CONFIG_NODE_PROPERTY_STRING 
      
    contentsync_fallback_updateuser: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_contentsync_fallback_authorizable (a_name: like contentsync_fallback_authorizable)
        -- Set 'contentsync_fallback_authorizable' with 'a_name'.
      do
        contentsync_fallback_authorizable := a_name
      ensure
        contentsync_fallback_authorizable_set: contentsync_fallback_authorizable = a_name		
      end

    set_contentsync_fallback_updateuser (a_name: like contentsync_fallback_updateuser)
        -- Set 'contentsync_fallback_updateuser' with 'a_name'.
      do
        contentsync_fallback_updateuser := a_name
      ensure
        contentsync_fallback_updateuser_set: contentsync_fallback_updateuser = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_CONTENTSYNC_IMPL_CONTENT_SYNC_MANAGER_IMPL_PROPERTIES%N")
        if attached contentsync_fallback_authorizable as l_contentsync_fallback_authorizable then
          Result.append ("%Ncontentsync_fallback_authorizable:")
          Result.append (l_contentsync_fallback_authorizable.out)
          Result.append ("%N")    
        end  
        if attached contentsync_fallback_updateuser as l_contentsync_fallback_updateuser then
          Result.append ("%Ncontentsync_fallback_updateuser:")
          Result.append (l_contentsync_fallback_updateuser.out)
          Result.append ("%N")    
        end  
      end
end

