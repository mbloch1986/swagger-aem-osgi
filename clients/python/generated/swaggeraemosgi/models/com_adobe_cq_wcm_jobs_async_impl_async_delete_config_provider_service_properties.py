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


class ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties(object):
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
        'threshold': 'ConfigNodePropertyInteger',
        'job_topic_name': 'ConfigNodePropertyString',
        'email_enabled': 'ConfigNodePropertyBoolean'
    }

    attribute_map = {
        'threshold': 'threshold',
        'job_topic_name': 'jobTopicName',
        'email_enabled': 'emailEnabled'
    }

    def __init__(self, threshold=None, job_topic_name=None, email_enabled=None):  # noqa: E501
        """ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties - a model defined in OpenAPI"""  # noqa: E501

        self._threshold = None
        self._job_topic_name = None
        self._email_enabled = None
        self.discriminator = None

        if threshold is not None:
            self.threshold = threshold
        if job_topic_name is not None:
            self.job_topic_name = job_topic_name
        if email_enabled is not None:
            self.email_enabled = email_enabled

    @property
    def threshold(self):
        """Gets the threshold of this ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties.  # noqa: E501


        :return: The threshold of this ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties.  # noqa: E501
        :rtype: ConfigNodePropertyInteger
        """
        return self._threshold

    @threshold.setter
    def threshold(self, threshold):
        """Sets the threshold of this ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties.


        :param threshold: The threshold of this ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties.  # noqa: E501
        :type: ConfigNodePropertyInteger
        """

        self._threshold = threshold

    @property
    def job_topic_name(self):
        """Gets the job_topic_name of this ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties.  # noqa: E501


        :return: The job_topic_name of this ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties.  # noqa: E501
        :rtype: ConfigNodePropertyString
        """
        return self._job_topic_name

    @job_topic_name.setter
    def job_topic_name(self, job_topic_name):
        """Sets the job_topic_name of this ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties.


        :param job_topic_name: The job_topic_name of this ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties.  # noqa: E501
        :type: ConfigNodePropertyString
        """

        self._job_topic_name = job_topic_name

    @property
    def email_enabled(self):
        """Gets the email_enabled of this ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties.  # noqa: E501


        :return: The email_enabled of this ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties.  # noqa: E501
        :rtype: ConfigNodePropertyBoolean
        """
        return self._email_enabled

    @email_enabled.setter
    def email_enabled(self, email_enabled):
        """Sets the email_enabled of this ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties.


        :param email_enabled: The email_enabled of this ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties.  # noqa: E501
        :type: ConfigNodePropertyBoolean
        """

        self._email_enabled = email_enabled

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
        if not isinstance(other, ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
