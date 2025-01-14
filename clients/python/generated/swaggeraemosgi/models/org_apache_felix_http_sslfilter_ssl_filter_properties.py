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


class OrgApacheFelixHttpSslfilterSslFilterProperties(object):
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
        'ssl_forward_header': 'ConfigNodePropertyString',
        'ssl_forward_value': 'ConfigNodePropertyString',
        'ssl_forward_cert_header': 'ConfigNodePropertyString',
        'rewrite_absolute_urls': 'ConfigNodePropertyBoolean'
    }

    attribute_map = {
        'ssl_forward_header': 'ssl-forward.header',
        'ssl_forward_value': 'ssl-forward.value',
        'ssl_forward_cert_header': 'ssl-forward-cert.header',
        'rewrite_absolute_urls': 'rewrite.absolute.urls'
    }

    def __init__(self, ssl_forward_header=None, ssl_forward_value=None, ssl_forward_cert_header=None, rewrite_absolute_urls=None):  # noqa: E501
        """OrgApacheFelixHttpSslfilterSslFilterProperties - a model defined in OpenAPI"""  # noqa: E501

        self._ssl_forward_header = None
        self._ssl_forward_value = None
        self._ssl_forward_cert_header = None
        self._rewrite_absolute_urls = None
        self.discriminator = None

        if ssl_forward_header is not None:
            self.ssl_forward_header = ssl_forward_header
        if ssl_forward_value is not None:
            self.ssl_forward_value = ssl_forward_value
        if ssl_forward_cert_header is not None:
            self.ssl_forward_cert_header = ssl_forward_cert_header
        if rewrite_absolute_urls is not None:
            self.rewrite_absolute_urls = rewrite_absolute_urls

    @property
    def ssl_forward_header(self):
        """Gets the ssl_forward_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501


        :return: The ssl_forward_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._ssl_forward_header

    @ssl_forward_header.setter
    def ssl_forward_header(self, ssl_forward_header):
        """Sets the ssl_forward_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.


        :param ssl_forward_header: The ssl_forward_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._ssl_forward_header = ssl_forward_header

    @property
    def ssl_forward_value(self):
        """Gets the ssl_forward_value of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501


        :return: The ssl_forward_value of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._ssl_forward_value

    @ssl_forward_value.setter
    def ssl_forward_value(self, ssl_forward_value):
        """Sets the ssl_forward_value of this OrgApacheFelixHttpSslfilterSslFilterProperties.


        :param ssl_forward_value: The ssl_forward_value of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._ssl_forward_value = ssl_forward_value

    @property
    def ssl_forward_cert_header(self):
        """Gets the ssl_forward_cert_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501


        :return: The ssl_forward_cert_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._ssl_forward_cert_header

    @ssl_forward_cert_header.setter
    def ssl_forward_cert_header(self, ssl_forward_cert_header):
        """Sets the ssl_forward_cert_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.


        :param ssl_forward_cert_header: The ssl_forward_cert_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._ssl_forward_cert_header = ssl_forward_cert_header

    @property
    def rewrite_absolute_urls(self):
        """Gets the rewrite_absolute_urls of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501


        :return: The rewrite_absolute_urls of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._rewrite_absolute_urls

    @rewrite_absolute_urls.setter
    def rewrite_absolute_urls(self, rewrite_absolute_urls):
        """Sets the rewrite_absolute_urls of this OrgApacheFelixHttpSslfilterSslFilterProperties.


        :param rewrite_absolute_urls: The rewrite_absolute_urls of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._rewrite_absolute_urls = rewrite_absolute_urls

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
        if not isinstance(other, OrgApacheFelixHttpSslfilterSslFilterProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
