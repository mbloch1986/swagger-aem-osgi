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


class ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties(object):
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
        'ranking': 'ConfigNodePropertyInteger'
    }

    attribute_map = {
        'ranking': 'ranking'
    }

    def __init__(self, ranking=None):  # noqa: E501
        """ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties - a model defined in OpenAPI"""  # noqa: E501

        self._ranking = None
        self.discriminator = None

        if ranking is not None:
            self.ranking = ranking

    @property
    def ranking(self):
        """Gets the ranking of this ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties.  # noqa: E501


        :return: The ranking of this ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._ranking

    @ranking.setter
    def ranking(self, ranking):
        """Sets the ranking of this ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties.


        :param ranking: The ranking of this ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._ranking = ranking

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
        if not isinstance(other, ComAdobeCqSocialCommonsCommentsEndpointsImplCommentDeleteEventProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
