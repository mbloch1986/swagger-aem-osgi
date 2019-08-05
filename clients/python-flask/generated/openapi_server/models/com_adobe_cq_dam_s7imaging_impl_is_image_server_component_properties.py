# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqDamS7imagingImplIsImageServerComponentProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, tcp_port: ConfigNodePropertyString=None, allow_remote_access: ConfigNodePropertyBoolean=None, max_render_rgn_pixels: ConfigNodePropertyString=None, max_message_size: ConfigNodePropertyString=None, random_access_url_timeout: ConfigNodePropertyInteger=None, worker_threads: ConfigNodePropertyInteger=None):  # noqa: E501
        """ComAdobeCqDamS7imagingImplIsImageServerComponentProperties - a model defined in OpenAPI

        :param tcp_port: The tcp_port of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.  # noqa: E501
        :type tcp_port: ConfigNodePropertyString
        :param allow_remote_access: The allow_remote_access of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.  # noqa: E501
        :type allow_remote_access: ConfigNodePropertyBoolean
        :param max_render_rgn_pixels: The max_render_rgn_pixels of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.  # noqa: E501
        :type max_render_rgn_pixels: ConfigNodePropertyString
        :param max_message_size: The max_message_size of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.  # noqa: E501
        :type max_message_size: ConfigNodePropertyString
        :param random_access_url_timeout: The random_access_url_timeout of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.  # noqa: E501
        :type random_access_url_timeout: ConfigNodePropertyInteger
        :param worker_threads: The worker_threads of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.  # noqa: E501
        :type worker_threads: ConfigNodePropertyInteger
        """
        self.openapi_types = {
            'tcp_port': ConfigNodePropertyString,
            'allow_remote_access': ConfigNodePropertyBoolean,
            'max_render_rgn_pixels': ConfigNodePropertyString,
            'max_message_size': ConfigNodePropertyString,
            'random_access_url_timeout': ConfigNodePropertyInteger,
            'worker_threads': ConfigNodePropertyInteger
        }

        self.attribute_map = {
            'tcp_port': 'TcpPort',
            'allow_remote_access': 'AllowRemoteAccess',
            'max_render_rgn_pixels': 'MaxRenderRgnPixels',
            'max_message_size': 'MaxMessageSize',
            'random_access_url_timeout': 'RandomAccessUrlTimeout',
            'worker_threads': 'WorkerThreads'
        }

        self._tcp_port = tcp_port
        self._allow_remote_access = allow_remote_access
        self._max_render_rgn_pixels = max_render_rgn_pixels
        self._max_message_size = max_message_size
        self._random_access_url_timeout = random_access_url_timeout
        self._worker_threads = worker_threads

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqDamS7imagingImplIsImageServerComponentProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqDamS7imagingImplIsImageServerComponentProperties of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.  # noqa: E501
        :rtype: ComAdobeCqDamS7imagingImplIsImageServerComponentProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def tcp_port(self) -> ConfigNodePropertyString:
        """Gets the tcp_port of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.


        :return: The tcp_port of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._tcp_port

    @tcp_port.setter
    def tcp_port(self, tcp_port: ConfigNodePropertyString):
        """Sets the tcp_port of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.


        :param tcp_port: The tcp_port of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.
        :type tcp_port: ConfigNodePropertyString
        """

        self._tcp_port = tcp_port

    @property
    def allow_remote_access(self) -> ConfigNodePropertyBoolean:
        """Gets the allow_remote_access of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.


        :return: The allow_remote_access of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._allow_remote_access

    @allow_remote_access.setter
    def allow_remote_access(self, allow_remote_access: ConfigNodePropertyBoolean):
        """Sets the allow_remote_access of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.


        :param allow_remote_access: The allow_remote_access of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.
        :type allow_remote_access: ConfigNodePropertyBoolean
        """

        self._allow_remote_access = allow_remote_access

    @property
    def max_render_rgn_pixels(self) -> ConfigNodePropertyString:
        """Gets the max_render_rgn_pixels of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.


        :return: The max_render_rgn_pixels of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._max_render_rgn_pixels

    @max_render_rgn_pixels.setter
    def max_render_rgn_pixels(self, max_render_rgn_pixels: ConfigNodePropertyString):
        """Sets the max_render_rgn_pixels of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.


        :param max_render_rgn_pixels: The max_render_rgn_pixels of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.
        :type max_render_rgn_pixels: ConfigNodePropertyString
        """

        self._max_render_rgn_pixels = max_render_rgn_pixels

    @property
    def max_message_size(self) -> ConfigNodePropertyString:
        """Gets the max_message_size of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.


        :return: The max_message_size of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._max_message_size

    @max_message_size.setter
    def max_message_size(self, max_message_size: ConfigNodePropertyString):
        """Sets the max_message_size of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.


        :param max_message_size: The max_message_size of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.
        :type max_message_size: ConfigNodePropertyString
        """

        self._max_message_size = max_message_size

    @property
    def random_access_url_timeout(self) -> ConfigNodePropertyInteger:
        """Gets the random_access_url_timeout of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.


        :return: The random_access_url_timeout of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._random_access_url_timeout

    @random_access_url_timeout.setter
    def random_access_url_timeout(self, random_access_url_timeout: ConfigNodePropertyInteger):
        """Sets the random_access_url_timeout of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.


        :param random_access_url_timeout: The random_access_url_timeout of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.
        :type random_access_url_timeout: ConfigNodePropertyInteger
        """

        self._random_access_url_timeout = random_access_url_timeout

    @property
    def worker_threads(self) -> ConfigNodePropertyInteger:
        """Gets the worker_threads of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.


        :return: The worker_threads of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._worker_threads

    @worker_threads.setter
    def worker_threads(self, worker_threads: ConfigNodePropertyInteger):
        """Sets the worker_threads of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.


        :param worker_threads: The worker_threads of this ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.
        :type worker_threads: ConfigNodePropertyInteger
        """

        self._worker_threads = worker_threads