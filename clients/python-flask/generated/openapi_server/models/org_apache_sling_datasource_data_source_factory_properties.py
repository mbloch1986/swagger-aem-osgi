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


class OrgApacheSlingDatasourceDataSourceFactoryProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, datasource_name: ConfigNodePropertyString=None, datasource_svc_prop_name: ConfigNodePropertyString=None, driver_class_name: ConfigNodePropertyString=None, url: ConfigNodePropertyString=None, username: ConfigNodePropertyString=None, password: ConfigNodePropertyString=None, default_auto_commit: ConfigNodePropertyDropDown=None, default_read_only: ConfigNodePropertyDropDown=None, default_transaction_isolation: ConfigNodePropertyDropDown=None, default_catalog: ConfigNodePropertyString=None, max_active: ConfigNodePropertyInteger=None, max_idle: ConfigNodePropertyInteger=None, min_idle: ConfigNodePropertyInteger=None, initial_size: ConfigNodePropertyInteger=None, max_wait: ConfigNodePropertyInteger=None, max_age: ConfigNodePropertyInteger=None, test_on_borrow: ConfigNodePropertyBoolean=None, test_on_return: ConfigNodePropertyBoolean=None, test_while_idle: ConfigNodePropertyBoolean=None, validation_query: ConfigNodePropertyString=None, validation_query_timeout: ConfigNodePropertyInteger=None, time_between_eviction_runs_millis: ConfigNodePropertyInteger=None, min_evictable_idle_time_millis: ConfigNodePropertyInteger=None, connection_properties: ConfigNodePropertyString=None, init_sql: ConfigNodePropertyString=None, jdbc_interceptors: ConfigNodePropertyString=None, validation_interval: ConfigNodePropertyInteger=None, log_validation_errors: ConfigNodePropertyBoolean=None, datasource_svc_properties: ConfigNodePropertyArray=None):  # noqa: E501
        """OrgApacheSlingDatasourceDataSourceFactoryProperties - a model defined in OpenAPI

        :param datasource_name: The datasource_name of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type datasource_name: ConfigNodePropertyString
        :param datasource_svc_prop_name: The datasource_svc_prop_name of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type datasource_svc_prop_name: ConfigNodePropertyString
        :param driver_class_name: The driver_class_name of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type driver_class_name: ConfigNodePropertyString
        :param url: The url of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type url: ConfigNodePropertyString
        :param username: The username of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type username: ConfigNodePropertyString
        :param password: The password of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type password: ConfigNodePropertyString
        :param default_auto_commit: The default_auto_commit of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type default_auto_commit: ConfigNodePropertyDropDown
        :param default_read_only: The default_read_only of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type default_read_only: ConfigNodePropertyDropDown
        :param default_transaction_isolation: The default_transaction_isolation of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type default_transaction_isolation: ConfigNodePropertyDropDown
        :param default_catalog: The default_catalog of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type default_catalog: ConfigNodePropertyString
        :param max_active: The max_active of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type max_active: ConfigNodePropertyInteger
        :param max_idle: The max_idle of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type max_idle: ConfigNodePropertyInteger
        :param min_idle: The min_idle of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type min_idle: ConfigNodePropertyInteger
        :param initial_size: The initial_size of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type initial_size: ConfigNodePropertyInteger
        :param max_wait: The max_wait of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type max_wait: ConfigNodePropertyInteger
        :param max_age: The max_age of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type max_age: ConfigNodePropertyInteger
        :param test_on_borrow: The test_on_borrow of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type test_on_borrow: ConfigNodePropertyBoolean
        :param test_on_return: The test_on_return of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type test_on_return: ConfigNodePropertyBoolean
        :param test_while_idle: The test_while_idle of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type test_while_idle: ConfigNodePropertyBoolean
        :param validation_query: The validation_query of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type validation_query: ConfigNodePropertyString
        :param validation_query_timeout: The validation_query_timeout of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type validation_query_timeout: ConfigNodePropertyInteger
        :param time_between_eviction_runs_millis: The time_between_eviction_runs_millis of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type time_between_eviction_runs_millis: ConfigNodePropertyInteger
        :param min_evictable_idle_time_millis: The min_evictable_idle_time_millis of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type min_evictable_idle_time_millis: ConfigNodePropertyInteger
        :param connection_properties: The connection_properties of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type connection_properties: ConfigNodePropertyString
        :param init_sql: The init_sql of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type init_sql: ConfigNodePropertyString
        :param jdbc_interceptors: The jdbc_interceptors of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type jdbc_interceptors: ConfigNodePropertyString
        :param validation_interval: The validation_interval of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type validation_interval: ConfigNodePropertyInteger
        :param log_validation_errors: The log_validation_errors of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type log_validation_errors: ConfigNodePropertyBoolean
        :param datasource_svc_properties: The datasource_svc_properties of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :type datasource_svc_properties: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'datasource_name': ConfigNodePropertyString,
            'datasource_svc_prop_name': ConfigNodePropertyString,
            'driver_class_name': ConfigNodePropertyString,
            'url': ConfigNodePropertyString,
            'username': ConfigNodePropertyString,
            'password': ConfigNodePropertyString,
            'default_auto_commit': ConfigNodePropertyDropDown,
            'default_read_only': ConfigNodePropertyDropDown,
            'default_transaction_isolation': ConfigNodePropertyDropDown,
            'default_catalog': ConfigNodePropertyString,
            'max_active': ConfigNodePropertyInteger,
            'max_idle': ConfigNodePropertyInteger,
            'min_idle': ConfigNodePropertyInteger,
            'initial_size': ConfigNodePropertyInteger,
            'max_wait': ConfigNodePropertyInteger,
            'max_age': ConfigNodePropertyInteger,
            'test_on_borrow': ConfigNodePropertyBoolean,
            'test_on_return': ConfigNodePropertyBoolean,
            'test_while_idle': ConfigNodePropertyBoolean,
            'validation_query': ConfigNodePropertyString,
            'validation_query_timeout': ConfigNodePropertyInteger,
            'time_between_eviction_runs_millis': ConfigNodePropertyInteger,
            'min_evictable_idle_time_millis': ConfigNodePropertyInteger,
            'connection_properties': ConfigNodePropertyString,
            'init_sql': ConfigNodePropertyString,
            'jdbc_interceptors': ConfigNodePropertyString,
            'validation_interval': ConfigNodePropertyInteger,
            'log_validation_errors': ConfigNodePropertyBoolean,
            'datasource_svc_properties': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'datasource_name': 'datasource.name',
            'datasource_svc_prop_name': 'datasource.svc.prop.name',
            'driver_class_name': 'driverClassName',
            'url': 'url',
            'username': 'username',
            'password': 'password',
            'default_auto_commit': 'defaultAutoCommit',
            'default_read_only': 'defaultReadOnly',
            'default_transaction_isolation': 'defaultTransactionIsolation',
            'default_catalog': 'defaultCatalog',
            'max_active': 'maxActive',
            'max_idle': 'maxIdle',
            'min_idle': 'minIdle',
            'initial_size': 'initialSize',
            'max_wait': 'maxWait',
            'max_age': 'maxAge',
            'test_on_borrow': 'testOnBorrow',
            'test_on_return': 'testOnReturn',
            'test_while_idle': 'testWhileIdle',
            'validation_query': 'validationQuery',
            'validation_query_timeout': 'validationQueryTimeout',
            'time_between_eviction_runs_millis': 'timeBetweenEvictionRunsMillis',
            'min_evictable_idle_time_millis': 'minEvictableIdleTimeMillis',
            'connection_properties': 'connectionProperties',
            'init_sql': 'initSQL',
            'jdbc_interceptors': 'jdbcInterceptors',
            'validation_interval': 'validationInterval',
            'log_validation_errors': 'logValidationErrors',
            'datasource_svc_properties': 'datasource.svc.properties'
        }

        self._datasource_name = datasource_name
        self._datasource_svc_prop_name = datasource_svc_prop_name
        self._driver_class_name = driver_class_name
        self._url = url
        self._username = username
        self._password = password
        self._default_auto_commit = default_auto_commit
        self._default_read_only = default_read_only
        self._default_transaction_isolation = default_transaction_isolation
        self._default_catalog = default_catalog
        self._max_active = max_active
        self._max_idle = max_idle
        self._min_idle = min_idle
        self._initial_size = initial_size
        self._max_wait = max_wait
        self._max_age = max_age
        self._test_on_borrow = test_on_borrow
        self._test_on_return = test_on_return
        self._test_while_idle = test_while_idle
        self._validation_query = validation_query
        self._validation_query_timeout = validation_query_timeout
        self._time_between_eviction_runs_millis = time_between_eviction_runs_millis
        self._min_evictable_idle_time_millis = min_evictable_idle_time_millis
        self._connection_properties = connection_properties
        self._init_sql = init_sql
        self._jdbc_interceptors = jdbc_interceptors
        self._validation_interval = validation_interval
        self._log_validation_errors = log_validation_errors
        self._datasource_svc_properties = datasource_svc_properties

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingDatasourceDataSourceFactoryProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingDatasourceDataSourceFactoryProperties of this OrgApacheSlingDatasourceDataSourceFactoryProperties.  # noqa: E501
        :rtype: OrgApacheSlingDatasourceDataSourceFactoryProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def datasource_name(self) -> ConfigNodePropertyString:
        """Gets the datasource_name of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The datasource_name of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._datasource_name

    @datasource_name.setter
    def datasource_name(self, datasource_name: ConfigNodePropertyString):
        """Sets the datasource_name of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param datasource_name: The datasource_name of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type datasource_name: ConfigNodePropertyString
        """

        self._datasource_name = datasource_name

    @property
    def datasource_svc_prop_name(self) -> ConfigNodePropertyString:
        """Gets the datasource_svc_prop_name of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The datasource_svc_prop_name of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._datasource_svc_prop_name

    @datasource_svc_prop_name.setter
    def datasource_svc_prop_name(self, datasource_svc_prop_name: ConfigNodePropertyString):
        """Sets the datasource_svc_prop_name of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param datasource_svc_prop_name: The datasource_svc_prop_name of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type datasource_svc_prop_name: ConfigNodePropertyString
        """

        self._datasource_svc_prop_name = datasource_svc_prop_name

    @property
    def driver_class_name(self) -> ConfigNodePropertyString:
        """Gets the driver_class_name of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The driver_class_name of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._driver_class_name

    @driver_class_name.setter
    def driver_class_name(self, driver_class_name: ConfigNodePropertyString):
        """Sets the driver_class_name of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param driver_class_name: The driver_class_name of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type driver_class_name: ConfigNodePropertyString
        """

        self._driver_class_name = driver_class_name

    @property
    def url(self) -> ConfigNodePropertyString:
        """Gets the url of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The url of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._url

    @url.setter
    def url(self, url: ConfigNodePropertyString):
        """Sets the url of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param url: The url of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type url: ConfigNodePropertyString
        """

        self._url = url

    @property
    def username(self) -> ConfigNodePropertyString:
        """Gets the username of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The username of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._username

    @username.setter
    def username(self, username: ConfigNodePropertyString):
        """Sets the username of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param username: The username of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type username: ConfigNodePropertyString
        """

        self._username = username

    @property
    def password(self) -> ConfigNodePropertyString:
        """Gets the password of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The password of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._password

    @password.setter
    def password(self, password: ConfigNodePropertyString):
        """Sets the password of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param password: The password of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type password: ConfigNodePropertyString
        """

        self._password = password

    @property
    def default_auto_commit(self) -> ConfigNodePropertyDropDown:
        """Gets the default_auto_commit of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The default_auto_commit of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyDropDown
        """
        return self._default_auto_commit

    @default_auto_commit.setter
    def default_auto_commit(self, default_auto_commit: ConfigNodePropertyDropDown):
        """Sets the default_auto_commit of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param default_auto_commit: The default_auto_commit of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type default_auto_commit: ConfigNodePropertyDropDown
        """

        self._default_auto_commit = default_auto_commit

    @property
    def default_read_only(self) -> ConfigNodePropertyDropDown:
        """Gets the default_read_only of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The default_read_only of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyDropDown
        """
        return self._default_read_only

    @default_read_only.setter
    def default_read_only(self, default_read_only: ConfigNodePropertyDropDown):
        """Sets the default_read_only of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param default_read_only: The default_read_only of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type default_read_only: ConfigNodePropertyDropDown
        """

        self._default_read_only = default_read_only

    @property
    def default_transaction_isolation(self) -> ConfigNodePropertyDropDown:
        """Gets the default_transaction_isolation of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The default_transaction_isolation of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyDropDown
        """
        return self._default_transaction_isolation

    @default_transaction_isolation.setter
    def default_transaction_isolation(self, default_transaction_isolation: ConfigNodePropertyDropDown):
        """Sets the default_transaction_isolation of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param default_transaction_isolation: The default_transaction_isolation of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type default_transaction_isolation: ConfigNodePropertyDropDown
        """

        self._default_transaction_isolation = default_transaction_isolation

    @property
    def default_catalog(self) -> ConfigNodePropertyString:
        """Gets the default_catalog of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The default_catalog of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._default_catalog

    @default_catalog.setter
    def default_catalog(self, default_catalog: ConfigNodePropertyString):
        """Sets the default_catalog of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param default_catalog: The default_catalog of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type default_catalog: ConfigNodePropertyString
        """

        self._default_catalog = default_catalog

    @property
    def max_active(self) -> ConfigNodePropertyInteger:
        """Gets the max_active of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The max_active of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._max_active

    @max_active.setter
    def max_active(self, max_active: ConfigNodePropertyInteger):
        """Sets the max_active of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param max_active: The max_active of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type max_active: ConfigNodePropertyInteger
        """

        self._max_active = max_active

    @property
    def max_idle(self) -> ConfigNodePropertyInteger:
        """Gets the max_idle of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The max_idle of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._max_idle

    @max_idle.setter
    def max_idle(self, max_idle: ConfigNodePropertyInteger):
        """Sets the max_idle of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param max_idle: The max_idle of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type max_idle: ConfigNodePropertyInteger
        """

        self._max_idle = max_idle

    @property
    def min_idle(self) -> ConfigNodePropertyInteger:
        """Gets the min_idle of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The min_idle of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._min_idle

    @min_idle.setter
    def min_idle(self, min_idle: ConfigNodePropertyInteger):
        """Sets the min_idle of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param min_idle: The min_idle of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type min_idle: ConfigNodePropertyInteger
        """

        self._min_idle = min_idle

    @property
    def initial_size(self) -> ConfigNodePropertyInteger:
        """Gets the initial_size of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The initial_size of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._initial_size

    @initial_size.setter
    def initial_size(self, initial_size: ConfigNodePropertyInteger):
        """Sets the initial_size of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param initial_size: The initial_size of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type initial_size: ConfigNodePropertyInteger
        """

        self._initial_size = initial_size

    @property
    def max_wait(self) -> ConfigNodePropertyInteger:
        """Gets the max_wait of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The max_wait of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._max_wait

    @max_wait.setter
    def max_wait(self, max_wait: ConfigNodePropertyInteger):
        """Sets the max_wait of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param max_wait: The max_wait of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type max_wait: ConfigNodePropertyInteger
        """

        self._max_wait = max_wait

    @property
    def max_age(self) -> ConfigNodePropertyInteger:
        """Gets the max_age of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The max_age of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._max_age

    @max_age.setter
    def max_age(self, max_age: ConfigNodePropertyInteger):
        """Sets the max_age of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param max_age: The max_age of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type max_age: ConfigNodePropertyInteger
        """

        self._max_age = max_age

    @property
    def test_on_borrow(self) -> ConfigNodePropertyBoolean:
        """Gets the test_on_borrow of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The test_on_borrow of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._test_on_borrow

    @test_on_borrow.setter
    def test_on_borrow(self, test_on_borrow: ConfigNodePropertyBoolean):
        """Sets the test_on_borrow of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param test_on_borrow: The test_on_borrow of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type test_on_borrow: ConfigNodePropertyBoolean
        """

        self._test_on_borrow = test_on_borrow

    @property
    def test_on_return(self) -> ConfigNodePropertyBoolean:
        """Gets the test_on_return of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The test_on_return of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._test_on_return

    @test_on_return.setter
    def test_on_return(self, test_on_return: ConfigNodePropertyBoolean):
        """Sets the test_on_return of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param test_on_return: The test_on_return of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type test_on_return: ConfigNodePropertyBoolean
        """

        self._test_on_return = test_on_return

    @property
    def test_while_idle(self) -> ConfigNodePropertyBoolean:
        """Gets the test_while_idle of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The test_while_idle of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._test_while_idle

    @test_while_idle.setter
    def test_while_idle(self, test_while_idle: ConfigNodePropertyBoolean):
        """Sets the test_while_idle of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param test_while_idle: The test_while_idle of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type test_while_idle: ConfigNodePropertyBoolean
        """

        self._test_while_idle = test_while_idle

    @property
    def validation_query(self) -> ConfigNodePropertyString:
        """Gets the validation_query of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The validation_query of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._validation_query

    @validation_query.setter
    def validation_query(self, validation_query: ConfigNodePropertyString):
        """Sets the validation_query of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param validation_query: The validation_query of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type validation_query: ConfigNodePropertyString
        """

        self._validation_query = validation_query

    @property
    def validation_query_timeout(self) -> ConfigNodePropertyInteger:
        """Gets the validation_query_timeout of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The validation_query_timeout of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._validation_query_timeout

    @validation_query_timeout.setter
    def validation_query_timeout(self, validation_query_timeout: ConfigNodePropertyInteger):
        """Sets the validation_query_timeout of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param validation_query_timeout: The validation_query_timeout of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type validation_query_timeout: ConfigNodePropertyInteger
        """

        self._validation_query_timeout = validation_query_timeout

    @property
    def time_between_eviction_runs_millis(self) -> ConfigNodePropertyInteger:
        """Gets the time_between_eviction_runs_millis of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The time_between_eviction_runs_millis of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._time_between_eviction_runs_millis

    @time_between_eviction_runs_millis.setter
    def time_between_eviction_runs_millis(self, time_between_eviction_runs_millis: ConfigNodePropertyInteger):
        """Sets the time_between_eviction_runs_millis of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param time_between_eviction_runs_millis: The time_between_eviction_runs_millis of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type time_between_eviction_runs_millis: ConfigNodePropertyInteger
        """

        self._time_between_eviction_runs_millis = time_between_eviction_runs_millis

    @property
    def min_evictable_idle_time_millis(self) -> ConfigNodePropertyInteger:
        """Gets the min_evictable_idle_time_millis of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The min_evictable_idle_time_millis of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._min_evictable_idle_time_millis

    @min_evictable_idle_time_millis.setter
    def min_evictable_idle_time_millis(self, min_evictable_idle_time_millis: ConfigNodePropertyInteger):
        """Sets the min_evictable_idle_time_millis of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param min_evictable_idle_time_millis: The min_evictable_idle_time_millis of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type min_evictable_idle_time_millis: ConfigNodePropertyInteger
        """

        self._min_evictable_idle_time_millis = min_evictable_idle_time_millis

    @property
    def connection_properties(self) -> ConfigNodePropertyString:
        """Gets the connection_properties of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The connection_properties of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._connection_properties

    @connection_properties.setter
    def connection_properties(self, connection_properties: ConfigNodePropertyString):
        """Sets the connection_properties of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param connection_properties: The connection_properties of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type connection_properties: ConfigNodePropertyString
        """

        self._connection_properties = connection_properties

    @property
    def init_sql(self) -> ConfigNodePropertyString:
        """Gets the init_sql of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The init_sql of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._init_sql

    @init_sql.setter
    def init_sql(self, init_sql: ConfigNodePropertyString):
        """Sets the init_sql of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param init_sql: The init_sql of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type init_sql: ConfigNodePropertyString
        """

        self._init_sql = init_sql

    @property
    def jdbc_interceptors(self) -> ConfigNodePropertyString:
        """Gets the jdbc_interceptors of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The jdbc_interceptors of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._jdbc_interceptors

    @jdbc_interceptors.setter
    def jdbc_interceptors(self, jdbc_interceptors: ConfigNodePropertyString):
        """Sets the jdbc_interceptors of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param jdbc_interceptors: The jdbc_interceptors of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type jdbc_interceptors: ConfigNodePropertyString
        """

        self._jdbc_interceptors = jdbc_interceptors

    @property
    def validation_interval(self) -> ConfigNodePropertyInteger:
        """Gets the validation_interval of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The validation_interval of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._validation_interval

    @validation_interval.setter
    def validation_interval(self, validation_interval: ConfigNodePropertyInteger):
        """Sets the validation_interval of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param validation_interval: The validation_interval of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type validation_interval: ConfigNodePropertyInteger
        """

        self._validation_interval = validation_interval

    @property
    def log_validation_errors(self) -> ConfigNodePropertyBoolean:
        """Gets the log_validation_errors of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The log_validation_errors of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._log_validation_errors

    @log_validation_errors.setter
    def log_validation_errors(self, log_validation_errors: ConfigNodePropertyBoolean):
        """Sets the log_validation_errors of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param log_validation_errors: The log_validation_errors of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type log_validation_errors: ConfigNodePropertyBoolean
        """

        self._log_validation_errors = log_validation_errors

    @property
    def datasource_svc_properties(self) -> ConfigNodePropertyArray:
        """Gets the datasource_svc_properties of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :return: The datasource_svc_properties of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._datasource_svc_properties

    @datasource_svc_properties.setter
    def datasource_svc_properties(self, datasource_svc_properties: ConfigNodePropertyArray):
        """Sets the datasource_svc_properties of this OrgApacheSlingDatasourceDataSourceFactoryProperties.


        :param datasource_svc_properties: The datasource_svc_properties of this OrgApacheSlingDatasourceDataSourceFactoryProperties.
        :type datasource_svc_properties: ConfigNodePropertyArray
        """

        self._datasource_svc_properties = datasource_svc_properties
