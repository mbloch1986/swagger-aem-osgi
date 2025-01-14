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
class COM_DAY_CQ_DAM_CORE_IMPL_REPORTS_REPORT_EXPORT_SERVICE_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    query_batch_size: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_query_batch_size (a_name: like query_batch_size)
        -- Set 'query_batch_size' with 'a_name'.
      do
        query_batch_size := a_name
      ensure
        query_batch_size_set: query_batch_size = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_DAM_CORE_IMPL_REPORTS_REPORT_EXPORT_SERVICE_PROPERTIES%N")
        if attached query_batch_size as l_query_batch_size then
          Result.append ("%Nquery_batch_size:")
          Result.append (l_query_batch_size.out)
          Result.append ("%N")    
        end  
      end
end


