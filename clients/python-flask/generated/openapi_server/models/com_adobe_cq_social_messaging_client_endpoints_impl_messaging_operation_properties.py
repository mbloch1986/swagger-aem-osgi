# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.config_node_property_array import ConfigNodePropertyArray  # noqa: F401,E501
from openapi_server.models.config_node_property_boolean import ConfigNodePropertyBoolean  # noqa: F401,E501
from openapi_server.models.config_node_property_integer import ConfigNodePropertyInteger  # noqa: F401,E501
from openapi_server.models.config_node_property_string import ConfigNodePropertyString  # noqa: F401,E501
from openapi_server import util


class ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, message_properties: ConfigNodePropertyArray=None, message_box_size_limit: ConfigNodePropertyInteger=None, message_count_limit: ConfigNodePropertyInteger=None, notify_failure: ConfigNodePropertyBoolean=None, failure_message_from: ConfigNodePropertyString=None, failure_template_path: ConfigNodePropertyString=None, max_retries: ConfigNodePropertyInteger=None, min_wait_between_retries: ConfigNodePropertyInteger=None, count_update_pool_size: ConfigNodePropertyInteger=None, inbox_path: ConfigNodePropertyString=None, sentitems_path: ConfigNodePropertyString=None, support_attachments: ConfigNodePropertyBoolean=None, support_group_messaging: ConfigNodePropertyBoolean=None, max_total_recipients: ConfigNodePropertyInteger=None, batch_size: ConfigNodePropertyInteger=None, max_total_attachment_size: ConfigNodePropertyInteger=None, attachment_type_blacklist: ConfigNodePropertyArray=None, allowed_attachment_types: ConfigNodePropertyArray=None, service_selector: ConfigNodePropertyString=None, field_whitelist: ConfigNodePropertyArray=None):  # noqa: E501
        """ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties - a model defined in OpenAPI

        :param message_properties: The message_properties of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type message_properties: ConfigNodePropertyArray
        :param message_box_size_limit: The message_box_size_limit of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type message_box_size_limit: ConfigNodePropertyInteger
        :param message_count_limit: The message_count_limit of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type message_count_limit: ConfigNodePropertyInteger
        :param notify_failure: The notify_failure of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type notify_failure: ConfigNodePropertyBoolean
        :param failure_message_from: The failure_message_from of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type failure_message_from: ConfigNodePropertyString
        :param failure_template_path: The failure_template_path of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type failure_template_path: ConfigNodePropertyString
        :param max_retries: The max_retries of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type max_retries: ConfigNodePropertyInteger
        :param min_wait_between_retries: The min_wait_between_retries of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type min_wait_between_retries: ConfigNodePropertyInteger
        :param count_update_pool_size: The count_update_pool_size of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type count_update_pool_size: ConfigNodePropertyInteger
        :param inbox_path: The inbox_path of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type inbox_path: ConfigNodePropertyString
        :param sentitems_path: The sentitems_path of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type sentitems_path: ConfigNodePropertyString
        :param support_attachments: The support_attachments of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type support_attachments: ConfigNodePropertyBoolean
        :param support_group_messaging: The support_group_messaging of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type support_group_messaging: ConfigNodePropertyBoolean
        :param max_total_recipients: The max_total_recipients of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type max_total_recipients: ConfigNodePropertyInteger
        :param batch_size: The batch_size of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type batch_size: ConfigNodePropertyInteger
        :param max_total_attachment_size: The max_total_attachment_size of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type max_total_attachment_size: ConfigNodePropertyInteger
        :param attachment_type_blacklist: The attachment_type_blacklist of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type attachment_type_blacklist: ConfigNodePropertyArray
        :param allowed_attachment_types: The allowed_attachment_types of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type allowed_attachment_types: ConfigNodePropertyArray
        :param service_selector: The service_selector of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type service_selector: ConfigNodePropertyString
        :param field_whitelist: The field_whitelist of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :type field_whitelist: ConfigNodePropertyArray
        """
        self.openapi_types = {
            'message_properties': ConfigNodePropertyArray,
            'message_box_size_limit': ConfigNodePropertyInteger,
            'message_count_limit': ConfigNodePropertyInteger,
            'notify_failure': ConfigNodePropertyBoolean,
            'failure_message_from': ConfigNodePropertyString,
            'failure_template_path': ConfigNodePropertyString,
            'max_retries': ConfigNodePropertyInteger,
            'min_wait_between_retries': ConfigNodePropertyInteger,
            'count_update_pool_size': ConfigNodePropertyInteger,
            'inbox_path': ConfigNodePropertyString,
            'sentitems_path': ConfigNodePropertyString,
            'support_attachments': ConfigNodePropertyBoolean,
            'support_group_messaging': ConfigNodePropertyBoolean,
            'max_total_recipients': ConfigNodePropertyInteger,
            'batch_size': ConfigNodePropertyInteger,
            'max_total_attachment_size': ConfigNodePropertyInteger,
            'attachment_type_blacklist': ConfigNodePropertyArray,
            'allowed_attachment_types': ConfigNodePropertyArray,
            'service_selector': ConfigNodePropertyString,
            'field_whitelist': ConfigNodePropertyArray
        }

        self.attribute_map = {
            'message_properties': 'message.properties',
            'message_box_size_limit': 'messageBoxSizeLimit',
            'message_count_limit': 'messageCountLimit',
            'notify_failure': 'notifyFailure',
            'failure_message_from': 'failureMessageFrom',
            'failure_template_path': 'failureTemplatePath',
            'max_retries': 'maxRetries',
            'min_wait_between_retries': 'minWaitBetweenRetries',
            'count_update_pool_size': 'countUpdatePoolSize',
            'inbox_path': 'inbox.path',
            'sentitems_path': 'sentitems.path',
            'support_attachments': 'supportAttachments',
            'support_group_messaging': 'supportGroupMessaging',
            'max_total_recipients': 'maxTotalRecipients',
            'batch_size': 'batchSize',
            'max_total_attachment_size': 'maxTotalAttachmentSize',
            'attachment_type_blacklist': 'attachmentTypeBlacklist',
            'allowed_attachment_types': 'allowedAttachmentTypes',
            'service_selector': 'serviceSelector',
            'field_whitelist': 'fieldWhitelist'
        }

        self._message_properties = message_properties
        self._message_box_size_limit = message_box_size_limit
        self._message_count_limit = message_count_limit
        self._notify_failure = notify_failure
        self._failure_message_from = failure_message_from
        self._failure_template_path = failure_template_path
        self._max_retries = max_retries
        self._min_wait_between_retries = min_wait_between_retries
        self._count_update_pool_size = count_update_pool_size
        self._inbox_path = inbox_path
        self._sentitems_path = sentitems_path
        self._support_attachments = support_attachments
        self._support_group_messaging = support_group_messaging
        self._max_total_recipients = max_total_recipients
        self._batch_size = batch_size
        self._max_total_attachment_size = max_total_attachment_size
        self._attachment_type_blacklist = attachment_type_blacklist
        self._allowed_attachment_types = allowed_attachment_types
        self._service_selector = service_selector
        self._field_whitelist = field_whitelist

    @classmethod
    def from_dict(cls, dikt) -> 'ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The comAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.  # noqa: E501
        :rtype: ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def message_properties(self) -> ConfigNodePropertyArray:
        """Gets the message_properties of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The message_properties of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._message_properties

    @message_properties.setter
    def message_properties(self, message_properties: ConfigNodePropertyArray):
        """Sets the message_properties of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param message_properties: The message_properties of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type message_properties: ConfigNodePropertyArray
        """

        self._message_properties = message_properties

    @property
    def message_box_size_limit(self) -> ConfigNodePropertyInteger:
        """Gets the message_box_size_limit of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The message_box_size_limit of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._message_box_size_limit

    @message_box_size_limit.setter
    def message_box_size_limit(self, message_box_size_limit: ConfigNodePropertyInteger):
        """Sets the message_box_size_limit of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param message_box_size_limit: The message_box_size_limit of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type message_box_size_limit: ConfigNodePropertyInteger
        """

        self._message_box_size_limit = message_box_size_limit

    @property
    def message_count_limit(self) -> ConfigNodePropertyInteger:
        """Gets the message_count_limit of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The message_count_limit of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._message_count_limit

    @message_count_limit.setter
    def message_count_limit(self, message_count_limit: ConfigNodePropertyInteger):
        """Sets the message_count_limit of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param message_count_limit: The message_count_limit of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type message_count_limit: ConfigNodePropertyInteger
        """

        self._message_count_limit = message_count_limit

    @property
    def notify_failure(self) -> ConfigNodePropertyBoolean:
        """Gets the notify_failure of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The notify_failure of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._notify_failure

    @notify_failure.setter
    def notify_failure(self, notify_failure: ConfigNodePropertyBoolean):
        """Sets the notify_failure of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param notify_failure: The notify_failure of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type notify_failure: ConfigNodePropertyBoolean
        """

        self._notify_failure = notify_failure

    @property
    def failure_message_from(self) -> ConfigNodePropertyString:
        """Gets the failure_message_from of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The failure_message_from of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._failure_message_from

    @failure_message_from.setter
    def failure_message_from(self, failure_message_from: ConfigNodePropertyString):
        """Sets the failure_message_from of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param failure_message_from: The failure_message_from of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type failure_message_from: ConfigNodePropertyString
        """

        self._failure_message_from = failure_message_from

    @property
    def failure_template_path(self) -> ConfigNodePropertyString:
        """Gets the failure_template_path of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The failure_template_path of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._failure_template_path

    @failure_template_path.setter
    def failure_template_path(self, failure_template_path: ConfigNodePropertyString):
        """Sets the failure_template_path of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param failure_template_path: The failure_template_path of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type failure_template_path: ConfigNodePropertyString
        """

        self._failure_template_path = failure_template_path

    @property
    def max_retries(self) -> ConfigNodePropertyInteger:
        """Gets the max_retries of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The max_retries of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._max_retries

    @max_retries.setter
    def max_retries(self, max_retries: ConfigNodePropertyInteger):
        """Sets the max_retries of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param max_retries: The max_retries of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type max_retries: ConfigNodePropertyInteger
        """

        self._max_retries = max_retries

    @property
    def min_wait_between_retries(self) -> ConfigNodePropertyInteger:
        """Gets the min_wait_between_retries of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The min_wait_between_retries of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._min_wait_between_retries

    @min_wait_between_retries.setter
    def min_wait_between_retries(self, min_wait_between_retries: ConfigNodePropertyInteger):
        """Sets the min_wait_between_retries of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param min_wait_between_retries: The min_wait_between_retries of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type min_wait_between_retries: ConfigNodePropertyInteger
        """

        self._min_wait_between_retries = min_wait_between_retries

    @property
    def count_update_pool_size(self) -> ConfigNodePropertyInteger:
        """Gets the count_update_pool_size of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The count_update_pool_size of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._count_update_pool_size

    @count_update_pool_size.setter
    def count_update_pool_size(self, count_update_pool_size: ConfigNodePropertyInteger):
        """Sets the count_update_pool_size of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param count_update_pool_size: The count_update_pool_size of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type count_update_pool_size: ConfigNodePropertyInteger
        """

        self._count_update_pool_size = count_update_pool_size

    @property
    def inbox_path(self) -> ConfigNodePropertyString:
        """Gets the inbox_path of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The inbox_path of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._inbox_path

    @inbox_path.setter
    def inbox_path(self, inbox_path: ConfigNodePropertyString):
        """Sets the inbox_path of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param inbox_path: The inbox_path of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type inbox_path: ConfigNodePropertyString
        """

        self._inbox_path = inbox_path

    @property
    def sentitems_path(self) -> ConfigNodePropertyString:
        """Gets the sentitems_path of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The sentitems_path of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._sentitems_path

    @sentitems_path.setter
    def sentitems_path(self, sentitems_path: ConfigNodePropertyString):
        """Sets the sentitems_path of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param sentitems_path: The sentitems_path of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type sentitems_path: ConfigNodePropertyString
        """

        self._sentitems_path = sentitems_path

    @property
    def support_attachments(self) -> ConfigNodePropertyBoolean:
        """Gets the support_attachments of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The support_attachments of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._support_attachments

    @support_attachments.setter
    def support_attachments(self, support_attachments: ConfigNodePropertyBoolean):
        """Sets the support_attachments of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param support_attachments: The support_attachments of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type support_attachments: ConfigNodePropertyBoolean
        """

        self._support_attachments = support_attachments

    @property
    def support_group_messaging(self) -> ConfigNodePropertyBoolean:
        """Gets the support_group_messaging of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The support_group_messaging of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyBoolean
        """
        return self._support_group_messaging

    @support_group_messaging.setter
    def support_group_messaging(self, support_group_messaging: ConfigNodePropertyBoolean):
        """Sets the support_group_messaging of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param support_group_messaging: The support_group_messaging of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type support_group_messaging: ConfigNodePropertyBoolean
        """

        self._support_group_messaging = support_group_messaging

    @property
    def max_total_recipients(self) -> ConfigNodePropertyInteger:
        """Gets the max_total_recipients of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The max_total_recipients of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._max_total_recipients

    @max_total_recipients.setter
    def max_total_recipients(self, max_total_recipients: ConfigNodePropertyInteger):
        """Sets the max_total_recipients of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param max_total_recipients: The max_total_recipients of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type max_total_recipients: ConfigNodePropertyInteger
        """

        self._max_total_recipients = max_total_recipients

    @property
    def batch_size(self) -> ConfigNodePropertyInteger:
        """Gets the batch_size of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The batch_size of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._batch_size

    @batch_size.setter
    def batch_size(self, batch_size: ConfigNodePropertyInteger):
        """Sets the batch_size of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param batch_size: The batch_size of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type batch_size: ConfigNodePropertyInteger
        """

        self._batch_size = batch_size

    @property
    def max_total_attachment_size(self) -> ConfigNodePropertyInteger:
        """Gets the max_total_attachment_size of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The max_total_attachment_size of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyInteger
        """
        return self._max_total_attachment_size

    @max_total_attachment_size.setter
    def max_total_attachment_size(self, max_total_attachment_size: ConfigNodePropertyInteger):
        """Sets the max_total_attachment_size of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param max_total_attachment_size: The max_total_attachment_size of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type max_total_attachment_size: ConfigNodePropertyInteger
        """

        self._max_total_attachment_size = max_total_attachment_size

    @property
    def attachment_type_blacklist(self) -> ConfigNodePropertyArray:
        """Gets the attachment_type_blacklist of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The attachment_type_blacklist of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._attachment_type_blacklist

    @attachment_type_blacklist.setter
    def attachment_type_blacklist(self, attachment_type_blacklist: ConfigNodePropertyArray):
        """Sets the attachment_type_blacklist of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param attachment_type_blacklist: The attachment_type_blacklist of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type attachment_type_blacklist: ConfigNodePropertyArray
        """

        self._attachment_type_blacklist = attachment_type_blacklist

    @property
    def allowed_attachment_types(self) -> ConfigNodePropertyArray:
        """Gets the allowed_attachment_types of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The allowed_attachment_types of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._allowed_attachment_types

    @allowed_attachment_types.setter
    def allowed_attachment_types(self, allowed_attachment_types: ConfigNodePropertyArray):
        """Sets the allowed_attachment_types of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param allowed_attachment_types: The allowed_attachment_types of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type allowed_attachment_types: ConfigNodePropertyArray
        """

        self._allowed_attachment_types = allowed_attachment_types

    @property
    def service_selector(self) -> ConfigNodePropertyString:
        """Gets the service_selector of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The service_selector of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyString
        """
        return self._service_selector

    @service_selector.setter
    def service_selector(self, service_selector: ConfigNodePropertyString):
        """Sets the service_selector of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param service_selector: The service_selector of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type service_selector: ConfigNodePropertyString
        """

        self._service_selector = service_selector

    @property
    def field_whitelist(self) -> ConfigNodePropertyArray:
        """Gets the field_whitelist of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :return: The field_whitelist of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :rtype: ConfigNodePropertyArray
        """
        return self._field_whitelist

    @field_whitelist.setter
    def field_whitelist(self, field_whitelist: ConfigNodePropertyArray):
        """Sets the field_whitelist of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.


        :param field_whitelist: The field_whitelist of this ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties.
        :type field_whitelist: ConfigNodePropertyArray
        """

        self._field_whitelist = field_whitelist
