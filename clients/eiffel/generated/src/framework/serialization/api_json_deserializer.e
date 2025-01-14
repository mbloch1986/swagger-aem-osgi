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

expanded class
	API_JSON_DESERIALIZER


feature -- Access

	from_json (a_val:STRING; a_type: TYPE [detachable ANY] ): detachable ANY
			-- Deserialize a json representation `a_val' to an object
			-- of type `a_type'
		local
			conv_from: JSON_BASIC_REFLECTOR_DESERIALIZER
			ctx_deser: detachable JSON_DESERIALIZER_CONTEXT
		do
			create conv_from
			create ctx_deser
			ctx_deser.set_default_deserializer (create {JSON_BASIC_REFLECTOR_DESERIALIZER})
			Result := conv_from.from_json_string (a_val, ctx_deser, a_type)
		end

end
