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


class OrgApacheSlingSecurityImplContentDispositionFilterProperties(object):
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
        'sling_content_disposition_paths': 'ConfigNodePropertyArray',
        'sling_content_disposition_excluded_paths': 'ConfigNodePropertyArray',
        'sling_content_disposition_all_paths': 'ConfigNodePropertyBoolean'
    }

    attribute_map = {
        'sling_content_disposition_paths': 'sling.content.disposition.paths',
        'sling_content_disposition_excluded_paths': 'sling.content.disposition.excluded.paths',
        'sling_content_disposition_all_paths': 'sling.content.disposition.all.paths'
    }

    def __init__(self, sling_content_disposition_paths=None, sling_content_disposition_excluded_paths=None, sling_content_disposition_all_paths=None):  # noqa: E501
        """OrgApacheSlingSecurityImplContentDispositionFilterProperties - a model defined in OpenAPI"""  # noqa: E501

        self._sling_content_disposition_paths = None
        self._sling_content_disposition_excluded_paths = None
        self._sling_content_disposition_all_paths = None
        self.discriminator = None

        if sling_content_disposition_paths is not None:
            self.sling_content_disposition_paths = sling_content_disposition_paths
        if sling_content_disposition_excluded_paths is not None:
            self.sling_content_disposition_excluded_paths = sling_content_disposition_excluded_paths
        if sling_content_disposition_all_paths is not None:
            self.sling_content_disposition_all_paths = sling_content_disposition_all_paths

    @property
    def sling_content_disposition_paths(self):
        """Gets the sling_content_disposition_paths of this OrgApacheSlingSecurityImplContentDispositionFilterProperties.  # noqa: E501


        :return: The sling_content_disposition_paths of this OrgApacheSlingSecurityImplContentDispositionFilterProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._sling_content_disposition_paths

    @sling_content_disposition_paths.setter
    def sling_content_disposition_paths(self, sling_content_disposition_paths):
        """Sets the sling_content_disposition_paths of this OrgApacheSlingSecurityImplContentDispositionFilterProperties.


        :param sling_content_disposition_paths: The sling_content_disposition_paths of this OrgApacheSlingSecurityImplContentDispositionFilterProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._sling_content_disposition_paths = sling_content_disposition_paths

    @property
    def sling_content_disposition_excluded_paths(self):
        """Gets the sling_content_disposition_excluded_paths of this OrgApacheSlingSecurityImplContentDispositionFilterProperties.  # noqa: E501


        :return: The sling_content_disposition_excluded_paths of this OrgApacheSlingSecurityImplContentDispositionFilterProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._sling_content_disposition_excluded_paths

    @sling_content_disposition_excluded_paths.setter
    def sling_content_disposition_excluded_paths(self, sling_content_disposition_excluded_paths):
        """Sets the sling_content_disposition_excluded_paths of this OrgApacheSlingSecurityImplContentDispositionFilterProperties.


        :param sling_content_disposition_excluded_paths: The sling_content_disposition_excluded_paths of this OrgApacheSlingSecurityImplContentDispositionFilterProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._sling_content_disposition_excluded_paths = sling_content_disposition_excluded_paths

    @property
    def sling_content_disposition_all_paths(self):
        """Gets the sling_content_disposition_all_paths of this OrgApacheSlingSecurityImplContentDispositionFilterProperties.  # noqa: E501


        :return: The sling_content_disposition_all_paths of this OrgApacheSlingSecurityImplContentDispositionFilterProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._sling_content_disposition_all_paths

    @sling_content_disposition_all_paths.setter
    def sling_content_disposition_all_paths(self, sling_content_disposition_all_paths):
        """Sets the sling_content_disposition_all_paths of this OrgApacheSlingSecurityImplContentDispositionFilterProperties.


        :param sling_content_disposition_all_paths: The sling_content_disposition_all_paths of this OrgApacheSlingSecurityImplContentDispositionFilterProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._sling_content_disposition_all_paths = sling_content_disposition_all_paths

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
        if not isinstance(other, OrgApacheSlingSecurityImplContentDispositionFilterProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
