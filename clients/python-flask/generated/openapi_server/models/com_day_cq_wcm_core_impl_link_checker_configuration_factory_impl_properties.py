# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, link_expired_prefix: ConfigNodePropertyString=None, link_expired_remove: ConfigNodePropertyBoolean=None, link_expired_suffix: ConfigNodePropertyString=None, link_invalid_prefix: ConfigNodePropertyString=None, link_invalid_remove: ConfigNodePropertyBoolean=None, link_invalid_suffix: ConfigNodePropertyString=None, link_predated_prefix: ConfigNodePropertyString=None, link_predated_remove: ConfigNodePropertyBoolean=None, link_predated_suffix: ConfigNodePropertyString=None, link_wcmmodes: ConfigNodePropertyArray=None):  # noqa: E501
        """ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties - a model defined in OpenAPI

        :param link_expired_prefix: The link_expired_prefix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.  # noqa: E501
        :type link_expired_prefix: ConfigNodePropertyString
        :param link_expired_remove: The link_expired_remove of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.  # noqa: E501
        :type link_expired_remove: ConfigNodePropertyBoolean
        :param link_expired_suffix: The link_expired_suffix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.  # noqa: E501
        :type link_expired_suffix: ConfigNodePropertyString
        :param link_invalid_prefix: The link_invalid_prefix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.  # noqa: E501
        :type link_invalid_prefix: ConfigNodePropertyString
        :param link_invalid_remove: The link_invalid_remove of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.  # noqa: E501
        :type link_invalid_remove: ConfigNodePropertyBoolean
        :param link_invalid_suffix: The link_invalid_suffix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.  # noqa: E501
        :type link_invalid_suffix: ConfigNodePropertyString
        :param link_predated_prefix: The link_predated_prefix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.  # noqa: E501
        :type link_predated_prefix: ConfigNodePropertyString
        :param link_predated_remove: The link_predated_remove of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.  # noqa: E501
        :type link_predated_remove: ConfigNodePropertyBoolean
        :param link_predated_suffix: The link_predated_suffix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.  # noqa: E501
        :type link_predated_suffix: ConfigNodePropertyString
        :param link_wcmmodes: The link_wcmmodes of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.  # noqa: E501
        :type link_wcmmodes: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'link_expired_prefix': ConfigNodePropertyString,
            'link_expired_remove': ConfigNodePropertyBoolean,
            'link_expired_suffix': ConfigNodePropertyString,
            'link_invalid_prefix': ConfigNodePropertyString,
            'link_invalid_remove': ConfigNodePropertyBoolean,
            'link_invalid_suffix': ConfigNodePropertyString,
            'link_predated_prefix': ConfigNodePropertyString,
            'link_predated_remove': ConfigNodePropertyBoolean,
            'link_predated_suffix': ConfigNodePropertyString,
            'link_wcmmodes': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'link_expired_prefix': 'link.expired.prefix',
            'link_expired_remove': 'link.expired.remove',
            'link_expired_suffix': 'link.expired.suffix',
            'link_invalid_prefix': 'link.invalid.prefix',
            'link_invalid_remove': 'link.invalid.remove',
            'link_invalid_suffix': 'link.invalid.suffix',
            'link_predated_prefix': 'link.predated.prefix',
            'link_predated_remove': 'link.predated.remove',
            'link_predated_suffix': 'link.predated.suffix',
            'link_wcmmodes': 'link.wcmmodes'
        }

        self._link_expired_prefix = link_expired_prefix
        self._link_expired_remove = link_expired_remove
        self._link_expired_suffix = link_expired_suffix
        self._link_invalid_prefix = link_invalid_prefix
        self._link_invalid_remove = link_invalid_remove
        self._link_invalid_suffix = link_invalid_suffix
        self._link_predated_prefix = link_predated_prefix
        self._link_predated_remove = link_predated_remove
        self._link_predated_suffix = link_predated_suffix
        self._link_wcmmodes = link_wcmmodes

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.  # noqa: E501
        :rtype: ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def link_expired_prefix(self) -> ConfigNodePropertyString:
        """Gets the link_expired_prefix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :return: The link_expired_prefix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._link_expired_prefix

    @link_expired_prefix.setter
    def link_expired_prefix(self, link_expired_prefix: ConfigNodePropertyString):
        """Sets the link_expired_prefix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :param link_expired_prefix: The link_expired_prefix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :type link_expired_prefix: ConfigNodePropertyString
        """

        self._link_expired_prefix = link_expired_prefix

    @property
    def link_expired_remove(self) -> ConfigNodePropertyBoolean:
        """Gets the link_expired_remove of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :return: The link_expired_remove of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._link_expired_remove

    @link_expired_remove.setter
    def link_expired_remove(self, link_expired_remove: ConfigNodePropertyBoolean):
        """Sets the link_expired_remove of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :param link_expired_remove: The link_expired_remove of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :type link_expired_remove: ConfigNodePropertyBoolean
        """

        self._link_expired_remove = link_expired_remove

    @property
    def link_expired_suffix(self) -> ConfigNodePropertyString:
        """Gets the link_expired_suffix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :return: The link_expired_suffix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._link_expired_suffix

    @link_expired_suffix.setter
    def link_expired_suffix(self, link_expired_suffix: ConfigNodePropertyString):
        """Sets the link_expired_suffix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :param link_expired_suffix: The link_expired_suffix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :type link_expired_suffix: ConfigNodePropertyString
        """

        self._link_expired_suffix = link_expired_suffix

    @property
    def link_invalid_prefix(self) -> ConfigNodePropertyString:
        """Gets the link_invalid_prefix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :return: The link_invalid_prefix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._link_invalid_prefix

    @link_invalid_prefix.setter
    def link_invalid_prefix(self, link_invalid_prefix: ConfigNodePropertyString):
        """Sets the link_invalid_prefix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :param link_invalid_prefix: The link_invalid_prefix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :type link_invalid_prefix: ConfigNodePropertyString
        """

        self._link_invalid_prefix = link_invalid_prefix

    @property
    def link_invalid_remove(self) -> ConfigNodePropertyBoolean:
        """Gets the link_invalid_remove of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :return: The link_invalid_remove of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._link_invalid_remove

    @link_invalid_remove.setter
    def link_invalid_remove(self, link_invalid_remove: ConfigNodePropertyBoolean):
        """Sets the link_invalid_remove of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :param link_invalid_remove: The link_invalid_remove of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :type link_invalid_remove: ConfigNodePropertyBoolean
        """

        self._link_invalid_remove = link_invalid_remove

    @property
    def link_invalid_suffix(self) -> ConfigNodePropertyString:
        """Gets the link_invalid_suffix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :return: The link_invalid_suffix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._link_invalid_suffix

    @link_invalid_suffix.setter
    def link_invalid_suffix(self, link_invalid_suffix: ConfigNodePropertyString):
        """Sets the link_invalid_suffix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :param link_invalid_suffix: The link_invalid_suffix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :type link_invalid_suffix: ConfigNodePropertyString
        """

        self._link_invalid_suffix = link_invalid_suffix

    @property
    def link_predated_prefix(self) -> ConfigNodePropertyString:
        """Gets the link_predated_prefix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :return: The link_predated_prefix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._link_predated_prefix

    @link_predated_prefix.setter
    def link_predated_prefix(self, link_predated_prefix: ConfigNodePropertyString):
        """Sets the link_predated_prefix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :param link_predated_prefix: The link_predated_prefix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :type link_predated_prefix: ConfigNodePropertyString
        """

        self._link_predated_prefix = link_predated_prefix

    @property
    def link_predated_remove(self) -> ConfigNodePropertyBoolean:
        """Gets the link_predated_remove of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :return: The link_predated_remove of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._link_predated_remove

    @link_predated_remove.setter
    def link_predated_remove(self, link_predated_remove: ConfigNodePropertyBoolean):
        """Sets the link_predated_remove of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :param link_predated_remove: The link_predated_remove of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :type link_predated_remove: ConfigNodePropertyBoolean
        """

        self._link_predated_remove = link_predated_remove

    @property
    def link_predated_suffix(self) -> ConfigNodePropertyString:
        """Gets the link_predated_suffix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :return: The link_predated_suffix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._link_predated_suffix

    @link_predated_suffix.setter
    def link_predated_suffix(self, link_predated_suffix: ConfigNodePropertyString):
        """Sets the link_predated_suffix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :param link_predated_suffix: The link_predated_suffix of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :type link_predated_suffix: ConfigNodePropertyString
        """

        self._link_predated_suffix = link_predated_suffix

    @property
    def link_wcmmodes(self) -> ConfigNodePropertyArray:
        """Gets the link_wcmmodes of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :return: The link_wcmmodes of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._link_wcmmodes

    @link_wcmmodes.setter
    def link_wcmmodes(self, link_wcmmodes: ConfigNodePropertyArray):
        """Sets the link_wcmmodes of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.


        :param link_wcmmodes: The link_wcmmodes of this ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.
        :type link_wcmmodes: ConfigNodePropertyArray
        """

        self._link_wcmmodes = link_wcmmodes
