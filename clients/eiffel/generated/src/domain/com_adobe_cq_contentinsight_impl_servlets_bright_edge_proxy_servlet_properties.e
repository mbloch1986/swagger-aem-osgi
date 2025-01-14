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
class COM_ADOBE_CQ_CONTENTINSIGHT_IMPL_SERVLETS_BRIGHT_EDGE_PROXY_SERVLET_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    brightedge_url: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_brightedge_url (a_name: like brightedge_url)
        -- Set 'brightedge_url' with 'a_name'.
      do
        brightedge_url := a_name
      ensure
        brightedge_url_set: brightedge_url = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_CQ_CONTENTINSIGHT_IMPL_SERVLETS_BRIGHT_EDGE_PROXY_SERVLET_PROPERTIES%N")
        if attached brightedge_url as l_brightedge_url then
          Result.append ("%Nbrightedge_url:")
          Result.append (l_brightedge_url.out)
          Result.append ("%N")    
        end  
      end
end


