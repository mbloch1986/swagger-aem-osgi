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
class COM_DAY_CQ_REPLICATION_IMPL_CONTENT_DURBO_DURBO_IMPORT_CONFIGURATION_PROV_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    preserve_hierarchy_nodes: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    ignore_versioning: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    import_acl: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    save_threshold: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    preserve_user_paths: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    preserve_uuid: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    preserve_uuid_nodetypes: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    preserve_uuid_subtrees: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    auto_commit: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_preserve_hierarchy_nodes (a_name: like preserve_hierarchy_nodes)
        -- Set 'preserve_hierarchy_nodes' with 'a_name'.
      do
        preserve_hierarchy_nodes := a_name
      ensure
        preserve_hierarchy_nodes_set: preserve_hierarchy_nodes = a_name		
      end

    set_ignore_versioning (a_name: like ignore_versioning)
        -- Set 'ignore_versioning' with 'a_name'.
      do
        ignore_versioning := a_name
      ensure
        ignore_versioning_set: ignore_versioning = a_name		
      end

    set_import_acl (a_name: like import_acl)
        -- Set 'import_acl' with 'a_name'.
      do
        import_acl := a_name
      ensure
        import_acl_set: import_acl = a_name		
      end

    set_save_threshold (a_name: like save_threshold)
        -- Set 'save_threshold' with 'a_name'.
      do
        save_threshold := a_name
      ensure
        save_threshold_set: save_threshold = a_name		
      end

    set_preserve_user_paths (a_name: like preserve_user_paths)
        -- Set 'preserve_user_paths' with 'a_name'.
      do
        preserve_user_paths := a_name
      ensure
        preserve_user_paths_set: preserve_user_paths = a_name		
      end

    set_preserve_uuid (a_name: like preserve_uuid)
        -- Set 'preserve_uuid' with 'a_name'.
      do
        preserve_uuid := a_name
      ensure
        preserve_uuid_set: preserve_uuid = a_name		
      end

    set_preserve_uuid_nodetypes (a_name: like preserve_uuid_nodetypes)
        -- Set 'preserve_uuid_nodetypes' with 'a_name'.
      do
        preserve_uuid_nodetypes := a_name
      ensure
        preserve_uuid_nodetypes_set: preserve_uuid_nodetypes = a_name		
      end

    set_preserve_uuid_subtrees (a_name: like preserve_uuid_subtrees)
        -- Set 'preserve_uuid_subtrees' with 'a_name'.
      do
        preserve_uuid_subtrees := a_name
      ensure
        preserve_uuid_subtrees_set: preserve_uuid_subtrees = a_name		
      end

    set_auto_commit (a_name: like auto_commit)
        -- Set 'auto_commit' with 'a_name'.
      do
        auto_commit := a_name
      ensure
        auto_commit_set: auto_commit = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_REPLICATION_IMPL_CONTENT_DURBO_DURBO_IMPORT_CONFIGURATION_PROV_PROPERTIES%N")
        if attached preserve_hierarchy_nodes as l_preserve_hierarchy_nodes then
          Result.append ("%Npreserve_hierarchy_nodes:")
          Result.append (l_preserve_hierarchy_nodes.out)
          Result.append ("%N")    
        end  
        if attached ignore_versioning as l_ignore_versioning then
          Result.append ("%Nignore_versioning:")
          Result.append (l_ignore_versioning.out)
          Result.append ("%N")    
        end  
        if attached import_acl as l_import_acl then
          Result.append ("%Nimport_acl:")
          Result.append (l_import_acl.out)
          Result.append ("%N")    
        end  
        if attached save_threshold as l_save_threshold then
          Result.append ("%Nsave_threshold:")
          Result.append (l_save_threshold.out)
          Result.append ("%N")    
        end  
        if attached preserve_user_paths as l_preserve_user_paths then
          Result.append ("%Npreserve_user_paths:")
          Result.append (l_preserve_user_paths.out)
          Result.append ("%N")    
        end  
        if attached preserve_uuid as l_preserve_uuid then
          Result.append ("%Npreserve_uuid:")
          Result.append (l_preserve_uuid.out)
          Result.append ("%N")    
        end  
        if attached preserve_uuid_nodetypes as l_preserve_uuid_nodetypes then
          Result.append ("%Npreserve_uuid_nodetypes:")
          Result.append (l_preserve_uuid_nodetypes.out)
          Result.append ("%N")    
        end  
        if attached preserve_uuid_subtrees as l_preserve_uuid_subtrees then
          Result.append ("%Npreserve_uuid_subtrees:")
          Result.append (l_preserve_uuid_subtrees.out)
          Result.append ("%N")    
        end  
        if attached auto_commit as l_auto_commit then
          Result.append ("%Nauto_commit:")
          Result.append (l_auto_commit.out)
          Result.append ("%N")    
        end  
      end
end

