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


class ComAdobeCqSocialSyncImplUserSyncListenerImplProperties(object):
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
        'nodetypes': 'ConfigNodePropertyArray',
        'ignorableprops': 'ConfigNodePropertyArray',
        'ignorablenodes': 'ConfigNodePropertyArray',
        'enabled': 'ConfigNodePropertyBoolean',
        'distfolders': 'ConfigNodePropertyArray'
    }

    attribute_map = {
        'nodetypes': 'nodetypes',
        'ignorableprops': 'ignorableprops',
        'ignorablenodes': 'ignorablenodes',
        'enabled': 'enabled',
        'distfolders': 'distfolders'
    }

    def __init__(self, nodetypes=None, ignorableprops=None, ignorablenodes=None, enabled=None, distfolders=None):  # noqa: E501
        """ComAdobeCqSocialSyncImplUserSyncListenerImplProperties - a model defined in OpenAPI"""  # noqa: E501

        self._nodetypes = None
        self._ignorableprops = None
        self._ignorablenodes = None
        self._enabled = None
        self._distfolders = None
        self.discriminator = None

        if nodetypes is not None:
            self.nodetypes = nodetypes
        if ignorableprops is not None:
            self.ignorableprops = ignorableprops
        if ignorablenodes is not None:
            self.ignorablenodes = ignorablenodes
        if enabled is not None:
            self.enabled = enabled
        if distfolders is not None:
            self.distfolders = distfolders

    @property
    def nodetypes(self):
        """Gets the nodetypes of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.  # noqa: E501


        :return: The nodetypes of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._nodetypes

    @nodetypes.setter
    def nodetypes(self, nodetypes):
        """Sets the nodetypes of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.


        :param nodetypes: The nodetypes of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._nodetypes = nodetypes

    @property
    def ignorableprops(self):
        """Gets the ignorableprops of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.  # noqa: E501


        :return: The ignorableprops of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._ignorableprops

    @ignorableprops.setter
    def ignorableprops(self, ignorableprops):
        """Sets the ignorableprops of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.


        :param ignorableprops: The ignorableprops of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._ignorableprops = ignorableprops

    @property
    def ignorablenodes(self):
        """Gets the ignorablenodes of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.  # noqa: E501


        :return: The ignorablenodes of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._ignorablenodes

    @ignorablenodes.setter
    def ignorablenodes(self, ignorablenodes):
        """Sets the ignorablenodes of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.


        :param ignorablenodes: The ignorablenodes of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._ignorablenodes = ignorablenodes

    @property
    def enabled(self):
        """Gets the enabled of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.  # noqa: E501


        :return: The enabled of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._enabled

    @enabled.setter
    def enabled(self, enabled):
        """Sets the enabled of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.


        :param enabled: The enabled of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._enabled = enabled

    @property
    def distfolders(self):
        """Gets the distfolders of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.  # noqa: E501


        :return: The distfolders of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._distfolders

    @distfolders.setter
    def distfolders(self, distfolders):
        """Sets the distfolders of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.


        :param distfolders: The distfolders of this ComAdobeCqSocialSyncImplUserSyncListenerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._distfolders = distfolders

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
        if not isinstance(other, ComAdobeCqSocialSyncImplUserSyncListenerImplProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
