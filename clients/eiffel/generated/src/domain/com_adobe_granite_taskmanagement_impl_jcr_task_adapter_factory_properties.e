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
class COM_ADOBE_GRANITE_TASKMANAGEMENT_IMPL_JCR_TASK_ADAPTER_FACTORY_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    adapter_condition: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_adapter_condition (a_name: like adapter_condition)
        -- Set 'adapter_condition' with 'a_name'.
      do
        adapter_condition := a_name
      ensure
        adapter_condition_set: adapter_condition = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_GRANITE_TASKMANAGEMENT_IMPL_JCR_TASK_ADAPTER_FACTORY_PROPERTIES%N")
        if attached adapter_condition as l_adapter_condition then
          Result.append ("%Nadapter_condition:")
          Result.append (l_adapter_condition.out)
          Result.append ("%N")    
        end  
      end
end


