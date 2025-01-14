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
package WWW::OpenAPIClient::Object::ComAdobeGraniteAuthOauthAccesstokenProviderProperties;

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
                                  class => 'ComAdobeGraniteAuthOauthAccesstokenProviderProperties',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    'name' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'name',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'auth/token/provider/title' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'auth.token.provider.title',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'auth/token/provider/default/claims' => {
    	datatype => 'ConfigNodePropertyArray',
    	base_name => 'auth.token.provider.default.claims',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'auth/token/provider/endpoint' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'auth.token.provider.endpoint',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'auth/access/token/request' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'auth.access.token.request',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'auth/token/provider/keypair/alias' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'auth.token.provider.keypair.alias',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'auth/token/provider/conn/timeout' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'auth.token.provider.conn.timeout',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'auth/token/provider/so/timeout' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'auth.token.provider.so.timeout',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'auth/token/provider/client/id' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'auth.token.provider.client.id',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'auth/token/provider/scope' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'auth.token.provider.scope',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'auth/token/provider/reuse/access/token' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'auth.token.provider.reuse.access.token',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'auth/token/provider/relaxed/ssl' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'auth.token.provider.relaxed.ssl',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'token/request/customizer/type' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'token.request.customizer.type',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'auth/token/validator/type' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'auth.token.validator.type',
    	description => '',
    	format => '',
    	read_only => '',
    		},
});

__PACKAGE__->openapi_types( {
    'name' => 'ConfigNodePropertyString',
    'auth/token/provider/title' => 'ConfigNodePropertyString',
    'auth/token/provider/default/claims' => 'ConfigNodePropertyArray',
    'auth/token/provider/endpoint' => 'ConfigNodePropertyString',
    'auth/access/token/request' => 'ConfigNodePropertyString',
    'auth/token/provider/keypair/alias' => 'ConfigNodePropertyString',
    'auth/token/provider/conn/timeout' => 'ConfigNodePropertyInteger',
    'auth/token/provider/so/timeout' => 'ConfigNodePropertyInteger',
    'auth/token/provider/client/id' => 'ConfigNodePropertyString',
    'auth/token/provider/scope' => 'ConfigNodePropertyString',
    'auth/token/provider/reuse/access/token' => 'ConfigNodePropertyBoolean',
    'auth/token/provider/relaxed/ssl' => 'ConfigNodePropertyBoolean',
    'token/request/customizer/type' => 'ConfigNodePropertyString',
    'auth/token/validator/type' => 'ConfigNodePropertyString'
} );

__PACKAGE__->attribute_map( {
    'name' => 'name',
    'auth/token/provider/title' => 'auth.token.provider.title',
    'auth/token/provider/default/claims' => 'auth.token.provider.default.claims',
    'auth/token/provider/endpoint' => 'auth.token.provider.endpoint',
    'auth/access/token/request' => 'auth.access.token.request',
    'auth/token/provider/keypair/alias' => 'auth.token.provider.keypair.alias',
    'auth/token/provider/conn/timeout' => 'auth.token.provider.conn.timeout',
    'auth/token/provider/so/timeout' => 'auth.token.provider.so.timeout',
    'auth/token/provider/client/id' => 'auth.token.provider.client.id',
    'auth/token/provider/scope' => 'auth.token.provider.scope',
    'auth/token/provider/reuse/access/token' => 'auth.token.provider.reuse.access.token',
    'auth/token/provider/relaxed/ssl' => 'auth.token.provider.relaxed.ssl',
    'token/request/customizer/type' => 'token.request.customizer.type',
    'auth/token/validator/type' => 'auth.token.validator.type'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;
