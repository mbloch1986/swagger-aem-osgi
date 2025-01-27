# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, facebook: ConfigNodePropertyArray=None, twitter: ConfigNodePropertyArray=None, provider_config_user_folder: ConfigNodePropertyString=None):  # noqa: E501
        """ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties - a model defined in OpenAPI

        :param facebook: The facebook of this ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties.  # noqa: E501
        :type facebook: ConfigNodePropertyArray
        :param twitter: The twitter of this ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties.  # noqa: E501
        :type twitter: ConfigNodePropertyArray
        :param provider_config_user_folder: The provider_config_user_folder of this ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties.  # noqa: E501
        :type provider_config_user_folder: ConfigNodePropertyString
        """
        self.openapi_types = {
            'facebook': ConfigNodePropertyArray,
            'twitter': ConfigNodePropertyArray,
            'provider_config_user_folder': ConfigNodePropertyString
        }

        self.attribute_map = {
            'facebook': 'facebook',
            'twitter': 'twitter',
            'provider_config_user_folder': 'provider.config.user.folder'
        }

        self._facebook = facebook
        self._twitter = twitter
        self._provider_config_user_folder = provider_config_user_folder

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties of this ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties.  # noqa: E501
        :rtype: ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def facebook(self) -> ConfigNodePropertyArray:
        """Gets the facebook of this ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties.


        :return: The facebook of this ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._facebook

    @facebook.setter
    def facebook(self, facebook: ConfigNodePropertyArray):
        """Sets the facebook of this ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties.


        :param facebook: The facebook of this ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties.
        :type facebook: ConfigNodePropertyArray
        """

        self._facebook = facebook

    @property
    def twitter(self) -> ConfigNodePropertyArray:
        """Gets the twitter of this ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties.


        :return: The twitter of this ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._twitter

    @twitter.setter
    def twitter(self, twitter: ConfigNodePropertyArray):
        """Sets the twitter of this ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties.


        :param twitter: The twitter of this ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties.
        :type twitter: ConfigNodePropertyArray
        """

        self._twitter = twitter

    @property
    def provider_config_user_folder(self) -> ConfigNodePropertyString:
        """Gets the provider_config_user_folder of this ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties.


        :return: The provider_config_user_folder of this ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._provider_config_user_folder

    @provider_config_user_folder.setter
    def provider_config_user_folder(self, provider_config_user_folder: ConfigNodePropertyString):
        """Sets the provider_config_user_folder of this ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties.


        :param provider_config_user_folder: The provider_config_user_folder of this ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties.
        :type provider_config_user_folder: ConfigNodePropertyString
        """

        self._provider_config_user_folder = provider_config_user_folder
