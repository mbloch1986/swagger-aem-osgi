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
class COM_DAY_CQ_EXTWIDGET_SERVLETS_IMAGE_SPRITE_SERVLET_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    max_width: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    max_height: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_max_width (a_name: like max_width)
        -- Set 'max_width' with 'a_name'.
      do
        max_width := a_name
      ensure
        max_width_set: max_width = a_name		
      end

    set_max_height (a_name: like max_height)
        -- Set 'max_height' with 'a_name'.
      do
        max_height := a_name
      ensure
        max_height_set: max_height = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_EXTWIDGET_SERVLETS_IMAGE_SPRITE_SERVLET_PROPERTIES%N")
        if attached max_width as l_max_width then
          Result.append ("%Nmax_width:")
          Result.append (l_max_width.out)
          Result.append ("%N")    
        end  
        if attached max_height as l_max_height then
          Result.append ("%Nmax_height:")
          Result.append (l_max_height.out)
          Result.append ("%N")    
        end  
      end
end


