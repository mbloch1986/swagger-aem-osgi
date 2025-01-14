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


class ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties(object):
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
        'mailer_email_embed': 'ConfigNodePropertyBoolean',
        'mailer_email_charset': 'ConfigNodePropertyString',
        'mailer_email_retriever_user_id': 'ConfigNodePropertyString',
        'mailer_email_retriever_user_pwd': 'ConfigNodePropertyString'
    }

    attribute_map = {
        'mailer_email_embed': 'mailer.email.embed',
        'mailer_email_charset': 'mailer.email.charset',
        'mailer_email_retriever_user_id': 'mailer.email.retrieverUserID',
        'mailer_email_retriever_user_pwd': 'mailer.email.retrieverUserPWD'
    }

    def __init__(self, mailer_email_embed=None, mailer_email_charset=None, mailer_email_retriever_user_id=None, mailer_email_retriever_user_pwd=None):  # noqa: E501
        """ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties - a model defined in OpenAPI"""  # noqa: E501

        self._mailer_email_embed = None
        self._mailer_email_charset = None
        self._mailer_email_retriever_user_id = None
        self._mailer_email_retriever_user_pwd = None
        self.discriminator = None

        if mailer_email_embed is not None:
            self.mailer_email_embed = mailer_email_embed
        if mailer_email_charset is not None:
            self.mailer_email_charset = mailer_email_charset
        if mailer_email_retriever_user_id is not None:
            self.mailer_email_retriever_user_id = mailer_email_retriever_user_id
        if mailer_email_retriever_user_pwd is not None:
            self.mailer_email_retriever_user_pwd = mailer_email_retriever_user_pwd

    @property
    def mailer_email_embed(self):
        """Gets the mailer_email_embed of this ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.  # noqa: E501


        :return: The mailer_email_embed of this ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._mailer_email_embed

    @mailer_email_embed.setter
    def mailer_email_embed(self, mailer_email_embed):
        """Sets the mailer_email_embed of this ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.


        :param mailer_email_embed: The mailer_email_embed of this ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._mailer_email_embed = mailer_email_embed

    @property
    def mailer_email_charset(self):
        """Gets the mailer_email_charset of this ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.  # noqa: E501


        :return: The mailer_email_charset of this ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._mailer_email_charset

    @mailer_email_charset.setter
    def mailer_email_charset(self, mailer_email_charset):
        """Sets the mailer_email_charset of this ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.


        :param mailer_email_charset: The mailer_email_charset of this ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._mailer_email_charset = mailer_email_charset

    @property
    def mailer_email_retriever_user_id(self):
        """Gets the mailer_email_retriever_user_id of this ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.  # noqa: E501


        :return: The mailer_email_retriever_user_id of this ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._mailer_email_retriever_user_id

    @mailer_email_retriever_user_id.setter
    def mailer_email_retriever_user_id(self, mailer_email_retriever_user_id):
        """Sets the mailer_email_retriever_user_id of this ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.


        :param mailer_email_retriever_user_id: The mailer_email_retriever_user_id of this ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._mailer_email_retriever_user_id = mailer_email_retriever_user_id

    @property
    def mailer_email_retriever_user_pwd(self):
        """Gets the mailer_email_retriever_user_pwd of this ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.  # noqa: E501


        :return: The mailer_email_retriever_user_pwd of this ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._mailer_email_retriever_user_pwd

    @mailer_email_retriever_user_pwd.setter
    def mailer_email_retriever_user_pwd(self, mailer_email_retriever_user_pwd):
        """Sets the mailer_email_retriever_user_pwd of this ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.


        :param mailer_email_retriever_user_pwd: The mailer_email_retriever_user_pwd of this ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._mailer_email_retriever_user_pwd = mailer_email_retriever_user_pwd

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
        if not isinstance(other, ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
