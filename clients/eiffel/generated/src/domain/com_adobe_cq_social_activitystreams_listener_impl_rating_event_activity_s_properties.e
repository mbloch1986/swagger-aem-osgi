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
class COM_ADOBE_CQ_SOCIAL_ACTIVITYSTREAMS_LISTENER_IMPL_RATING_EVENT_ACTIVITY_S_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    ranking: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    enable: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_ranking (a_name: like ranking)
        -- Set 'ranking' with 'a_name'.
      do
        ranking := a_name
      ensure
        ranking_set: ranking = a_name		
      end

    set_enable (a_name: like enable)
        -- Set 'enable' with 'a_name'.
      do
        enable := a_name
      ensure
        enable_set: enable = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_CQ_SOCIAL_ACTIVITYSTREAMS_LISTENER_IMPL_RATING_EVENT_ACTIVITY_S_PROPERTIES%N")
        if attached ranking as l_ranking then
          Result.append ("%Nranking:")
          Result.append (l_ranking.out)
          Result.append ("%N")    
        end  
        if attached enable as l_enable then
          Result.append ("%Nenable:")
          Result.append (l_enable.out)
          Result.append ("%N")    
        end  
      end
end


