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
class COM_ADOBE_CQ_COMMERCE_IMPL_PROMOTION_PROMOTION_MANAGER_IMPL_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    cq_commerce_promotion_root: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_cq_commerce_promotion_root (a_name: like cq_commerce_promotion_root)
        -- Set 'cq_commerce_promotion_root' with 'a_name'.
      do
        cq_commerce_promotion_root := a_name
      ensure
        cq_commerce_promotion_root_set: cq_commerce_promotion_root = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_CQ_COMMERCE_IMPL_PROMOTION_PROMOTION_MANAGER_IMPL_PROPERTIES%N")
        if attached cq_commerce_promotion_root as l_cq_commerce_promotion_root then
          Result.append ("%Ncq_commerce_promotion_root:")
          Result.append (l_cq_commerce_promotion_root.out)
          Result.append ("%N")    
        end  
      end
end


