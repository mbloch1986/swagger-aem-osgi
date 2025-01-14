# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_wcm_designimporter_impl_canvas_builder_impl_properties import ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties=None):  # noqa: E501
        """ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.  # noqa: E501
        :type properties: ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmDesignimporterImplCanvasBuilderImplInfo of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.  # noqa: E501
        :rtype: ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.


        :return: The pid of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.


        :param pid: The pid of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.


        :return: The title of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.


        :param title: The title of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.


        :return: The description of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.


        :param description: The description of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties:
        """Gets the properties of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.


        :return: The properties of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.
        :rtype: ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties):
        """Sets the properties of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.


        :param properties: The properties of this ComDayCqWcmDesignimporterImplCanvasBuilderImplInfo.
        :type properties: ComDayCqWcmDesignimporterImplCanvasBuilderImplProperties
        """

        self._properties = properties
