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
class COM_DAY_CQ_DAM_CORE_IMPL_LIGHTBOX_LIGHTBOX_SERVLET_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    sling_servlet_paths: detachable CONFIG_NODE_PROPERTY_STRING 
      
    sling_servlet_methods: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    cq_dam_enable_anonymous: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_sling_servlet_paths (a_name: like sling_servlet_paths)
        -- Set 'sling_servlet_paths' with 'a_name'.
      do
        sling_servlet_paths := a_name
      ensure
        sling_servlet_paths_set: sling_servlet_paths = a_name		
      end

    set_sling_servlet_methods (a_name: like sling_servlet_methods)
        -- Set 'sling_servlet_methods' with 'a_name'.
      do
        sling_servlet_methods := a_name
      ensure
        sling_servlet_methods_set: sling_servlet_methods = a_name		
      end

    set_cq_dam_enable_anonymous (a_name: like cq_dam_enable_anonymous)
        -- Set 'cq_dam_enable_anonymous' with 'a_name'.
      do
        cq_dam_enable_anonymous := a_name
      ensure
        cq_dam_enable_anonymous_set: cq_dam_enable_anonymous = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_DAM_CORE_IMPL_LIGHTBOX_LIGHTBOX_SERVLET_PROPERTIES%N")
        if attached sling_servlet_paths as l_sling_servlet_paths then
          Result.append ("%Nsling_servlet_paths:")
          Result.append (l_sling_servlet_paths.out)
          Result.append ("%N")    
        end  
        if attached sling_servlet_methods as l_sling_servlet_methods then
          Result.append ("%Nsling_servlet_methods:")
          Result.append (l_sling_servlet_methods.out)
          Result.append ("%N")    
        end  
        if attached cq_dam_enable_anonymous as l_cq_dam_enable_anonymous then
          Result.append ("%Ncq_dam_enable_anonymous:")
          Result.append (l_cq_dam_enable_anonymous.out)
          Result.append ("%N")    
        end  
      end
end

