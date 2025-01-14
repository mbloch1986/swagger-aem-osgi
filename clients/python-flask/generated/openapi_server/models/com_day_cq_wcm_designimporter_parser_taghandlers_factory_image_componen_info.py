# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_wcm_designimporter_parser_taghandlers_factory_image_componen_properties import ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenProperties=None):  # noqa: E501
        """ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.  # noqa: E501
        :type properties: ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.  # noqa: E501
        :rtype: ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.


        :return: The pid of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.


        :param pid: The pid of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.


        :return: The title of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.


        :param title: The title of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.


        :return: The description of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.


        :param description: The description of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenProperties:
        """Gets the properties of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.


        :return: The properties of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.
        :rtype: ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenProperties):
        """Sets the properties of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.


        :param properties: The properties of this ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenInfo.
        :type properties: ComDayCqWcmDesignimporterParserTaghandlersFactoryImageComponenProperties
        """

        self._properties = properties
