# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, workflowpackageinfoprovider_filter: ConfigNodePropertyArray=None, workflowpackageinfoprovider_filter_rootpath: ConfigNodePropertyString=None):  # noqa: E501
        """ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties - a model defined in OpenAPI

        :param workflowpackageinfoprovider_filter: The workflowpackageinfoprovider_filter of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties.  # noqa: E501
        :type workflowpackageinfoprovider_filter: ConfigNodePropertyArray
        :param workflowpackageinfoprovider_filter_rootpath: The workflowpackageinfoprovider_filter_rootpath of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties.  # noqa: E501
        :type workflowpackageinfoprovider_filter_rootpath: ConfigNodePropertyString
        """
        self.openapi_types = {
            'workflowpackageinfoprovider_filter': ConfigNodePropertyArray,
            'workflowpackageinfoprovider_filter_rootpath': ConfigNodePropertyString
        }

        self.attribute_map = {
            'workflowpackageinfoprovider_filter': 'workflowpackageinfoprovider.filter',
            'workflowpackageinfoprovider_filter_rootpath': 'workflowpackageinfoprovider.filter.rootpath'
        }

        self._workflowpackageinfoprovider_filter = workflowpackageinfoprovider_filter
        self._workflowpackageinfoprovider_filter_rootpath = workflowpackageinfoprovider_filter_rootpath

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties.  # noqa: E501
        :rtype: ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def workflowpackageinfoprovider_filter(self) -> ConfigNodePropertyArray:
        """Gets the workflowpackageinfoprovider_filter of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties.


        :return: The workflowpackageinfoprovider_filter of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._workflowpackageinfoprovider_filter

    @workflowpackageinfoprovider_filter.setter
    def workflowpackageinfoprovider_filter(self, workflowpackageinfoprovider_filter: ConfigNodePropertyArray):
        """Sets the workflowpackageinfoprovider_filter of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties.


        :param workflowpackageinfoprovider_filter: The workflowpackageinfoprovider_filter of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties.
        :type workflowpackageinfoprovider_filter: ConfigNodePropertyArray
        """

        self._workflowpackageinfoprovider_filter = workflowpackageinfoprovider_filter

    @property
    def workflowpackageinfoprovider_filter_rootpath(self) -> ConfigNodePropertyString:
        """Gets the workflowpackageinfoprovider_filter_rootpath of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties.


        :return: The workflowpackageinfoprovider_filter_rootpath of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._workflowpackageinfoprovider_filter_rootpath

    @workflowpackageinfoprovider_filter_rootpath.setter
    def workflowpackageinfoprovider_filter_rootpath(self, workflowpackageinfoprovider_filter_rootpath: ConfigNodePropertyString):
        """Sets the workflowpackageinfoprovider_filter_rootpath of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties.


        :param workflowpackageinfoprovider_filter_rootpath: The workflowpackageinfoprovider_filter_rootpath of this ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties.
        :type workflowpackageinfoprovider_filter_rootpath: ConfigNodePropertyString
        """

        self._workflowpackageinfoprovider_filter_rootpath = workflowpackageinfoprovider_filter_rootpath
