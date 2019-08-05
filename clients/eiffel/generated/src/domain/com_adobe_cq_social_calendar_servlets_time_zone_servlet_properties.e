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
class COM_ADOBE_CQ_SOCIAL_CALENDAR_SERVLETS_TIME_ZONE_SERVLET_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    timezones_expirytime: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_timezones_expirytime (a_name: like timezones_expirytime)
        -- Set 'timezones_expirytime' with 'a_name'.
      do
        timezones_expirytime := a_name
      ensure
        timezones_expirytime_set: timezones_expirytime = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_CQ_SOCIAL_CALENDAR_SERVLETS_TIME_ZONE_SERVLET_PROPERTIES%N")
        if attached timezones_expirytime as l_timezones_expirytime then
          Result.append ("%Ntimezones_expirytime:")
          Result.append (l_timezones_expirytime.out)
          Result.append ("%N")    
        end  
      end
end

