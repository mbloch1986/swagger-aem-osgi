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


class OrgApacheSlingHapiImplHApiUtilImplProperties(object):
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
        'org_apache_sling_hapi_tools_resourcetype': 'ConfigNodePropertyString',
        'org_apache_sling_hapi_tools_collectionresourcetype': 'ConfigNodePropertyString',
        'org_apache_sling_hapi_tools_searchpaths': 'ConfigNodePropertyArray',
        'org_apache_sling_hapi_tools_externalurl': 'ConfigNodePropertyString',
        'org_apache_sling_hapi_tools_enabled': 'ConfigNodePropertyBoolean'
    }

    attribute_map = {
        'org_apache_sling_hapi_tools_resourcetype': 'org.apache.sling.hapi.tools.resourcetype',
        'org_apache_sling_hapi_tools_collectionresourcetype': 'org.apache.sling.hapi.tools.collectionresourcetype',
        'org_apache_sling_hapi_tools_searchpaths': 'org.apache.sling.hapi.tools.searchpaths',
        'org_apache_sling_hapi_tools_externalurl': 'org.apache.sling.hapi.tools.externalurl',
        'org_apache_sling_hapi_tools_enabled': 'org.apache.sling.hapi.tools.enabled'
    }

    def __init__(self, org_apache_sling_hapi_tools_resourcetype=None, org_apache_sling_hapi_tools_collectionresourcetype=None, org_apache_sling_hapi_tools_searchpaths=None, org_apache_sling_hapi_tools_externalurl=None, org_apache_sling_hapi_tools_enabled=None):  # noqa: E501
        """OrgApacheSlingHapiImplHApiUtilImplProperties - a model defined in OpenAPI"""  # noqa: E501

        self._org_apache_sling_hapi_tools_resourcetype = None
        self._org_apache_sling_hapi_tools_collectionresourcetype = None
        self._org_apache_sling_hapi_tools_searchpaths = None
        self._org_apache_sling_hapi_tools_externalurl = None
        self._org_apache_sling_hapi_tools_enabled = None
        self.discriminator = None

        if org_apache_sling_hapi_tools_resourcetype is not None:
            self.org_apache_sling_hapi_tools_resourcetype = org_apache_sling_hapi_tools_resourcetype
        if org_apache_sling_hapi_tools_collectionresourcetype is not None:
            self.org_apache_sling_hapi_tools_collectionresourcetype = org_apache_sling_hapi_tools_collectionresourcetype
        if org_apache_sling_hapi_tools_searchpaths is not None:
            self.org_apache_sling_hapi_tools_searchpaths = org_apache_sling_hapi_tools_searchpaths
        if org_apache_sling_hapi_tools_externalurl is not None:
            self.org_apache_sling_hapi_tools_externalurl = org_apache_sling_hapi_tools_externalurl
        if org_apache_sling_hapi_tools_enabled is not None:
            self.org_apache_sling_hapi_tools_enabled = org_apache_sling_hapi_tools_enabled

    @property
    def org_apache_sling_hapi_tools_resourcetype(self):
        """Gets the org_apache_sling_hapi_tools_resourcetype of this OrgApacheSlingHapiImplHApiUtilImplProperties.  # noqa: E501


        :return: The org_apache_sling_hapi_tools_resourcetype of this OrgApacheSlingHapiImplHApiUtilImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._org_apache_sling_hapi_tools_resourcetype

    @org_apache_sling_hapi_tools_resourcetype.setter
    def org_apache_sling_hapi_tools_resourcetype(self, org_apache_sling_hapi_tools_resourcetype):
        """Sets the org_apache_sling_hapi_tools_resourcetype of this OrgApacheSlingHapiImplHApiUtilImplProperties.


        :param org_apache_sling_hapi_tools_resourcetype: The org_apache_sling_hapi_tools_resourcetype of this OrgApacheSlingHapiImplHApiUtilImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._org_apache_sling_hapi_tools_resourcetype = org_apache_sling_hapi_tools_resourcetype

    @property
    def org_apache_sling_hapi_tools_collectionresourcetype(self):
        """Gets the org_apache_sling_hapi_tools_collectionresourcetype of this OrgApacheSlingHapiImplHApiUtilImplProperties.  # noqa: E501


        :return: The org_apache_sling_hapi_tools_collectionresourcetype of this OrgApacheSlingHapiImplHApiUtilImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._org_apache_sling_hapi_tools_collectionresourcetype

    @org_apache_sling_hapi_tools_collectionresourcetype.setter
    def org_apache_sling_hapi_tools_collectionresourcetype(self, org_apache_sling_hapi_tools_collectionresourcetype):
        """Sets the org_apache_sling_hapi_tools_collectionresourcetype of this OrgApacheSlingHapiImplHApiUtilImplProperties.


        :param org_apache_sling_hapi_tools_collectionresourcetype: The org_apache_sling_hapi_tools_collectionresourcetype of this OrgApacheSlingHapiImplHApiUtilImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._org_apache_sling_hapi_tools_collectionresourcetype = org_apache_sling_hapi_tools_collectionresourcetype

    @property
    def org_apache_sling_hapi_tools_searchpaths(self):
        """Gets the org_apache_sling_hapi_tools_searchpaths of this OrgApacheSlingHapiImplHApiUtilImplProperties.  # noqa: E501


        :return: The org_apache_sling_hapi_tools_searchpaths of this OrgApacheSlingHapiImplHApiUtilImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._org_apache_sling_hapi_tools_searchpaths

    @org_apache_sling_hapi_tools_searchpaths.setter
    def org_apache_sling_hapi_tools_searchpaths(self, org_apache_sling_hapi_tools_searchpaths):
        """Sets the org_apache_sling_hapi_tools_searchpaths of this OrgApacheSlingHapiImplHApiUtilImplProperties.


        :param org_apache_sling_hapi_tools_searchpaths: The org_apache_sling_hapi_tools_searchpaths of this OrgApacheSlingHapiImplHApiUtilImplProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._org_apache_sling_hapi_tools_searchpaths = org_apache_sling_hapi_tools_searchpaths

    @property
    def org_apache_sling_hapi_tools_externalurl(self):
        """Gets the org_apache_sling_hapi_tools_externalurl of this OrgApacheSlingHapiImplHApiUtilImplProperties.  # noqa: E501


        :return: The org_apache_sling_hapi_tools_externalurl of this OrgApacheSlingHapiImplHApiUtilImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._org_apache_sling_hapi_tools_externalurl

    @org_apache_sling_hapi_tools_externalurl.setter
    def org_apache_sling_hapi_tools_externalurl(self, org_apache_sling_hapi_tools_externalurl):
        """Sets the org_apache_sling_hapi_tools_externalurl of this OrgApacheSlingHapiImplHApiUtilImplProperties.


        :param org_apache_sling_hapi_tools_externalurl: The org_apache_sling_hapi_tools_externalurl of this OrgApacheSlingHapiImplHApiUtilImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._org_apache_sling_hapi_tools_externalurl = org_apache_sling_hapi_tools_externalurl

    @property
    def org_apache_sling_hapi_tools_enabled(self):
        """Gets the org_apache_sling_hapi_tools_enabled of this OrgApacheSlingHapiImplHApiUtilImplProperties.  # noqa: E501


        :return: The org_apache_sling_hapi_tools_enabled of this OrgApacheSlingHapiImplHApiUtilImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._org_apache_sling_hapi_tools_enabled

    @org_apache_sling_hapi_tools_enabled.setter
    def org_apache_sling_hapi_tools_enabled(self, org_apache_sling_hapi_tools_enabled):
        """Sets the org_apache_sling_hapi_tools_enabled of this OrgApacheSlingHapiImplHApiUtilImplProperties.


        :param org_apache_sling_hapi_tools_enabled: The org_apache_sling_hapi_tools_enabled of this OrgApacheSlingHapiImplHApiUtilImplProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._org_apache_sling_hapi_tools_enabled = org_apache_sling_hapi_tools_enabled

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
        if not isinstance(other, OrgApacheSlingHapiImplHApiUtilImplProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
