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
class COM_DAY_CQ_IMAGE_INTERNAL_FONT_FONT_HELPER_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    fontpath: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    oversampling_factor: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_fontpath (a_name: like fontpath)
        -- Set 'fontpath' with 'a_name'.
      do
        fontpath := a_name
      ensure
        fontpath_set: fontpath = a_name		
      end

    set_oversampling_factor (a_name: like oversampling_factor)
        -- Set 'oversampling_factor' with 'a_name'.
      do
        oversampling_factor := a_name
      ensure
        oversampling_factor_set: oversampling_factor = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_IMAGE_INTERNAL_FONT_FONT_HELPER_PROPERTIES%N")
        if attached fontpath as l_fontpath then
          Result.append ("%Nfontpath:")
          Result.append (l_fontpath.out)
          Result.append ("%N")    
        end  
        if attached oversampling_factor as l_oversampling_factor then
          Result.append ("%Noversampling_factor:")
          Result.append (l_oversampling_factor.out)
          Result.append ("%N")    
        end  
      end
end


