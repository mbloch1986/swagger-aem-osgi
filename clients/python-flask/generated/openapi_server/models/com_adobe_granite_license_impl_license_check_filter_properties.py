# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server import util


class ComAdobeGraniteLicenseImplLicenseCheckFilterProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, check_internval: ConfigNodePropertyInteger=None, exclude_ids: ConfigNodePropertyArray=None, encrypt_ping: ConfigNodePropertyBoolean=None):  # noqa: E501
        """ComAdobeGraniteLicenseImplLicenseCheckFilterProperties - a model defined in OpenAPI

        :param check_internval: The check_internval of this ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.  # noqa: E501
        :type check_internval: ConfigNodePropertyInteger
        :param exclude_ids: The exclude_ids of this ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.  # noqa: E501
        :type exclude_ids: ConfigNodePropertyArray
        :param encrypt_ping: The encrypt_ping of this ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.  # noqa: E501
        :type encrypt_ping: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'check_internval': ConfigNodePropertyInteger,
            'exclude_ids': ConfigNodePropertyArray,
            'encrypt_ping': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'check_internval': 'checkInternval',
            'exclude_ids': 'excludeIds',
            'encrypt_ping': 'encryptPing'
        }

        self._check_internval = check_internval
        self._exclude_ids = exclude_ids
        self._encrypt_ping = encrypt_ping

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeGraniteLicenseImplLicenseCheckFilterProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeGraniteLicenseImplLicenseCheckFilterProperties of this ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.  # noqa: E501
        :rtype: ComAdobeGraniteLicenseImplLicenseCheckFilterProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def check_internval(self) -> ConfigNodePropertyInteger:
        """Gets the check_internval of this ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.


        :return: The check_internval of this ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._check_internval

    @check_internval.setter
    def check_internval(self, check_internval: ConfigNodePropertyInteger):
        """Sets the check_internval of this ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.


        :param check_internval: The check_internval of this ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.
        :type check_internval: ConfigNodePropertyInteger
        """

        self._check_internval = check_internval

    @property
    def exclude_ids(self) -> ConfigNodePropertyArray:
        """Gets the exclude_ids of this ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.


        :return: The exclude_ids of this ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._exclude_ids

    @exclude_ids.setter
    def exclude_ids(self, exclude_ids: ConfigNodePropertyArray):
        """Sets the exclude_ids of this ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.


        :param exclude_ids: The exclude_ids of this ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.
        :type exclude_ids: ConfigNodePropertyArray
        """

        self._exclude_ids = exclude_ids

    @property
    def encrypt_ping(self) -> ConfigNodePropertyBoolean:
        """Gets the encrypt_ping of this ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.


        :return: The encrypt_ping of this ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._encrypt_ping

    @encrypt_ping.setter
    def encrypt_ping(self, encrypt_ping: ConfigNodePropertyBoolean):
        """Sets the encrypt_ping of this ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.


        :param encrypt_ping: The encrypt_ping of this ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.
        :type encrypt_ping: ConfigNodePropertyBoolean
        """

        self._encrypt_ping = encrypt_ping