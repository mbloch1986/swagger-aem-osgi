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


class ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties(object):
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
        'com_adobe_cq_screens_analytics_impl_url': 'ConfigNodePropertyString',
        'com_adobe_cq_screens_analytics_impl_apikey': 'ConfigNodePropertyString',
        'com_adobe_cq_screens_analytics_impl_project': 'ConfigNodePropertyString',
        'com_adobe_cq_screens_analytics_impl_environment': 'ConfigNodePropertyDropDown',
        'com_adobe_cq_screens_analytics_impl_send_frequency': 'ConfigNodePropertyInteger'
    }

    attribute_map = {
        'com_adobe_cq_screens_analytics_impl_url': 'com.adobe.cq.screens.analytics.impl.url',
        'com_adobe_cq_screens_analytics_impl_apikey': 'com.adobe.cq.screens.analytics.impl.apikey',
        'com_adobe_cq_screens_analytics_impl_project': 'com.adobe.cq.screens.analytics.impl.project',
        'com_adobe_cq_screens_analytics_impl_environment': 'com.adobe.cq.screens.analytics.impl.environment',
        'com_adobe_cq_screens_analytics_impl_send_frequency': 'com.adobe.cq.screens.analytics.impl.sendFrequency'
    }

    def __init__(self, com_adobe_cq_screens_analytics_impl_url=None, com_adobe_cq_screens_analytics_impl_apikey=None, com_adobe_cq_screens_analytics_impl_project=None, com_adobe_cq_screens_analytics_impl_environment=None, com_adobe_cq_screens_analytics_impl_send_frequency=None):  # noqa: E501
        """ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties - a model defined in OpenAPI"""  # noqa: E501

        self._com_adobe_cq_screens_analytics_impl_url = None
        self._com_adobe_cq_screens_analytics_impl_apikey = None
        self._com_adobe_cq_screens_analytics_impl_project = None
        self._com_adobe_cq_screens_analytics_impl_environment = None
        self._com_adobe_cq_screens_analytics_impl_send_frequency = None
        self.discriminator = None

        if com_adobe_cq_screens_analytics_impl_url is not None:
            self.com_adobe_cq_screens_analytics_impl_url = com_adobe_cq_screens_analytics_impl_url
        if com_adobe_cq_screens_analytics_impl_apikey is not None:
            self.com_adobe_cq_screens_analytics_impl_apikey = com_adobe_cq_screens_analytics_impl_apikey
        if com_adobe_cq_screens_analytics_impl_project is not None:
            self.com_adobe_cq_screens_analytics_impl_project = com_adobe_cq_screens_analytics_impl_project
        if com_adobe_cq_screens_analytics_impl_environment is not None:
            self.com_adobe_cq_screens_analytics_impl_environment = com_adobe_cq_screens_analytics_impl_environment
        if com_adobe_cq_screens_analytics_impl_send_frequency is not None:
            self.com_adobe_cq_screens_analytics_impl_send_frequency = com_adobe_cq_screens_analytics_impl_send_frequency

    @property
    def com_adobe_cq_screens_analytics_impl_url(self):
        """Gets the com_adobe_cq_screens_analytics_impl_url of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.  # noqa: E501


        :return: The com_adobe_cq_screens_analytics_impl_url of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._com_adobe_cq_screens_analytics_impl_url

    @com_adobe_cq_screens_analytics_impl_url.setter
    def com_adobe_cq_screens_analytics_impl_url(self, com_adobe_cq_screens_analytics_impl_url):
        """Sets the com_adobe_cq_screens_analytics_impl_url of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.


        :param com_adobe_cq_screens_analytics_impl_url: The com_adobe_cq_screens_analytics_impl_url of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._com_adobe_cq_screens_analytics_impl_url = com_adobe_cq_screens_analytics_impl_url

    @property
    def com_adobe_cq_screens_analytics_impl_apikey(self):
        """Gets the com_adobe_cq_screens_analytics_impl_apikey of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.  # noqa: E501


        :return: The com_adobe_cq_screens_analytics_impl_apikey of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._com_adobe_cq_screens_analytics_impl_apikey

    @com_adobe_cq_screens_analytics_impl_apikey.setter
    def com_adobe_cq_screens_analytics_impl_apikey(self, com_adobe_cq_screens_analytics_impl_apikey):
        """Sets the com_adobe_cq_screens_analytics_impl_apikey of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.


        :param com_adobe_cq_screens_analytics_impl_apikey: The com_adobe_cq_screens_analytics_impl_apikey of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._com_adobe_cq_screens_analytics_impl_apikey = com_adobe_cq_screens_analytics_impl_apikey

    @property
    def com_adobe_cq_screens_analytics_impl_project(self):
        """Gets the com_adobe_cq_screens_analytics_impl_project of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.  # noqa: E501


        :return: The com_adobe_cq_screens_analytics_impl_project of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._com_adobe_cq_screens_analytics_impl_project

    @com_adobe_cq_screens_analytics_impl_project.setter
    def com_adobe_cq_screens_analytics_impl_project(self, com_adobe_cq_screens_analytics_impl_project):
        """Sets the com_adobe_cq_screens_analytics_impl_project of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.


        :param com_adobe_cq_screens_analytics_impl_project: The com_adobe_cq_screens_analytics_impl_project of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._com_adobe_cq_screens_analytics_impl_project = com_adobe_cq_screens_analytics_impl_project

    @property
    def com_adobe_cq_screens_analytics_impl_environment(self):
        """Gets the com_adobe_cq_screens_analytics_impl_environment of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.  # noqa: E501


        :return: The com_adobe_cq_screens_analytics_impl_environment of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyDropDown
        """
        return self._com_adobe_cq_screens_analytics_impl_environment

    @com_adobe_cq_screens_analytics_impl_environment.setter
    def com_adobe_cq_screens_analytics_impl_environment(self, com_adobe_cq_screens_analytics_impl_environment):
        """Sets the com_adobe_cq_screens_analytics_impl_environment of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.


        :param com_adobe_cq_screens_analytics_impl_environment: The com_adobe_cq_screens_analytics_impl_environment of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.  # noqa: E501
        :type: ConfigNodePropertyDropDown
        """

        self._com_adobe_cq_screens_analytics_impl_environment = com_adobe_cq_screens_analytics_impl_environment

    @property
    def com_adobe_cq_screens_analytics_impl_send_frequency(self):
        """Gets the com_adobe_cq_screens_analytics_impl_send_frequency of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.  # noqa: E501


        :return: The com_adobe_cq_screens_analytics_impl_send_frequency of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._com_adobe_cq_screens_analytics_impl_send_frequency

    @com_adobe_cq_screens_analytics_impl_send_frequency.setter
    def com_adobe_cq_screens_analytics_impl_send_frequency(self, com_adobe_cq_screens_analytics_impl_send_frequency):
        """Sets the com_adobe_cq_screens_analytics_impl_send_frequency of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.


        :param com_adobe_cq_screens_analytics_impl_send_frequency: The com_adobe_cq_screens_analytics_impl_send_frequency of this ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._com_adobe_cq_screens_analytics_impl_send_frequency = com_adobe_cq_screens_analytics_impl_send_frequency

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
        if not isinstance(other, ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
