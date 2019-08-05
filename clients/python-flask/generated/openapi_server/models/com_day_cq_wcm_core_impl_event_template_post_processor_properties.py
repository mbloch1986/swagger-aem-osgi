# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmCoreImplEventTemplatePostProcessorProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, paths: ConfigNodePropertyString=None):  # noqa: E501
        """ComDayCqWcmCoreImplEventTemplatePostProcessorProperties - a model defined in OpenAPI

        :param paths: The paths of this ComDayCqWcmCoreImplEventTemplatePostProcessorProperties.  # noqa: E501
        :type paths: ConfigNodePropertyString
        """
        self.openapi_types = {
            'paths': ConfigNodePropertyString
        }

        self.attribute_map = {
            'paths': 'paths'
        }

        self._paths = paths

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqWcmCoreImplEventTemplatePostProcessorProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmCoreImplEventTemplatePostProcessorProperties of this ComDayCqWcmCoreImplEventTemplatePostProcessorProperties.  # noqa: E501
        :rtype: ComDayCqWcmCoreImplEventTemplatePostProcessorProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def paths(self) -> ConfigNodePropertyString:
        """Gets the paths of this ComDayCqWcmCoreImplEventTemplatePostProcessorProperties.


        :return: The paths of this ComDayCqWcmCoreImplEventTemplatePostProcessorProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._paths

    @paths.setter
    def paths(self, paths: ConfigNodePropertyString):
        """Sets the paths of this ComDayCqWcmCoreImplEventTemplatePostProcessorProperties.


        :param paths: The paths of this ComDayCqWcmCoreImplEventTemplatePostProcessorProperties.
        :type paths: ConfigNodePropertyString
        """

        self._paths = paths