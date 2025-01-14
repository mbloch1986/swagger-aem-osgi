# coding: utf-8

"""
    Adobe Experience Manager OSGI config (AEM) API

    Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API  # noqa: E501

    OpenAPI spec version: 1.0.0-pre.0
    Contact: opensource@shinesolutions.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class OrgApacheSlingEngineParametersProperties(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'sling_default_parameter_encoding': 'ConfigNodePropertyString',
        'sling_default_max_parameters': 'ConfigNodePropertyInteger',
        'file_location': 'ConfigNodePropertyString',
        'file_threshold': 'ConfigNodePropertyInteger',
        'file_max': 'ConfigNodePropertyInteger',
        'request_max': 'ConfigNodePropertyInteger',
        'sling_default_parameter_check_for_additional_container_parameters': 'ConfigNodePropertyBoolean'
    }

    attribute_map = {
        'sling_default_parameter_encoding': 'sling.default.parameter.encoding',
        'sling_default_max_parameters': 'sling.default.max.parameters',
        'file_location': 'file.location',
        'file_threshold': 'file.threshold',
        'file_max': 'file.max',
        'request_max': 'request.max',
        'sling_default_parameter_check_for_additional_container_parameters': 'sling.default.parameter.checkForAdditionalContainerParameters'
    }

    def __init__(self, sling_default_parameter_encoding=None, sling_default_max_parameters=None, file_location=None, file_threshold=None, file_max=None, request_max=None, sling_default_parameter_check_for_additional_container_parameters=None):  # noqa: E501
        """OrgApacheSlingEngineParametersProperties - a model defined in OpenAPI"""  # noqa: E501

        self._sling_default_parameter_encoding = None
        self._sling_default_max_parameters = None
        self._file_location = None
        self._file_threshold = None
        self._file_max = None
        self._request_max = None
        self._sling_default_parameter_check_for_additional_container_parameters = None
        self.discriminator = None

        if sling_default_parameter_encoding is not None:
            self.sling_default_parameter_encoding = sling_default_parameter_encoding
        if sling_default_max_parameters is not None:
            self.sling_default_max_parameters = sling_default_max_parameters
        if file_location is not None:
            self.file_location = file_location
        if file_threshold is not None:
            self.file_threshold = file_threshold
        if file_max is not None:
            self.file_max = file_max
        if request_max is not None:
            self.request_max = request_max
        if sling_default_parameter_check_for_additional_container_parameters is not None:
            self.sling_default_parameter_check_for_additional_container_parameters = sling_default_parameter_check_for_additional_container_parameters

    @property
    def sling_default_parameter_encoding(self):
        """Gets the sling_default_parameter_encoding of this OrgApacheSlingEngineParametersProperties.  # noqa: E501


        :return: The sling_default_parameter_encoding of this OrgApacheSlingEngineParametersProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._sling_default_parameter_encoding

    @sling_default_parameter_encoding.setter
    def sling_default_parameter_encoding(self, sling_default_parameter_encoding):
        """Sets the sling_default_parameter_encoding of this OrgApacheSlingEngineParametersProperties.


        :param sling_default_parameter_encoding: The sling_default_parameter_encoding of this OrgApacheSlingEngineParametersProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._sling_default_parameter_encoding = sling_default_parameter_encoding

    @property
    def sling_default_max_parameters(self):
        """Gets the sling_default_max_parameters of this OrgApacheSlingEngineParametersProperties.  # noqa: E501


        :return: The sling_default_max_parameters of this OrgApacheSlingEngineParametersProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._sling_default_max_parameters

    @sling_default_max_parameters.setter
    def sling_default_max_parameters(self, sling_default_max_parameters):
        """Sets the sling_default_max_parameters of this OrgApacheSlingEngineParametersProperties.


        :param sling_default_max_parameters: The sling_default_max_parameters of this OrgApacheSlingEngineParametersProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._sling_default_max_parameters = sling_default_max_parameters

    @property
    def file_location(self):
        """Gets the file_location of this OrgApacheSlingEngineParametersProperties.  # noqa: E501


        :return: The file_location of this OrgApacheSlingEngineParametersProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._file_location

    @file_location.setter
    def file_location(self, file_location):
        """Sets the file_location of this OrgApacheSlingEngineParametersProperties.


        :param file_location: The file_location of this OrgApacheSlingEngineParametersProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._file_location = file_location

    @property
    def file_threshold(self):
        """Gets the file_threshold of this OrgApacheSlingEngineParametersProperties.  # noqa: E501


        :return: The file_threshold of this OrgApacheSlingEngineParametersProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._file_threshold

    @file_threshold.setter
    def file_threshold(self, file_threshold):
        """Sets the file_threshold of this OrgApacheSlingEngineParametersProperties.


        :param file_threshold: The file_threshold of this OrgApacheSlingEngineParametersProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._file_threshold = file_threshold

    @property
    def file_max(self):
        """Gets the file_max of this OrgApacheSlingEngineParametersProperties.  # noqa: E501


        :return: The file_max of this OrgApacheSlingEngineParametersProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._file_max

    @file_max.setter
    def file_max(self, file_max):
        """Sets the file_max of this OrgApacheSlingEngineParametersProperties.


        :param file_max: The file_max of this OrgApacheSlingEngineParametersProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._file_max = file_max

    @property
    def request_max(self):
        """Gets the request_max of this OrgApacheSlingEngineParametersProperties.  # noqa: E501


        :return: The request_max of this OrgApacheSlingEngineParametersProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._request_max

    @request_max.setter
    def request_max(self, request_max):
        """Sets the request_max of this OrgApacheSlingEngineParametersProperties.


        :param request_max: The request_max of this OrgApacheSlingEngineParametersProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._request_max = request_max

    @property
    def sling_default_parameter_check_for_additional_container_parameters(self):
        """Gets the sling_default_parameter_check_for_additional_container_parameters of this OrgApacheSlingEngineParametersProperties.  # noqa: E501


        :return: The sling_default_parameter_check_for_additional_container_parameters of this OrgApacheSlingEngineParametersProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._sling_default_parameter_check_for_additional_container_parameters

    @sling_default_parameter_check_for_additional_container_parameters.setter
    def sling_default_parameter_check_for_additional_container_parameters(self, sling_default_parameter_check_for_additional_container_parameters):
        """Sets the sling_default_parameter_check_for_additional_container_parameters of this OrgApacheSlingEngineParametersProperties.


        :param sling_default_parameter_check_for_additional_container_parameters: The sling_default_parameter_check_for_additional_container_parameters of this OrgApacheSlingEngineParametersProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._sling_default_parameter_check_for_additional_container_parameters = sling_default_parameter_check_for_additional_container_parameters

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, OrgApacheSlingEngineParametersProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
