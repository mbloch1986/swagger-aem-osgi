# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.com_day_cq_wcm_designimporter_impl_mobile_canvas_builder_impl_properties import ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, pid: str=None, title: str=None, description: str=None, properties: ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties=None):  # noqa: E501
        """ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo - a model defined in OpenAPI

        :param pid: The pid of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.  # noqa: E501
        :type pid: str
        :param title: The title of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.  # noqa: E501
        :type title: str
        :param description: The description of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.  # noqa: E501
        :type description: str
        :param properties: The properties of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.  # noqa: E501
        :type properties: ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties
        """
        self.openapi_types = {
            'pid': str,
            'title': str,
            'description': str,
            'properties': ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties
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
    def from_dict(cls, dikt) -> 'ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.  # noqa: E501
        :rtype: ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def pid(self) -> str:
        """Gets the pid of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.


        :return: The pid of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.
        :rtype: str
        """
        return self._pid

    @pid.setter
    def pid(self, pid: str):
        """Sets the pid of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.


        :param pid: The pid of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.
        :type pid: str
        """

        self._pid = pid

    @property
    def title(self) -> str:
        """Gets the title of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.


        :return: The title of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """Sets the title of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.


        :param title: The title of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.
        :type title: str
        """

        self._title = title

    @property
    def description(self) -> str:
        """Gets the description of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.


        :return: The description of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description: str):
        """Sets the description of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.


        :param description: The description of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.
        :type description: str
        """

        self._description = description

    @property
    def properties(self) -> ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties:
        """Gets the properties of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.


        :return: The properties of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.
        :rtype: ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties):
        """Sets the properties of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.


        :param properties: The properties of this ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplInfo.
        :type properties: ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties
        """

        self._properties = properties
