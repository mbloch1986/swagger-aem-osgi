# coding: utf-8

"""
    Adobe Experience Manager OSGI config (AEM) API

    Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API  # noqa: E501

    OpenAPI spec version: 1.0.0-pre.0
    Contact: opensource@shinesolutions.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'event_filter': 'ConfigNodePropertyString',
        'min_thread_pool_size': 'ConfigNodePropertyInteger',
        'max_thread_pool_size': 'ConfigNodePropertyInteger',
        'cq_wcm_workflow_terminate_on_activate': 'ConfigNodePropertyBoolean',
        'cq_wcm_worklfow_terminate_exclusion_list': 'ConfigNodePropertyArray'
    }

    attribute_map = {
        'event_filter': 'event.filter',
        'min_thread_pool_size': 'minThreadPoolSize',
        'max_thread_pool_size': 'maxThreadPoolSize',
        'cq_wcm_workflow_terminate_on_activate': 'cq.wcm.workflow.terminate.on.activate',
        'cq_wcm_worklfow_terminate_exclusion_list': 'cq.wcm.worklfow.terminate.exclusion.list'
    }

    def __init__(self, event_filter=None, min_thread_pool_size=None, max_thread_pool_size=None, cq_wcm_workflow_terminate_on_activate=None, cq_wcm_worklfow_terminate_exclusion_list=None):  # noqa: E501
        """ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties - a model defined in OpenAPI"""  # noqa: E501

        self._event_filter = None
        self._min_thread_pool_size = None
        self._max_thread_pool_size = None
        self._cq_wcm_workflow_terminate_on_activate = None
        self._cq_wcm_worklfow_terminate_exclusion_list = None
        self.discriminator = None

        if event_filter is not None:
            self.event_filter = event_filter
        if min_thread_pool_size is not None:
            self.min_thread_pool_size = min_thread_pool_size
        if max_thread_pool_size is not None:
            self.max_thread_pool_size = max_thread_pool_size
        if cq_wcm_workflow_terminate_on_activate is not None:
            self.cq_wcm_workflow_terminate_on_activate = cq_wcm_workflow_terminate_on_activate
        if cq_wcm_worklfow_terminate_exclusion_list is not None:
            self.cq_wcm_worklfow_terminate_exclusion_list = cq_wcm_worklfow_terminate_exclusion_list

    @property
    def event_filter(self):
        """Gets the event_filter of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.  # noqa: E501


        :return: The event_filter of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._event_filter

    @event_filter.setter
    def event_filter(self, event_filter):
        """Sets the event_filter of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.


        :param event_filter: The event_filter of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._event_filter = event_filter

    @property
    def min_thread_pool_size(self):
        """Gets the min_thread_pool_size of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.  # noqa: E501


        :return: The min_thread_pool_size of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._min_thread_pool_size

    @min_thread_pool_size.setter
    def min_thread_pool_size(self, min_thread_pool_size):
        """Sets the min_thread_pool_size of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.


        :param min_thread_pool_size: The min_thread_pool_size of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._min_thread_pool_size = min_thread_pool_size

    @property
    def max_thread_pool_size(self):
        """Gets the max_thread_pool_size of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.  # noqa: E501


        :return: The max_thread_pool_size of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._max_thread_pool_size

    @max_thread_pool_size.setter
    def max_thread_pool_size(self, max_thread_pool_size):
        """Sets the max_thread_pool_size of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.


        :param max_thread_pool_size: The max_thread_pool_size of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._max_thread_pool_size = max_thread_pool_size

    @property
    def cq_wcm_workflow_terminate_on_activate(self):
        """Gets the cq_wcm_workflow_terminate_on_activate of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.  # noqa: E501


        :return: The cq_wcm_workflow_terminate_on_activate of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._cq_wcm_workflow_terminate_on_activate

    @cq_wcm_workflow_terminate_on_activate.setter
    def cq_wcm_workflow_terminate_on_activate(self, cq_wcm_workflow_terminate_on_activate):
        """Sets the cq_wcm_workflow_terminate_on_activate of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.


        :param cq_wcm_workflow_terminate_on_activate: The cq_wcm_workflow_terminate_on_activate of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._cq_wcm_workflow_terminate_on_activate = cq_wcm_workflow_terminate_on_activate

    @property
    def cq_wcm_worklfow_terminate_exclusion_list(self):
        """Gets the cq_wcm_worklfow_terminate_exclusion_list of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.  # noqa: E501


        :return: The cq_wcm_worklfow_terminate_exclusion_list of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._cq_wcm_worklfow_terminate_exclusion_list

    @cq_wcm_worklfow_terminate_exclusion_list.setter
    def cq_wcm_worklfow_terminate_exclusion_list(self, cq_wcm_worklfow_terminate_exclusion_list):
        """Sets the cq_wcm_worklfow_terminate_exclusion_list of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.


        :param cq_wcm_worklfow_terminate_exclusion_list: The cq_wcm_worklfow_terminate_exclusion_list of this ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._cq_wcm_worklfow_terminate_exclusion_list = cq_wcm_worklfow_terminate_exclusion_list

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
