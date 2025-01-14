# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCqContentsyncImplContentSyncManagerImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, contentsync_fallback_authorizable: ConfigNodePropertyString=None, contentsync_fallback_updateuser: ConfigNodePropertyString=None):  # noqa: E501
        """ComDayCqContentsyncImplContentSyncManagerImplProperties - a model defined in OpenAPI

        :param contentsync_fallback_authorizable: The contentsync_fallback_authorizable of this ComDayCqContentsyncImplContentSyncManagerImplProperties.  # noqa: E501
        :type contentsync_fallback_authorizable: ConfigNodePropertyString
        :param contentsync_fallback_updateuser: The contentsync_fallback_updateuser of this ComDayCqContentsyncImplContentSyncManagerImplProperties.  # noqa: E501
        :type contentsync_fallback_updateuser: ConfigNodePropertyString
        """
        self.openapi_types = {
            'contentsync_fallback_authorizable': ConfigNodePropertyString,
            'contentsync_fallback_updateuser': ConfigNodePropertyString
        }

        self.attribute_map = {
            'contentsync_fallback_authorizable': 'contentsync.fallback.authorizable',
            'contentsync_fallback_updateuser': 'contentsync.fallback.updateuser'
        }

        self._contentsync_fallback_authorizable = contentsync_fallback_authorizable
        self._contentsync_fallback_updateuser = contentsync_fallback_updateuser

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCqContentsyncImplContentSyncManagerImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCqContentsyncImplContentSyncManagerImplProperties of this ComDayCqContentsyncImplContentSyncManagerImplProperties.  # noqa: E501
        :rtype: ComDayCqContentsyncImplContentSyncManagerImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def contentsync_fallback_authorizable(self) -> ConfigNodePropertyString:
        """Gets the contentsync_fallback_authorizable of this ComDayCqContentsyncImplContentSyncManagerImplProperties.


        :return: The contentsync_fallback_authorizable of this ComDayCqContentsyncImplContentSyncManagerImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._contentsync_fallback_authorizable

    @contentsync_fallback_authorizable.setter
    def contentsync_fallback_authorizable(self, contentsync_fallback_authorizable: ConfigNodePropertyString):
        """Sets the contentsync_fallback_authorizable of this ComDayCqContentsyncImplContentSyncManagerImplProperties.


        :param contentsync_fallback_authorizable: The contentsync_fallback_authorizable of this ComDayCqContentsyncImplContentSyncManagerImplProperties.
        :type contentsync_fallback_authorizable: ConfigNodePropertyString
        """

        self._contentsync_fallback_authorizable = contentsync_fallback_authorizable

    @property
    def contentsync_fallback_updateuser(self) -> ConfigNodePropertyString:
        """Gets the contentsync_fallback_updateuser of this ComDayCqContentsyncImplContentSyncManagerImplProperties.


        :return: The contentsync_fallback_updateuser of this ComDayCqContentsyncImplContentSyncManagerImplProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._contentsync_fallback_updateuser

    @contentsync_fallback_updateuser.setter
    def contentsync_fallback_updateuser(self, contentsync_fallback_updateuser: ConfigNodePropertyString):
        """Sets the contentsync_fallback_updateuser of this ComDayCqContentsyncImplContentSyncManagerImplProperties.


        :param contentsync_fallback_updateuser: The contentsync_fallback_updateuser of this ComDayCqContentsyncImplContentSyncManagerImplProperties.
        :type contentsync_fallback_updateuser: ConfigNodePropertyString
        """

        self._contentsync_fallback_updateuser = contentsync_fallback_updateuser
