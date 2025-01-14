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


class ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties(object):
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
        'oauth_configmanager_ims_configid': 'ConfigNodePropertyString',
        'ims_owning_entity': 'ConfigNodePropertyString',
        'aem_instance_id': 'ConfigNodePropertyString',
        'ims_service_code': 'ConfigNodePropertyString'
    }

    attribute_map = {
        'oauth_configmanager_ims_configid': 'oauth.configmanager.ims.configid',
        'ims_owning_entity': 'ims.owningEntity',
        'aem_instance_id': 'aem.instanceId',
        'ims_service_code': 'ims.serviceCode'
    }

    def __init__(self, oauth_configmanager_ims_configid=None, ims_owning_entity=None, aem_instance_id=None, ims_service_code=None):  # noqa: E501
        """ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties - a model defined in OpenAPI"""  # noqa: E501

        self._oauth_configmanager_ims_configid = None
        self._ims_owning_entity = None
        self._aem_instance_id = None
        self._ims_service_code = None
        self.discriminator = None

        if oauth_configmanager_ims_configid is not None:
            self.oauth_configmanager_ims_configid = oauth_configmanager_ims_configid
        if ims_owning_entity is not None:
            self.ims_owning_entity = ims_owning_entity
        if aem_instance_id is not None:
            self.aem_instance_id = aem_instance_id
        if ims_service_code is not None:
            self.ims_service_code = ims_service_code

    @property
    def oauth_configmanager_ims_configid(self):
        """Gets the oauth_configmanager_ims_configid of this ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties.  # noqa: E501


        :return: The oauth_configmanager_ims_configid of this ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._oauth_configmanager_ims_configid

    @oauth_configmanager_ims_configid.setter
    def oauth_configmanager_ims_configid(self, oauth_configmanager_ims_configid):
        """Sets the oauth_configmanager_ims_configid of this ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties.


        :param oauth_configmanager_ims_configid: The oauth_configmanager_ims_configid of this ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._oauth_configmanager_ims_configid = oauth_configmanager_ims_configid

    @property
    def ims_owning_entity(self):
        """Gets the ims_owning_entity of this ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties.  # noqa: E501


        :return: The ims_owning_entity of this ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._ims_owning_entity

    @ims_owning_entity.setter
    def ims_owning_entity(self, ims_owning_entity):
        """Sets the ims_owning_entity of this ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties.


        :param ims_owning_entity: The ims_owning_entity of this ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._ims_owning_entity = ims_owning_entity

    @property
    def aem_instance_id(self):
        """Gets the aem_instance_id of this ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties.  # noqa: E501


        :return: The aem_instance_id of this ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._aem_instance_id

    @aem_instance_id.setter
    def aem_instance_id(self, aem_instance_id):
        """Sets the aem_instance_id of this ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties.


        :param aem_instance_id: The aem_instance_id of this ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._aem_instance_id = aem_instance_id

    @property
    def ims_service_code(self):
        """Gets the ims_service_code of this ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties.  # noqa: E501


        :return: The ims_service_code of this ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._ims_service_code

    @ims_service_code.setter
    def ims_service_code(self, ims_service_code):
        """Sets the ims_service_code of this ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties.


        :param ims_service_code: The ims_service_code of this ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._ims_service_code = ims_service_code

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
        if not isinstance(other, ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
