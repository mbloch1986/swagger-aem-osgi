# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, priority_order: ConfigNodePropertyInteger=None, reply_email_patterns: ConfigNodePropertyArray=None):  # noqa: E501
        """ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties - a model defined in OpenAPI

        :param priority_order: The priority_order of this ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties.  # noqa: E501
        :type priority_order: ConfigNodePropertyInteger
        :param reply_email_patterns: The reply_email_patterns of this ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties.  # noqa: E501
        :type reply_email_patterns: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'priority_order': ConfigNodePropertyInteger,
            'reply_email_patterns': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'priority_order': 'priorityOrder',
            'reply_email_patterns': 'replyEmailPatterns'
        }

        self._priority_order = priority_order
        self._reply_email_patterns = reply_email_patterns

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties of this ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties.  # noqa: E501
        :rtype: ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def priority_order(self) -> ConfigNodePropertyInteger:
        """Gets the priority_order of this ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties.


        :return: The priority_order of this ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._priority_order

    @priority_order.setter
    def priority_order(self, priority_order: ConfigNodePropertyInteger):
        """Sets the priority_order of this ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties.


        :param priority_order: The priority_order of this ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties.
        :type priority_order: ConfigNodePropertyInteger
        """

        self._priority_order = priority_order

    @property
    def reply_email_patterns(self) -> ConfigNodePropertyArray:
        """Gets the reply_email_patterns of this ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties.


        :return: The reply_email_patterns of this ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._reply_email_patterns

    @reply_email_patterns.setter
    def reply_email_patterns(self, reply_email_patterns: ConfigNodePropertyArray):
        """Sets the reply_email_patterns of this ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties.


        :param reply_email_patterns: The reply_email_patterns of this ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties.
        :type reply_email_patterns: ConfigNodePropertyArray
        """

        self._reply_email_patterns = reply_email_patterns
