=begin
#Adobe Experience Manager OSGI config (AEM) API

#Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API

The version of the OpenAPI document: 1.0.0-pre.0
Contact: opensource@shinesolutions.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.0.1-SNAPSHOT

=end

require 'date'

module SwaggerAemOsgiClient
  class OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties
    attr_accessor :resource_resolver_searchpath

    attr_accessor :resource_resolver_manglenamespaces

    attr_accessor :resource_resolver_allow_direct

    attr_accessor :resource_resolver_required_providers

    attr_accessor :resource_resolver_required_providernames

    attr_accessor :resource_resolver_virtual

    attr_accessor :resource_resolver_mapping

    attr_accessor :resource_resolver_map_location

    attr_accessor :resource_resolver_map_observation

    attr_accessor :resource_resolver_default_vanity_redirect_status

    attr_accessor :resource_resolver_enable_vanitypath

    attr_accessor :resource_resolver_vanitypath_max_entries

    attr_accessor :resource_resolver_vanitypath_max_entries_startup

    attr_accessor :resource_resolver_vanitypath_bloomfilter_max_bytes

    attr_accessor :resource_resolver_optimize_alias_resolution

    attr_accessor :resource_resolver_vanitypath_whitelist

    attr_accessor :resource_resolver_vanitypath_blacklist

    attr_accessor :resource_resolver_vanity_precedence

    attr_accessor :resource_resolver_providerhandling_paranoid

    attr_accessor :resource_resolver_log_closing

    attr_accessor :resource_resolver_log_unclosed

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'resource_resolver_searchpath' => :'resource.resolver.searchpath',
        :'resource_resolver_manglenamespaces' => :'resource.resolver.manglenamespaces',
        :'resource_resolver_allow_direct' => :'resource.resolver.allowDirect',
        :'resource_resolver_required_providers' => :'resource.resolver.required.providers',
        :'resource_resolver_required_providernames' => :'resource.resolver.required.providernames',
        :'resource_resolver_virtual' => :'resource.resolver.virtual',
        :'resource_resolver_mapping' => :'resource.resolver.mapping',
        :'resource_resolver_map_location' => :'resource.resolver.map.location',
        :'resource_resolver_map_observation' => :'resource.resolver.map.observation',
        :'resource_resolver_default_vanity_redirect_status' => :'resource.resolver.default.vanity.redirect.status',
        :'resource_resolver_enable_vanitypath' => :'resource.resolver.enable.vanitypath',
        :'resource_resolver_vanitypath_max_entries' => :'resource.resolver.vanitypath.maxEntries',
        :'resource_resolver_vanitypath_max_entries_startup' => :'resource.resolver.vanitypath.maxEntries.startup',
        :'resource_resolver_vanitypath_bloomfilter_max_bytes' => :'resource.resolver.vanitypath.bloomfilter.maxBytes',
        :'resource_resolver_optimize_alias_resolution' => :'resource.resolver.optimize.alias.resolution',
        :'resource_resolver_vanitypath_whitelist' => :'resource.resolver.vanitypath.whitelist',
        :'resource_resolver_vanitypath_blacklist' => :'resource.resolver.vanitypath.blacklist',
        :'resource_resolver_vanity_precedence' => :'resource.resolver.vanity.precedence',
        :'resource_resolver_providerhandling_paranoid' => :'resource.resolver.providerhandling.paranoid',
        :'resource_resolver_log_closing' => :'resource.resolver.log.closing',
        :'resource_resolver_log_unclosed' => :'resource.resolver.log.unclosed'
      }
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'resource_resolver_searchpath' => :'ConfigNodePropertyArray',
        :'resource_resolver_manglenamespaces' => :'ConfigNodePropertyBoolean',
        :'resource_resolver_allow_direct' => :'ConfigNodePropertyBoolean',
        :'resource_resolver_required_providers' => :'ConfigNodePropertyArray',
        :'resource_resolver_required_providernames' => :'ConfigNodePropertyArray',
        :'resource_resolver_virtual' => :'ConfigNodePropertyArray',
        :'resource_resolver_mapping' => :'ConfigNodePropertyArray',
        :'resource_resolver_map_location' => :'ConfigNodePropertyString',
        :'resource_resolver_map_observation' => :'ConfigNodePropertyArray',
        :'resource_resolver_default_vanity_redirect_status' => :'ConfigNodePropertyInteger',
        :'resource_resolver_enable_vanitypath' => :'ConfigNodePropertyBoolean',
        :'resource_resolver_vanitypath_max_entries' => :'ConfigNodePropertyInteger',
        :'resource_resolver_vanitypath_max_entries_startup' => :'ConfigNodePropertyBoolean',
        :'resource_resolver_vanitypath_bloomfilter_max_bytes' => :'ConfigNodePropertyInteger',
        :'resource_resolver_optimize_alias_resolution' => :'ConfigNodePropertyBoolean',
        :'resource_resolver_vanitypath_whitelist' => :'ConfigNodePropertyArray',
        :'resource_resolver_vanitypath_blacklist' => :'ConfigNodePropertyArray',
        :'resource_resolver_vanity_precedence' => :'ConfigNodePropertyBoolean',
        :'resource_resolver_providerhandling_paranoid' => :'ConfigNodePropertyBoolean',
        :'resource_resolver_log_closing' => :'ConfigNodePropertyBoolean',
        :'resource_resolver_log_unclosed' => :'ConfigNodePropertyBoolean'
      }
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `SwaggerAemOsgiClient::OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `SwaggerAemOsgiClient::OrgApacheSlingJcrResourceInternalJcrResourceResolverFactoryImplProperties`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'resource_resolver_searchpath')
        self.resource_resolver_searchpath = attributes[:'resource_resolver_searchpath']
      end

      if attributes.key?(:'resource_resolver_manglenamespaces')
        self.resource_resolver_manglenamespaces = attributes[:'resource_resolver_manglenamespaces']
      end

      if attributes.key?(:'resource_resolver_allow_direct')
        self.resource_resolver_allow_direct = attributes[:'resource_resolver_allow_direct']
      end

      if attributes.key?(:'resource_resolver_required_providers')
        self.resource_resolver_required_providers = attributes[:'resource_resolver_required_providers']
      end

      if attributes.key?(:'resource_resolver_required_providernames')
        self.resource_resolver_required_providernames = attributes[:'resource_resolver_required_providernames']
      end

      if attributes.key?(:'resource_resolver_virtual')
        self.resource_resolver_virtual = attributes[:'resource_resolver_virtual']
      end

      if attributes.key?(:'resource_resolver_mapping')
        self.resource_resolver_mapping = attributes[:'resource_resolver_mapping']
      end

      if attributes.key?(:'resource_resolver_map_location')
        self.resource_resolver_map_location = attributes[:'resource_resolver_map_location']
      end

      if attributes.key?(:'resource_resolver_map_observation')
        self.resource_resolver_map_observation = attributes[:'resource_resolver_map_observation']
      end

      if attributes.key?(:'resource_resolver_default_vanity_redirect_status')
        self.resource_resolver_default_vanity_redirect_status = attributes[:'resource_resolver_default_vanity_redirect_status']
      end

      if attributes.key?(:'resource_resolver_enable_vanitypath')
        self.resource_resolver_enable_vanitypath = attributes[:'resource_resolver_enable_vanitypath']
      end

      if attributes.key?(:'resource_resolver_vanitypath_max_entries')
        self.resource_resolver_vanitypath_max_entries = attributes[:'resource_resolver_vanitypath_max_entries']
      end

      if attributes.key?(:'resource_resolver_vanitypath_max_entries_startup')
        self.resource_resolver_vanitypath_max_entries_startup = attributes[:'resource_resolver_vanitypath_max_entries_startup']
      end

      if attributes.key?(:'resource_resolver_vanitypath_bloomfilter_max_bytes')
        self.resource_resolver_vanitypath_bloomfilter_max_bytes = attributes[:'resource_resolver_vanitypath_bloomfilter_max_bytes']
      end

      if attributes.key?(:'resource_resolver_optimize_alias_resolution')
        self.resource_resolver_optimize_alias_resolution = attributes[:'resource_resolver_optimize_alias_resolution']
      end

      if attributes.key?(:'resource_resolver_vanitypath_whitelist')
        self.resource_resolver_vanitypath_whitelist = attributes[:'resource_resolver_vanitypath_whitelist']
      end

      if attributes.key?(:'resource_resolver_vanitypath_blacklist')
        self.resource_resolver_vanitypath_blacklist = attributes[:'resource_resolver_vanitypath_blacklist']
      end

      if attributes.key?(:'resource_resolver_vanity_precedence')
        self.resource_resolver_vanity_precedence = attributes[:'resource_resolver_vanity_precedence']
      end

      if attributes.key?(:'resource_resolver_providerhandling_paranoid')
        self.resource_resolver_providerhandling_paranoid = attributes[:'resource_resolver_providerhandling_paranoid']
      end

      if attributes.key?(:'resource_resolver_log_closing')
        self.resource_resolver_log_closing = attributes[:'resource_resolver_log_closing']
      end

      if attributes.key?(:'resource_resolver_log_unclosed')
        self.resource_resolver_log_unclosed = attributes[:'resource_resolver_log_unclosed']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          resource_resolver_searchpath == o.resource_resolver_searchpath &&
          resource_resolver_manglenamespaces == o.resource_resolver_manglenamespaces &&
          resource_resolver_allow_direct == o.resource_resolver_allow_direct &&
          resource_resolver_required_providers == o.resource_resolver_required_providers &&
          resource_resolver_required_providernames == o.resource_resolver_required_providernames &&
          resource_resolver_virtual == o.resource_resolver_virtual &&
          resource_resolver_mapping == o.resource_resolver_mapping &&
          resource_resolver_map_location == o.resource_resolver_map_location &&
          resource_resolver_map_observation == o.resource_resolver_map_observation &&
          resource_resolver_default_vanity_redirect_status == o.resource_resolver_default_vanity_redirect_status &&
          resource_resolver_enable_vanitypath == o.resource_resolver_enable_vanitypath &&
          resource_resolver_vanitypath_max_entries == o.resource_resolver_vanitypath_max_entries &&
          resource_resolver_vanitypath_max_entries_startup == o.resource_resolver_vanitypath_max_entries_startup &&
          resource_resolver_vanitypath_bloomfilter_max_bytes == o.resource_resolver_vanitypath_bloomfilter_max_bytes &&
          resource_resolver_optimize_alias_resolution == o.resource_resolver_optimize_alias_resolution &&
          resource_resolver_vanitypath_whitelist == o.resource_resolver_vanitypath_whitelist &&
          resource_resolver_vanitypath_blacklist == o.resource_resolver_vanitypath_blacklist &&
          resource_resolver_vanity_precedence == o.resource_resolver_vanity_precedence &&
          resource_resolver_providerhandling_paranoid == o.resource_resolver_providerhandling_paranoid &&
          resource_resolver_log_closing == o.resource_resolver_log_closing &&
          resource_resolver_log_unclosed == o.resource_resolver_log_unclosed
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [resource_resolver_searchpath, resource_resolver_manglenamespaces, resource_resolver_allow_direct, resource_resolver_required_providers, resource_resolver_required_providernames, resource_resolver_virtual, resource_resolver_mapping, resource_resolver_map_location, resource_resolver_map_observation, resource_resolver_default_vanity_redirect_status, resource_resolver_enable_vanitypath, resource_resolver_vanitypath_max_entries, resource_resolver_vanitypath_max_entries_startup, resource_resolver_vanitypath_bloomfilter_max_bytes, resource_resolver_optimize_alias_resolution, resource_resolver_vanitypath_whitelist, resource_resolver_vanitypath_blacklist, resource_resolver_vanity_precedence, resource_resolver_providerhandling_paranoid, resource_resolver_log_closing, resource_resolver_log_unclosed].hash
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def self.build_from_hash(attributes)
      new.build_from_hash(attributes)
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def build_from_hash(attributes)
      return nil unless attributes.is_a?(Hash)
      self.class.openapi_types.each_pair do |key, type|
        if type =~ /\AArray<(.*)>/i
          # check to ensure the input is an array given that the attribute
          # is documented as an array but the input is not
          if attributes[self.class.attribute_map[key]].is_a?(Array)
            self.send("#{key}=", attributes[self.class.attribute_map[key]].map { |v| _deserialize($1, v) })
          end
        elsif !attributes[self.class.attribute_map[key]].nil?
          self.send("#{key}=", _deserialize(type, attributes[self.class.attribute_map[key]]))
        end # or else data not found in attributes(hash), not an issue as the data can be optional
      end

      self
    end

    # Deserializes the data based on type
    # @param string type Data type
    # @param string value Value to be deserialized
    # @return [Object] Deserialized data
    def _deserialize(type, value)
      case type.to_sym
      when :DateTime
        DateTime.parse(value)
      when :Date
        Date.parse(value)
      when :String
        value.to_s
      when :Integer
        value.to_i
      when :Float
        value.to_f
      when :Boolean
        if value.to_s =~ /\A(true|t|yes|y|1)\z/i
          true
        else
          false
        end
      when :Object
        # generic object (usually a Hash), return directly
        value
      when /\AArray<(?<inner_type>.+)>\z/
        inner_type = Regexp.last_match[:inner_type]
        value.map { |v| _deserialize(inner_type, v) }
      when /\AHash<(?<k_type>.+?), (?<v_type>.+)>\z/
        k_type = Regexp.last_match[:k_type]
        v_type = Regexp.last_match[:v_type]
        {}.tap do |hash|
          value.each do |k, v|
            hash[_deserialize(k_type, k)] = _deserialize(v_type, v)
          end
        end
      else # model
        SwaggerAemOsgiClient.const_get(type).build_from_hash(value)
      end
    end

    # Returns the string representation of the object
    # @return [String] String presentation of the object
    def to_s
      to_hash.to_s
    end

    # to_body is an alias to to_hash (backward compatibility)
    # @return [Hash] Returns the object in the form of hash
    def to_body
      to_hash
    end

    # Returns the object in the form of hash
    # @return [Hash] Returns the object in the form of hash
    def to_hash
      hash = {}
      self.class.attribute_map.each_pair do |attr, param|
        value = self.send(attr)
        next if value.nil?
        hash[param] = _to_hash(value)
      end
      hash
    end

    # Outputs non-array value in the form of hash
    # For object, use to_hash. Otherwise, just return the value
    # @param [Object] value Any valid value
    # @return [Hash] Returns the value in the form of hash
    def _to_hash(value)
      if value.is_a?(Array)
        value.compact.map { |v| _to_hash(v) }
      elsif value.is_a?(Hash)
        {}.tap do |hash|
          value.each { |k, v| hash[k] = _to_hash(v) }
        end
      elsif value.respond_to? :to_hash
        value.to_hash
      else
        value
      end
    end
  end
end
