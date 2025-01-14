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


class OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties(object):
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
        'solr_http_url': 'ConfigNodePropertyString',
        'solr_zk_host': 'ConfigNodePropertyString',
        'solr_collection': 'ConfigNodePropertyString',
        'solr_socket_timeout': 'ConfigNodePropertyInteger',
        'solr_connection_timeout': 'ConfigNodePropertyInteger',
        'solr_shards_no': 'ConfigNodePropertyInteger',
        'solr_replication_factor': 'ConfigNodePropertyInteger',
        'solr_conf_dir': 'ConfigNodePropertyString'
    }

    attribute_map = {
        'solr_http_url': 'solr.http.url',
        'solr_zk_host': 'solr.zk.host',
        'solr_collection': 'solr.collection',
        'solr_socket_timeout': 'solr.socket.timeout',
        'solr_connection_timeout': 'solr.connection.timeout',
        'solr_shards_no': 'solr.shards.no',
        'solr_replication_factor': 'solr.replication.factor',
        'solr_conf_dir': 'solr.conf.dir'
    }

    def __init__(self, solr_http_url=None, solr_zk_host=None, solr_collection=None, solr_socket_timeout=None, solr_connection_timeout=None, solr_shards_no=None, solr_replication_factor=None, solr_conf_dir=None):  # noqa: E501
        """OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties - a model defined in OpenAPI"""  # noqa: E501

        self._solr_http_url = None
        self._solr_zk_host = None
        self._solr_collection = None
        self._solr_socket_timeout = None
        self._solr_connection_timeout = None
        self._solr_shards_no = None
        self._solr_replication_factor = None
        self._solr_conf_dir = None
        self.discriminator = None

        if solr_http_url is not None:
            self.solr_http_url = solr_http_url
        if solr_zk_host is not None:
            self.solr_zk_host = solr_zk_host
        if solr_collection is not None:
            self.solr_collection = solr_collection
        if solr_socket_timeout is not None:
            self.solr_socket_timeout = solr_socket_timeout
        if solr_connection_timeout is not None:
            self.solr_connection_timeout = solr_connection_timeout
        if solr_shards_no is not None:
            self.solr_shards_no = solr_shards_no
        if solr_replication_factor is not None:
            self.solr_replication_factor = solr_replication_factor
        if solr_conf_dir is not None:
            self.solr_conf_dir = solr_conf_dir

    @property
    def solr_http_url(self):
        """Gets the solr_http_url of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501


        :return: The solr_http_url of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._solr_http_url

    @solr_http_url.setter
    def solr_http_url(self, solr_http_url):
        """Sets the solr_http_url of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.


        :param solr_http_url: The solr_http_url of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._solr_http_url = solr_http_url

    @property
    def solr_zk_host(self):
        """Gets the solr_zk_host of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501


        :return: The solr_zk_host of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._solr_zk_host

    @solr_zk_host.setter
    def solr_zk_host(self, solr_zk_host):
        """Sets the solr_zk_host of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.


        :param solr_zk_host: The solr_zk_host of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._solr_zk_host = solr_zk_host

    @property
    def solr_collection(self):
        """Gets the solr_collection of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501


        :return: The solr_collection of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._solr_collection

    @solr_collection.setter
    def solr_collection(self, solr_collection):
        """Sets the solr_collection of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.


        :param solr_collection: The solr_collection of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._solr_collection = solr_collection

    @property
    def solr_socket_timeout(self):
        """Gets the solr_socket_timeout of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501


        :return: The solr_socket_timeout of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._solr_socket_timeout

    @solr_socket_timeout.setter
    def solr_socket_timeout(self, solr_socket_timeout):
        """Sets the solr_socket_timeout of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.


        :param solr_socket_timeout: The solr_socket_timeout of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._solr_socket_timeout = solr_socket_timeout

    @property
    def solr_connection_timeout(self):
        """Gets the solr_connection_timeout of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501


        :return: The solr_connection_timeout of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._solr_connection_timeout

    @solr_connection_timeout.setter
    def solr_connection_timeout(self, solr_connection_timeout):
        """Sets the solr_connection_timeout of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.


        :param solr_connection_timeout: The solr_connection_timeout of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._solr_connection_timeout = solr_connection_timeout

    @property
    def solr_shards_no(self):
        """Gets the solr_shards_no of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501


        :return: The solr_shards_no of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._solr_shards_no

    @solr_shards_no.setter
    def solr_shards_no(self, solr_shards_no):
        """Sets the solr_shards_no of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.


        :param solr_shards_no: The solr_shards_no of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._solr_shards_no = solr_shards_no

    @property
    def solr_replication_factor(self):
        """Gets the solr_replication_factor of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501


        :return: The solr_replication_factor of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._solr_replication_factor

    @solr_replication_factor.setter
    def solr_replication_factor(self, solr_replication_factor):
        """Sets the solr_replication_factor of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.


        :param solr_replication_factor: The solr_replication_factor of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._solr_replication_factor = solr_replication_factor

    @property
    def solr_conf_dir(self):
        """Gets the solr_conf_dir of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501


        :return: The solr_conf_dir of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._solr_conf_dir

    @solr_conf_dir.setter
    def solr_conf_dir(self, solr_conf_dir):
        """Sets the solr_conf_dir of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.


        :param solr_conf_dir: The solr_conf_dir of this OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._solr_conf_dir = solr_conf_dir

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
        if not isinstance(other, OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
