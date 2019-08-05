# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheFelixHttpSslfilterSslFilterProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, ssl_forward_header: ConfigNodePropertyString=None, ssl_forward_value: ConfigNodePropertyString=None, ssl_forward_cert_header: ConfigNodePropertyString=None, rewrite_absolute_urls: ConfigNodePropertyBoolean=None):  # noqa: E501
        """OrgApacheFelixHttpSslfilterSslFilterProperties - a model defined in OpenAPI

        :param ssl_forward_header: The ssl_forward_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501
        :type ssl_forward_header: ConfigNodePropertyString
        :param ssl_forward_value: The ssl_forward_value of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501
        :type ssl_forward_value: ConfigNodePropertyString
        :param ssl_forward_cert_header: The ssl_forward_cert_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501
        :type ssl_forward_cert_header: ConfigNodePropertyString
        :param rewrite_absolute_urls: The rewrite_absolute_urls of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501
        :type rewrite_absolute_urls: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'ssl_forward_header': ConfigNodePropertyString,
            'ssl_forward_value': ConfigNodePropertyString,
            'ssl_forward_cert_header': ConfigNodePropertyString,
            'rewrite_absolute_urls': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'ssl_forward_header': 'ssl-forward.header',
            'ssl_forward_value': 'ssl-forward.value',
            'ssl_forward_cert_header': 'ssl-forward-cert.header',
            'rewrite_absolute_urls': 'rewrite.absolute.urls'
        }

        self._ssl_forward_header = ssl_forward_header
        self._ssl_forward_value = ssl_forward_value
        self._ssl_forward_cert_header = ssl_forward_cert_header
        self._rewrite_absolute_urls = rewrite_absolute_urls

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheFelixHttpSslfilterSslFilterProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheFelixHttpSslfilterSslFilterProperties of this OrgApacheFelixHttpSslfilterSslFilterProperties.  # noqa: E501
        :rtype: OrgApacheFelixHttpSslfilterSslFilterProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def ssl_forward_header(self) -> ConfigNodePropertyString:
        """Gets the ssl_forward_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.


        :return: The ssl_forward_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._ssl_forward_header

    @ssl_forward_header.setter
    def ssl_forward_header(self, ssl_forward_header: ConfigNodePropertyString):
        """Sets the ssl_forward_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.


        :param ssl_forward_header: The ssl_forward_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.
        :type ssl_forward_header: ConfigNodePropertyString
        """

        self._ssl_forward_header = ssl_forward_header

    @property
    def ssl_forward_value(self) -> ConfigNodePropertyString:
        """Gets the ssl_forward_value of this OrgApacheFelixHttpSslfilterSslFilterProperties.


        :return: The ssl_forward_value of this OrgApacheFelixHttpSslfilterSslFilterProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._ssl_forward_value

    @ssl_forward_value.setter
    def ssl_forward_value(self, ssl_forward_value: ConfigNodePropertyString):
        """Sets the ssl_forward_value of this OrgApacheFelixHttpSslfilterSslFilterProperties.


        :param ssl_forward_value: The ssl_forward_value of this OrgApacheFelixHttpSslfilterSslFilterProperties.
        :type ssl_forward_value: ConfigNodePropertyString
        """

        self._ssl_forward_value = ssl_forward_value

    @property
    def ssl_forward_cert_header(self) -> ConfigNodePropertyString:
        """Gets the ssl_forward_cert_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.


        :return: The ssl_forward_cert_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._ssl_forward_cert_header

    @ssl_forward_cert_header.setter
    def ssl_forward_cert_header(self, ssl_forward_cert_header: ConfigNodePropertyString):
        """Sets the ssl_forward_cert_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.


        :param ssl_forward_cert_header: The ssl_forward_cert_header of this OrgApacheFelixHttpSslfilterSslFilterProperties.
        :type ssl_forward_cert_header: ConfigNodePropertyString
        """

        self._ssl_forward_cert_header = ssl_forward_cert_header

    @property
    def rewrite_absolute_urls(self) -> ConfigNodePropertyBoolean:
        """Gets the rewrite_absolute_urls of this OrgApacheFelixHttpSslfilterSslFilterProperties.


        :return: The rewrite_absolute_urls of this OrgApacheFelixHttpSslfilterSslFilterProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._rewrite_absolute_urls

    @rewrite_absolute_urls.setter
    def rewrite_absolute_urls(self, rewrite_absolute_urls: ConfigNodePropertyBoolean):
        """Sets the rewrite_absolute_urls of this OrgApacheFelixHttpSslfilterSslFilterProperties.


        :param rewrite_absolute_urls: The rewrite_absolute_urls of this OrgApacheFelixHttpSslfilterSslFilterProperties.
        :type rewrite_absolute_urls: ConfigNodePropertyBoolean
        """

        self._rewrite_absolute_urls = rewrite_absolute_urls