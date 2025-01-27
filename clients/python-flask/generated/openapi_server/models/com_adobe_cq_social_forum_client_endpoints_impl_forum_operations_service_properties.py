# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, field_whitelist: ConfigNodePropertyArray=None, attachment_type_blacklist: ConfigNodePropertyArray=None):  # noqa: E501
        """ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties - a model defined in OpenAPI

        :param field_whitelist: The field_whitelist of this ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties.  # noqa: E501
        :type field_whitelist: ConfigNodePropertyArray
        :param attachment_type_blacklist: The attachment_type_blacklist of this ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties.  # noqa: E501
        :type attachment_type_blacklist: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'field_whitelist': ConfigNodePropertyArray,
            'attachment_type_blacklist': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'field_whitelist': 'fieldWhitelist',
            'attachment_type_blacklist': 'attachmentTypeBlacklist'
        }

        self._field_whitelist = field_whitelist
        self._attachment_type_blacklist = attachment_type_blacklist

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties of this ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties.  # noqa: E501
        :rtype: ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def field_whitelist(self) -> ConfigNodePropertyArray:
        """Gets the field_whitelist of this ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties.


        :return: The field_whitelist of this ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._field_whitelist

    @field_whitelist.setter
    def field_whitelist(self, field_whitelist: ConfigNodePropertyArray):
        """Sets the field_whitelist of this ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties.


        :param field_whitelist: The field_whitelist of this ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties.
        :type field_whitelist: ConfigNodePropertyArray
        """

        self._field_whitelist = field_whitelist

    @property
    def attachment_type_blacklist(self) -> ConfigNodePropertyArray:
        """Gets the attachment_type_blacklist of this ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties.


        :return: The attachment_type_blacklist of this ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._attachment_type_blacklist

    @attachment_type_blacklist.setter
    def attachment_type_blacklist(self, attachment_type_blacklist: ConfigNodePropertyArray):
        """Sets the attachment_type_blacklist of this ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties.


        :param attachment_type_blacklist: The attachment_type_blacklist of this ComAdobeCqSocialForumClientEndpointsImplForumOperationsServiceProperties.
        :type attachment_type_blacklist: ConfigNodePropertyArray
        """

        self._attachment_type_blacklist = attachment_type_blacklist
