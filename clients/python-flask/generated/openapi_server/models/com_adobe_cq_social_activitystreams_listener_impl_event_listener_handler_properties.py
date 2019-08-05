# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, event_topics: ConfigNodePropertyString=None, event_filter: ConfigNodePropertyString=None):  # noqa: E501
        """ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties - a model defined in OpenAPI

        :param event_topics: The event_topics of this ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties.  # noqa: E501
        :type event_topics: ConfigNodePropertyString
        :param event_filter: The event_filter of this ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties.  # noqa: E501
        :type event_filter: ConfigNodePropertyString
        """
        self.openapi_types = {
            'event_topics': ConfigNodePropertyString,
            'event_filter': ConfigNodePropertyString
        }

        self.attribute_map = {
            'event_topics': 'event.topics',
            'event_filter': 'event.filter'
        }

        self._event_topics = event_topics
        self._event_filter = event_filter

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties of this ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties.  # noqa: E501
        :rtype: ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def event_topics(self) -> ConfigNodePropertyString:
        """Gets the event_topics of this ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties.


        :return: The event_topics of this ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._event_topics

    @event_topics.setter
    def event_topics(self, event_topics: ConfigNodePropertyString):
        """Sets the event_topics of this ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties.


        :param event_topics: The event_topics of this ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties.
        :type event_topics: ConfigNodePropertyString
        """

        self._event_topics = event_topics

    @property
    def event_filter(self) -> ConfigNodePropertyString:
        """Gets the event_filter of this ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties.


        :return: The event_filter of this ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._event_filter

    @event_filter.setter
    def event_filter(self, event_filter: ConfigNodePropertyString):
        """Sets the event_filter of this ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties.


        :param event_filter: The event_filter of this ComAdobeCqSocialActivitystreamsListenerImplEventListenerHandlerProperties.
        :type event_filter: ConfigNodePropertyString
        """

        self._event_filter = event_filter