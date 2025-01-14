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


class ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties(object):
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
        'sling_servlet_paths': 'ConfigNodePropertyString',
        'oauth_revocation_active': 'ConfigNodePropertyBoolean'
    }

    attribute_map = {
        'sling_servlet_paths': 'sling.servlet.paths',
        'oauth_revocation_active': 'oauth.revocation.active'
    }

    def __init__(self, sling_servlet_paths=None, oauth_revocation_active=None):  # noqa: E501
        """ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties - a model defined in OpenAPI"""  # noqa: E501

        self._sling_servlet_paths = None
        self._oauth_revocation_active = None
        self.discriminator = None

        if sling_servlet_paths is not None:
            self.sling_servlet_paths = sling_servlet_paths
        if oauth_revocation_active is not None:
            self.oauth_revocation_active = oauth_revocation_active

    @property
    def sling_servlet_paths(self):
        """Gets the sling_servlet_paths of this ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties.  # noqa: E501


        :return: The sling_servlet_paths of this ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._sling_servlet_paths

    @sling_servlet_paths.setter
    def sling_servlet_paths(self, sling_servlet_paths):
        """Sets the sling_servlet_paths of this ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties.


        :param sling_servlet_paths: The sling_servlet_paths of this ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._sling_servlet_paths = sling_servlet_paths

    @property
    def oauth_revocation_active(self):
        """Gets the oauth_revocation_active of this ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties.  # noqa: E501


        :return: The oauth_revocation_active of this ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._oauth_revocation_active

    @oauth_revocation_active.setter
    def oauth_revocation_active(self, oauth_revocation_active):
        """Sets the oauth_revocation_active of this ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties.


        :param oauth_revocation_active: The oauth_revocation_active of this ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._oauth_revocation_active = oauth_revocation_active

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
        if not isinstance(other, ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
