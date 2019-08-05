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
package WWW::OpenAPIClient::Object::ComAdobeGraniteThreaddumpThreadDumpCollectorProperties;

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
                                  class => 'ComAdobeGraniteThreaddumpThreadDumpCollectorProperties',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    'scheduler/period' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'scheduler.period',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'scheduler/run_on' => {
    	datatype => 'ConfigNodePropertyDropDown',
    	base_name => 'scheduler.runOn',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'granite/threaddump/enabled' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'granite.threaddump.enabled',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'granite/threaddump/dumps_per_file' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'granite.threaddump.dumpsPerFile',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'granite/threaddump/enable_gzip_compression' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'granite.threaddump.enableGzipCompression',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'granite/threaddump/enable_directories_compression' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'granite.threaddump.enableDirectoriesCompression',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'granite/threaddump/enable_j_stack' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'granite.threaddump.enableJStack',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'granite/threaddump/max_backup_days' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'granite.threaddump.maxBackupDays',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'granite/threaddump/backup_clean_trigger' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'granite.threaddump.backupCleanTrigger',
    	description => '',
    	format => '',
    	read_only => '',
    		},
});

__PACKAGE__->openapi_types( {
    'scheduler/period' => 'ConfigNodePropertyInteger',
    'scheduler/run_on' => 'ConfigNodePropertyDropDown',
    'granite/threaddump/enabled' => 'ConfigNodePropertyBoolean',
    'granite/threaddump/dumps_per_file' => 'ConfigNodePropertyInteger',
    'granite/threaddump/enable_gzip_compression' => 'ConfigNodePropertyBoolean',
    'granite/threaddump/enable_directories_compression' => 'ConfigNodePropertyBoolean',
    'granite/threaddump/enable_j_stack' => 'ConfigNodePropertyBoolean',
    'granite/threaddump/max_backup_days' => 'ConfigNodePropertyInteger',
    'granite/threaddump/backup_clean_trigger' => 'ConfigNodePropertyString'
} );

__PACKAGE__->attribute_map( {
    'scheduler/period' => 'scheduler.period',
    'scheduler/run_on' => 'scheduler.runOn',
    'granite/threaddump/enabled' => 'granite.threaddump.enabled',
    'granite/threaddump/dumps_per_file' => 'granite.threaddump.dumpsPerFile',
    'granite/threaddump/enable_gzip_compression' => 'granite.threaddump.enableGzipCompression',
    'granite/threaddump/enable_directories_compression' => 'granite.threaddump.enableDirectoriesCompression',
    'granite/threaddump/enable_j_stack' => 'granite.threaddump.enableJStack',
    'granite/threaddump/max_backup_days' => 'granite.threaddump.maxBackupDays',
    'granite/threaddump/backup_clean_trigger' => 'granite.threaddump.backupCleanTrigger'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;