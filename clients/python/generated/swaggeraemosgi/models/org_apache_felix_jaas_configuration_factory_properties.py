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


class OrgApacheFelixJaasConfigurationFactoryProperties(object):
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
        'jaas_control_flag': 'ConfigNodePropertyDropDown',
        'jaas_ranking': 'ConfigNodePropertyInteger',
        'jaas_realm_name': 'ConfigNodePropertyString',
        'jaas_classname': 'ConfigNodePropertyString',
        'jaas_options': 'ConfigNodePropertyArray'
    }

    attribute_map = {
        'jaas_control_flag': 'jaas.controlFlag',
        'jaas_ranking': 'jaas.ranking',
        'jaas_realm_name': 'jaas.realmName',
        'jaas_classname': 'jaas.classname',
        'jaas_options': 'jaas.options'
    }

    def __init__(self, jaas_control_flag=None, jaas_ranking=None, jaas_realm_name=None, jaas_classname=None, jaas_options=None):  # noqa: E501
        """OrgApacheFelixJaasConfigurationFactoryProperties - a model defined in OpenAPI"""  # noqa: E501

        self._jaas_control_flag = None
        self._jaas_ranking = None
        self._jaas_realm_name = None
        self._jaas_classname = None
        self._jaas_options = None
        self.discriminator = None

        if jaas_control_flag is not None:
            self.jaas_control_flag = jaas_control_flag
        if jaas_ranking is not None:
            self.jaas_ranking = jaas_ranking
        if jaas_realm_name is not None:
            self.jaas_realm_name = jaas_realm_name
        if jaas_classname is not None:
            self.jaas_classname = jaas_classname
        if jaas_options is not None:
            self.jaas_options = jaas_options

    @property
    def jaas_control_flag(self):
        """Gets the jaas_control_flag of this OrgApacheFelixJaasConfigurationFactoryProperties.  # noqa: E501


        :return: The jaas_control_flag of this OrgApacheFelixJaasConfigurationFactoryProperties.  # noqa: E501
        :rtype: ConfigNodePropertyDropDown
        """
        return self._jaas_control_flag

    @jaas_control_flag.setter
    def jaas_control_flag(self, jaas_control_flag):
        """Sets the jaas_control_flag of this OrgApacheFelixJaasConfigurationFactoryProperties.


        :param jaas_control_flag: The jaas_control_flag of this OrgApacheFelixJaasConfigurationFactoryProperties.  # noqa: E501
        :type: ConfigNodePropertyDropDown
        """

        self._jaas_control_flag = jaas_control_flag

    @property
    def jaas_ranking(self):
        """Gets the jaas_ranking of this OrgApacheFelixJaasConfigurationFactoryProperties.  # noqa: E501


        :return: The jaas_ranking of this OrgApacheFelixJaasConfigurationFactoryProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._jaas_ranking

    @jaas_ranking.setter
    def jaas_ranking(self, jaas_ranking):
        """Sets the jaas_ranking of this OrgApacheFelixJaasConfigurationFactoryProperties.


        :param jaas_ranking: The jaas_ranking of this OrgApacheFelixJaasConfigurationFactoryProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._jaas_ranking = jaas_ranking

    @property
    def jaas_realm_name(self):
        """Gets the jaas_realm_name of this OrgApacheFelixJaasConfigurationFactoryProperties.  # noqa: E501


        :return: The jaas_realm_name of this OrgApacheFelixJaasConfigurationFactoryProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._jaas_realm_name

    @jaas_realm_name.setter
    def jaas_realm_name(self, jaas_realm_name):
        """Sets the jaas_realm_name of this OrgApacheFelixJaasConfigurationFactoryProperties.


        :param jaas_realm_name: The jaas_realm_name of this OrgApacheFelixJaasConfigurationFactoryProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._jaas_realm_name = jaas_realm_name

    @property
    def jaas_classname(self):
        """Gets the jaas_classname of this OrgApacheFelixJaasConfigurationFactoryProperties.  # noqa: E501


        :return: The jaas_classname of this OrgApacheFelixJaasConfigurationFactoryProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._jaas_classname

    @jaas_classname.setter
    def jaas_classname(self, jaas_classname):
        """Sets the jaas_classname of this OrgApacheFelixJaasConfigurationFactoryProperties.


        :param jaas_classname: The jaas_classname of this OrgApacheFelixJaasConfigurationFactoryProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._jaas_classname = jaas_classname

    @property
    def jaas_options(self):
        """Gets the jaas_options of this OrgApacheFelixJaasConfigurationFactoryProperties.  # noqa: E501


        :return: The jaas_options of this OrgApacheFelixJaasConfigurationFactoryProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._jaas_options

    @jaas_options.setter
    def jaas_options(self, jaas_options):
        """Sets the jaas_options of this OrgApacheFelixJaasConfigurationFactoryProperties.


        :param jaas_options: The jaas_options of this OrgApacheFelixJaasConfigurationFactoryProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._jaas_options = jaas_options

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
        if not isinstance(other, OrgApacheFelixJaasConfigurationFactoryProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
