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


class ComDayCqCommonsImplExternalizerImplProperties(object):
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
        'externalizer_domains': 'ConfigNodePropertyArray',
        'externalizer_host': 'ConfigNodePropertyString',
        'externalizer_contextpath': 'ConfigNodePropertyString',
        'externalizer_encodedpath': 'ConfigNodePropertyBoolean'
    }

    attribute_map = {
        'externalizer_domains': 'externalizer.domains',
        'externalizer_host': 'externalizer.host',
        'externalizer_contextpath': 'externalizer.contextpath',
        'externalizer_encodedpath': 'externalizer.encodedpath'
    }

    def __init__(self, externalizer_domains=None, externalizer_host=None, externalizer_contextpath=None, externalizer_encodedpath=None):  # noqa: E501
        """ComDayCqCommonsImplExternalizerImplProperties - a model defined in OpenAPI"""  # noqa: E501

        self._externalizer_domains = None
        self._externalizer_host = None
        self._externalizer_contextpath = None
        self._externalizer_encodedpath = None
        self.discriminator = None

        if externalizer_domains is not None:
            self.externalizer_domains = externalizer_domains
        if externalizer_host is not None:
            self.externalizer_host = externalizer_host
        if externalizer_contextpath is not None:
            self.externalizer_contextpath = externalizer_contextpath
        if externalizer_encodedpath is not None:
            self.externalizer_encodedpath = externalizer_encodedpath

    @property
    def externalizer_domains(self):
        """Gets the externalizer_domains of this ComDayCqCommonsImplExternalizerImplProperties.  # noqa: E501


        :return: The externalizer_domains of this ComDayCqCommonsImplExternalizerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._externalizer_domains

    @externalizer_domains.setter
    def externalizer_domains(self, externalizer_domains):
        """Sets the externalizer_domains of this ComDayCqCommonsImplExternalizerImplProperties.


        :param externalizer_domains: The externalizer_domains of this ComDayCqCommonsImplExternalizerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._externalizer_domains = externalizer_domains

    @property
    def externalizer_host(self):
        """Gets the externalizer_host of this ComDayCqCommonsImplExternalizerImplProperties.  # noqa: E501


        :return: The externalizer_host of this ComDayCqCommonsImplExternalizerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._externalizer_host

    @externalizer_host.setter
    def externalizer_host(self, externalizer_host):
        """Sets the externalizer_host of this ComDayCqCommonsImplExternalizerImplProperties.


        :param externalizer_host: The externalizer_host of this ComDayCqCommonsImplExternalizerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._externalizer_host = externalizer_host

    @property
    def externalizer_contextpath(self):
        """Gets the externalizer_contextpath of this ComDayCqCommonsImplExternalizerImplProperties.  # noqa: E501


        :return: The externalizer_contextpath of this ComDayCqCommonsImplExternalizerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._externalizer_contextpath

    @externalizer_contextpath.setter
    def externalizer_contextpath(self, externalizer_contextpath):
        """Sets the externalizer_contextpath of this ComDayCqCommonsImplExternalizerImplProperties.


        :param externalizer_contextpath: The externalizer_contextpath of this ComDayCqCommonsImplExternalizerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._externalizer_contextpath = externalizer_contextpath

    @property
    def externalizer_encodedpath(self):
        """Gets the externalizer_encodedpath of this ComDayCqCommonsImplExternalizerImplProperties.  # noqa: E501


        :return: The externalizer_encodedpath of this ComDayCqCommonsImplExternalizerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._externalizer_encodedpath

    @externalizer_encodedpath.setter
    def externalizer_encodedpath(self, externalizer_encodedpath):
        """Sets the externalizer_encodedpath of this ComDayCqCommonsImplExternalizerImplProperties.


        :param externalizer_encodedpath: The externalizer_encodedpath of this ComDayCqCommonsImplExternalizerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._externalizer_encodedpath = externalizer_encodedpath

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
        if not isinstance(other, ComDayCqCommonsImplExternalizerImplProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
