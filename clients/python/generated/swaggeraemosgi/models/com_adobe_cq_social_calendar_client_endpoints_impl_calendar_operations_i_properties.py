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


class ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties(object):
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
        'max_retry': 'ConfigNodePropertyInteger',
        'field_whitelist': 'ConfigNodePropertyArray',
        'attachment_type_blacklist': 'ConfigNodePropertyArray'
    }

    attribute_map = {
        'max_retry': 'MaxRetry',
        'field_whitelist': 'fieldWhitelist',
        'attachment_type_blacklist': 'attachmentTypeBlacklist'
    }

    def __init__(self, max_retry=None, field_whitelist=None, attachment_type_blacklist=None):  # noqa: E501
        """ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties - a model defined in OpenAPI"""  # noqa: E501

        self._max_retry = None
        self._field_whitelist = None
        self._attachment_type_blacklist = None
        self.discriminator = None

        if max_retry is not None:
            self.max_retry = max_retry
        if field_whitelist is not None:
            self.field_whitelist = field_whitelist
        if attachment_type_blacklist is not None:
            self.attachment_type_blacklist = attachment_type_blacklist

    @property
    def max_retry(self):
        """Gets the max_retry of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.  # noqa: E501


        :return: The max_retry of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._max_retry

    @max_retry.setter
    def max_retry(self, max_retry):
        """Sets the max_retry of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.


        :param max_retry: The max_retry of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._max_retry = max_retry

    @property
    def field_whitelist(self):
        """Gets the field_whitelist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.  # noqa: E501


        :return: The field_whitelist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._field_whitelist

    @field_whitelist.setter
    def field_whitelist(self, field_whitelist):
        """Sets the field_whitelist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.


        :param field_whitelist: The field_whitelist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._field_whitelist = field_whitelist

    @property
    def attachment_type_blacklist(self):
        """Gets the attachment_type_blacklist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.  # noqa: E501


        :return: The attachment_type_blacklist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._attachment_type_blacklist

    @attachment_type_blacklist.setter
    def attachment_type_blacklist(self, attachment_type_blacklist):
        """Sets the attachment_type_blacklist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.


        :param attachment_type_blacklist: The attachment_type_blacklist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._attachment_type_blacklist = attachment_type_blacklist

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
        if not isinstance(other, ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
