=begin comment

Adobe Experience Manager OSGI config (AEM) API

Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API

OpenAPI spec version: 1.0.0-pre.0
Contact: opensource@shinesolutions.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
package WWW::OpenAPIClient::Object::OrgApacheSlingDatasourceDataSourceFactoryProperties;

require 5.6.0;
use strict;
use warnings;
use utf8;
use JSON qw(decode_json);
use Data::Dumper;
use Module::Runtime qw(use_module);
use Log::Any qw($log);
use Date::Parse;
use DateTime;

use WWW::OpenAPIClient::Object::ConfigNodePropertyArray;
use WWW::OpenAPIClient::Object::ConfigNodePropertyBoolean;
use WWW::OpenAPIClient::Object::ConfigNodePropertyDropDown;
use WWW::OpenAPIClient::Object::ConfigNodePropertyInteger;
use WWW::OpenAPIClient::Object::ConfigNodePropertyString;

use base ("Class::Accessor", "Class::Data::Inheritable");


#
#
#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech). Do not edit the class manually.
# REF: https://openapi-generator.tech
#

=begin comment

Adobe Experience Manager OSGI config (AEM) API

Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API

OpenAPI spec version: 1.0.0-pre.0
Contact: opensource@shinesolutions.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
__PACKAGE__->mk_classdata('attribute_map' => {});
__PACKAGE__->mk_classdata('openapi_types' => {});
__PACKAGE__->mk_classdata('method_documentation' => {}); 
__PACKAGE__->mk_classdata('class_documentation' => {});

# new object
sub new { 
    my ($class, %args) = @_; 

	my $self = bless {}, $class;
	
	foreach my $attribute (keys %{$class->attribute_map}) {
		my $args_key = $class->attribute_map->{$attribute};
		$self->$attribute( $args{ $args_key } );
	}
	
	return $self;
}  

# return perl hash
sub to_hash {
    return decode_json(JSON->new->convert_blessed->encode( shift ));
}

# used by JSON for serialization
sub TO_JSON { 
    my $self = shift;
    my $_data = {};
    foreach my $_key (keys %{$self->attribute_map}) {
        if (defined $self->{$_key}) {
            $_data->{$self->attribute_map->{$_key}} = $self->{$_key};
        }
    }
    return $_data;
}

# from Perl hashref
sub from_hash {
    my ($self, $hash) = @_;

    # loop through attributes and use openapi_types to deserialize the data
    while ( my ($_key, $_type) = each %{$self->openapi_types} ) {
    	my $_json_attribute = $self->attribute_map->{$_key}; 
        if ($_type =~ /^array\[/i) { # array
            my $_subclass = substr($_type, 6, -1);
            my @_array = ();
            foreach my $_element (@{$hash->{$_json_attribute}}) {
                push @_array, $self->_deserialize($_subclass, $_element);
            }
            $self->{$_key} = \@_array;
        } elsif (exists $hash->{$_json_attribute}) { #hash(model), primitive, datetime
            $self->{$_key} = $self->_deserialize($_type, $hash->{$_json_attribute});
        } else {
        	$log->debugf("Warning: %s (%s) does not exist in input hash\n", $_key, $_json_attribute);
        }
    }
  
    return $self;
}

# deserialize non-array data
sub _deserialize {
    my ($self, $type, $data) = @_;
    $log->debugf("deserializing %s with %s",Dumper($data), $type);
        
    if ($type eq 'DateTime') {
        return DateTime->from_epoch(epoch => str2time($data));
    } elsif ( grep( /^$type$/, ('int', 'double', 'string', 'boolean'))) {
        return $data;
    } else { # hash(model)
        my $_instance = eval "WWW::OpenAPIClient::Object::$type->new()";
        return $_instance->from_hash($data);
    }
}



__PACKAGE__->class_documentation({description => '',
                                  class => 'OrgApacheSlingDatasourceDataSourceFactoryProperties',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    'datasource/name' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'datasource.name',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'datasource/svc/prop/name' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'datasource.svc.prop.name',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'driver_class_name' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'driverClassName',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'url' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'url',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'username' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'username',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'password' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'password',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'default_auto_commit' => {
    	datatype => 'ConfigNodePropertyDropDown',
    	base_name => 'defaultAutoCommit',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'default_read_only' => {
    	datatype => 'ConfigNodePropertyDropDown',
    	base_name => 'defaultReadOnly',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'default_transaction_isolation' => {
    	datatype => 'ConfigNodePropertyDropDown',
    	base_name => 'defaultTransactionIsolation',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'default_catalog' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'defaultCatalog',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'max_active' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'maxActive',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'max_idle' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'maxIdle',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'min_idle' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'minIdle',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'initial_size' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'initialSize',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'max_wait' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'maxWait',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'max_age' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'maxAge',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'test_on_borrow' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'testOnBorrow',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'test_on_return' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'testOnReturn',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'test_while_idle' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'testWhileIdle',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'validation_query' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'validationQuery',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'validation_query_timeout' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'validationQueryTimeout',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'time_between_eviction_runs_millis' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'timeBetweenEvictionRunsMillis',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'min_evictable_idle_time_millis' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'minEvictableIdleTimeMillis',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'connection_properties' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'connectionProperties',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'init_sql' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'initSQL',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'jdbc_interceptors' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'jdbcInterceptors',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'validation_interval' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'validationInterval',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'log_validation_errors' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'logValidationErrors',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'datasource/svc/properties' => {
    	datatype => 'ConfigNodePropertyArray',
    	base_name => 'datasource.svc.properties',
    	description => '',
    	format => '',
    	read_only => '',
    		},
});

__PACKAGE__->openapi_types( {
    'datasource/name' => 'ConfigNodePropertyString',
    'datasource/svc/prop/name' => 'ConfigNodePropertyString',
    'driver_class_name' => 'ConfigNodePropertyString',
    'url' => 'ConfigNodePropertyString',
    'username' => 'ConfigNodePropertyString',
    'password' => 'ConfigNodePropertyString',
    'default_auto_commit' => 'ConfigNodePropertyDropDown',
    'default_read_only' => 'ConfigNodePropertyDropDown',
    'default_transaction_isolation' => 'ConfigNodePropertyDropDown',
    'default_catalog' => 'ConfigNodePropertyString',
    'max_active' => 'ConfigNodePropertyInteger',
    'max_idle' => 'ConfigNodePropertyInteger',
    'min_idle' => 'ConfigNodePropertyInteger',
    'initial_size' => 'ConfigNodePropertyInteger',
    'max_wait' => 'ConfigNodePropertyInteger',
    'max_age' => 'ConfigNodePropertyInteger',
    'test_on_borrow' => 'ConfigNodePropertyBoolean',
    'test_on_return' => 'ConfigNodePropertyBoolean',
    'test_while_idle' => 'ConfigNodePropertyBoolean',
    'validation_query' => 'ConfigNodePropertyString',
    'validation_query_timeout' => 'ConfigNodePropertyInteger',
    'time_between_eviction_runs_millis' => 'ConfigNodePropertyInteger',
    'min_evictable_idle_time_millis' => 'ConfigNodePropertyInteger',
    'connection_properties' => 'ConfigNodePropertyString',
    'init_sql' => 'ConfigNodePropertyString',
    'jdbc_interceptors' => 'ConfigNodePropertyString',
    'validation_interval' => 'ConfigNodePropertyInteger',
    'log_validation_errors' => 'ConfigNodePropertyBoolean',
    'datasource/svc/properties' => 'ConfigNodePropertyArray'
} );

__PACKAGE__->attribute_map( {
    'datasource/name' => 'datasource.name',
    'datasource/svc/prop/name' => 'datasource.svc.prop.name',
    'driver_class_name' => 'driverClassName',
    'url' => 'url',
    'username' => 'username',
    'password' => 'password',
    'default_auto_commit' => 'defaultAutoCommit',
    'default_read_only' => 'defaultReadOnly',
    'default_transaction_isolation' => 'defaultTransactionIsolation',
    'default_catalog' => 'defaultCatalog',
    'max_active' => 'maxActive',
    'max_idle' => 'maxIdle',
    'min_idle' => 'minIdle',
    'initial_size' => 'initialSize',
    'max_wait' => 'maxWait',
    'max_age' => 'maxAge',
    'test_on_borrow' => 'testOnBorrow',
    'test_on_return' => 'testOnReturn',
    'test_while_idle' => 'testWhileIdle',
    'validation_query' => 'validationQuery',
    'validation_query_timeout' => 'validationQueryTimeout',
    'time_between_eviction_runs_millis' => 'timeBetweenEvictionRunsMillis',
    'min_evictable_idle_time_millis' => 'minEvictableIdleTimeMillis',
    'connection_properties' => 'connectionProperties',
    'init_sql' => 'initSQL',
    'jdbc_interceptors' => 'jdbcInterceptors',
    'validation_interval' => 'validationInterval',
    'log_validation_errors' => 'logValidationErrors',
    'datasource/svc/properties' => 'datasource.svc.properties'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;