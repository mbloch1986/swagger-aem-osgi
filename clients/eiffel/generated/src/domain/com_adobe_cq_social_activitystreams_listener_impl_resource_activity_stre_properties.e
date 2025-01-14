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
class COM_ADOBE_CQ_SOCIAL_ACTIVITYSTREAMS_LISTENER_IMPL_RESOURCE_ACTIVITY_STRE_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    stream_path: detachable CONFIG_NODE_PROPERTY_STRING 
      
    stream_name: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_stream_path (a_name: like stream_path)
        -- Set 'stream_path' with 'a_name'.
      do
        stream_path := a_name
      ensure
        stream_path_set: stream_path = a_name		
      end

    set_stream_name (a_name: like stream_name)
        -- Set 'stream_name' with 'a_name'.
      do
        stream_name := a_name
      ensure
        stream_name_set: stream_name = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_CQ_SOCIAL_ACTIVITYSTREAMS_LISTENER_IMPL_RESOURCE_ACTIVITY_STRE_PROPERTIES%N")
        if attached stream_path as l_stream_path then
          Result.append ("%Nstream_path:")
          Result.append (l_stream_path.out)
          Result.append ("%N")    
        end  
        if attached stream_name as l_stream_name then
          Result.append ("%Nstream_name:")
          Result.append (l_stream_name.out)
          Result.append ("%N")    
        end  
      end
end


