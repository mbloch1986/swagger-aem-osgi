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


class ComAdobeCqDamWebdavImplIoAssetIOHandlerProperties(object):
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
        'service_ranking': 'ConfigNodePropertyInteger',
        'path_prefix': 'ConfigNodePropertyString',
        'create_version': 'ConfigNodePropertyBoolean'
    }

    attribute_map = {
        'service_ranking': 'service.ranking',
        'path_prefix': 'pathPrefix',
        'create_version': 'createVersion'
    }

    def __init__(self, service_ranking=None, path_prefix=None, create_version=None):  # noqa: E501
        """ComAdobeCqDamWebdavImplIoAssetIOHandlerProperties - a model defined in OpenAPI"""  # noqa: E501

        self._service_ranking = None
        self._path_prefix = None
        self._create_version = None
        self.discriminator = None

        if service_ranking is not None:
            self.service_ranking = service_ranking
        if path_prefix is not None:
            self.path_prefix = path_prefix
        if create_version is not None:
            self.create_version = create_version

    @property
    def service_ranking(self):
        """Gets the service_ranking of this ComAdobeCqDamWebdavImplIoAssetIOHandlerProperties.  # noqa: E501


        :return: The service_ranking of this ComAdobeCqDamWebdavImplIoAssetIOHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._service_ranking

    @service_ranking.setter
    def service_ranking(self, service_ranking):
        """Sets the service_ranking of this ComAdobeCqDamWebdavImplIoAssetIOHandlerProperties.


        :param service_ranking: The service_ranking of this ComAdobeCqDamWebdavImplIoAssetIOHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._service_ranking = service_ranking

    @property
    def path_prefix(self):
        """Gets the path_prefix of this ComAdobeCqDamWebdavImplIoAssetIOHandlerProperties.  # noqa: E501


        :return: The path_prefix of this ComAdobeCqDamWebdavImplIoAssetIOHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._path_prefix

    @path_prefix.setter
    def path_prefix(self, path_prefix):
        """Sets the path_prefix of this ComAdobeCqDamWebdavImplIoAssetIOHandlerProperties.


        :param path_prefix: The path_prefix of this ComAdobeCqDamWebdavImplIoAssetIOHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._path_prefix = path_prefix

    @property
    def create_version(self):
        """Gets the create_version of this ComAdobeCqDamWebdavImplIoAssetIOHandlerProperties.  # noqa: E501


        :return: The create_version of this ComAdobeCqDamWebdavImplIoAssetIOHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._create_version

    @create_version.setter
    def create_version(self, create_version):
        """Sets the create_version of this ComAdobeCqDamWebdavImplIoAssetIOHandlerProperties.


        :param create_version: The create_version of this ComAdobeCqDamWebdavImplIoAssetIOHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._create_version = create_version

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
        if not isinstance(other, ComAdobeCqDamWebdavImplIoAssetIOHandlerProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
