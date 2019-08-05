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
package WWW::OpenAPIClient::Object::ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties;

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
use WWW::OpenAPIClient::Object::ConfigNodePropertyInteger;

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
                                  class => 'ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    'preserve/hierarchy/nodes' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'preserve.hierarchy.nodes',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'ignore/versioning' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'ignore.versioning',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'import/acl' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'import.acl',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'save/threshold' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'save.threshold',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'preserve/user/paths' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'preserve.user.paths',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'preserve/uuid' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'preserve.uuid',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'preserve/uuid/nodetypes' => {
    	datatype => 'ConfigNodePropertyArray',
    	base_name => 'preserve.uuid.nodetypes',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'preserve/uuid/subtrees' => {
    	datatype => 'ConfigNodePropertyArray',
    	base_name => 'preserve.uuid.subtrees',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'auto/commit' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'auto.commit',
    	description => '',
    	format => '',
    	read_only => '',
    		},
});

__PACKAGE__->openapi_types( {
    'preserve/hierarchy/nodes' => 'ConfigNodePropertyBoolean',
    'ignore/versioning' => 'ConfigNodePropertyBoolean',
    'import/acl' => 'ConfigNodePropertyBoolean',
    'save/threshold' => 'ConfigNodePropertyInteger',
    'preserve/user/paths' => 'ConfigNodePropertyBoolean',
    'preserve/uuid' => 'ConfigNodePropertyBoolean',
    'preserve/uuid/nodetypes' => 'ConfigNodePropertyArray',
    'preserve/uuid/subtrees' => 'ConfigNodePropertyArray',
    'auto/commit' => 'ConfigNodePropertyBoolean'
} );

__PACKAGE__->attribute_map( {
    'preserve/hierarchy/nodes' => 'preserve.hierarchy.nodes',
    'ignore/versioning' => 'ignore.versioning',
    'import/acl' => 'import.acl',
    'save/threshold' => 'save.threshold',
    'preserve/user/paths' => 'preserve.user.paths',
    'preserve/uuid' => 'preserve.uuid',
    'preserve/uuid/nodetypes' => 'preserve.uuid.nodetypes',
    'preserve/uuid/subtrees' => 'preserve.uuid.subtrees',
    'auto/commit' => 'auto.commit'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;