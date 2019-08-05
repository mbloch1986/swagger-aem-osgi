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
class ORG_APACHE_SLING_HC_CORE_IMPL_JMX_ATTRIBUTE_HEALTH_CHECK_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    hc_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    hc_tags: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    hc_mbean_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    mbean_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    attribute_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    attribute_value_constraint: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_hc_name (a_name: like hc_name)
        -- Set 'hc_name' with 'a_name'.
      do
        hc_name := a_name
      ensure
        hc_name_set: hc_name = a_name		
      end

    set_hc_tags (a_name: like hc_tags)
        -- Set 'hc_tags' with 'a_name'.
      do
        hc_tags := a_name
      ensure
        hc_tags_set: hc_tags = a_name		
      end

    set_hc_mbean_name (a_name: like hc_mbean_name)
        -- Set 'hc_mbean_name' with 'a_name'.
      do
        hc_mbean_name := a_name
      ensure
        hc_mbean_name_set: hc_mbean_name = a_name		
      end

    set_mbean_name (a_name: like mbean_name)
        -- Set 'mbean_name' with 'a_name'.
      do
        mbean_name := a_name
      ensure
        mbean_name_set: mbean_name = a_name		
      end

    set_attribute_name (a_name: like attribute_name)
        -- Set 'attribute_name' with 'a_name'.
      do
        attribute_name := a_name
      ensure
        attribute_name_set: attribute_name = a_name		
      end

    set_attribute_value_constraint (a_name: like attribute_value_constraint)
        -- Set 'attribute_value_constraint' with 'a_name'.
      do
        attribute_value_constraint := a_name
      ensure
        attribute_value_constraint_set: attribute_value_constraint = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_SLING_HC_CORE_IMPL_JMX_ATTRIBUTE_HEALTH_CHECK_PROPERTIES%N")
        if attached hc_name as l_hc_name then
          Result.append ("%Nhc_name:")
          Result.append (l_hc_name.out)
          Result.append ("%N")    
        end  
        if attached hc_tags as l_hc_tags then
          Result.append ("%Nhc_tags:")
          Result.append (l_hc_tags.out)
          Result.append ("%N")    
        end  
        if attached hc_mbean_name as l_hc_mbean_name then
          Result.append ("%Nhc_mbean_name:")
          Result.append (l_hc_mbean_name.out)
          Result.append ("%N")    
        end  
        if attached mbean_name as l_mbean_name then
          Result.append ("%Nmbean_name:")
          Result.append (l_mbean_name.out)
          Result.append ("%N")    
        end  
        if attached attribute_name as l_attribute_name then
          Result.append ("%Nattribute_name:")
          Result.append (l_attribute_name.out)
          Result.append ("%N")    
        end  
        if attached attribute_value_constraint as l_attribute_value_constraint then
          Result.append ("%Nattribute_value_constraint:")
          Result.append (l_attribute_value_constraint.out)
          Result.append ("%N")    
        end  
      end
end

