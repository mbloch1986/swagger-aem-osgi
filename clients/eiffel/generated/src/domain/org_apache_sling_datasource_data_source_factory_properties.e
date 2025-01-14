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
class ORG_APACHE_SLING_DATASOURCE_DATA_SOURCE_FACTORY_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    datasource_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    datasource_svc_prop_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    driver_class_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    url: detachable CONFIG_NODE_PROPERTY_STRING 
      
    username: detachable CONFIG_NODE_PROPERTY_STRING 
      
    password: detachable CONFIG_NODE_PROPERTY_STRING 
      
    default_auto_commit: detachable CONFIG_NODE_PROPERTY_DROP_DOWN 
      
    default_read_only: detachable CONFIG_NODE_PROPERTY_DROP_DOWN 
      
    default_transaction_isolation: detachable CONFIG_NODE_PROPERTY_DROP_DOWN 
      
    default_catalog: detachable CONFIG_NODE_PROPERTY_STRING 
      
    max_active: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    max_idle: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    min_idle: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    initial_size: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    max_wait: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    max_age: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    test_on_borrow: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    test_on_return: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    test_while_idle: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    validation_query: detachable CONFIG_NODE_PROPERTY_STRING 
      
    validation_query_timeout: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    time_between_eviction_runs_millis: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    min_evictable_idle_time_millis: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    connection_properties: detachable CONFIG_NODE_PROPERTY_STRING 
      
    init_sq_l: detachable CONFIG_NODE_PROPERTY_STRING 
      
    jdbc_interceptors: detachable CONFIG_NODE_PROPERTY_STRING 
      
    validation_interval: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    log_validation_errors: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    datasource_svc_properties: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_datasource_name (a_name: like datasource_name)
        -- Set 'datasource_name' with 'a_name'.
      do
        datasource_name := a_name
      ensure
        datasource_name_set: datasource_name = a_name		
      end

    set_datasource_svc_prop_name (a_name: like datasource_svc_prop_name)
        -- Set 'datasource_svc_prop_name' with 'a_name'.
      do
        datasource_svc_prop_name := a_name
      ensure
        datasource_svc_prop_name_set: datasource_svc_prop_name = a_name		
      end

    set_driver_class_name (a_name: like driver_class_name)
        -- Set 'driver_class_name' with 'a_name'.
      do
        driver_class_name := a_name
      ensure
        driver_class_name_set: driver_class_name = a_name		
      end

    set_url (a_name: like url)
        -- Set 'url' with 'a_name'.
      do
        url := a_name
      ensure
        url_set: url = a_name		
      end

    set_username (a_name: like username)
        -- Set 'username' with 'a_name'.
      do
        username := a_name
      ensure
        username_set: username = a_name		
      end

    set_password (a_name: like password)
        -- Set 'password' with 'a_name'.
      do
        password := a_name
      ensure
        password_set: password = a_name		
      end

    set_default_auto_commit (a_name: like default_auto_commit)
        -- Set 'default_auto_commit' with 'a_name'.
      do
        default_auto_commit := a_name
      ensure
        default_auto_commit_set: default_auto_commit = a_name		
      end

    set_default_read_only (a_name: like default_read_only)
        -- Set 'default_read_only' with 'a_name'.
      do
        default_read_only := a_name
      ensure
        default_read_only_set: default_read_only = a_name		
      end

    set_default_transaction_isolation (a_name: like default_transaction_isolation)
        -- Set 'default_transaction_isolation' with 'a_name'.
      do
        default_transaction_isolation := a_name
      ensure
        default_transaction_isolation_set: default_transaction_isolation = a_name		
      end

    set_default_catalog (a_name: like default_catalog)
        -- Set 'default_catalog' with 'a_name'.
      do
        default_catalog := a_name
      ensure
        default_catalog_set: default_catalog = a_name		
      end

    set_max_active (a_name: like max_active)
        -- Set 'max_active' with 'a_name'.
      do
        max_active := a_name
      ensure
        max_active_set: max_active = a_name		
      end

    set_max_idle (a_name: like max_idle)
        -- Set 'max_idle' with 'a_name'.
      do
        max_idle := a_name
      ensure
        max_idle_set: max_idle = a_name		
      end

    set_min_idle (a_name: like min_idle)
        -- Set 'min_idle' with 'a_name'.
      do
        min_idle := a_name
      ensure
        min_idle_set: min_idle = a_name		
      end

    set_initial_size (a_name: like initial_size)
        -- Set 'initial_size' with 'a_name'.
      do
        initial_size := a_name
      ensure
        initial_size_set: initial_size = a_name		
      end

    set_max_wait (a_name: like max_wait)
        -- Set 'max_wait' with 'a_name'.
      do
        max_wait := a_name
      ensure
        max_wait_set: max_wait = a_name		
      end

    set_max_age (a_name: like max_age)
        -- Set 'max_age' with 'a_name'.
      do
        max_age := a_name
      ensure
        max_age_set: max_age = a_name		
      end

    set_test_on_borrow (a_name: like test_on_borrow)
        -- Set 'test_on_borrow' with 'a_name'.
      do
        test_on_borrow := a_name
      ensure
        test_on_borrow_set: test_on_borrow = a_name		
      end

    set_test_on_return (a_name: like test_on_return)
        -- Set 'test_on_return' with 'a_name'.
      do
        test_on_return := a_name
      ensure
        test_on_return_set: test_on_return = a_name		
      end

    set_test_while_idle (a_name: like test_while_idle)
        -- Set 'test_while_idle' with 'a_name'.
      do
        test_while_idle := a_name
      ensure
        test_while_idle_set: test_while_idle = a_name		
      end

    set_validation_query (a_name: like validation_query)
        -- Set 'validation_query' with 'a_name'.
      do
        validation_query := a_name
      ensure
        validation_query_set: validation_query = a_name		
      end

    set_validation_query_timeout (a_name: like validation_query_timeout)
        -- Set 'validation_query_timeout' with 'a_name'.
      do
        validation_query_timeout := a_name
      ensure
        validation_query_timeout_set: validation_query_timeout = a_name		
      end

    set_time_between_eviction_runs_millis (a_name: like time_between_eviction_runs_millis)
        -- Set 'time_between_eviction_runs_millis' with 'a_name'.
      do
        time_between_eviction_runs_millis := a_name
      ensure
        time_between_eviction_runs_millis_set: time_between_eviction_runs_millis = a_name		
      end

    set_min_evictable_idle_time_millis (a_name: like min_evictable_idle_time_millis)
        -- Set 'min_evictable_idle_time_millis' with 'a_name'.
      do
        min_evictable_idle_time_millis := a_name
      ensure
        min_evictable_idle_time_millis_set: min_evictable_idle_time_millis = a_name		
      end

    set_connection_properties (a_name: like connection_properties)
        -- Set 'connection_properties' with 'a_name'.
      do
        connection_properties := a_name
      ensure
        connection_properties_set: connection_properties = a_name		
      end

    set_init_sq_l (a_name: like init_sq_l)
        -- Set 'init_sq_l' with 'a_name'.
      do
        init_sq_l := a_name
      ensure
        init_sq_l_set: init_sq_l = a_name		
      end

    set_jdbc_interceptors (a_name: like jdbc_interceptors)
        -- Set 'jdbc_interceptors' with 'a_name'.
      do
        jdbc_interceptors := a_name
      ensure
        jdbc_interceptors_set: jdbc_interceptors = a_name		
      end

    set_validation_interval (a_name: like validation_interval)
        -- Set 'validation_interval' with 'a_name'.
      do
        validation_interval := a_name
      ensure
        validation_interval_set: validation_interval = a_name		
      end

    set_log_validation_errors (a_name: like log_validation_errors)
        -- Set 'log_validation_errors' with 'a_name'.
      do
        log_validation_errors := a_name
      ensure
        log_validation_errors_set: log_validation_errors = a_name		
      end

    set_datasource_svc_properties (a_name: like datasource_svc_properties)
        -- Set 'datasource_svc_properties' with 'a_name'.
      do
        datasource_svc_properties := a_name
      ensure
        datasource_svc_properties_set: datasource_svc_properties = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_SLING_DATASOURCE_DATA_SOURCE_FACTORY_PROPERTIES%N")
        if attached datasource_name as l_datasource_name then
          Result.append ("%Ndatasource_name:")
          Result.append (l_datasource_name.out)
          Result.append ("%N")    
        end  
        if attached datasource_svc_prop_name as l_datasource_svc_prop_name then
          Result.append ("%Ndatasource_svc_prop_name:")
          Result.append (l_datasource_svc_prop_name.out)
          Result.append ("%N")    
        end  
        if attached driver_class_name as l_driver_class_name then
          Result.append ("%Ndriver_class_name:")
          Result.append (l_driver_class_name.out)
          Result.append ("%N")    
        end  
        if attached url as l_url then
          Result.append ("%Nurl:")
          Result.append (l_url.out)
          Result.append ("%N")    
        end  
        if attached username as l_username then
          Result.append ("%Nusername:")
          Result.append (l_username.out)
          Result.append ("%N")    
        end  
        if attached password as l_password then
          Result.append ("%Npassword:")
          Result.append (l_password.out)
          Result.append ("%N")    
        end  
        if attached default_auto_commit as l_default_auto_commit then
          Result.append ("%Ndefault_auto_commit:")
          Result.append (l_default_auto_commit.out)
          Result.append ("%N")    
        end  
        if attached default_read_only as l_default_read_only then
          Result.append ("%Ndefault_read_only:")
          Result.append (l_default_read_only.out)
          Result.append ("%N")    
        end  
        if attached default_transaction_isolation as l_default_transaction_isolation then
          Result.append ("%Ndefault_transaction_isolation:")
          Result.append (l_default_transaction_isolation.out)
          Result.append ("%N")    
        end  
        if attached default_catalog as l_default_catalog then
          Result.append ("%Ndefault_catalog:")
          Result.append (l_default_catalog.out)
          Result.append ("%N")    
        end  
        if attached max_active as l_max_active then
          Result.append ("%Nmax_active:")
          Result.append (l_max_active.out)
          Result.append ("%N")    
        end  
        if attached max_idle as l_max_idle then
          Result.append ("%Nmax_idle:")
          Result.append (l_max_idle.out)
          Result.append ("%N")    
        end  
        if attached min_idle as l_min_idle then
          Result.append ("%Nmin_idle:")
          Result.append (l_min_idle.out)
          Result.append ("%N")    
        end  
        if attached initial_size as l_initial_size then
          Result.append ("%Ninitial_size:")
          Result.append (l_initial_size.out)
          Result.append ("%N")    
        end  
        if attached max_wait as l_max_wait then
          Result.append ("%Nmax_wait:")
          Result.append (l_max_wait.out)
          Result.append ("%N")    
        end  
        if attached max_age as l_max_age then
          Result.append ("%Nmax_age:")
          Result.append (l_max_age.out)
          Result.append ("%N")    
        end  
        if attached test_on_borrow as l_test_on_borrow then
          Result.append ("%Ntest_on_borrow:")
          Result.append (l_test_on_borrow.out)
          Result.append ("%N")    
        end  
        if attached test_on_return as l_test_on_return then
          Result.append ("%Ntest_on_return:")
          Result.append (l_test_on_return.out)
          Result.append ("%N")    
        end  
        if attached test_while_idle as l_test_while_idle then
          Result.append ("%Ntest_while_idle:")
          Result.append (l_test_while_idle.out)
          Result.append ("%N")    
        end  
        if attached validation_query as l_validation_query then
          Result.append ("%Nvalidation_query:")
          Result.append (l_validation_query.out)
          Result.append ("%N")    
        end  
        if attached validation_query_timeout as l_validation_query_timeout then
          Result.append ("%Nvalidation_query_timeout:")
          Result.append (l_validation_query_timeout.out)
          Result.append ("%N")    
        end  
        if attached time_between_eviction_runs_millis as l_time_between_eviction_runs_millis then
          Result.append ("%Ntime_between_eviction_runs_millis:")
          Result.append (l_time_between_eviction_runs_millis.out)
          Result.append ("%N")    
        end  
        if attached min_evictable_idle_time_millis as l_min_evictable_idle_time_millis then
          Result.append ("%Nmin_evictable_idle_time_millis:")
          Result.append (l_min_evictable_idle_time_millis.out)
          Result.append ("%N")    
        end  
        if attached connection_properties as l_connection_properties then
          Result.append ("%Nconnection_properties:")
          Result.append (l_connection_properties.out)
          Result.append ("%N")    
        end  
        if attached init_sq_l as l_init_sq_l then
          Result.append ("%Ninit_sq_l:")
          Result.append (l_init_sq_l.out)
          Result.append ("%N")    
        end  
        if attached jdbc_interceptors as l_jdbc_interceptors then
          Result.append ("%Njdbc_interceptors:")
          Result.append (l_jdbc_interceptors.out)
          Result.append ("%N")    
        end  
        if attached validation_interval as l_validation_interval then
          Result.append ("%Nvalidation_interval:")
          Result.append (l_validation_interval.out)
          Result.append ("%N")    
        end  
        if attached log_validation_errors as l_log_validation_errors then
          Result.append ("%Nlog_validation_errors:")
          Result.append (l_log_validation_errors.out)
          Result.append ("%N")    
        end  
        if attached datasource_svc_properties as l_datasource_svc_properties then
          Result.append ("%Ndatasource_svc_properties:")
          Result.append (l_datasource_svc_properties.out)
          Result.append ("%N")    
        end  
      end
end


