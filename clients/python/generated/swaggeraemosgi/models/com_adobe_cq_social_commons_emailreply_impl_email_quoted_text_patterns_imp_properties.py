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


class ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties(object):
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
        'pattern_time': 'ConfigNodePropertyString',
        'pattern_newline': 'ConfigNodePropertyString',
        'pattern_day_of_month': 'ConfigNodePropertyString',
        'pattern_month': 'ConfigNodePropertyString',
        'pattern_year': 'ConfigNodePropertyString',
        'pattern_date': 'ConfigNodePropertyString',
        'pattern_date_time': 'ConfigNodePropertyString',
        'pattern_email': 'ConfigNodePropertyString'
    }

    attribute_map = {
        'pattern_time': 'pattern.time',
        'pattern_newline': 'pattern.newline',
        'pattern_day_of_month': 'pattern.dayOfMonth',
        'pattern_month': 'pattern.month',
        'pattern_year': 'pattern.year',
        'pattern_date': 'pattern.date',
        'pattern_date_time': 'pattern.dateTime',
        'pattern_email': 'pattern.email'
    }

    def __init__(self, pattern_time=None, pattern_newline=None, pattern_day_of_month=None, pattern_month=None, pattern_year=None, pattern_date=None, pattern_date_time=None, pattern_email=None):  # noqa: E501
        """ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties - a model defined in OpenAPI"""  # noqa: E501

        self._pattern_time = None
        self._pattern_newline = None
        self._pattern_day_of_month = None
        self._pattern_month = None
        self._pattern_year = None
        self._pattern_date = None
        self._pattern_date_time = None
        self._pattern_email = None
        self.discriminator = None

        if pattern_time is not None:
            self.pattern_time = pattern_time
        if pattern_newline is not None:
            self.pattern_newline = pattern_newline
        if pattern_day_of_month is not None:
            self.pattern_day_of_month = pattern_day_of_month
        if pattern_month is not None:
            self.pattern_month = pattern_month
        if pattern_year is not None:
            self.pattern_year = pattern_year
        if pattern_date is not None:
            self.pattern_date = pattern_date
        if pattern_date_time is not None:
            self.pattern_date_time = pattern_date_time
        if pattern_email is not None:
            self.pattern_email = pattern_email

    @property
    def pattern_time(self):
        """Gets the pattern_time of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501


        :return: The pattern_time of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._pattern_time

    @pattern_time.setter
    def pattern_time(self, pattern_time):
        """Sets the pattern_time of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.


        :param pattern_time: The pattern_time of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._pattern_time = pattern_time

    @property
    def pattern_newline(self):
        """Gets the pattern_newline of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501


        :return: The pattern_newline of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._pattern_newline

    @pattern_newline.setter
    def pattern_newline(self, pattern_newline):
        """Sets the pattern_newline of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.


        :param pattern_newline: The pattern_newline of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._pattern_newline = pattern_newline

    @property
    def pattern_day_of_month(self):
        """Gets the pattern_day_of_month of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501


        :return: The pattern_day_of_month of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._pattern_day_of_month

    @pattern_day_of_month.setter
    def pattern_day_of_month(self, pattern_day_of_month):
        """Sets the pattern_day_of_month of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.


        :param pattern_day_of_month: The pattern_day_of_month of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._pattern_day_of_month = pattern_day_of_month

    @property
    def pattern_month(self):
        """Gets the pattern_month of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501


        :return: The pattern_month of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._pattern_month

    @pattern_month.setter
    def pattern_month(self, pattern_month):
        """Sets the pattern_month of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.


        :param pattern_month: The pattern_month of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._pattern_month = pattern_month

    @property
    def pattern_year(self):
        """Gets the pattern_year of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501


        :return: The pattern_year of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._pattern_year

    @pattern_year.setter
    def pattern_year(self, pattern_year):
        """Sets the pattern_year of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.


        :param pattern_year: The pattern_year of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._pattern_year = pattern_year

    @property
    def pattern_date(self):
        """Gets the pattern_date of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501


        :return: The pattern_date of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._pattern_date

    @pattern_date.setter
    def pattern_date(self, pattern_date):
        """Sets the pattern_date of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.


        :param pattern_date: The pattern_date of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._pattern_date = pattern_date

    @property
    def pattern_date_time(self):
        """Gets the pattern_date_time of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501


        :return: The pattern_date_time of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._pattern_date_time

    @pattern_date_time.setter
    def pattern_date_time(self, pattern_date_time):
        """Sets the pattern_date_time of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.


        :param pattern_date_time: The pattern_date_time of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._pattern_date_time = pattern_date_time

    @property
    def pattern_email(self):
        """Gets the pattern_email of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501


        :return: The pattern_email of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._pattern_email

    @pattern_email.setter
    def pattern_email(self, pattern_email):
        """Sets the pattern_email of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.


        :param pattern_email: The pattern_email of this ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._pattern_email = pattern_email

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
        if not isinstance(other, ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
