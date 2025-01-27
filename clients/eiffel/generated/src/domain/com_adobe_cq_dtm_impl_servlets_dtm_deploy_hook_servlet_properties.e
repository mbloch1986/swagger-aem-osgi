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
class COM_ADOBE_CQ_DTM_IMPL_SERVLETS_DTM_DEPLOY_HOOK_SERVLET_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    dtm_staging_ip_whitelist: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    dtm_production_ip_whitelist: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_dtm_staging_ip_whitelist (a_name: like dtm_staging_ip_whitelist)
        -- Set 'dtm_staging_ip_whitelist' with 'a_name'.
      do
        dtm_staging_ip_whitelist := a_name
      ensure
        dtm_staging_ip_whitelist_set: dtm_staging_ip_whitelist = a_name		
      end

    set_dtm_production_ip_whitelist (a_name: like dtm_production_ip_whitelist)
        -- Set 'dtm_production_ip_whitelist' with 'a_name'.
      do
        dtm_production_ip_whitelist := a_name
      ensure
        dtm_production_ip_whitelist_set: dtm_production_ip_whitelist = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_CQ_DTM_IMPL_SERVLETS_DTM_DEPLOY_HOOK_SERVLET_PROPERTIES%N")
        if attached dtm_staging_ip_whitelist as l_dtm_staging_ip_whitelist then
          Result.append ("%Ndtm_staging_ip_whitelist:")
          Result.append (l_dtm_staging_ip_whitelist.out)
          Result.append ("%N")    
        end  
        if attached dtm_production_ip_whitelist as l_dtm_production_ip_whitelist then
          Result.append ("%Ndtm_production_ip_whitelist:")
          Result.append (l_dtm_production_ip_whitelist.out)
          Result.append ("%N")    
        end  
      end
end


