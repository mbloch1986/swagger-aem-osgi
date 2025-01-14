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


class ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties(object):
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
        'path': 'ConfigNodePropertyArray',
        'service_ranking': 'ConfigNodePropertyInteger',
        'idp_url': 'ConfigNodePropertyString',
        'idp_cert_alias': 'ConfigNodePropertyString',
        'idp_http_redirect': 'ConfigNodePropertyBoolean',
        'service_provider_entity_id': 'ConfigNodePropertyString',
        'assertion_consumer_service_url': 'ConfigNodePropertyString',
        'sp_private_key_alias': 'ConfigNodePropertyString',
        'key_store_password': 'ConfigNodePropertyString',
        'default_redirect_url': 'ConfigNodePropertyString',
        'user_id_attribute': 'ConfigNodePropertyString',
        'use_encryption': 'ConfigNodePropertyBoolean',
        'create_user': 'ConfigNodePropertyBoolean',
        'user_intermediate_path': 'ConfigNodePropertyString',
        'add_group_memberships': 'ConfigNodePropertyBoolean',
        'group_membership_attribute': 'ConfigNodePropertyString',
        'default_groups': 'ConfigNodePropertyArray',
        'name_id_format': 'ConfigNodePropertyString',
        'synchronize_attributes': 'ConfigNodePropertyArray',
        'handle_logout': 'ConfigNodePropertyBoolean',
        'logout_url': 'ConfigNodePropertyString',
        'clock_tolerance': 'ConfigNodePropertyInteger',
        'digest_method': 'ConfigNodePropertyString',
        'signature_method': 'ConfigNodePropertyString',
        'identity_sync_type': 'ConfigNodePropertyDropDown',
        'idp_identifier': 'ConfigNodePropertyString'
    }

    attribute_map = {
        'path': 'path',
        'service_ranking': 'service.ranking',
        'idp_url': 'idpUrl',
        'idp_cert_alias': 'idpCertAlias',
        'idp_http_redirect': 'idpHttpRedirect',
        'service_provider_entity_id': 'serviceProviderEntityId',
        'assertion_consumer_service_url': 'assertionConsumerServiceURL',
        'sp_private_key_alias': 'spPrivateKeyAlias',
        'key_store_password': 'keyStorePassword',
        'default_redirect_url': 'defaultRedirectUrl',
        'user_id_attribute': 'userIDAttribute',
        'use_encryption': 'useEncryption',
        'create_user': 'createUser',
        'user_intermediate_path': 'userIntermediatePath',
        'add_group_memberships': 'addGroupMemberships',
        'group_membership_attribute': 'groupMembershipAttribute',
        'default_groups': 'defaultGroups',
        'name_id_format': 'nameIdFormat',
        'synchronize_attributes': 'synchronizeAttributes',
        'handle_logout': 'handleLogout',
        'logout_url': 'logoutUrl',
        'clock_tolerance': 'clockTolerance',
        'digest_method': 'digestMethod',
        'signature_method': 'signatureMethod',
        'identity_sync_type': 'identitySyncType',
        'idp_identifier': 'idpIdentifier'
    }

    def __init__(self, path=None, service_ranking=None, idp_url=None, idp_cert_alias=None, idp_http_redirect=None, service_provider_entity_id=None, assertion_consumer_service_url=None, sp_private_key_alias=None, key_store_password=None, default_redirect_url=None, user_id_attribute=None, use_encryption=None, create_user=None, user_intermediate_path=None, add_group_memberships=None, group_membership_attribute=None, default_groups=None, name_id_format=None, synchronize_attributes=None, handle_logout=None, logout_url=None, clock_tolerance=None, digest_method=None, signature_method=None, identity_sync_type=None, idp_identifier=None):  # noqa: E501
        """ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties - a model defined in OpenAPI"""  # noqa: E501

        self._path = None
        self._service_ranking = None
        self._idp_url = None
        self._idp_cert_alias = None
        self._idp_http_redirect = None
        self._service_provider_entity_id = None
        self._assertion_consumer_service_url = None
        self._sp_private_key_alias = None
        self._key_store_password = None
        self._default_redirect_url = None
        self._user_id_attribute = None
        self._use_encryption = None
        self._create_user = None
        self._user_intermediate_path = None
        self._add_group_memberships = None
        self._group_membership_attribute = None
        self._default_groups = None
        self._name_id_format = None
        self._synchronize_attributes = None
        self._handle_logout = None
        self._logout_url = None
        self._clock_tolerance = None
        self._digest_method = None
        self._signature_method = None
        self._identity_sync_type = None
        self._idp_identifier = None
        self.discriminator = None

        if path is not None:
            self.path = path
        if service_ranking is not None:
            self.service_ranking = service_ranking
        if idp_url is not None:
            self.idp_url = idp_url
        if idp_cert_alias is not None:
            self.idp_cert_alias = idp_cert_alias
        if idp_http_redirect is not None:
            self.idp_http_redirect = idp_http_redirect
        if service_provider_entity_id is not None:
            self.service_provider_entity_id = service_provider_entity_id
        if assertion_consumer_service_url is not None:
            self.assertion_consumer_service_url = assertion_consumer_service_url
        if sp_private_key_alias is not None:
            self.sp_private_key_alias = sp_private_key_alias
        if key_store_password is not None:
            self.key_store_password = key_store_password
        if default_redirect_url is not None:
            self.default_redirect_url = default_redirect_url
        if user_id_attribute is not None:
            self.user_id_attribute = user_id_attribute
        if use_encryption is not None:
            self.use_encryption = use_encryption
        if create_user is not None:
            self.create_user = create_user
        if user_intermediate_path is not None:
            self.user_intermediate_path = user_intermediate_path
        if add_group_memberships is not None:
            self.add_group_memberships = add_group_memberships
        if group_membership_attribute is not None:
            self.group_membership_attribute = group_membership_attribute
        if default_groups is not None:
            self.default_groups = default_groups
        if name_id_format is not None:
            self.name_id_format = name_id_format
        if synchronize_attributes is not None:
            self.synchronize_attributes = synchronize_attributes
        if handle_logout is not None:
            self.handle_logout = handle_logout
        if logout_url is not None:
            self.logout_url = logout_url
        if clock_tolerance is not None:
            self.clock_tolerance = clock_tolerance
        if digest_method is not None:
            self.digest_method = digest_method
        if signature_method is not None:
            self.signature_method = signature_method
        if identity_sync_type is not None:
            self.identity_sync_type = identity_sync_type
        if idp_identifier is not None:
            self.idp_identifier = idp_identifier

    @property
    def path(self):
        """Gets the path of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The path of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._path

    @path.setter
    def path(self, path):
        """Sets the path of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param path: The path of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._path = path

    @property
    def service_ranking(self):
        """Gets the service_ranking of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The service_ranking of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._service_ranking

    @service_ranking.setter
    def service_ranking(self, service_ranking):
        """Sets the service_ranking of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param service_ranking: The service_ranking of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._service_ranking = service_ranking

    @property
    def idp_url(self):
        """Gets the idp_url of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The idp_url of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._idp_url

    @idp_url.setter
    def idp_url(self, idp_url):
        """Sets the idp_url of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param idp_url: The idp_url of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._idp_url = idp_url

    @property
    def idp_cert_alias(self):
        """Gets the idp_cert_alias of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The idp_cert_alias of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._idp_cert_alias

    @idp_cert_alias.setter
    def idp_cert_alias(self, idp_cert_alias):
        """Sets the idp_cert_alias of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param idp_cert_alias: The idp_cert_alias of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._idp_cert_alias = idp_cert_alias

    @property
    def idp_http_redirect(self):
        """Gets the idp_http_redirect of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The idp_http_redirect of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._idp_http_redirect

    @idp_http_redirect.setter
    def idp_http_redirect(self, idp_http_redirect):
        """Sets the idp_http_redirect of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param idp_http_redirect: The idp_http_redirect of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._idp_http_redirect = idp_http_redirect

    @property
    def service_provider_entity_id(self):
        """Gets the service_provider_entity_id of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The service_provider_entity_id of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._service_provider_entity_id

    @service_provider_entity_id.setter
    def service_provider_entity_id(self, service_provider_entity_id):
        """Sets the service_provider_entity_id of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param service_provider_entity_id: The service_provider_entity_id of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._service_provider_entity_id = service_provider_entity_id

    @property
    def assertion_consumer_service_url(self):
        """Gets the assertion_consumer_service_url of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The assertion_consumer_service_url of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._assertion_consumer_service_url

    @assertion_consumer_service_url.setter
    def assertion_consumer_service_url(self, assertion_consumer_service_url):
        """Sets the assertion_consumer_service_url of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param assertion_consumer_service_url: The assertion_consumer_service_url of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._assertion_consumer_service_url = assertion_consumer_service_url

    @property
    def sp_private_key_alias(self):
        """Gets the sp_private_key_alias of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The sp_private_key_alias of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._sp_private_key_alias

    @sp_private_key_alias.setter
    def sp_private_key_alias(self, sp_private_key_alias):
        """Sets the sp_private_key_alias of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param sp_private_key_alias: The sp_private_key_alias of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._sp_private_key_alias = sp_private_key_alias

    @property
    def key_store_password(self):
        """Gets the key_store_password of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The key_store_password of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._key_store_password

    @key_store_password.setter
    def key_store_password(self, key_store_password):
        """Sets the key_store_password of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param key_store_password: The key_store_password of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._key_store_password = key_store_password

    @property
    def default_redirect_url(self):
        """Gets the default_redirect_url of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The default_redirect_url of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._default_redirect_url

    @default_redirect_url.setter
    def default_redirect_url(self, default_redirect_url):
        """Sets the default_redirect_url of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param default_redirect_url: The default_redirect_url of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._default_redirect_url = default_redirect_url

    @property
    def user_id_attribute(self):
        """Gets the user_id_attribute of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The user_id_attribute of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._user_id_attribute

    @user_id_attribute.setter
    def user_id_attribute(self, user_id_attribute):
        """Sets the user_id_attribute of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param user_id_attribute: The user_id_attribute of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._user_id_attribute = user_id_attribute

    @property
    def use_encryption(self):
        """Gets the use_encryption of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The use_encryption of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._use_encryption

    @use_encryption.setter
    def use_encryption(self, use_encryption):
        """Sets the use_encryption of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param use_encryption: The use_encryption of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._use_encryption = use_encryption

    @property
    def create_user(self):
        """Gets the create_user of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The create_user of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._create_user

    @create_user.setter
    def create_user(self, create_user):
        """Sets the create_user of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param create_user: The create_user of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._create_user = create_user

    @property
    def user_intermediate_path(self):
        """Gets the user_intermediate_path of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The user_intermediate_path of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._user_intermediate_path

    @user_intermediate_path.setter
    def user_intermediate_path(self, user_intermediate_path):
        """Sets the user_intermediate_path of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param user_intermediate_path: The user_intermediate_path of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._user_intermediate_path = user_intermediate_path

    @property
    def add_group_memberships(self):
        """Gets the add_group_memberships of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The add_group_memberships of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._add_group_memberships

    @add_group_memberships.setter
    def add_group_memberships(self, add_group_memberships):
        """Sets the add_group_memberships of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param add_group_memberships: The add_group_memberships of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._add_group_memberships = add_group_memberships

    @property
    def group_membership_attribute(self):
        """Gets the group_membership_attribute of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The group_membership_attribute of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._group_membership_attribute

    @group_membership_attribute.setter
    def group_membership_attribute(self, group_membership_attribute):
        """Sets the group_membership_attribute of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param group_membership_attribute: The group_membership_attribute of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._group_membership_attribute = group_membership_attribute

    @property
    def default_groups(self):
        """Gets the default_groups of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The default_groups of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._default_groups

    @default_groups.setter
    def default_groups(self, default_groups):
        """Sets the default_groups of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param default_groups: The default_groups of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._default_groups = default_groups

    @property
    def name_id_format(self):
        """Gets the name_id_format of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The name_id_format of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._name_id_format

    @name_id_format.setter
    def name_id_format(self, name_id_format):
        """Sets the name_id_format of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param name_id_format: The name_id_format of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._name_id_format = name_id_format

    @property
    def synchronize_attributes(self):
        """Gets the synchronize_attributes of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The synchronize_attributes of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._synchronize_attributes

    @synchronize_attributes.setter
    def synchronize_attributes(self, synchronize_attributes):
        """Sets the synchronize_attributes of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param synchronize_attributes: The synchronize_attributes of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._synchronize_attributes = synchronize_attributes

    @property
    def handle_logout(self):
        """Gets the handle_logout of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The handle_logout of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._handle_logout

    @handle_logout.setter
    def handle_logout(self, handle_logout):
        """Sets the handle_logout of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param handle_logout: The handle_logout of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._handle_logout = handle_logout

    @property
    def logout_url(self):
        """Gets the logout_url of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The logout_url of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._logout_url

    @logout_url.setter
    def logout_url(self, logout_url):
        """Sets the logout_url of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param logout_url: The logout_url of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._logout_url = logout_url

    @property
    def clock_tolerance(self):
        """Gets the clock_tolerance of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The clock_tolerance of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._clock_tolerance

    @clock_tolerance.setter
    def clock_tolerance(self, clock_tolerance):
        """Sets the clock_tolerance of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param clock_tolerance: The clock_tolerance of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._clock_tolerance = clock_tolerance

    @property
    def digest_method(self):
        """Gets the digest_method of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The digest_method of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._digest_method

    @digest_method.setter
    def digest_method(self, digest_method):
        """Sets the digest_method of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param digest_method: The digest_method of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._digest_method = digest_method

    @property
    def signature_method(self):
        """Gets the signature_method of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The signature_method of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._signature_method

    @signature_method.setter
    def signature_method(self, signature_method):
        """Sets the signature_method of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param signature_method: The signature_method of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._signature_method = signature_method

    @property
    def identity_sync_type(self):
        """Gets the identity_sync_type of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The identity_sync_type of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyDropDown
        """
        return self._identity_sync_type

    @identity_sync_type.setter
    def identity_sync_type(self, identity_sync_type):
        """Sets the identity_sync_type of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param identity_sync_type: The identity_sync_type of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyDropDown
        """

        self._identity_sync_type = identity_sync_type

    @property
    def idp_identifier(self):
        """Gets the idp_identifier of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501


        :return: The idp_identifier of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._idp_identifier

    @idp_identifier.setter
    def idp_identifier(self, idp_identifier):
        """Sets the idp_identifier of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.


        :param idp_identifier: The idp_identifier of this ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._idp_identifier = idp_identifier

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
        if not isinstance(other, ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
