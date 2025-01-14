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


class ComAdobeCqDtmImplServletsDTMDeployHookServletProperties(object):
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
        'dtm_staging_ip_whitelist': 'ConfigNodePropertyArray',
        'dtm_production_ip_whitelist': 'ConfigNodePropertyArray'
    }

    attribute_map = {
        'dtm_staging_ip_whitelist': 'dtm.staging.ip.whitelist',
        'dtm_production_ip_whitelist': 'dtm.production.ip.whitelist'
    }

    def __init__(self, dtm_staging_ip_whitelist=None, dtm_production_ip_whitelist=None):  # noqa: E501
        """ComAdobeCqDtmImplServletsDTMDeployHookServletProperties - a model defined in OpenAPI"""  # noqa: E501

        self._dtm_staging_ip_whitelist = None
        self._dtm_production_ip_whitelist = None
        self.discriminator = None

        if dtm_staging_ip_whitelist is not None:
            self.dtm_staging_ip_whitelist = dtm_staging_ip_whitelist
        if dtm_production_ip_whitelist is not None:
            self.dtm_production_ip_whitelist = dtm_production_ip_whitelist

    @property
    def dtm_staging_ip_whitelist(self):
        """Gets the dtm_staging_ip_whitelist of this ComAdobeCqDtmImplServletsDTMDeployHookServletProperties.  # noqa: E501


        :return: The dtm_staging_ip_whitelist of this ComAdobeCqDtmImplServletsDTMDeployHookServletProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._dtm_staging_ip_whitelist

    @dtm_staging_ip_whitelist.setter
    def dtm_staging_ip_whitelist(self, dtm_staging_ip_whitelist):
        """Sets the dtm_staging_ip_whitelist of this ComAdobeCqDtmImplServletsDTMDeployHookServletProperties.


        :param dtm_staging_ip_whitelist: The dtm_staging_ip_whitelist of this ComAdobeCqDtmImplServletsDTMDeployHookServletProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._dtm_staging_ip_whitelist = dtm_staging_ip_whitelist

    @property
    def dtm_production_ip_whitelist(self):
        """Gets the dtm_production_ip_whitelist of this ComAdobeCqDtmImplServletsDTMDeployHookServletProperties.  # noqa: E501


        :return: The dtm_production_ip_whitelist of this ComAdobeCqDtmImplServletsDTMDeployHookServletProperties.  # noqa: E501
        :rtype: ConfigNodePropertyArray
        """
        return self._dtm_production_ip_whitelist

    @dtm_production_ip_whitelist.setter
    def dtm_production_ip_whitelist(self, dtm_production_ip_whitelist):
        """Sets the dtm_production_ip_whitelist of this ComAdobeCqDtmImplServletsDTMDeployHookServletProperties.


        :param dtm_production_ip_whitelist: The dtm_production_ip_whitelist of this ComAdobeCqDtmImplServletsDTMDeployHookServletProperties.  # noqa: E501
        :type: ConfigNodePropertyArray
        """

        self._dtm_production_ip_whitelist = dtm_production_ip_whitelist

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
        if not isinstance(other, ComAdobeCqDtmImplServletsDTMDeployHookServletProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
