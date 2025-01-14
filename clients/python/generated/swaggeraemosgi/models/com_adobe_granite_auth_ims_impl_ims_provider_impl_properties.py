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


class ComAdobeGraniteAuthImsImplIMSProviderImplProperties(object):
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
        'oauth_provider_id': 'ConfigNodePropertyString',
        'oauth_provider_ims_authorization_url': 'ConfigNodePropertyString',
        'oauth_provider_ims_token_url': 'ConfigNodePropertyString',
        'oauth_provider_ims_profile_url': 'ConfigNodePropertyString',
        'oauth_provider_ims_extended_details_urls': 'ConfigNodePropertyArray',
        'oauth_provider_ims_validate_token_url': 'ConfigNodePropertyString',
        'oauth_provider_ims_session_property': 'ConfigNodePropertyString',
        'oauth_provider_ims_service_token_client_id': 'ConfigNodePropertyString',
        'oauth_provider_ims_service_token_client_secret': 'ConfigNodePropertyString',
        'oauth_provider_ims_service_token': 'ConfigNodePropertyString',
        'ims_org_ref': 'ConfigNodePropertyString',
        'ims_group_mapping': 'ConfigNodePropertyArray',
        'oauth_provider_ims_only_license_group': 'ConfigNodePropertyBoolean'
    }

    attribute_map = {
        'oauth_provider_id': 'oauth.provider.id',
        'oauth_provider_ims_authorization_url': 'oauth.provider.ims.authorization.url',
        'oauth_provider_ims_token_url': 'oauth.provider.ims.token.url',
        'oauth_provider_ims_profile_url': 'oauth.provider.ims.profile.url',
        'oauth_provider_ims_extended_details_urls': 'oauth.provider.ims.extended.details.urls',
        'oauth_provider_ims_validate_token_url': 'oauth.provider.ims.validate.token.url',
        'oauth_provider_ims_session_property': 'oauth.provider.ims.session.property',
        'oauth_provider_ims_service_token_client_id': 'oauth.provider.ims.service.token.client.id',
        'oauth_provider_ims_service_token_client_secret': 'oauth.provider.ims.service.token.client.secret',
        'oauth_provider_ims_service_token': 'oauth.provider.ims.service.token',
        'ims_org_ref': 'ims.org.ref',
        'ims_group_mapping': 'ims.group.mapping',
        'oauth_provider_ims_only_license_group': 'oauth.provider.ims.only.license.group'
    }

    def __init__(self, oauth_provider_id=None, oauth_provider_ims_authorization_url=None, oauth_provider_ims_token_url=None, oauth_provider_ims_profile_url=None, oauth_provider_ims_extended_details_urls=None, oauth_provider_ims_validate_token_url=None, oauth_provider_ims_session_property=None, oauth_provider_ims_service_token_client_id=None, oauth_provider_ims_service_token_client_secret=None, oauth_provider_ims_service_token=None, ims_org_ref=None, ims_group_mapping=None, oauth_provider_ims_only_license_group=None):  # noqa: E501
        """ComAdobeGraniteAuthImsImplIMSProviderImplProperties - a model defined in OpenAPI"""  # noqa: E501

        self._oauth_provider_id = None
        self._oauth_provider_ims_authorization_url = None
        self._oauth_provider_ims_token_url = None
        self._oauth_provider_ims_profile_url = None
        self._oauth_provider_ims_extended_details_urls = None
        self._oauth_provider_ims_validate_token_url = None
        self._oauth_provider_ims_session_property = None
        self._oauth_provider_ims_service_token_client_id = None
        self._oauth_provider_ims_service_token_client_secret = None
        self._oauth_provider_ims_service_token = None
        self._ims_org_ref = None
        self._ims_group_mapping = None
        self._oauth_provider_ims_only_license_group = None
        self.discriminator = None

        if oauth_provider_id is not None:
            self.oauth_provider_id = oauth_provider_id
        if oauth_provider_ims_authorization_url is not None:
            self.oauth_provider_ims_authorization_url = oauth_provider_ims_authorization_url
        if oauth_provider_ims_token_url is not None:
            self.oauth_provider_ims_token_url = oauth_provider_ims_token_url
        if oauth_provider_ims_profile_url is not None:
            self.oauth_provider_ims_profile_url = oauth_provider_ims_profile_url
        if oauth_provider_ims_extended_details_urls is not None:
            self.oauth_provider_ims_extended_details_urls = oauth_provider_ims_extended_details_urls
        if oauth_provider_ims_validate_token_url is not None:
            self.oauth_provider_ims_validate_token_url = oauth_provider_ims_validate_token_url
        if oauth_provider_ims_session_property is not None:
            self.oauth_provider_ims_session_property = oauth_provider_ims_session_property
        if oauth_provider_ims_service_token_client_id is not None:
            self.oauth_provider_ims_service_token_client_id = oauth_provider_ims_service_token_client_id
        if oauth_provider_ims_service_token_client_secret is not None:
            self.oauth_provider_ims_service_token_client_secret = oauth_provider_ims_service_token_client_secret
        if oauth_provider_ims_service_token is not None:
            self.oauth_provider_ims_service_token = oauth_provider_ims_service_token
        if ims_org_ref is not None:
            self.ims_org_ref = ims_org_ref
        if ims_group_mapping is not None:
            self.ims_group_mapping = ims_group_mapping
        if oauth_provider_ims_only_license_group is not None:
            self.oauth_provider_ims_only_license_group = oauth_provider_ims_only_license_group

    @property
    def oauth_provider_id(self):
        """Gets the oauth_provider_id of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501


        :return: The oauth_provider_id of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._oauth_provider_id

    @oauth_provider_id.setter
    def oauth_provider_id(self, oauth_provider_id):
        """Sets the oauth_provider_id of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.


        :param oauth_provider_id: The oauth_provider_id of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._oauth_provider_id = oauth_provider_id

    @property
    def oauth_provider_ims_authorization_url(self):
        """Gets the oauth_provider_ims_authorization_url of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501


        :return: The oauth_provider_ims_authorization_url of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._oauth_provider_ims_authorization_url

    @oauth_provider_ims_authorization_url.setter
    def oauth_provider_ims_authorization_url(self, oauth_provider_ims_authorization_url):
        """Sets the oauth_provider_ims_authorization_url of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.


        :param oauth_provider_ims_authorization_url: The oauth_provider_ims_authorization_url of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._oauth_provider_ims_authorization_url = oauth_provider_ims_authorization_url

    @property
    def oauth_provider_ims_token_url(self):
        """Gets the oauth_provider_ims_token_url of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501


        :return: The oauth_provider_ims_token_url of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._oauth_provider_ims_token_url

    @oauth_provider_ims_token_url.setter
    def oauth_provider_ims_token_url(self, oauth_provider_ims_token_url):
        """Sets the oauth_provider_ims_token_url of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.


        :param oauth_provider_ims_token_url: The oauth_provider_ims_token_url of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._oauth_provider_ims_token_url = oauth_provider_ims_token_url

    @property
    def oauth_provider_ims_profile_url(self):
        """Gets the oauth_provider_ims_profile_url of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501


        :return: The oauth_provider_ims_profile_url of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._oauth_provider_ims_profile_url

    @oauth_provider_ims_profile_url.setter
    def oauth_provider_ims_profile_url(self, oauth_provider_ims_profile_url):
        """Sets the oauth_provider_ims_profile_url of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.


        :param oauth_provider_ims_profile_url: The oauth_provider_ims_profile_url of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._oauth_provider_ims_profile_url = oauth_provider_ims_profile_url

    @property
    def oauth_provider_ims_extended_details_urls(self):
        """Gets the oauth_provider_ims_extended_details_urls of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501


        :return: The oauth_provider_ims_extended_details_urls of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._oauth_provider_ims_extended_details_urls

    @oauth_provider_ims_extended_details_urls.setter
    def oauth_provider_ims_extended_details_urls(self, oauth_provider_ims_extended_details_urls):
        """Sets the oauth_provider_ims_extended_details_urls of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.


        :param oauth_provider_ims_extended_details_urls: The oauth_provider_ims_extended_details_urls of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._oauth_provider_ims_extended_details_urls = oauth_provider_ims_extended_details_urls

    @property
    def oauth_provider_ims_validate_token_url(self):
        """Gets the oauth_provider_ims_validate_token_url of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501


        :return: The oauth_provider_ims_validate_token_url of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._oauth_provider_ims_validate_token_url

    @oauth_provider_ims_validate_token_url.setter
    def oauth_provider_ims_validate_token_url(self, oauth_provider_ims_validate_token_url):
        """Sets the oauth_provider_ims_validate_token_url of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.


        :param oauth_provider_ims_validate_token_url: The oauth_provider_ims_validate_token_url of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._oauth_provider_ims_validate_token_url = oauth_provider_ims_validate_token_url

    @property
    def oauth_provider_ims_session_property(self):
        """Gets the oauth_provider_ims_session_property of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501


        :return: The oauth_provider_ims_session_property of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._oauth_provider_ims_session_property

    @oauth_provider_ims_session_property.setter
    def oauth_provider_ims_session_property(self, oauth_provider_ims_session_property):
        """Sets the oauth_provider_ims_session_property of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.


        :param oauth_provider_ims_session_property: The oauth_provider_ims_session_property of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._oauth_provider_ims_session_property = oauth_provider_ims_session_property

    @property
    def oauth_provider_ims_service_token_client_id(self):
        """Gets the oauth_provider_ims_service_token_client_id of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501


        :return: The oauth_provider_ims_service_token_client_id of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._oauth_provider_ims_service_token_client_id

    @oauth_provider_ims_service_token_client_id.setter
    def oauth_provider_ims_service_token_client_id(self, oauth_provider_ims_service_token_client_id):
        """Sets the oauth_provider_ims_service_token_client_id of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.


        :param oauth_provider_ims_service_token_client_id: The oauth_provider_ims_service_token_client_id of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._oauth_provider_ims_service_token_client_id = oauth_provider_ims_service_token_client_id

    @property
    def oauth_provider_ims_service_token_client_secret(self):
        """Gets the oauth_provider_ims_service_token_client_secret of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501


        :return: The oauth_provider_ims_service_token_client_secret of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._oauth_provider_ims_service_token_client_secret

    @oauth_provider_ims_service_token_client_secret.setter
    def oauth_provider_ims_service_token_client_secret(self, oauth_provider_ims_service_token_client_secret):
        """Sets the oauth_provider_ims_service_token_client_secret of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.


        :param oauth_provider_ims_service_token_client_secret: The oauth_provider_ims_service_token_client_secret of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._oauth_provider_ims_service_token_client_secret = oauth_provider_ims_service_token_client_secret

    @property
    def oauth_provider_ims_service_token(self):
        """Gets the oauth_provider_ims_service_token of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501


        :return: The oauth_provider_ims_service_token of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._oauth_provider_ims_service_token

    @oauth_provider_ims_service_token.setter
    def oauth_provider_ims_service_token(self, oauth_provider_ims_service_token):
        """Sets the oauth_provider_ims_service_token of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.


        :param oauth_provider_ims_service_token: The oauth_provider_ims_service_token of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._oauth_provider_ims_service_token = oauth_provider_ims_service_token

    @property
    def ims_org_ref(self):
        """Gets the ims_org_ref of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501


        :return: The ims_org_ref of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._ims_org_ref

    @ims_org_ref.setter
    def ims_org_ref(self, ims_org_ref):
        """Sets the ims_org_ref of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.


        :param ims_org_ref: The ims_org_ref of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._ims_org_ref = ims_org_ref

    @property
    def ims_group_mapping(self):
        """Gets the ims_group_mapping of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501


        :return: The ims_group_mapping of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._ims_group_mapping

    @ims_group_mapping.setter
    def ims_group_mapping(self, ims_group_mapping):
        """Sets the ims_group_mapping of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.


        :param ims_group_mapping: The ims_group_mapping of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._ims_group_mapping = ims_group_mapping

    @property
    def oauth_provider_ims_only_license_group(self):
        """Gets the oauth_provider_ims_only_license_group of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501


        :return: The oauth_provider_ims_only_license_group of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._oauth_provider_ims_only_license_group

    @oauth_provider_ims_only_license_group.setter
    def oauth_provider_ims_only_license_group(self, oauth_provider_ims_only_license_group):
        """Sets the oauth_provider_ims_only_license_group of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.


        :param oauth_provider_ims_only_license_group: The oauth_provider_ims_only_license_group of this ComAdobeGraniteAuthImsImplIMSProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._oauth_provider_ims_only_license_group = oauth_provider_ims_only_license_group

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
        if not isinstance(other, ComAdobeGraniteAuthImsImplIMSProviderImplProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
