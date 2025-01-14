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


class ComDayCqWcmCoreImplServletsThumbnailServletProperties(object):
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
        'workspace': 'ConfigNodePropertyString',
        'dimensions': 'ConfigNodePropertyArray'
    }

    attribute_map = {
        'workspace': 'workspace',
        'dimensions': 'dimensions'
    }

    def __init__(self, workspace=None, dimensions=None):  # noqa: E501
        """ComDayCqWcmCoreImplServletsThumbnailServletProperties - a model defined in OpenAPI"""  # noqa: E501

        self._workspace = None
        self._dimensions = None
        self.discriminator = None

        if workspace is not None:
            self.workspace = workspace
        if dimensions is not None:
            self.dimensions = dimensions

    @property
    def workspace(self):
        """Gets the workspace of this ComDayCqWcmCoreImplServletsThumbnailServletProperties.  # noqa: E501


        :return: The workspace of this ComDayCqWcmCoreImplServletsThumbnailServletProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._workspace

    @workspace.setter
    def workspace(self, workspace):
        """Sets the workspace of this ComDayCqWcmCoreImplServletsThumbnailServletProperties.


        :param workspace: The workspace of this ComDayCqWcmCoreImplServletsThumbnailServletProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._workspace = workspace

    @property
    def dimensions(self):
        """Gets the dimensions of this ComDayCqWcmCoreImplServletsThumbnailServletProperties.  # noqa: E501


        :return: The dimensions of this ComDayCqWcmCoreImplServletsThumbnailServletProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._dimensions

    @dimensions.setter
    def dimensions(self, dimensions):
        """Sets the dimensions of this ComDayCqWcmCoreImplServletsThumbnailServletProperties.


        :param dimensions: The dimensions of this ComDayCqWcmCoreImplServletsThumbnailServletProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._dimensions = dimensions

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
        if not isinstance(other, ComDayCqWcmCoreImplServletsThumbnailServletProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
