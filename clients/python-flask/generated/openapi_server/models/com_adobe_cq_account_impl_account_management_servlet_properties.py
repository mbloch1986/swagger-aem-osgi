# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqAccountImplAccountManagementServletProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, cq_accountmanager_config_informnewaccount_mail: ConfigNodePropertyString=None, cq_accountmanager_config_informnewpwd_mail: ConfigNodePropertyString=None):  # noqa: E501
        """ComAdobeCqAccountImplAccountManagementServletProperties - a model defined in OpenAPI

        :param cq_accountmanager_config_informnewaccount_mail: The cq_accountmanager_config_informnewaccount_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.  # noqa: E501
        :type cq_accountmanager_config_informnewaccount_mail: ConfigNodePropertyString
        :param cq_accountmanager_config_informnewpwd_mail: The cq_accountmanager_config_informnewpwd_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.  # noqa: E501
        :type cq_accountmanager_config_informnewpwd_mail: ConfigNodePropertyString
        """
        self.openapi_types = {
            'cq_accountmanager_config_informnewaccount_mail': ConfigNodePropertyString,
            'cq_accountmanager_config_informnewpwd_mail': ConfigNodePropertyString
        }

        self.attribute_map = {
            'cq_accountmanager_config_informnewaccount_mail': 'cq.accountmanager.config.informnewaccount.mail',
            'cq_accountmanager_config_informnewpwd_mail': 'cq.accountmanager.config.informnewpwd.mail'
        }

        self._cq_accountmanager_config_informnewaccount_mail = cq_accountmanager_config_informnewaccount_mail
        self._cq_accountmanager_config_informnewpwd_mail = cq_accountmanager_config_informnewpwd_mail

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqAccountImplAccountManagementServletProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqAccountImplAccountManagementServletProperties of this ComAdobeCqAccountImplAccountManagementServletProperties.  # noqa: E501
        :rtype: ComAdobeCqAccountImplAccountManagementServletProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def cq_accountmanager_config_informnewaccount_mail(self) -> ConfigNodePropertyString:
        """Gets the cq_accountmanager_config_informnewaccount_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.


        :return: The cq_accountmanager_config_informnewaccount_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._cq_accountmanager_config_informnewaccount_mail

    @cq_accountmanager_config_informnewaccount_mail.setter
    def cq_accountmanager_config_informnewaccount_mail(self, cq_accountmanager_config_informnewaccount_mail: ConfigNodePropertyString):
        """Sets the cq_accountmanager_config_informnewaccount_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.


        :param cq_accountmanager_config_informnewaccount_mail: The cq_accountmanager_config_informnewaccount_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.
        :type cq_accountmanager_config_informnewaccount_mail: ConfigNodePropertyString
        """

        self._cq_accountmanager_config_informnewaccount_mail = cq_accountmanager_config_informnewaccount_mail

    @property
    def cq_accountmanager_config_informnewpwd_mail(self) -> ConfigNodePropertyString:
        """Gets the cq_accountmanager_config_informnewpwd_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.


        :return: The cq_accountmanager_config_informnewpwd_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._cq_accountmanager_config_informnewpwd_mail

    @cq_accountmanager_config_informnewpwd_mail.setter
    def cq_accountmanager_config_informnewpwd_mail(self, cq_accountmanager_config_informnewpwd_mail: ConfigNodePropertyString):
        """Sets the cq_accountmanager_config_informnewpwd_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.


        :param cq_accountmanager_config_informnewpwd_mail: The cq_accountmanager_config_informnewpwd_mail of this ComAdobeCqAccountImplAccountManagementServletProperties.
        :type cq_accountmanager_config_informnewpwd_mail: ConfigNodePropertyString
        """

        self._cq_accountmanager_config_informnewpwd_mail = cq_accountmanager_config_informnewpwd_mail
