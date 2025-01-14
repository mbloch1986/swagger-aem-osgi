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
class COM_DAY_CQ_WCM_CORE_IMPL_PAGE_PAGE_MANAGER_FACTORY_IMPL_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    illegal_char_mapping: detachable CONFIG_NODE_PROPERTY_STRING 
      
    page_sub_tree_activation_check: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_illegal_char_mapping (a_name: like illegal_char_mapping)
        -- Set 'illegal_char_mapping' with 'a_name'.
      do
        illegal_char_mapping := a_name
      ensure
        illegal_char_mapping_set: illegal_char_mapping = a_name		
      end

    set_page_sub_tree_activation_check (a_name: like page_sub_tree_activation_check)
        -- Set 'page_sub_tree_activation_check' with 'a_name'.
      do
        page_sub_tree_activation_check := a_name
      ensure
        page_sub_tree_activation_check_set: page_sub_tree_activation_check = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_WCM_CORE_IMPL_PAGE_PAGE_MANAGER_FACTORY_IMPL_PROPERTIES%N")
        if attached illegal_char_mapping as l_illegal_char_mapping then
          Result.append ("%Nillegal_char_mapping:")
          Result.append (l_illegal_char_mapping.out)
          Result.append ("%N")    
        end  
        if attached page_sub_tree_activation_check as l_page_sub_tree_activation_check then
          Result.append ("%Npage_sub_tree_activation_check:")
          Result.append (l_page_sub_tree_activation_check.out)
          Result.append ("%N")    
        end  
      end
end


