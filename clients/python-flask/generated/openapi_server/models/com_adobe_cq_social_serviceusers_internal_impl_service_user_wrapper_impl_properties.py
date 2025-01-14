# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, enable_fallback: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties - a model defined in OpenAPI

        :param enable_fallback: The enable_fallback of this ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties.  # noqa: E501
        :type enable_fallback: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'enable_fallback': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'enable_fallback': 'enableFallback'
        }

        self._enable_fallback = enable_fallback

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties of this ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties.  # noqa: E501
        :rtype: ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def enable_fallback(self) -> ConfigNodePropertyBoolean:
        """Gets the enable_fallback of this ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties.


        :return: The enable_fallback of this ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._enable_fallback

    @enable_fallback.setter
    def enable_fallback(self, enable_fallback: ConfigNodePropertyBoolean):
        """Sets the enable_fallback of this ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties.


        :param enable_fallback: The enable_fallback of this ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties.
        :type enable_fallback: ConfigNodePropertyBoolean
        """

        self._enable_fallback = enable_fallback
