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
package WWW::OpenAPIClient::Object::OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties;

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
                                  class => 'OrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    'disabled' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'disabled',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'debug' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'debug',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'local_index_dir' => {
    	datatype => 'ConfigNodePropertyString',
    	base_name => 'localIndexDir',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'enable_open_index_async' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'enableOpenIndexAsync',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'thread_pool_size' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'threadPoolSize',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'prefetch_index_files' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'prefetchIndexFiles',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'extracted_text_cache_size_in_mb' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'extractedTextCacheSizeInMB',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'extracted_text_cache_expiry_in_secs' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'extractedTextCacheExpiryInSecs',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'always_use_pre_extracted_cache' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'alwaysUsePreExtractedCache',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'boolean_clause_limit' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'booleanClauseLimit',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'enable_hybrid_indexing' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'enableHybridIndexing',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'hybrid_queue_size' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'hybridQueueSize',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'disable_stored_index_definition' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'disableStoredIndexDefinition',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'deleted_blobs_collection_enabled' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'deletedBlobsCollectionEnabled',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'prop_index_cleaner_interval_in_secs' => {
    	datatype => 'ConfigNodePropertyInteger',
    	base_name => 'propIndexCleanerIntervalInSecs',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'enable_single_blob_index_files' => {
    	datatype => 'ConfigNodePropertyBoolean',
    	base_name => 'enableSingleBlobIndexFiles',
    	description => '',
    	format => '',
    	read_only => '',
    		},
});

__PACKAGE__->openapi_types( {
    'disabled' => 'ConfigNodePropertyBoolean',
    'debug' => 'ConfigNodePropertyBoolean',
    'local_index_dir' => 'ConfigNodePropertyString',
    'enable_open_index_async' => 'ConfigNodePropertyBoolean',
    'thread_pool_size' => 'ConfigNodePropertyInteger',
    'prefetch_index_files' => 'ConfigNodePropertyBoolean',
    'extracted_text_cache_size_in_mb' => 'ConfigNodePropertyInteger',
    'extracted_text_cache_expiry_in_secs' => 'ConfigNodePropertyInteger',
    'always_use_pre_extracted_cache' => 'ConfigNodePropertyBoolean',
    'boolean_clause_limit' => 'ConfigNodePropertyInteger',
    'enable_hybrid_indexing' => 'ConfigNodePropertyBoolean',
    'hybrid_queue_size' => 'ConfigNodePropertyInteger',
    'disable_stored_index_definition' => 'ConfigNodePropertyBoolean',
    'deleted_blobs_collection_enabled' => 'ConfigNodePropertyBoolean',
    'prop_index_cleaner_interval_in_secs' => 'ConfigNodePropertyInteger',
    'enable_single_blob_index_files' => 'ConfigNodePropertyBoolean'
} );

__PACKAGE__->attribute_map( {
    'disabled' => 'disabled',
    'debug' => 'debug',
    'local_index_dir' => 'localIndexDir',
    'enable_open_index_async' => 'enableOpenIndexAsync',
    'thread_pool_size' => 'threadPoolSize',
    'prefetch_index_files' => 'prefetchIndexFiles',
    'extracted_text_cache_size_in_mb' => 'extractedTextCacheSizeInMB',
    'extracted_text_cache_expiry_in_secs' => 'extractedTextCacheExpiryInSecs',
    'always_use_pre_extracted_cache' => 'alwaysUsePreExtractedCache',
    'boolean_clause_limit' => 'booleanClauseLimit',
    'enable_hybrid_indexing' => 'enableHybridIndexing',
    'hybrid_queue_size' => 'hybridQueueSize',
    'disable_stored_index_definition' => 'disableStoredIndexDefinition',
    'deleted_blobs_collection_enabled' => 'deletedBlobsCollectionEnabled',
    'prop_index_cleaner_interval_in_secs' => 'propIndexCleanerIntervalInSecs',
    'enable_single_blob_index_files' => 'enableSingleBlobIndexFiles'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;