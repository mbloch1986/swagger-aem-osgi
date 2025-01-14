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
class COM_DAY_CQ_WCM_CORE_IMPL_SERVLETS_THUMBNAIL_SERVLET_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    workspace: detachable CONFIG_NODE_PROPERTY_STRING 
      
    dimensions: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_workspace (a_name: like workspace)
        -- Set 'workspace' with 'a_name'.
      do
        workspace := a_name
      ensure
        workspace_set: workspace = a_name		
      end

    set_dimensions (a_name: like dimensions)
        -- Set 'dimensions' with 'a_name'.
      do
        dimensions := a_name
      ensure
        dimensions_set: dimensions = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_WCM_CORE_IMPL_SERVLETS_THUMBNAIL_SERVLET_PROPERTIES%N")
        if attached workspace as l_workspace then
          Result.append ("%Nworkspace:")
          Result.append (l_workspace.out)
          Result.append ("%N")    
        end  
        if attached dimensions as l_dimensions then
          Result.append ("%Ndimensions:")
          Result.append (l_dimensions.out)
          Result.append ("%N")    
        end  
      end
end


