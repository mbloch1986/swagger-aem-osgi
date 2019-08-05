# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, name: ConfigNodePropertyString=None, jcr_privilege: ConfigNodePropertyString=None):  # noqa: E501
        """OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties - a model defined in OpenAPI

        :param name: The name of this OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties.  # noqa: E501
        :type name: ConfigNodePropertyString
        :param jcr_privilege: The jcr_privilege of this OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties.  # noqa: E501
        :type jcr_privilege: ConfigNodePropertyString
        """
        self.openapi_types = {
            'name': ConfigNodePropertyString,
            'jcr_privilege': ConfigNodePropertyString
        }

        self.attribute_map = {
            'name': 'name',
            'jcr_privilege': 'jcrPrivilege'
        }

        self._name = name
        self._jcr_privilege = jcr_privilege

    @classmethod
    def from_dict(cls, dikt) -> 'OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The orgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties of this OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties.  # noqa: E501
        :rtype: OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def name(self) -> ConfigNodePropertyString:
        """Gets the name of this OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties.


        :return: The name of this OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._name

    @name.setter
    def name(self, name: ConfigNodePropertyString):
        """Sets the name of this OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties.


        :param name: The name of this OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties.
        :type name: ConfigNodePropertyString
        """

        self._name = name

    @property
    def jcr_privilege(self) -> ConfigNodePropertyString:
        """Gets the jcr_privilege of this OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties.


        :return: The jcr_privilege of this OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._jcr_privilege

    @jcr_privilege.setter
    def jcr_privilege(self, jcr_privilege: ConfigNodePropertyString):
        """Sets the jcr_privilege of this OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties.


        :param jcr_privilege: The jcr_privilege of this OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties.
        :type jcr_privilege: ConfigNodePropertyString
        """

        self._jcr_privilege = jcr_privilege