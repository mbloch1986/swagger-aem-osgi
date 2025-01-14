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


class OrgApacheSlingServletsResolverSlingServletResolverProperties(object):
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
        'servletresolver_servlet_root': 'ConfigNodePropertyString',
        'servletresolver_cache_size': 'ConfigNodePropertyInteger',
        'servletresolver_paths': 'ConfigNodePropertyArray',
        'servletresolver_default_extensions': 'ConfigNodePropertyArray'
    }

    attribute_map = {
        'servletresolver_servlet_root': 'servletresolver.servletRoot',
        'servletresolver_cache_size': 'servletresolver.cacheSize',
        'servletresolver_paths': 'servletresolver.paths',
        'servletresolver_default_extensions': 'servletresolver.defaultExtensions'
    }

    def __init__(self, servletresolver_servlet_root=None, servletresolver_cache_size=None, servletresolver_paths=None, servletresolver_default_extensions=None):  # noqa: E501
        """OrgApacheSlingServletsResolverSlingServletResolverProperties - a model defined in OpenAPI"""  # noqa: E501

        self._servletresolver_servlet_root = None
        self._servletresolver_cache_size = None
        self._servletresolver_paths = None
        self._servletresolver_default_extensions = None
        self.discriminator = None

        if servletresolver_servlet_root is not None:
            self.servletresolver_servlet_root = servletresolver_servlet_root
        if servletresolver_cache_size is not None:
            self.servletresolver_cache_size = servletresolver_cache_size
        if servletresolver_paths is not None:
            self.servletresolver_paths = servletresolver_paths
        if servletresolver_default_extensions is not None:
            self.servletresolver_default_extensions = servletresolver_default_extensions

    @property
    def servletresolver_servlet_root(self):
        """Gets the servletresolver_servlet_root of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501


        :return: The servletresolver_servlet_root of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._servletresolver_servlet_root

    @servletresolver_servlet_root.setter
    def servletresolver_servlet_root(self, servletresolver_servlet_root):
        """Sets the servletresolver_servlet_root of this OrgApacheSlingServletsResolverSlingServletResolverProperties.


        :param servletresolver_servlet_root: The servletresolver_servlet_root of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._servletresolver_servlet_root = servletresolver_servlet_root

    @property
    def servletresolver_cache_size(self):
        """Gets the servletresolver_cache_size of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501


        :return: The servletresolver_cache_size of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._servletresolver_cache_size

    @servletresolver_cache_size.setter
    def servletresolver_cache_size(self, servletresolver_cache_size):
        """Sets the servletresolver_cache_size of this OrgApacheSlingServletsResolverSlingServletResolverProperties.


        :param servletresolver_cache_size: The servletresolver_cache_size of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._servletresolver_cache_size = servletresolver_cache_size

    @property
    def servletresolver_paths(self):
        """Gets the servletresolver_paths of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501


        :return: The servletresolver_paths of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._servletresolver_paths

    @servletresolver_paths.setter
    def servletresolver_paths(self, servletresolver_paths):
        """Sets the servletresolver_paths of this OrgApacheSlingServletsResolverSlingServletResolverProperties.


        :param servletresolver_paths: The servletresolver_paths of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._servletresolver_paths = servletresolver_paths

    @property
    def servletresolver_default_extensions(self):
        """Gets the servletresolver_default_extensions of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501


        :return: The servletresolver_default_extensions of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._servletresolver_default_extensions

    @servletresolver_default_extensions.setter
    def servletresolver_default_extensions(self, servletresolver_default_extensions):
        """Sets the servletresolver_default_extensions of this OrgApacheSlingServletsResolverSlingServletResolverProperties.


        :param servletresolver_default_extensions: The servletresolver_default_extensions of this OrgApacheSlingServletsResolverSlingServletResolverProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._servletresolver_default_extensions = servletresolver_default_extensions

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
        if not isinstance(other, OrgApacheSlingServletsResolverSlingServletResolverProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
