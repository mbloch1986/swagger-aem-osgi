# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_drop_down import ConfigNodePropertyDropDown  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, org_apache_sling_installer_configuration_persist: ConfigNodePropertyBoolean=None, mode: ConfigNodePropertyDropDown=None, port: ConfigNodePropertyInteger=None, primary_host: ConfigNodePropertyString=None, interval: ConfigNodePropertyInteger=None, primary_allowed_client_ip_ranges: ConfigNodePropertyArray=None, secure: ConfigNodePropertyBoolean=None, standby_readtimeout: ConfigNodePropertyInteger=None, standby_autoclean: ConfigNodePropertyBoolean=None):  # noqa: E501
        """OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties - a model defined in OpenAPI

        :param org_apache_sling_installer_configuration_persist: The org_apache_sling_installer_configuration_persist of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.  # noqa: E501
        :type org_apache_sling_installer_configuration_persist: ConfigNodePropertyBoolean
        :param mode: The mode of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.  # noqa: E501
        :type mode: ConfigNodePropertyDropDown
        :param port: The port of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.  # noqa: E501
        :type port: ConfigNodePropertyInteger
        :param primary_host: The primary_host of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.  # noqa: E501
        :type primary_host: ConfigNodePropertyString
        :param interval: The interval of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.  # noqa: E501
        :type interval: ConfigNodePropertyInteger
        :param primary_allowed_client_ip_ranges: The primary_allowed_client_ip_ranges of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.  # noqa: E501
        :type primary_allowed_client_ip_ranges: ConfigNodePropertyArray
        :param secure: The secure of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.  # noqa: E501
        :type secure: ConfigNodePropertyBoolean
        :param standby_readtimeout: The standby_readtimeout of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.  # noqa: E501
        :type standby_readtimeout: ConfigNodePropertyInteger
        :param standby_autoclean: The standby_autoclean of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.  # noqa: E501
        :type standby_autoclean: ConfigNodePropertyBoolean
        """
        self.openapi_types = {
            'org_apache_sling_installer_configuration_persist': ConfigNodePropertyBoolean,
            'mode': ConfigNodePropertyDropDown,
            'port': ConfigNodePropertyInteger,
            'primary_host': ConfigNodePropertyString,
            'interval': ConfigNodePropertyInteger,
            'primary_allowed_client_ip_ranges': ConfigNodePropertyArray,
            'secure': ConfigNodePropertyBoolean,
            'standby_readtimeout': ConfigNodePropertyInteger,
            'standby_autoclean': ConfigNodePropertyBoolean
        }

        self.attribute_map = {
            'org_apache_sling_installer_configuration_persist': 'org.apache.sling.installer.configuration.persist',
            'mode': 'mode',
            'port': 'port',
            'primary_host': 'primary.host',
            'interval': 'interval',
            'primary_allowed_client_ip_ranges': 'primary.allowed-client-ip-ranges',
            'secure': 'secure',
            'standby_readtimeout': 'standby.readtimeout',
            'standby_autoclean': 'standby.autoclean'
        }

        self._org_apache_sling_installer_configuration_persist = org_apache_sling_installer_configuration_persist
        self._mode = mode
        self._port = port
        self._primary_host = primary_host
        self._interval = interval
        self._primary_allowed_client_ip_ranges = primary_allowed_client_ip_ranges
        self._secure = secure
        self._standby_readtimeout = standby_readtimeout
        self._standby_autoclean = standby_autoclean

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.  # noqa: E501
        :rtype: OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def org_apache_sling_installer_configuration_persist(self) -> ConfigNodePropertyBoolean:
        """Gets the org_apache_sling_installer_configuration_persist of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :return: The org_apache_sling_installer_configuration_persist of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._org_apache_sling_installer_configuration_persist

    @org_apache_sling_installer_configuration_persist.setter
    def org_apache_sling_installer_configuration_persist(self, org_apache_sling_installer_configuration_persist: ConfigNodePropertyBoolean):
        """Sets the org_apache_sling_installer_configuration_persist of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :param org_apache_sling_installer_configuration_persist: The org_apache_sling_installer_configuration_persist of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :type org_apache_sling_installer_configuration_persist: ConfigNodePropertyBoolean
        """

        self._org_apache_sling_installer_configuration_persist = org_apache_sling_installer_configuration_persist

    @property
    def mode(self) -> ConfigNodePropertyDropDown:
        """Gets the mode of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :return: The mode of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :rtype: ConfigNodePropertyDropDown
        """
        return self._mode

    @mode.setter
    def mode(self, mode: ConfigNodePropertyDropDown):
        """Sets the mode of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :param mode: The mode of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :type mode: ConfigNodePropertyDropDown
        """

        self._mode = mode

    @property
    def port(self) -> ConfigNodePropertyInteger:
        """Gets the port of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :return: The port of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._port

    @port.setter
    def port(self, port: ConfigNodePropertyInteger):
        """Sets the port of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :param port: The port of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :type port: ConfigNodePropertyInteger
        """

        self._port = port

    @property
    def primary_host(self) -> ConfigNodePropertyString:
        """Gets the primary_host of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :return: The primary_host of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._primary_host

    @primary_host.setter
    def primary_host(self, primary_host: ConfigNodePropertyString):
        """Sets the primary_host of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :param primary_host: The primary_host of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :type primary_host: ConfigNodePropertyString
        """

        self._primary_host = primary_host

    @property
    def interval(self) -> ConfigNodePropertyInteger:
        """Gets the interval of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :return: The interval of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._interval

    @interval.setter
    def interval(self, interval: ConfigNodePropertyInteger):
        """Sets the interval of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :param interval: The interval of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :type interval: ConfigNodePropertyInteger
        """

        self._interval = interval

    @property
    def primary_allowed_client_ip_ranges(self) -> ConfigNodePropertyArray:
        """Gets the primary_allowed_client_ip_ranges of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :return: The primary_allowed_client_ip_ranges of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._primary_allowed_client_ip_ranges

    @primary_allowed_client_ip_ranges.setter
    def primary_allowed_client_ip_ranges(self, primary_allowed_client_ip_ranges: ConfigNodePropertyArray):
        """Sets the primary_allowed_client_ip_ranges of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :param primary_allowed_client_ip_ranges: The primary_allowed_client_ip_ranges of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :type primary_allowed_client_ip_ranges: ConfigNodePropertyArray
        """

        self._primary_allowed_client_ip_ranges = primary_allowed_client_ip_ranges

    @property
    def secure(self) -> ConfigNodePropertyBoolean:
        """Gets the secure of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :return: The secure of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._secure

    @secure.setter
    def secure(self, secure: ConfigNodePropertyBoolean):
        """Sets the secure of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :param secure: The secure of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :type secure: ConfigNodePropertyBoolean
        """

        self._secure = secure

    @property
    def standby_readtimeout(self) -> ConfigNodePropertyInteger:
        """Gets the standby_readtimeout of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :return: The standby_readtimeout of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._standby_readtimeout

    @standby_readtimeout.setter
    def standby_readtimeout(self, standby_readtimeout: ConfigNodePropertyInteger):
        """Sets the standby_readtimeout of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :param standby_readtimeout: The standby_readtimeout of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :type standby_readtimeout: ConfigNodePropertyInteger
        """

        self._standby_readtimeout = standby_readtimeout

    @property
    def standby_autoclean(self) -> ConfigNodePropertyBoolean:
        """Gets the standby_autoclean of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :return: The standby_autoclean of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._standby_autoclean

    @standby_autoclean.setter
    def standby_autoclean(self, standby_autoclean: ConfigNodePropertyBoolean):
        """Sets the standby_autoclean of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.


        :param standby_autoclean: The standby_autoclean of this OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.
        :type standby_autoclean: ConfigNodePropertyBoolean
        """

        self._standby_autoclean = standby_autoclean
