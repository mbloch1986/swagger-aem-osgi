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
class COM_DAY_CQ_REWRITER_LINKCHECKER_IMPL_LINK_CHECKER_TRANSFORMER_FACTORY_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    linkcheckertransformer_disable_rewriting: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    linkcheckertransformer_disable_checking: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    linkcheckertransformer_map_cache_size: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    linkcheckertransformer_strict_extension_check: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    linkcheckertransformer_strip_htmlt_extension: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    linkcheckertransformer_rewrite_elements: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    linkcheckertransformer_strip_extension_path_blacklist: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_linkcheckertransformer_disable_rewriting (a_name: like linkcheckertransformer_disable_rewriting)
        -- Set 'linkcheckertransformer_disable_rewriting' with 'a_name'.
      do
        linkcheckertransformer_disable_rewriting := a_name
      ensure
        linkcheckertransformer_disable_rewriting_set: linkcheckertransformer_disable_rewriting = a_name		
      end

    set_linkcheckertransformer_disable_checking (a_name: like linkcheckertransformer_disable_checking)
        -- Set 'linkcheckertransformer_disable_checking' with 'a_name'.
      do
        linkcheckertransformer_disable_checking := a_name
      ensure
        linkcheckertransformer_disable_checking_set: linkcheckertransformer_disable_checking = a_name		
      end

    set_linkcheckertransformer_map_cache_size (a_name: like linkcheckertransformer_map_cache_size)
        -- Set 'linkcheckertransformer_map_cache_size' with 'a_name'.
      do
        linkcheckertransformer_map_cache_size := a_name
      ensure
        linkcheckertransformer_map_cache_size_set: linkcheckertransformer_map_cache_size = a_name		
      end

    set_linkcheckertransformer_strict_extension_check (a_name: like linkcheckertransformer_strict_extension_check)
        -- Set 'linkcheckertransformer_strict_extension_check' with 'a_name'.
      do
        linkcheckertransformer_strict_extension_check := a_name
      ensure
        linkcheckertransformer_strict_extension_check_set: linkcheckertransformer_strict_extension_check = a_name		
      end

    set_linkcheckertransformer_strip_htmlt_extension (a_name: like linkcheckertransformer_strip_htmlt_extension)
        -- Set 'linkcheckertransformer_strip_htmlt_extension' with 'a_name'.
      do
        linkcheckertransformer_strip_htmlt_extension := a_name
      ensure
        linkcheckertransformer_strip_htmlt_extension_set: linkcheckertransformer_strip_htmlt_extension = a_name		
      end

    set_linkcheckertransformer_rewrite_elements (a_name: like linkcheckertransformer_rewrite_elements)
        -- Set 'linkcheckertransformer_rewrite_elements' with 'a_name'.
      do
        linkcheckertransformer_rewrite_elements := a_name
      ensure
        linkcheckertransformer_rewrite_elements_set: linkcheckertransformer_rewrite_elements = a_name		
      end

    set_linkcheckertransformer_strip_extension_path_blacklist (a_name: like linkcheckertransformer_strip_extension_path_blacklist)
        -- Set 'linkcheckertransformer_strip_extension_path_blacklist' with 'a_name'.
      do
        linkcheckertransformer_strip_extension_path_blacklist := a_name
      ensure
        linkcheckertransformer_strip_extension_path_blacklist_set: linkcheckertransformer_strip_extension_path_blacklist = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_REWRITER_LINKCHECKER_IMPL_LINK_CHECKER_TRANSFORMER_FACTORY_PROPERTIES%N")
        if attached linkcheckertransformer_disable_rewriting as l_linkcheckertransformer_disable_rewriting then
          Result.append ("%Nlinkcheckertransformer_disable_rewriting:")
          Result.append (l_linkcheckertransformer_disable_rewriting.out)
          Result.append ("%N")    
        end  
        if attached linkcheckertransformer_disable_checking as l_linkcheckertransformer_disable_checking then
          Result.append ("%Nlinkcheckertransformer_disable_checking:")
          Result.append (l_linkcheckertransformer_disable_checking.out)
          Result.append ("%N")    
        end  
        if attached linkcheckertransformer_map_cache_size as l_linkcheckertransformer_map_cache_size then
          Result.append ("%Nlinkcheckertransformer_map_cache_size:")
          Result.append (l_linkcheckertransformer_map_cache_size.out)
          Result.append ("%N")    
        end  
        if attached linkcheckertransformer_strict_extension_check as l_linkcheckertransformer_strict_extension_check then
          Result.append ("%Nlinkcheckertransformer_strict_extension_check:")
          Result.append (l_linkcheckertransformer_strict_extension_check.out)
          Result.append ("%N")    
        end  
        if attached linkcheckertransformer_strip_htmlt_extension as l_linkcheckertransformer_strip_htmlt_extension then
          Result.append ("%Nlinkcheckertransformer_strip_htmlt_extension:")
          Result.append (l_linkcheckertransformer_strip_htmlt_extension.out)
          Result.append ("%N")    
        end  
        if attached linkcheckertransformer_rewrite_elements as l_linkcheckertransformer_rewrite_elements then
          Result.append ("%Nlinkcheckertransformer_rewrite_elements:")
          Result.append (l_linkcheckertransformer_rewrite_elements.out)
          Result.append ("%N")    
        end  
        if attached linkcheckertransformer_strip_extension_path_blacklist as l_linkcheckertransformer_strip_extension_path_blacklist then
          Result.append ("%Nlinkcheckertransformer_strip_extension_path_blacklist:")
          Result.append (l_linkcheckertransformer_strip_extension_path_blacklist.out)
          Result.append ("%N")    
        end  
      end
end


