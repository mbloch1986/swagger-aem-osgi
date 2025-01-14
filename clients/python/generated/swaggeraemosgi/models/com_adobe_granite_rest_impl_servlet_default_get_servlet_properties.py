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


class ComAdobeGraniteRestImplServletDefaultGETServletProperties(object):
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
        'default_limit': 'ConfigNodePropertyInteger',
        'use_absolute_uri': 'ConfigNodePropertyBoolean'
    }

    attribute_map = {
        'default_limit': 'default.limit',
        'use_absolute_uri': 'use.absolute.uri'
    }

    def __init__(self, default_limit=None, use_absolute_uri=None):  # noqa: E501
        """ComAdobeGraniteRestImplServletDefaultGETServletProperties - a model defined in OpenAPI"""  # noqa: E501

        self._default_limit = None
        self._use_absolute_uri = None
        self.discriminator = None

        if default_limit is not None:
            self.default_limit = default_limit
        if use_absolute_uri is not None:
            self.use_absolute_uri = use_absolute_uri

    @property
    def default_limit(self):
        """Gets the default_limit of this ComAdobeGraniteRestImplServletDefaultGETServletProperties.  # noqa: E501


        :return: The default_limit of this ComAdobeGraniteRestImplServletDefaultGETServletProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._default_limit

    @default_limit.setter
    def default_limit(self, default_limit):
        """Sets the default_limit of this ComAdobeGraniteRestImplServletDefaultGETServletProperties.


        :param default_limit: The default_limit of this ComAdobeGraniteRestImplServletDefaultGETServletProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._default_limit = default_limit

    @property
    def use_absolute_uri(self):
        """Gets the use_absolute_uri of this ComAdobeGraniteRestImplServletDefaultGETServletProperties.  # noqa: E501


        :return: The use_absolute_uri of this ComAdobeGraniteRestImplServletDefaultGETServletProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._use_absolute_uri

    @use_absolute_uri.setter
    def use_absolute_uri(self, use_absolute_uri):
        """Sets the use_absolute_uri of this ComAdobeGraniteRestImplServletDefaultGETServletProperties.


        :param use_absolute_uri: The use_absolute_uri of this ComAdobeGraniteRestImplServletDefaultGETServletProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._use_absolute_uri = use_absolute_uri

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
        if not isinstance(other, ComAdobeGraniteRestImplServletDefaultGETServletProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
