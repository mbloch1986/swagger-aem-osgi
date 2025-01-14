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


class ComDayCqDamIdsImplIDSPoolManagerImplProperties(object):
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
        'max_errors_to_blacklist': 'ConfigNodePropertyInteger',
        'retry_interval_to_whitelist': 'ConfigNodePropertyInteger',
        'connect_timeout': 'ConfigNodePropertyInteger',
        'socket_timeout': 'ConfigNodePropertyInteger',
        'process_label': 'ConfigNodePropertyString',
        'connection_use_max': 'ConfigNodePropertyInteger'
    }

    attribute_map = {
        'max_errors_to_blacklist': 'max.errors.to.blacklist',
        'retry_interval_to_whitelist': 'retry.interval.to.whitelist',
        'connect_timeout': 'connect.timeout',
        'socket_timeout': 'socket.timeout',
        'process_label': 'process.label',
        'connection_use_max': 'connection.use.max'
    }

    def __init__(self, max_errors_to_blacklist=None, retry_interval_to_whitelist=None, connect_timeout=None, socket_timeout=None, process_label=None, connection_use_max=None):  # noqa: E501
        """ComDayCqDamIdsImplIDSPoolManagerImplProperties - a model defined in OpenAPI"""  # noqa: E501

        self._max_errors_to_blacklist = None
        self._retry_interval_to_whitelist = None
        self._connect_timeout = None
        self._socket_timeout = None
        self._process_label = None
        self._connection_use_max = None
        self.discriminator = None

        if max_errors_to_blacklist is not None:
            self.max_errors_to_blacklist = max_errors_to_blacklist
        if retry_interval_to_whitelist is not None:
            self.retry_interval_to_whitelist = retry_interval_to_whitelist
        if connect_timeout is not None:
            self.connect_timeout = connect_timeout
        if socket_timeout is not None:
            self.socket_timeout = socket_timeout
        if process_label is not None:
            self.process_label = process_label
        if connection_use_max is not None:
            self.connection_use_max = connection_use_max

    @property
    def max_errors_to_blacklist(self):
        """Gets the max_errors_to_blacklist of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501


        :return: The max_errors_to_blacklist of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._max_errors_to_blacklist

    @max_errors_to_blacklist.setter
    def max_errors_to_blacklist(self, max_errors_to_blacklist):
        """Sets the max_errors_to_blacklist of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.


        :param max_errors_to_blacklist: The max_errors_to_blacklist of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._max_errors_to_blacklist = max_errors_to_blacklist

    @property
    def retry_interval_to_whitelist(self):
        """Gets the retry_interval_to_whitelist of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501


        :return: The retry_interval_to_whitelist of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._retry_interval_to_whitelist

    @retry_interval_to_whitelist.setter
    def retry_interval_to_whitelist(self, retry_interval_to_whitelist):
        """Sets the retry_interval_to_whitelist of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.


        :param retry_interval_to_whitelist: The retry_interval_to_whitelist of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._retry_interval_to_whitelist = retry_interval_to_whitelist

    @property
    def connect_timeout(self):
        """Gets the connect_timeout of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501


        :return: The connect_timeout of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._connect_timeout

    @connect_timeout.setter
    def connect_timeout(self, connect_timeout):
        """Sets the connect_timeout of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.


        :param connect_timeout: The connect_timeout of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._connect_timeout = connect_timeout

    @property
    def socket_timeout(self):
        """Gets the socket_timeout of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501


        :return: The socket_timeout of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._socket_timeout

    @socket_timeout.setter
    def socket_timeout(self, socket_timeout):
        """Sets the socket_timeout of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.


        :param socket_timeout: The socket_timeout of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._socket_timeout = socket_timeout

    @property
    def process_label(self):
        """Gets the process_label of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501


        :return: The process_label of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._process_label

    @process_label.setter
    def process_label(self, process_label):
        """Sets the process_label of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.


        :param process_label: The process_label of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._process_label = process_label

    @property
    def connection_use_max(self):
        """Gets the connection_use_max of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501


        :return: The connection_use_max of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._connection_use_max

    @connection_use_max.setter
    def connection_use_max(self, connection_use_max):
        """Sets the connection_use_max of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.


        :param connection_use_max: The connection_use_max of this ComDayCqDamIdsImplIDSPoolManagerImplProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._connection_use_max = connection_use_max

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
        if not isinstance(other, ComDayCqDamIdsImplIDSPoolManagerImplProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
