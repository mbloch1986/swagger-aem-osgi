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
  class ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties
    attr_accessor :email_name

    attr_accessor :email_create_post_from_reply

    attr_accessor :email_add_comment_id_to

    attr_accessor :email_subject_maximum_length

    attr_accessor :email_reply_to_address

    attr_accessor :email_reply_to_delimiter

    attr_accessor :email_tracker_id_prefix_in_subject

    attr_accessor :email_tracker_id_prefix_in_body

    attr_accessor :email_as_html

    attr_accessor :email_default_user_name

    attr_accessor :email_templates_root_path

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'email_name' => :'email.name',
        :'email_create_post_from_reply' => :'email.createPostFromReply',
        :'email_add_comment_id_to' => :'email.addCommentIdTo',
        :'email_subject_maximum_length' => :'email.subjectMaximumLength',
        :'email_reply_to_address' => :'email.replyToAddress',
        :'email_reply_to_delimiter' => :'email.replyToDelimiter',
        :'email_tracker_id_prefix_in_subject' => :'email.trackerIdPrefixInSubject',
        :'email_tracker_id_prefix_in_body' => :'email.trackerIdPrefixInBody',
        :'email_as_html' => :'email.asHTML',
        :'email_default_user_name' => :'email.defaultUserName',
        :'email_templates_root_path' => :'email.templates.rootPath'
      }
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'email_name' => :'ConfigNodePropertyString',
        :'email_create_post_from_reply' => :'ConfigNodePropertyBoolean',
        :'email_add_comment_id_to' => :'ConfigNodePropertyDropDown',
        :'email_subject_maximum_length' => :'ConfigNodePropertyInteger',
        :'email_reply_to_address' => :'ConfigNodePropertyString',
        :'email_reply_to_delimiter' => :'ConfigNodePropertyString',
        :'email_tracker_id_prefix_in_subject' => :'ConfigNodePropertyString',
        :'email_tracker_id_prefix_in_body' => :'ConfigNodePropertyString',
        :'email_as_html' => :'ConfigNodePropertyBoolean',
        :'email_default_user_name' => :'ConfigNodePropertyString',
        :'email_templates_root_path' => :'ConfigNodePropertyString'
      }
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `SwaggerAemOsgiClient::ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `SwaggerAemOsgiClient::ComAdobeCqSocialCommonsEmailreplyImplEmailReplyConfigurationImpProperties`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'email_name')
        self.email_name = attributes[:'email_name']
      end

      if attributes.key?(:'email_create_post_from_reply')
        self.email_create_post_from_reply = attributes[:'email_create_post_from_reply']
      end

      if attributes.key?(:'email_add_comment_id_to')
        self.email_add_comment_id_to = attributes[:'email_add_comment_id_to']
      end

      if attributes.key?(:'email_subject_maximum_length')
        self.email_subject_maximum_length = attributes[:'email_subject_maximum_length']
      end

      if attributes.key?(:'email_reply_to_address')
        self.email_reply_to_address = attributes[:'email_reply_to_address']
      end

      if attributes.key?(:'email_reply_to_delimiter')
        self.email_reply_to_delimiter = attributes[:'email_reply_to_delimiter']
      end

      if attributes.key?(:'email_tracker_id_prefix_in_subject')
        self.email_tracker_id_prefix_in_subject = attributes[:'email_tracker_id_prefix_in_subject']
      end

      if attributes.key?(:'email_tracker_id_prefix_in_body')
        self.email_tracker_id_prefix_in_body = attributes[:'email_tracker_id_prefix_in_body']
      end

      if attributes.key?(:'email_as_html')
        self.email_as_html = attributes[:'email_as_html']
      end

      if attributes.key?(:'email_default_user_name')
        self.email_default_user_name = attributes[:'email_default_user_name']
      end

      if attributes.key?(:'email_templates_root_path')
        self.email_templates_root_path = attributes[:'email_templates_root_path']
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
          email_name == o.email_name &&
          email_create_post_from_reply == o.email_create_post_from_reply &&
          email_add_comment_id_to == o.email_add_comment_id_to &&
          email_subject_maximum_length == o.email_subject_maximum_length &&
          email_reply_to_address == o.email_reply_to_address &&
          email_reply_to_delimiter == o.email_reply_to_delimiter &&
          email_tracker_id_prefix_in_subject == o.email_tracker_id_prefix_in_subject &&
          email_tracker_id_prefix_in_body == o.email_tracker_id_prefix_in_body &&
          email_as_html == o.email_as_html &&
          email_default_user_name == o.email_default_user_name &&
          email_templates_root_path == o.email_templates_root_path
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [email_name, email_create_post_from_reply, email_add_comment_id_to, email_subject_maximum_length, email_reply_to_address, email_reply_to_delimiter, email_tracker_id_prefix_in_subject, email_tracker_id_prefix_in_body, email_as_html, email_default_user_name, email_templates_root_path].hash
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
