# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, components_using_tags: ConfigNodePropertyArray=None):  # noqa: E501
        """ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties - a model defined in OpenAPI

        :param components_using_tags: The components_using_tags of this ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties.  # noqa: E501
        :type components_using_tags: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'components_using_tags': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'components_using_tags': 'componentsUsingTags'
        }

        self._components_using_tags = components_using_tags

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialSiteImplSiteConfiguratorImplProperties of this ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties.  # noqa: E501
        :rtype: ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def components_using_tags(self) -> ConfigNodePropertyArray:
        """Gets the components_using_tags of this ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties.


        :return: The components_using_tags of this ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._components_using_tags

    @components_using_tags.setter
    def components_using_tags(self, components_using_tags: ConfigNodePropertyArray):
        """Sets the components_using_tags of this ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties.


        :param components_using_tags: The components_using_tags of this ComAdobeCqSocialSiteImplSiteConfiguratorImplProperties.
        :type components_using_tags: ConfigNodePropertyArray
        """

        self._components_using_tags = components_using_tags