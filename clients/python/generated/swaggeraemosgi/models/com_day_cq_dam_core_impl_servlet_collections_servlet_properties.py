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


class ComDayCqDamCoreImplServletCollectionsServletProperties(object):
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
        'cq_dam_batch_collections_properties': 'ConfigNodePropertyArray',
        'cq_dam_batch_collections_limit': 'ConfigNodePropertyInteger'
    }

    attribute_map = {
        'cq_dam_batch_collections_properties': 'cq.dam.batch.collections.properties',
        'cq_dam_batch_collections_limit': 'cq.dam.batch.collections.limit'
    }

    def __init__(self, cq_dam_batch_collections_properties=None, cq_dam_batch_collections_limit=None):  # noqa: E501
        """ComDayCqDamCoreImplServletCollectionsServletProperties - a model defined in OpenAPI"""  # noqa: E501

        self._cq_dam_batch_collections_properties = None
        self._cq_dam_batch_collections_limit = None
        self.discriminator = None

        if cq_dam_batch_collections_properties is not None:
            self.cq_dam_batch_collections_properties = cq_dam_batch_collections_properties
        if cq_dam_batch_collections_limit is not None:
            self.cq_dam_batch_collections_limit = cq_dam_batch_collections_limit

    @property
    def cq_dam_batch_collections_properties(self):
        """Gets the cq_dam_batch_collections_properties of this ComDayCqDamCoreImplServletCollectionsServletProperties.  # noqa: E501


        :return: The cq_dam_batch_collections_properties of this ComDayCqDamCoreImplServletCollectionsServletProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._cq_dam_batch_collections_properties

    @cq_dam_batch_collections_properties.setter
    def cq_dam_batch_collections_properties(self, cq_dam_batch_collections_properties):
        """Sets the cq_dam_batch_collections_properties of this ComDayCqDamCoreImplServletCollectionsServletProperties.


        :param cq_dam_batch_collections_properties: The cq_dam_batch_collections_properties of this ComDayCqDamCoreImplServletCollectionsServletProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._cq_dam_batch_collections_properties = cq_dam_batch_collections_properties

    @property
    def cq_dam_batch_collections_limit(self):
        """Gets the cq_dam_batch_collections_limit of this ComDayCqDamCoreImplServletCollectionsServletProperties.  # noqa: E501


        :return: The cq_dam_batch_collections_limit of this ComDayCqDamCoreImplServletCollectionsServletProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._cq_dam_batch_collections_limit

    @cq_dam_batch_collections_limit.setter
    def cq_dam_batch_collections_limit(self, cq_dam_batch_collections_limit):
        """Sets the cq_dam_batch_collections_limit of this ComDayCqDamCoreImplServletCollectionsServletProperties.


        :param cq_dam_batch_collections_limit: The cq_dam_batch_collections_limit of this ComDayCqDamCoreImplServletCollectionsServletProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._cq_dam_batch_collections_limit = cq_dam_batch_collections_limit

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
        if not isinstance(other, ComDayCqDamCoreImplServletCollectionsServletProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
