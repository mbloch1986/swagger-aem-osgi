# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, replicate_comment_resource_types: ConfigNodePropertyArray=None):  # noqa: E501
        """ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties - a model defined in OpenAPI

        :param replicate_comment_resource_types: The replicate_comment_resource_types of this ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties.  # noqa: E501
        :type replicate_comment_resource_types: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'replicate_comment_resource_types': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'replicate_comment_resource_types': 'replicate.comment.resourceTypes'
        }

        self._replicate_comment_resource_types = replicate_comment_resource_types

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties of this ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties.  # noqa: E501
        :rtype: ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def replicate_comment_resource_types(self) -> ConfigNodePropertyArray:
        """Gets the replicate_comment_resource_types of this ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties.


        :return: The replicate_comment_resource_types of this ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._replicate_comment_resource_types

    @replicate_comment_resource_types.setter
    def replicate_comment_resource_types(self, replicate_comment_resource_types: ConfigNodePropertyArray):
        """Sets the replicate_comment_resource_types of this ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties.


        :param replicate_comment_resource_types: The replicate_comment_resource_types of this ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties.
        :type replicate_comment_resource_types: ConfigNodePropertyArray
        """

        self._replicate_comment_resource_types = replicate_comment_resource_types
