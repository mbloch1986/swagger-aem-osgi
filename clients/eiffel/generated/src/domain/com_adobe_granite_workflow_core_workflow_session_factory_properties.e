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
class COM_ADOBE_GRANITE_WORKFLOW_CORE_WORKFLOW_SESSION_FACTORY_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    granite_workflowinbox_sort_property_name: detachable CONFIG_NODE_PROPERTY_DROP_DOWN 
      
    granite_workflowinbox_sort_order: detachable CONFIG_NODE_PROPERTY_STRING 
      
    cq_workflow_job_retry: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    cq_workflow_superuser: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    granite_workflow_inbox_query_size: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    granite_workflow_admin_user_group_filter: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    granite_workflow_enforce_workitem_assignee_permissions: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    granite_workflow_enforce_workflow_initiator_permissions: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    granite_workflow_inject_tenant_id_in_job_topics: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    granite_workflow_max_purge_save_threshold: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    granite_workflow_max_purge_query_count: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_granite_workflowinbox_sort_property_name (a_name: like granite_workflowinbox_sort_property_name)
        -- Set 'granite_workflowinbox_sort_property_name' with 'a_name'.
      do
        granite_workflowinbox_sort_property_name := a_name
      ensure
        granite_workflowinbox_sort_property_name_set: granite_workflowinbox_sort_property_name = a_name		
      end

    set_granite_workflowinbox_sort_order (a_name: like granite_workflowinbox_sort_order)
        -- Set 'granite_workflowinbox_sort_order' with 'a_name'.
      do
        granite_workflowinbox_sort_order := a_name
      ensure
        granite_workflowinbox_sort_order_set: granite_workflowinbox_sort_order = a_name		
      end

    set_cq_workflow_job_retry (a_name: like cq_workflow_job_retry)
        -- Set 'cq_workflow_job_retry' with 'a_name'.
      do
        cq_workflow_job_retry := a_name
      ensure
        cq_workflow_job_retry_set: cq_workflow_job_retry = a_name		
      end

    set_cq_workflow_superuser (a_name: like cq_workflow_superuser)
        -- Set 'cq_workflow_superuser' with 'a_name'.
      do
        cq_workflow_superuser := a_name
      ensure
        cq_workflow_superuser_set: cq_workflow_superuser = a_name		
      end

    set_granite_workflow_inbox_query_size (a_name: like granite_workflow_inbox_query_size)
        -- Set 'granite_workflow_inbox_query_size' with 'a_name'.
      do
        granite_workflow_inbox_query_size := a_name
      ensure
        granite_workflow_inbox_query_size_set: granite_workflow_inbox_query_size = a_name		
      end

    set_granite_workflow_admin_user_group_filter (a_name: like granite_workflow_admin_user_group_filter)
        -- Set 'granite_workflow_admin_user_group_filter' with 'a_name'.
      do
        granite_workflow_admin_user_group_filter := a_name
      ensure
        granite_workflow_admin_user_group_filter_set: granite_workflow_admin_user_group_filter = a_name		
      end

    set_granite_workflow_enforce_workitem_assignee_permissions (a_name: like granite_workflow_enforce_workitem_assignee_permissions)
        -- Set 'granite_workflow_enforce_workitem_assignee_permissions' with 'a_name'.
      do
        granite_workflow_enforce_workitem_assignee_permissions := a_name
      ensure
        granite_workflow_enforce_workitem_assignee_permissions_set: granite_workflow_enforce_workitem_assignee_permissions = a_name		
      end

    set_granite_workflow_enforce_workflow_initiator_permissions (a_name: like granite_workflow_enforce_workflow_initiator_permissions)
        -- Set 'granite_workflow_enforce_workflow_initiator_permissions' with 'a_name'.
      do
        granite_workflow_enforce_workflow_initiator_permissions := a_name
      ensure
        granite_workflow_enforce_workflow_initiator_permissions_set: granite_workflow_enforce_workflow_initiator_permissions = a_name		
      end

    set_granite_workflow_inject_tenant_id_in_job_topics (a_name: like granite_workflow_inject_tenant_id_in_job_topics)
        -- Set 'granite_workflow_inject_tenant_id_in_job_topics' with 'a_name'.
      do
        granite_workflow_inject_tenant_id_in_job_topics := a_name
      ensure
        granite_workflow_inject_tenant_id_in_job_topics_set: granite_workflow_inject_tenant_id_in_job_topics = a_name		
      end

    set_granite_workflow_max_purge_save_threshold (a_name: like granite_workflow_max_purge_save_threshold)
        -- Set 'granite_workflow_max_purge_save_threshold' with 'a_name'.
      do
        granite_workflow_max_purge_save_threshold := a_name
      ensure
        granite_workflow_max_purge_save_threshold_set: granite_workflow_max_purge_save_threshold = a_name		
      end

    set_granite_workflow_max_purge_query_count (a_name: like granite_workflow_max_purge_query_count)
        -- Set 'granite_workflow_max_purge_query_count' with 'a_name'.
      do
        granite_workflow_max_purge_query_count := a_name
      ensure
        granite_workflow_max_purge_query_count_set: granite_workflow_max_purge_query_count = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_GRANITE_WORKFLOW_CORE_WORKFLOW_SESSION_FACTORY_PROPERTIES%N")
        if attached granite_workflowinbox_sort_property_name as l_granite_workflowinbox_sort_property_name then
          Result.append ("%Ngranite_workflowinbox_sort_property_name:")
          Result.append (l_granite_workflowinbox_sort_property_name.out)
          Result.append ("%N")    
        end  
        if attached granite_workflowinbox_sort_order as l_granite_workflowinbox_sort_order then
          Result.append ("%Ngranite_workflowinbox_sort_order:")
          Result.append (l_granite_workflowinbox_sort_order.out)
          Result.append ("%N")    
        end  
        if attached cq_workflow_job_retry as l_cq_workflow_job_retry then
          Result.append ("%Ncq_workflow_job_retry:")
          Result.append (l_cq_workflow_job_retry.out)
          Result.append ("%N")    
        end  
        if attached cq_workflow_superuser as l_cq_workflow_superuser then
          Result.append ("%Ncq_workflow_superuser:")
          Result.append (l_cq_workflow_superuser.out)
          Result.append ("%N")    
        end  
        if attached granite_workflow_inbox_query_size as l_granite_workflow_inbox_query_size then
          Result.append ("%Ngranite_workflow_inbox_query_size:")
          Result.append (l_granite_workflow_inbox_query_size.out)
          Result.append ("%N")    
        end  
        if attached granite_workflow_admin_user_group_filter as l_granite_workflow_admin_user_group_filter then
          Result.append ("%Ngranite_workflow_admin_user_group_filter:")
          Result.append (l_granite_workflow_admin_user_group_filter.out)
          Result.append ("%N")    
        end  
        if attached granite_workflow_enforce_workitem_assignee_permissions as l_granite_workflow_enforce_workitem_assignee_permissions then
          Result.append ("%Ngranite_workflow_enforce_workitem_assignee_permissions:")
          Result.append (l_granite_workflow_enforce_workitem_assignee_permissions.out)
          Result.append ("%N")    
        end  
        if attached granite_workflow_enforce_workflow_initiator_permissions as l_granite_workflow_enforce_workflow_initiator_permissions then
          Result.append ("%Ngranite_workflow_enforce_workflow_initiator_permissions:")
          Result.append (l_granite_workflow_enforce_workflow_initiator_permissions.out)
          Result.append ("%N")    
        end  
        if attached granite_workflow_inject_tenant_id_in_job_topics as l_granite_workflow_inject_tenant_id_in_job_topics then
          Result.append ("%Ngranite_workflow_inject_tenant_id_in_job_topics:")
          Result.append (l_granite_workflow_inject_tenant_id_in_job_topics.out)
          Result.append ("%N")    
        end  
        if attached granite_workflow_max_purge_save_threshold as l_granite_workflow_max_purge_save_threshold then
          Result.append ("%Ngranite_workflow_max_purge_save_threshold:")
          Result.append (l_granite_workflow_max_purge_save_threshold.out)
          Result.append ("%N")    
        end  
        if attached granite_workflow_max_purge_query_count as l_granite_workflow_max_purge_query_count then
          Result.append ("%Ngranite_workflow_max_purge_query_count:")
          Result.append (l_granite_workflow_max_purge_query_count.out)
          Result.append ("%N")    
        end  
      end
end


