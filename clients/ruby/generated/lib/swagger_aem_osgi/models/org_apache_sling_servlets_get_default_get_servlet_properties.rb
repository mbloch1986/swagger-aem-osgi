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
  class OrgApacheSlingServletsGetDefaultGetServletProperties
    attr_accessor :aliases

    attr_accessor :index

    attr_accessor :index_files

    attr_accessor :enable_html

    attr_accessor :enable_json

    attr_accessor :enable_txt

    attr_accessor :enable_xml

    attr_accessor :json_maximumresults

    attr_accessor :ecma_suport

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'aliases' => :'aliases',
        :'index' => :'index',
        :'index_files' => :'index.files',
        :'enable_html' => :'enable.html',
        :'enable_json' => :'enable.json',
        :'enable_txt' => :'enable.txt',
        :'enable_xml' => :'enable.xml',
        :'json_maximumresults' => :'json.maximumresults',
        :'ecma_suport' => :'ecmaSuport'
      }
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'aliases' => :'ConfigNodePropertyArray',
        :'index' => :'ConfigNodePropertyBoolean',
        :'index_files' => :'ConfigNodePropertyArray',
        :'enable_html' => :'ConfigNodePropertyBoolean',
        :'enable_json' => :'ConfigNodePropertyBoolean',
        :'enable_txt' => :'ConfigNodePropertyBoolean',
        :'enable_xml' => :'ConfigNodePropertyBoolean',
        :'json_maximumresults' => :'ConfigNodePropertyInteger',
        :'ecma_suport' => :'ConfigNodePropertyBoolean'
      }
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `SwaggerAemOsgiClient::OrgApacheSlingServletsGetDefaultGetServletProperties` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `SwaggerAemOsgiClient::OrgApacheSlingServletsGetDefaultGetServletProperties`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'aliases')
        self.aliases = attributes[:'aliases']
      end

      if attributes.key?(:'index')
        self.index = attributes[:'index']
      end

      if attributes.key?(:'index_files')
        self.index_files = attributes[:'index_files']
      end

      if attributes.key?(:'enable_html')
        self.enable_html = attributes[:'enable_html']
      end

      if attributes.key?(:'enable_json')
        self.enable_json = attributes[:'enable_json']
      end

      if attributes.key?(:'enable_txt')
        self.enable_txt = attributes[:'enable_txt']
      end

      if attributes.key?(:'enable_xml')
        self.enable_xml = attributes[:'enable_xml']
      end

      if attributes.key?(:'json_maximumresults')
        self.json_maximumresults = attributes[:'json_maximumresults']
      end

      if attributes.key?(:'ecma_suport')
        self.ecma_suport = attributes[:'ecma_suport']
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
          aliases == o.aliases &&
          index == o.index &&
          index_files == o.index_files &&
          enable_html == o.enable_html &&
          enable_json == o.enable_json &&
          enable_txt == o.enable_txt &&
          enable_xml == o.enable_xml &&
          json_maximumresults == o.json_maximumresults &&
          ecma_suport == o.ecma_suport
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [aliases, index, index_files, enable_html, enable_json, enable_txt, enable_xml, json_maximumresults, ecma_suport].hash
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
