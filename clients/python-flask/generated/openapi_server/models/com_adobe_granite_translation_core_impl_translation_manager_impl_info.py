# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_adobe_granite_translation_core_impl_translation_manager_impl_properties import ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties=None):  # noqa: E501
        """ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.  # noqa: E501
        :type properties: ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties
        }

        self.attribute_map = {
            'pid': 'pid',
            'title': 'title',
            'description': 'description',
            'properties': 'properties'
        }

        self._pid = pid
        self._title = title
        self._description = description
        self._properties = properties

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteTranslationCoreImplTranslationManagerImplInfo of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.  # noqa: E501
        :rtype: ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.


        :return: The pid of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.


        :param pid: The pid of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.


        :return: The title of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.


        :param title: The title of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.


        :return: The description of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.


        :param description: The description of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties:
        """Gets the properties of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.


        :return: The properties of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.
        :rtype: ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties):
        """Sets the properties of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.


        :param properties: The properties of this ComAdobeGraniteTranslationCoreImplTranslationManagerImplInfo.
        :type properties: ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties
        """

        self._properties = properties