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
class COM_DAY_CQ_DAM_CORE_IMPL_SERVLET_MULTIPLE_LICENSE_ACCEPT_SERVLET_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    cq_dam_drm_enable: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_cq_dam_drm_enable (a_name: like cq_dam_drm_enable)
        -- Set 'cq_dam_drm_enable' with 'a_name'.
      do
        cq_dam_drm_enable := a_name
      ensure
        cq_dam_drm_enable_set: cq_dam_drm_enable = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_DAM_CORE_IMPL_SERVLET_MULTIPLE_LICENSE_ACCEPT_SERVLET_PROPERTIES%N")
        if attached cq_dam_drm_enable as l_cq_dam_drm_enable then
          Result.append ("%Ncq_dam_drm_enable:")
          Result.append (l_cq_dam_drm_enable.out)
          Result.append ("%N")    
        end  
      end
end


