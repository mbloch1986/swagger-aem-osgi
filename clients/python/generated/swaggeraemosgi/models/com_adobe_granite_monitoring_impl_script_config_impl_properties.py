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


class ComAdobeGraniteMonitoringImplScriptConfigImplProperties(object):
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
        'script_filename': 'ConfigNodePropertyString',
        'script_display': 'ConfigNodePropertyString',
        'script_path': 'ConfigNodePropertyString',
        'script_platform': 'ConfigNodePropertyArray',
        'interval': 'ConfigNodePropertyInteger',
        'jmxdomain': 'ConfigNodePropertyString'
    }

    attribute_map = {
        'script_filename': 'script.filename',
        'script_display': 'script.display',
        'script_path': 'script.path',
        'script_platform': 'script.platform',
        'interval': 'interval',
        'jmxdomain': 'jmxdomain'
    }

    def __init__(self, script_filename=None, script_display=None, script_path=None, script_platform=None, interval=None, jmxdomain=None):  # noqa: E501
        """ComAdobeGraniteMonitoringImplScriptConfigImplProperties - a model defined in OpenAPI"""  # noqa: E501

        self._script_filename = None
        self._script_display = None
        self._script_path = None
        self._script_platform = None
        self._interval = None
        self._jmxdomain = None
        self.discriminator = None

        if script_filename is not None:
            self.script_filename = script_filename
        if script_display is not None:
            self.script_display = script_display
        if script_path is not None:
            self.script_path = script_path
        if script_platform is not None:
            self.script_platform = script_platform
        if interval is not None:
            self.interval = interval
        if jmxdomain is not None:
            self.jmxdomain = jmxdomain

    @property
    def script_filename(self):
        """Gets the script_filename of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501


        :return: The script_filename of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._script_filename

    @script_filename.setter
    def script_filename(self, script_filename):
        """Sets the script_filename of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.


        :param script_filename: The script_filename of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._script_filename = script_filename

    @property
    def script_display(self):
        """Gets the script_display of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501


        :return: The script_display of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._script_display

    @script_display.setter
    def script_display(self, script_display):
        """Sets the script_display of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.


        :param script_display: The script_display of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._script_display = script_display

    @property
    def script_path(self):
        """Gets the script_path of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501


        :return: The script_path of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._script_path

    @script_path.setter
    def script_path(self, script_path):
        """Sets the script_path of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.


        :param script_path: The script_path of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._script_path = script_path

    @property
    def script_platform(self):
        """Gets the script_platform of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501


        :return: The script_platform of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._script_platform

    @script_platform.setter
    def script_platform(self, script_platform):
        """Sets the script_platform of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.


        :param script_platform: The script_platform of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._script_platform = script_platform

    @property
    def interval(self):
        """Gets the interval of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501


        :return: The interval of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._interval

    @interval.setter
    def interval(self, interval):
        """Sets the interval of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.


        :param interval: The interval of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._interval = interval

    @property
    def jmxdomain(self):
        """Gets the jmxdomain of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501


        :return: The jmxdomain of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._jmxdomain

    @jmxdomain.setter
    def jmxdomain(self, jmxdomain):
        """Sets the jmxdomain of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.


        :param jmxdomain: The jmxdomain of this ComAdobeGraniteMonitoringImplScriptConfigImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._jmxdomain = jmxdomain

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
        if not isinstance(other, ComAdobeGraniteMonitoringImplScriptConfigImplProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
