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
  class OrgApacheSlingCommonsLogLogManagerProperties
    attr_accessor :org_apache_sling_commons_log_level

    attr_accessor :org_apache_sling_commons_log_file

    attr_accessor :org_apache_sling_commons_log_file_number

    attr_accessor :org_apache_sling_commons_log_file_size

    attr_accessor :org_apache_sling_commons_log_pattern

    attr_accessor :org_apache_sling_commons_log_configuration_file

    attr_accessor :org_apache_sling_commons_log_packaging_data_enabled

    attr_accessor :org_apache_sling_commons_log_max_caller_data_depth

    attr_accessor :org_apache_sling_commons_log_max_old_file_count_in_dump

    attr_accessor :org_apache_sling_commons_log_num_of_lines

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'org_apache_sling_commons_log_level' => :'org.apache.sling.commons.log.level',
        :'org_apache_sling_commons_log_file' => :'org.apache.sling.commons.log.file',
        :'org_apache_sling_commons_log_file_number' => :'org.apache.sling.commons.log.file.number',
        :'org_apache_sling_commons_log_file_size' => :'org.apache.sling.commons.log.file.size',
        :'org_apache_sling_commons_log_pattern' => :'org.apache.sling.commons.log.pattern',
        :'org_apache_sling_commons_log_configuration_file' => :'org.apache.sling.commons.log.configurationFile',
        :'org_apache_sling_commons_log_packaging_data_enabled' => :'org.apache.sling.commons.log.packagingDataEnabled',
        :'org_apache_sling_commons_log_max_caller_data_depth' => :'org.apache.sling.commons.log.maxCallerDataDepth',
        :'org_apache_sling_commons_log_max_old_file_count_in_dump' => :'org.apache.sling.commons.log.maxOldFileCountInDump',
        :'org_apache_sling_commons_log_num_of_lines' => :'org.apache.sling.commons.log.numOfLines'
      }
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'org_apache_sling_commons_log_level' => :'ConfigNodePropertyDropDown',
        :'org_apache_sling_commons_log_file' => :'ConfigNodePropertyString',
        :'org_apache_sling_commons_log_file_number' => :'ConfigNodePropertyInteger',
        :'org_apache_sling_commons_log_file_size' => :'ConfigNodePropertyString',
        :'org_apache_sling_commons_log_pattern' => :'ConfigNodePropertyString',
        :'org_apache_sling_commons_log_configuration_file' => :'ConfigNodePropertyString',
        :'org_apache_sling_commons_log_packaging_data_enabled' => :'ConfigNodePropertyBoolean',
        :'org_apache_sling_commons_log_max_caller_data_depth' => :'ConfigNodePropertyInteger',
        :'org_apache_sling_commons_log_max_old_file_count_in_dump' => :'ConfigNodePropertyInteger',
        :'org_apache_sling_commons_log_num_of_lines' => :'ConfigNodePropertyInteger'
      }
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `SwaggerAemOsgiClient::OrgApacheSlingCommonsLogLogManagerProperties` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `SwaggerAemOsgiClient::OrgApacheSlingCommonsLogLogManagerProperties`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'org_apache_sling_commons_log_level')
        self.org_apache_sling_commons_log_level = attributes[:'org_apache_sling_commons_log_level']
      end

      if attributes.key?(:'org_apache_sling_commons_log_file')
        self.org_apache_sling_commons_log_file = attributes[:'org_apache_sling_commons_log_file']
      end

      if attributes.key?(:'org_apache_sling_commons_log_file_number')
        self.org_apache_sling_commons_log_file_number = attributes[:'org_apache_sling_commons_log_file_number']
      end

      if attributes.key?(:'org_apache_sling_commons_log_file_size')
        self.org_apache_sling_commons_log_file_size = attributes[:'org_apache_sling_commons_log_file_size']
      end

      if attributes.key?(:'org_apache_sling_commons_log_pattern')
        self.org_apache_sling_commons_log_pattern = attributes[:'org_apache_sling_commons_log_pattern']
      end

      if attributes.key?(:'org_apache_sling_commons_log_configuration_file')
        self.org_apache_sling_commons_log_configuration_file = attributes[:'org_apache_sling_commons_log_configuration_file']
      end

      if attributes.key?(:'org_apache_sling_commons_log_packaging_data_enabled')
        self.org_apache_sling_commons_log_packaging_data_enabled = attributes[:'org_apache_sling_commons_log_packaging_data_enabled']
      end

      if attributes.key?(:'org_apache_sling_commons_log_max_caller_data_depth')
        self.org_apache_sling_commons_log_max_caller_data_depth = attributes[:'org_apache_sling_commons_log_max_caller_data_depth']
      end

      if attributes.key?(:'org_apache_sling_commons_log_max_old_file_count_in_dump')
        self.org_apache_sling_commons_log_max_old_file_count_in_dump = attributes[:'org_apache_sling_commons_log_max_old_file_count_in_dump']
      end

      if attributes.key?(:'org_apache_sling_commons_log_num_of_lines')
        self.org_apache_sling_commons_log_num_of_lines = attributes[:'org_apache_sling_commons_log_num_of_lines']
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
          org_apache_sling_commons_log_level == o.org_apache_sling_commons_log_level &&
          org_apache_sling_commons_log_file == o.org_apache_sling_commons_log_file &&
          org_apache_sling_commons_log_file_number == o.org_apache_sling_commons_log_file_number &&
          org_apache_sling_commons_log_file_size == o.org_apache_sling_commons_log_file_size &&
          org_apache_sling_commons_log_pattern == o.org_apache_sling_commons_log_pattern &&
          org_apache_sling_commons_log_configuration_file == o.org_apache_sling_commons_log_configuration_file &&
          org_apache_sling_commons_log_packaging_data_enabled == o.org_apache_sling_commons_log_packaging_data_enabled &&
          org_apache_sling_commons_log_max_caller_data_depth == o.org_apache_sling_commons_log_max_caller_data_depth &&
          org_apache_sling_commons_log_max_old_file_count_in_dump == o.org_apache_sling_commons_log_max_old_file_count_in_dump &&
          org_apache_sling_commons_log_num_of_lines == o.org_apache_sling_commons_log_num_of_lines
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [org_apache_sling_commons_log_level, org_apache_sling_commons_log_file, org_apache_sling_commons_log_file_number, org_apache_sling_commons_log_file_size, org_apache_sling_commons_log_pattern, org_apache_sling_commons_log_configuration_file, org_apache_sling_commons_log_packaging_data_enabled, org_apache_sling_commons_log_max_caller_data_depth, org_apache_sling_commons_log_max_old_file_count_in_dump, org_apache_sling_commons_log_num_of_lines].hash
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
