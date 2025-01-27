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


class ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties(object):
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
        'event_topics': 'ConfigNodePropertyString',
        'event_filter': 'ConfigNodePropertyString',
        'translate_listener_type': 'ConfigNodePropertyArray',
        'translate_property_list': 'ConfigNodePropertyArray',
        'pool_size': 'ConfigNodePropertyInteger',
        'max_pool_size': 'ConfigNodePropertyInteger',
        'queue_size': 'ConfigNodePropertyInteger',
        'keep_alive_time': 'ConfigNodePropertyInteger'
    }

    attribute_map = {
        'event_topics': 'event.topics',
        'event_filter': 'event.filter',
        'translate_listener_type': 'translate.listener.type',
        'translate_property_list': 'translate.property.list',
        'pool_size': 'poolSize',
        'max_pool_size': 'maxPoolSize',
        'queue_size': 'queueSize',
        'keep_alive_time': 'keepAliveTime'
    }

    def __init__(self, event_topics=None, event_filter=None, translate_listener_type=None, translate_property_list=None, pool_size=None, max_pool_size=None, queue_size=None, keep_alive_time=None):  # noqa: E501
        """ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties - a model defined in OpenAPI"""  # noqa: E501

        self._event_topics = None
        self._event_filter = None
        self._translate_listener_type = None
        self._translate_property_list = None
        self._pool_size = None
        self._max_pool_size = None
        self._queue_size = None
        self._keep_alive_time = None
        self.discriminator = None

        if event_topics is not None:
            self.event_topics = event_topics
        if event_filter is not None:
            self.event_filter = event_filter
        if translate_listener_type is not None:
            self.translate_listener_type = translate_listener_type
        if translate_property_list is not None:
            self.translate_property_list = translate_property_list
        if pool_size is not None:
            self.pool_size = pool_size
        if max_pool_size is not None:
            self.max_pool_size = max_pool_size
        if queue_size is not None:
            self.queue_size = queue_size
        if keep_alive_time is not None:
            self.keep_alive_time = keep_alive_time

    @property
    def event_topics(self):
        """Gets the event_topics of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501


        :return: The event_topics of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._event_topics

    @event_topics.setter
    def event_topics(self, event_topics):
        """Sets the event_topics of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.


        :param event_topics: The event_topics of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._event_topics = event_topics

    @property
    def event_filter(self):
        """Gets the event_filter of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501


        :return: The event_filter of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._event_filter

    @event_filter.setter
    def event_filter(self, event_filter):
        """Sets the event_filter of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.


        :param event_filter: The event_filter of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._event_filter = event_filter

    @property
    def translate_listener_type(self):
        """Gets the translate_listener_type of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501


        :return: The translate_listener_type of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._translate_listener_type

    @translate_listener_type.setter
    def translate_listener_type(self, translate_listener_type):
        """Sets the translate_listener_type of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.


        :param translate_listener_type: The translate_listener_type of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._translate_listener_type = translate_listener_type

    @property
    def translate_property_list(self):
        """Gets the translate_property_list of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501


        :return: The translate_property_list of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._translate_property_list

    @translate_property_list.setter
    def translate_property_list(self, translate_property_list):
        """Sets the translate_property_list of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.


        :param translate_property_list: The translate_property_list of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._translate_property_list = translate_property_list

    @property
    def pool_size(self):
        """Gets the pool_size of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501


        :return: The pool_size of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._pool_size

    @pool_size.setter
    def pool_size(self, pool_size):
        """Sets the pool_size of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.


        :param pool_size: The pool_size of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._pool_size = pool_size

    @property
    def max_pool_size(self):
        """Gets the max_pool_size of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501


        :return: The max_pool_size of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._max_pool_size

    @max_pool_size.setter
    def max_pool_size(self, max_pool_size):
        """Sets the max_pool_size of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.


        :param max_pool_size: The max_pool_size of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._max_pool_size = max_pool_size

    @property
    def queue_size(self):
        """Gets the queue_size of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501


        :return: The queue_size of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._queue_size

    @queue_size.setter
    def queue_size(self, queue_size):
        """Sets the queue_size of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.


        :param queue_size: The queue_size of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._queue_size = queue_size

    @property
    def keep_alive_time(self):
        """Gets the keep_alive_time of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501


        :return: The keep_alive_time of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._keep_alive_time

    @keep_alive_time.setter
    def keep_alive_time(self, keep_alive_time):
        """Sets the keep_alive_time of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.


        :param keep_alive_time: The keep_alive_time of this ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._keep_alive_time = keep_alive_time

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
        if not isinstance(other, ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
