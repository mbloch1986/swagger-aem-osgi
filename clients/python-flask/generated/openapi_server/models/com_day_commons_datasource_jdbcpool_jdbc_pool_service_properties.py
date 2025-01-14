# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, jdbc_driver_class: ConfigNodePropertyString=None, jdbc_connection_uri: ConfigNodePropertyString=None, jdbc_username: ConfigNodePropertyString=None, jdbc_password: ConfigNodePropertyString=None, jdbc_validation_query: ConfigNodePropertyString=None, default_readonly: ConfigNodePropertyBoolean=None, default_autocommit: ConfigNodePropertyBoolean=None, pool_size: ConfigNodePropertyInteger=None, pool_max_wait_msec: ConfigNodePropertyInteger=None, datasource_name: ConfigNodePropertyString=None, datasource_svc_properties: ConfigNodePropertyArray=None):  # noqa: E501
        """ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties - a model defined in OpenAPI

        :param jdbc_driver_class: The jdbc_driver_class of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.  # noqa: E501
        :type jdbc_driver_class: ConfigNodePropertyString
        :param jdbc_connection_uri: The jdbc_connection_uri of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.  # noqa: E501
        :type jdbc_connection_uri: ConfigNodePropertyString
        :param jdbc_username: The jdbc_username of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.  # noqa: E501
        :type jdbc_username: ConfigNodePropertyString
        :param jdbc_password: The jdbc_password of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.  # noqa: E501
        :type jdbc_password: ConfigNodePropertyString
        :param jdbc_validation_query: The jdbc_validation_query of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.  # noqa: E501
        :type jdbc_validation_query: ConfigNodePropertyString
        :param default_readonly: The default_readonly of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.  # noqa: E501
        :type default_readonly: ConfigNodePropertyBoolean
        :param default_autocommit: The default_autocommit of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.  # noqa: E501
        :type default_autocommit: ConfigNodePropertyBoolean
        :param pool_size: The pool_size of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.  # noqa: E501
        :type pool_size: ConfigNodePropertyInteger
        :param pool_max_wait_msec: The pool_max_wait_msec of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.  # noqa: E501
        :type pool_max_wait_msec: ConfigNodePropertyInteger
        :param datasource_name: The datasource_name of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.  # noqa: E501
        :type datasource_name: ConfigNodePropertyString
        :param datasource_svc_properties: The datasource_svc_properties of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.  # noqa: E501
        :type datasource_svc_properties: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'jdbc_driver_class': ConfigNodePropertyString,
            'jdbc_connection_uri': ConfigNodePropertyString,
            'jdbc_username': ConfigNodePropertyString,
            'jdbc_password': ConfigNodePropertyString,
            'jdbc_validation_query': ConfigNodePropertyString,
            'default_readonly': ConfigNodePropertyBoolean,
            'default_autocommit': ConfigNodePropertyBoolean,
            'pool_size': ConfigNodePropertyInteger,
            'pool_max_wait_msec': ConfigNodePropertyInteger,
            'datasource_name': ConfigNodePropertyString,
            'datasource_svc_properties': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'jdbc_driver_class': 'jdbc.driver.class',
            'jdbc_connection_uri': 'jdbc.connection.uri',
            'jdbc_username': 'jdbc.username',
            'jdbc_password': 'jdbc.password',
            'jdbc_validation_query': 'jdbc.validation.query',
            'default_readonly': 'default.readonly',
            'default_autocommit': 'default.autocommit',
            'pool_size': 'pool.size',
            'pool_max_wait_msec': 'pool.max.wait.msec',
            'datasource_name': 'datasource.name',
            'datasource_svc_properties': 'datasource.svc.properties'
        }

        self._jdbc_driver_class = jdbc_driver_class
        self._jdbc_connection_uri = jdbc_connection_uri
        self._jdbc_username = jdbc_username
        self._jdbc_password = jdbc_password
        self._jdbc_validation_query = jdbc_validation_query
        self._default_readonly = default_readonly
        self._default_autocommit = default_autocommit
        self._pool_size = pool_size
        self._pool_max_wait_msec = pool_max_wait_msec
        self._datasource_name = datasource_name
        self._datasource_svc_properties = datasource_svc_properties

    @classmethod
    def from_dict(cls, dikt) -> 'ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.  # noqa: E501
        :rtype: ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def jdbc_driver_class(self) -> ConfigNodePropertyString:
        """Gets the jdbc_driver_class of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :return: The jdbc_driver_class of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._jdbc_driver_class

    @jdbc_driver_class.setter
    def jdbc_driver_class(self, jdbc_driver_class: ConfigNodePropertyString):
        """Sets the jdbc_driver_class of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :param jdbc_driver_class: The jdbc_driver_class of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :type jdbc_driver_class: ConfigNodePropertyString
        """

        self._jdbc_driver_class = jdbc_driver_class

    @property
    def jdbc_connection_uri(self) -> ConfigNodePropertyString:
        """Gets the jdbc_connection_uri of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :return: The jdbc_connection_uri of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._jdbc_connection_uri

    @jdbc_connection_uri.setter
    def jdbc_connection_uri(self, jdbc_connection_uri: ConfigNodePropertyString):
        """Sets the jdbc_connection_uri of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :param jdbc_connection_uri: The jdbc_connection_uri of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :type jdbc_connection_uri: ConfigNodePropertyString
        """

        self._jdbc_connection_uri = jdbc_connection_uri

    @property
    def jdbc_username(self) -> ConfigNodePropertyString:
        """Gets the jdbc_username of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :return: The jdbc_username of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._jdbc_username

    @jdbc_username.setter
    def jdbc_username(self, jdbc_username: ConfigNodePropertyString):
        """Sets the jdbc_username of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :param jdbc_username: The jdbc_username of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :type jdbc_username: ConfigNodePropertyString
        """

        self._jdbc_username = jdbc_username

    @property
    def jdbc_password(self) -> ConfigNodePropertyString:
        """Gets the jdbc_password of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :return: The jdbc_password of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._jdbc_password

    @jdbc_password.setter
    def jdbc_password(self, jdbc_password: ConfigNodePropertyString):
        """Sets the jdbc_password of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :param jdbc_password: The jdbc_password of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :type jdbc_password: ConfigNodePropertyString
        """

        self._jdbc_password = jdbc_password

    @property
    def jdbc_validation_query(self) -> ConfigNodePropertyString:
        """Gets the jdbc_validation_query of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :return: The jdbc_validation_query of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._jdbc_validation_query

    @jdbc_validation_query.setter
    def jdbc_validation_query(self, jdbc_validation_query: ConfigNodePropertyString):
        """Sets the jdbc_validation_query of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :param jdbc_validation_query: The jdbc_validation_query of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :type jdbc_validation_query: ConfigNodePropertyString
        """

        self._jdbc_validation_query = jdbc_validation_query

    @property
    def default_readonly(self) -> ConfigNodePropertyBoolean:
        """Gets the default_readonly of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :return: The default_readonly of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._default_readonly

    @default_readonly.setter
    def default_readonly(self, default_readonly: ConfigNodePropertyBoolean):
        """Sets the default_readonly of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :param default_readonly: The default_readonly of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :type default_readonly: ConfigNodePropertyBoolean
        """

        self._default_readonly = default_readonly

    @property
    def default_autocommit(self) -> ConfigNodePropertyBoolean:
        """Gets the default_autocommit of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :return: The default_autocommit of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._default_autocommit

    @default_autocommit.setter
    def default_autocommit(self, default_autocommit: ConfigNodePropertyBoolean):
        """Sets the default_autocommit of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :param default_autocommit: The default_autocommit of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :type default_autocommit: ConfigNodePropertyBoolean
        """

        self._default_autocommit = default_autocommit

    @property
    def pool_size(self) -> ConfigNodePropertyInteger:
        """Gets the pool_size of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :return: The pool_size of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._pool_size

    @pool_size.setter
    def pool_size(self, pool_size: ConfigNodePropertyInteger):
        """Sets the pool_size of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :param pool_size: The pool_size of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :type pool_size: ConfigNodePropertyInteger
        """

        self._pool_size = pool_size

    @property
    def pool_max_wait_msec(self) -> ConfigNodePropertyInteger:
        """Gets the pool_max_wait_msec of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :return: The pool_max_wait_msec of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._pool_max_wait_msec

    @pool_max_wait_msec.setter
    def pool_max_wait_msec(self, pool_max_wait_msec: ConfigNodePropertyInteger):
        """Sets the pool_max_wait_msec of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :param pool_max_wait_msec: The pool_max_wait_msec of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :type pool_max_wait_msec: ConfigNodePropertyInteger
        """

        self._pool_max_wait_msec = pool_max_wait_msec

    @property
    def datasource_name(self) -> ConfigNodePropertyString:
        """Gets the datasource_name of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :return: The datasource_name of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._datasource_name

    @datasource_name.setter
    def datasource_name(self, datasource_name: ConfigNodePropertyString):
        """Sets the datasource_name of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :param datasource_name: The datasource_name of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :type datasource_name: ConfigNodePropertyString
        """

        self._datasource_name = datasource_name

    @property
    def datasource_svc_properties(self) -> ConfigNodePropertyArray:
        """Gets the datasource_svc_properties of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :return: The datasource_svc_properties of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._datasource_svc_properties

    @datasource_svc_properties.setter
    def datasource_svc_properties(self, datasource_svc_properties: ConfigNodePropertyArray):
        """Sets the datasource_svc_properties of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.


        :param datasource_svc_properties: The datasource_svc_properties of this ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties.
        :type datasource_svc_properties: ConfigNodePropertyArray
        """

        self._datasource_svc_properties = datasource_svc_properties
