# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, max_retry: ConfigNodePropertyInteger=None, field_whitelist: ConfigNodePropertyArray=None, attachment_type_blacklist: ConfigNodePropertyArray=None):  # noqa: E501
        """ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties - a model defined in OpenAPI

        :param max_retry: The max_retry of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.  # noqa: E501
        :type max_retry: ConfigNodePropertyInteger
        :param field_whitelist: The field_whitelist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.  # noqa: E501
        :type field_whitelist: ConfigNodePropertyArray
        :param attachment_type_blacklist: The attachment_type_blacklist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.  # noqa: E501
        :type attachment_type_blacklist: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'max_retry': ConfigNodePropertyInteger,
            'field_whitelist': ConfigNodePropertyArray,
            'attachment_type_blacklist': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'max_retry': 'MaxRetry',
            'field_whitelist': 'fieldWhitelist',
            'attachment_type_blacklist': 'attachmentTypeBlacklist'
        }

        self._max_retry = max_retry
        self._field_whitelist = field_whitelist
        self._attachment_type_blacklist = attachment_type_blacklist

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.  # noqa: E501
        :rtype: ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def max_retry(self) -> ConfigNodePropertyInteger:
        """Gets the max_retry of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.


        :return: The max_retry of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._max_retry

    @max_retry.setter
    def max_retry(self, max_retry: ConfigNodePropertyInteger):
        """Sets the max_retry of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.


        :param max_retry: The max_retry of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.
        :type max_retry: ConfigNodePropertyInteger
        """

        self._max_retry = max_retry

    @property
    def field_whitelist(self) -> ConfigNodePropertyArray:
        """Gets the field_whitelist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.


        :return: The field_whitelist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._field_whitelist

    @field_whitelist.setter
    def field_whitelist(self, field_whitelist: ConfigNodePropertyArray):
        """Sets the field_whitelist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.


        :param field_whitelist: The field_whitelist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.
        :type field_whitelist: ConfigNodePropertyArray
        """

        self._field_whitelist = field_whitelist

    @property
    def attachment_type_blacklist(self) -> ConfigNodePropertyArray:
        """Gets the attachment_type_blacklist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.


        :return: The attachment_type_blacklist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._attachment_type_blacklist

    @attachment_type_blacklist.setter
    def attachment_type_blacklist(self, attachment_type_blacklist: ConfigNodePropertyArray):
        """Sets the attachment_type_blacklist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.


        :param attachment_type_blacklist: The attachment_type_blacklist of this ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.
        :type attachment_type_blacklist: ConfigNodePropertyArray
        """

        self._attachment_type_blacklist = attachment_type_blacklist