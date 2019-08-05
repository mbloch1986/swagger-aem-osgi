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
class COM_DAY_CQ_DAM_CORE_IMPL_MIME_TYPE_DAM_MIME_TYPE_SERVICE_IMPL_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    cq_dam_detect_asset_mime_from_content: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_cq_dam_detect_asset_mime_from_content (a_name: like cq_dam_detect_asset_mime_from_content)
        -- Set 'cq_dam_detect_asset_mime_from_content' with 'a_name'.
      do
        cq_dam_detect_asset_mime_from_content := a_name
      ensure
        cq_dam_detect_asset_mime_from_content_set: cq_dam_detect_asset_mime_from_content = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_DAM_CORE_IMPL_MIME_TYPE_DAM_MIME_TYPE_SERVICE_IMPL_PROPERTIES%N")
        if attached cq_dam_detect_asset_mime_from_content as l_cq_dam_detect_asset_mime_from_content then
          Result.append ("%Ncq_dam_detect_asset_mime_from_content:")
          Result.append (l_cq_dam_detect_asset_mime_from_content.out)
          Result.append ("%N")    
        end  
      end
end

