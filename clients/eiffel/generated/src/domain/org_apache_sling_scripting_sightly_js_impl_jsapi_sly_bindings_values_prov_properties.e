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
class ORG_APACHE_SLING_SCRIPTING_SIGHTLY_JS_IMPL_JSAPI_SLY_BINDINGS_VALUES_PROV_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    org_apache_sling_scripting_sightly_js_bindings: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_org_apache_sling_scripting_sightly_js_bindings (a_name: like org_apache_sling_scripting_sightly_js_bindings)
        -- Set 'org_apache_sling_scripting_sightly_js_bindings' with 'a_name'.
      do
        org_apache_sling_scripting_sightly_js_bindings := a_name
      ensure
        org_apache_sling_scripting_sightly_js_bindings_set: org_apache_sling_scripting_sightly_js_bindings = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_SLING_SCRIPTING_SIGHTLY_JS_IMPL_JSAPI_SLY_BINDINGS_VALUES_PROV_PROPERTIES%N")
        if attached org_apache_sling_scripting_sightly_js_bindings as l_org_apache_sling_scripting_sightly_js_bindings then
          Result.append ("%Norg_apache_sling_scripting_sightly_js_bindings:")
          Result.append (l_org_apache_sling_scripting_sightly_js_bindings.out)
          Result.append ("%N")    
        end  
      end
end

