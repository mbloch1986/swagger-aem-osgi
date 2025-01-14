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


class ComAdobeCqAccountImplAccountManagementServletProperties(object):
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
        'cq_accountmanager_config_informnewaccount_mail': 'ConfigNodePropertyString',
        'cq_accountmanager_config_informnewpwd_mail': 'ConfigNodePropertyString'
    }

    attribute_map = {
        'cq_accountmanager_config_informnewaccount_mail': 'cq.accountmanager.config.informnewaccount.mail',
        'cq_accountmanager_config_informnewpwd_mail': 'cq.accountmanager.config.informnewpwd.mail'
    }

    def __init__(self, cq_accountmanager_config_informnewaccount_mail=None, cq_accountmanager_config_informnewpwd_mail=None):  # noqa: E501
        """ComAdobeCqAccountImplAccountManagementServletProperties - a model defined in OpenAPI"""  # noqa: E501

        self._cq_accountmanager_config_informnewaccount_mail = None
        self._cq_accountmanager_config_informnewpwd_mail = None
        self.discriminator = None

        if cq_accountmanager_config_informnewaccount_mail is not None:
            self.cq_accountmanager_config_informnewaccount_mail = cq_accountmanager_config_informnewaccount_mail
        if cq_accountmanager_config_informnewpwd_mail is not None:
            self.cq_accountmanager_config_informnewpwd_mail = cq_accountmanager_config_informnewpwd_mail

    @property
    def cq_accountmanager_config_informnewaccount_mail(self):
        """Gets the cq_accountmanager_config_informnewaccount_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.  # noqa: E501


        :return: The cq_accountmanager_config_informnewaccount_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._cq_accountmanager_config_informnewaccount_mail

    @cq_accountmanager_config_informnewaccount_mail.setter
    def cq_accountmanager_config_informnewaccount_mail(self, cq_accountmanager_config_informnewaccount_mail):
        """Sets the cq_accountmanager_config_informnewaccount_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.


        :param cq_accountmanager_config_informnewaccount_mail: The cq_accountmanager_config_informnewaccount_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._cq_accountmanager_config_informnewaccount_mail = cq_accountmanager_config_informnewaccount_mail

    @property
    def cq_accountmanager_config_informnewpwd_mail(self):
        """Gets the cq_accountmanager_config_informnewpwd_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.  # noqa: E501


        :return: The cq_accountmanager_config_informnewpwd_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._cq_accountmanager_config_informnewpwd_mail

    @cq_accountmanager_config_informnewpwd_mail.setter
    def cq_accountmanager_config_informnewpwd_mail(self, cq_accountmanager_config_informnewpwd_mail):
        """Sets the cq_accountmanager_config_informnewpwd_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.


        :param cq_accountmanager_config_informnewpwd_mail: The cq_accountmanager_config_informnewpwd_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._cq_accountmanager_config_informnewpwd_mail = cq_accountmanager_config_informnewpwd_mail

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
        if not isinstance(other, ComAdobeCqAccountImplAccountManagementServletProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
