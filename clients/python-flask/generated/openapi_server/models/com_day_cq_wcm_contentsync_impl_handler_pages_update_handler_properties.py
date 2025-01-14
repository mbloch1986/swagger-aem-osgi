# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server import util


class ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, cq_pagesupdatehandler_imageresourcetypes: ConfigNodePropertyArray=None):  # noqa: E501
        """ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties - a model defined in OpenAPI

        :param cq_pagesupdatehandler_imageresourcetypes: The cq_pagesupdatehandler_imageresourcetypes of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties.  # noqa: E501
        :type cq_pagesupdatehandler_imageresourcetypes: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'cq_pagesupdatehandler_imageresourcetypes': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'cq_pagesupdatehandler_imageresourcetypes': 'cq.pagesupdatehandler.imageresourcetypes'
        }

        self._cq_pagesupdatehandler_imageresourcetypes = cq_pagesupdatehandler_imageresourcetypes

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties.  # noqa: E501
        :rtype: ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def cq_pagesupdatehandler_imageresourcetypes(self) -> ConfigNodePropertyArray:
        """Gets the cq_pagesupdatehandler_imageresourcetypes of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties.


        :return: The cq_pagesupdatehandler_imageresourcetypes of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._cq_pagesupdatehandler_imageresourcetypes

    @cq_pagesupdatehandler_imageresourcetypes.setter
    def cq_pagesupdatehandler_imageresourcetypes(self, cq_pagesupdatehandler_imageresourcetypes: ConfigNodePropertyArray):
        """Sets the cq_pagesupdatehandler_imageresourcetypes of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties.


        :param cq_pagesupdatehandler_imageresourcetypes: The cq_pagesupdatehandler_imageresourcetypes of this ComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties.
        :type cq_pagesupdatehandler_imageresourcetypes: ConfigNodePropertyArray
        """

        self._cq_pagesupdatehandler_imageresourcetypes = cq_pagesupdatehandler_imageresourcetypes
