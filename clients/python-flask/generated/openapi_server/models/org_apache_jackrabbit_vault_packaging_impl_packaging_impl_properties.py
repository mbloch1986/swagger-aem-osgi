# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server import util


class OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, package_roots: ConfigNodePropertyArray=None):  # noqa: E501
        """OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties - a model defined in OpenAPI

        :param package_roots: The package_roots of this OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties.  # noqa: E501
        :type package_roots: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'package_roots': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'package_roots': 'packageRoots'
        }

        self._package_roots = package_roots

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheJackrabbitVaultPackagingImplPackagingImplProperties of this OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties.  # noqa: E501
        :rtype: OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def package_roots(self) -> ConfigNodePropertyArray:
        """Gets the package_roots of this OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties.


        :return: The package_roots of this OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._package_roots

    @package_roots.setter
    def package_roots(self, package_roots: ConfigNodePropertyArray):
        """Sets the package_roots of this OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties.


        :param package_roots: The package_roots of this OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties.
        :type package_roots: ConfigNodePropertyArray
        """

        self._package_roots = package_roots
