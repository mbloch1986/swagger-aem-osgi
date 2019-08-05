# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_drop_down import ConfigNodePropertyDropDown  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, feed_generator_algorithm: ConfigNodePropertyDropDown=None):  # noqa: E501
        """ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties - a model defined in OpenAPI

        :param feed_generator_algorithm: The feed_generator_algorithm of this ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties.  # noqa: E501
        :type feed_generator_algorithm: ConfigNodePropertyDropDown
        """
        self.openapi_types = {
            'feed_generator_algorithm': ConfigNodePropertyDropDown
        }

        self.attribute_map = {
            'feed_generator_algorithm': 'Feed generator algorithm'
        }

        self._feed_generator_algorithm = feed_generator_algorithm

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties of this ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties.  # noqa: E501
        :rtype: ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def feed_generator_algorithm(self) -> ConfigNodePropertyDropDown:
        """Gets the feed_generator_algorithm of this ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties.


        :return: The feed_generator_algorithm of this ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties.
        :rtype: ConfigNodePropertyDropDown
        """
        return self._feed_generator_algorithm

    @feed_generator_algorithm.setter
    def feed_generator_algorithm(self, feed_generator_algorithm: ConfigNodePropertyDropDown):
        """Sets the feed_generator_algorithm of this ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties.


        :param feed_generator_algorithm: The feed_generator_algorithm of this ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties.
        :type feed_generator_algorithm: ConfigNodePropertyDropDown
        """

        self._feed_generator_algorithm = feed_generator_algorithm