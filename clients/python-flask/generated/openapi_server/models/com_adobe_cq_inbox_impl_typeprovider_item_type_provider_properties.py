# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, inbox_impl_typeprovider_registrypaths: ConfigNodePropertyArray=None, inbox_impl_typeprovider_legacypaths: ConfigNodePropertyArray=None, inbox_impl_typeprovider_defaulturl_failureitem: ConfigNodePropertyString=None, inbox_impl_typeprovider_defaulturl_workitem: ConfigNodePropertyString=None, inbox_impl_typeprovider_defaulturl_task: ConfigNodePropertyString=None):  # noqa: E501
        """ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties - a model defined in OpenAPI

        :param inbox_impl_typeprovider_registrypaths: The inbox_impl_typeprovider_registrypaths of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.  # noqa: E501
        :type inbox_impl_typeprovider_registrypaths: ConfigNodePropertyArray
        :param inbox_impl_typeprovider_legacypaths: The inbox_impl_typeprovider_legacypaths of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.  # noqa: E501
        :type inbox_impl_typeprovider_legacypaths: ConfigNodePropertyArray
        :param inbox_impl_typeprovider_defaulturl_failureitem: The inbox_impl_typeprovider_defaulturl_failureitem of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.  # noqa: E501
        :type inbox_impl_typeprovider_defaulturl_failureitem: ConfigNodePropertyString
        :param inbox_impl_typeprovider_defaulturl_workitem: The inbox_impl_typeprovider_defaulturl_workitem of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.  # noqa: E501
        :type inbox_impl_typeprovider_defaulturl_workitem: ConfigNodePropertyString
        :param inbox_impl_typeprovider_defaulturl_task: The inbox_impl_typeprovider_defaulturl_task of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.  # noqa: E501
        :type inbox_impl_typeprovider_defaulturl_task: ConfigNodePropertyString
        """
        self.openapi_types = {
            'inbox_impl_typeprovider_registrypaths': ConfigNodePropertyArray,
            'inbox_impl_typeprovider_legacypaths': ConfigNodePropertyArray,
            'inbox_impl_typeprovider_defaulturl_failureitem': ConfigNodePropertyString,
            'inbox_impl_typeprovider_defaulturl_workitem': ConfigNodePropertyString,
            'inbox_impl_typeprovider_defaulturl_task': ConfigNodePropertyString
        }

        self.attribute_map = {
            'inbox_impl_typeprovider_registrypaths': 'inbox.impl.typeprovider.registrypaths',
            'inbox_impl_typeprovider_legacypaths': 'inbox.impl.typeprovider.legacypaths',
            'inbox_impl_typeprovider_defaulturl_failureitem': 'inbox.impl.typeprovider.defaulturl.failureitem',
            'inbox_impl_typeprovider_defaulturl_workitem': 'inbox.impl.typeprovider.defaulturl.workitem',
            'inbox_impl_typeprovider_defaulturl_task': 'inbox.impl.typeprovider.defaulturl.task'
        }

        self._inbox_impl_typeprovider_registrypaths = inbox_impl_typeprovider_registrypaths
        self._inbox_impl_typeprovider_legacypaths = inbox_impl_typeprovider_legacypaths
        self._inbox_impl_typeprovider_defaulturl_failureitem = inbox_impl_typeprovider_defaulturl_failureitem
        self._inbox_impl_typeprovider_defaulturl_workitem = inbox_impl_typeprovider_defaulturl_workitem
        self._inbox_impl_typeprovider_defaulturl_task = inbox_impl_typeprovider_defaulturl_task

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqInboxImplTypeproviderItemTypeProviderProperties of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.  # noqa: E501
        :rtype: ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def inbox_impl_typeprovider_registrypaths(self) -> ConfigNodePropertyArray:
        """Gets the inbox_impl_typeprovider_registrypaths of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.


        :return: The inbox_impl_typeprovider_registrypaths of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._inbox_impl_typeprovider_registrypaths

    @inbox_impl_typeprovider_registrypaths.setter
    def inbox_impl_typeprovider_registrypaths(self, inbox_impl_typeprovider_registrypaths: ConfigNodePropertyArray):
        """Sets the inbox_impl_typeprovider_registrypaths of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.


        :param inbox_impl_typeprovider_registrypaths: The inbox_impl_typeprovider_registrypaths of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.
        :type inbox_impl_typeprovider_registrypaths: ConfigNodePropertyArray
        """

        self._inbox_impl_typeprovider_registrypaths = inbox_impl_typeprovider_registrypaths

    @property
    def inbox_impl_typeprovider_legacypaths(self) -> ConfigNodePropertyArray:
        """Gets the inbox_impl_typeprovider_legacypaths of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.


        :return: The inbox_impl_typeprovider_legacypaths of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._inbox_impl_typeprovider_legacypaths

    @inbox_impl_typeprovider_legacypaths.setter
    def inbox_impl_typeprovider_legacypaths(self, inbox_impl_typeprovider_legacypaths: ConfigNodePropertyArray):
        """Sets the inbox_impl_typeprovider_legacypaths of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.


        :param inbox_impl_typeprovider_legacypaths: The inbox_impl_typeprovider_legacypaths of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.
        :type inbox_impl_typeprovider_legacypaths: ConfigNodePropertyArray
        """

        self._inbox_impl_typeprovider_legacypaths = inbox_impl_typeprovider_legacypaths

    @property
    def inbox_impl_typeprovider_defaulturl_failureitem(self) -> ConfigNodePropertyString:
        """Gets the inbox_impl_typeprovider_defaulturl_failureitem of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.


        :return: The inbox_impl_typeprovider_defaulturl_failureitem of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._inbox_impl_typeprovider_defaulturl_failureitem

    @inbox_impl_typeprovider_defaulturl_failureitem.setter
    def inbox_impl_typeprovider_defaulturl_failureitem(self, inbox_impl_typeprovider_defaulturl_failureitem: ConfigNodePropertyString):
        """Sets the inbox_impl_typeprovider_defaulturl_failureitem of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.


        :param inbox_impl_typeprovider_defaulturl_failureitem: The inbox_impl_typeprovider_defaulturl_failureitem of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.
        :type inbox_impl_typeprovider_defaulturl_failureitem: ConfigNodePropertyString
        """

        self._inbox_impl_typeprovider_defaulturl_failureitem = inbox_impl_typeprovider_defaulturl_failureitem

    @property
    def inbox_impl_typeprovider_defaulturl_workitem(self) -> ConfigNodePropertyString:
        """Gets the inbox_impl_typeprovider_defaulturl_workitem of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.


        :return: The inbox_impl_typeprovider_defaulturl_workitem of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._inbox_impl_typeprovider_defaulturl_workitem

    @inbox_impl_typeprovider_defaulturl_workitem.setter
    def inbox_impl_typeprovider_defaulturl_workitem(self, inbox_impl_typeprovider_defaulturl_workitem: ConfigNodePropertyString):
        """Sets the inbox_impl_typeprovider_defaulturl_workitem of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.


        :param inbox_impl_typeprovider_defaulturl_workitem: The inbox_impl_typeprovider_defaulturl_workitem of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.
        :type inbox_impl_typeprovider_defaulturl_workitem: ConfigNodePropertyString
        """

        self._inbox_impl_typeprovider_defaulturl_workitem = inbox_impl_typeprovider_defaulturl_workitem

    @property
    def inbox_impl_typeprovider_defaulturl_task(self) -> ConfigNodePropertyString:
        """Gets the inbox_impl_typeprovider_defaulturl_task of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.


        :return: The inbox_impl_typeprovider_defaulturl_task of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._inbox_impl_typeprovider_defaulturl_task

    @inbox_impl_typeprovider_defaulturl_task.setter
    def inbox_impl_typeprovider_defaulturl_task(self, inbox_impl_typeprovider_defaulturl_task: ConfigNodePropertyString):
        """Sets the inbox_impl_typeprovider_defaulturl_task of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.


        :param inbox_impl_typeprovider_defaulturl_task: The inbox_impl_typeprovider_defaulturl_task of this ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties.
        :type inbox_impl_typeprovider_defaulturl_task: ConfigNodePropertyString
        """

        self._inbox_impl_typeprovider_defaulturl_task = inbox_impl_typeprovider_defaulturl_task
