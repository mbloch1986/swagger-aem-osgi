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
class COM_ADOBE_CQ_AUDIT_PURGE_REPLICATION_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    auditlog_rule_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    auditlog_rule_contentpath: detachable CONFIG_NODE_PROPERTY_STRING 
      
    auditlog_rule_minimumage: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    auditlog_rule_types: detachable CONFIG_NODE_PROPERTY_DROP_DOWN 
      

feature -- Change Element  
 
    set_auditlog_rule_name (a_name: like auditlog_rule_name)
        -- Set 'auditlog_rule_name' with 'a_name'.
      do
        auditlog_rule_name := a_name
      ensure
        auditlog_rule_name_set: auditlog_rule_name = a_name		
      end

    set_auditlog_rule_contentpath (a_name: like auditlog_rule_contentpath)
        -- Set 'auditlog_rule_contentpath' with 'a_name'.
      do
        auditlog_rule_contentpath := a_name
      ensure
        auditlog_rule_contentpath_set: auditlog_rule_contentpath = a_name		
      end

    set_auditlog_rule_minimumage (a_name: like auditlog_rule_minimumage)
        -- Set 'auditlog_rule_minimumage' with 'a_name'.
      do
        auditlog_rule_minimumage := a_name
      ensure
        auditlog_rule_minimumage_set: auditlog_rule_minimumage = a_name		
      end

    set_auditlog_rule_types (a_name: like auditlog_rule_types)
        -- Set 'auditlog_rule_types' with 'a_name'.
      do
        auditlog_rule_types := a_name
      ensure
        auditlog_rule_types_set: auditlog_rule_types = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_CQ_AUDIT_PURGE_REPLICATION_PROPERTIES%N")
        if attached auditlog_rule_name as l_auditlog_rule_name then
          Result.append ("%Nauditlog_rule_name:")
          Result.append (l_auditlog_rule_name.out)
          Result.append ("%N")    
        end  
        if attached auditlog_rule_contentpath as l_auditlog_rule_contentpath then
          Result.append ("%Nauditlog_rule_contentpath:")
          Result.append (l_auditlog_rule_contentpath.out)
          Result.append ("%N")    
        end  
        if attached auditlog_rule_minimumage as l_auditlog_rule_minimumage then
          Result.append ("%Nauditlog_rule_minimumage:")
          Result.append (l_auditlog_rule_minimumage.out)
          Result.append ("%N")    
        end  
        if attached auditlog_rule_types as l_auditlog_rule_types then
          Result.append ("%Nauditlog_rule_types:")
          Result.append (l_auditlog_rule_types.out)
          Result.append ("%N")    
        end  
      end
end


