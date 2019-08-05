/* 
 * Adobe Experience Manager OSGI config (AEM) API
 *
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: https://openapi-generator.tech
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
  #[serde(rename = "message.properties")]
  message_properties: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "messageBoxSizeLimit")]
  message_box_size_limit: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "messageCountLimit")]
  message_count_limit: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "notifyFailure")]
  notify_failure: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "failureMessageFrom")]
  failure_message_from: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "failureTemplatePath")]
  failure_template_path: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "maxRetries")]
  max_retries: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "minWaitBetweenRetries")]
  min_wait_between_retries: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "countUpdatePoolSize")]
  count_update_pool_size: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "inbox.path")]
  inbox_path: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "sentitems.path")]
  sentitems_path: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "supportAttachments")]
  support_attachments: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "supportGroupMessaging")]
  support_group_messaging: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "maxTotalRecipients")]
  max_total_recipients: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "batchSize")]
  batch_size: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "maxTotalAttachmentSize")]
  max_total_attachment_size: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "attachmentTypeBlacklist")]
  attachment_type_blacklist: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "allowedAttachmentTypes")]
  allowed_attachment_types: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "serviceSelector")]
  service_selector: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "fieldWhitelist")]
  field_whitelist: Option<::models::ConfigNodePropertyArray>
}

impl ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
  pub fn new() -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
      message_properties: None,
      message_box_size_limit: None,
      message_count_limit: None,
      notify_failure: None,
      failure_message_from: None,
      failure_template_path: None,
      max_retries: None,
      min_wait_between_retries: None,
      count_update_pool_size: None,
      inbox_path: None,
      sentitems_path: None,
      support_attachments: None,
      support_group_messaging: None,
      max_total_recipients: None,
      batch_size: None,
      max_total_attachment_size: None,
      attachment_type_blacklist: None,
      allowed_attachment_types: None,
      service_selector: None,
      field_whitelist: None
    }
  }

  pub fn set_message_properties(&mut self, message_properties: ::models::ConfigNodePropertyArray) {
    self.message_properties = Some(message_properties);
  }

  pub fn with_message_properties(mut self, message_properties: ::models::ConfigNodePropertyArray) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.message_properties = Some(message_properties);
    self
  }

  pub fn message_properties(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.message_properties.as_ref()
  }

  pub fn reset_message_properties(&mut self) {
    self.message_properties = None;
  }

  pub fn set_message_box_size_limit(&mut self, message_box_size_limit: ::models::ConfigNodePropertyInteger) {
    self.message_box_size_limit = Some(message_box_size_limit);
  }

  pub fn with_message_box_size_limit(mut self, message_box_size_limit: ::models::ConfigNodePropertyInteger) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.message_box_size_limit = Some(message_box_size_limit);
    self
  }

  pub fn message_box_size_limit(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.message_box_size_limit.as_ref()
  }

  pub fn reset_message_box_size_limit(&mut self) {
    self.message_box_size_limit = None;
  }

  pub fn set_message_count_limit(&mut self, message_count_limit: ::models::ConfigNodePropertyInteger) {
    self.message_count_limit = Some(message_count_limit);
  }

  pub fn with_message_count_limit(mut self, message_count_limit: ::models::ConfigNodePropertyInteger) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.message_count_limit = Some(message_count_limit);
    self
  }

  pub fn message_count_limit(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.message_count_limit.as_ref()
  }

  pub fn reset_message_count_limit(&mut self) {
    self.message_count_limit = None;
  }

  pub fn set_notify_failure(&mut self, notify_failure: ::models::ConfigNodePropertyBoolean) {
    self.notify_failure = Some(notify_failure);
  }

  pub fn with_notify_failure(mut self, notify_failure: ::models::ConfigNodePropertyBoolean) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.notify_failure = Some(notify_failure);
    self
  }

  pub fn notify_failure(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.notify_failure.as_ref()
  }

  pub fn reset_notify_failure(&mut self) {
    self.notify_failure = None;
  }

  pub fn set_failure_message_from(&mut self, failure_message_from: ::models::ConfigNodePropertyString) {
    self.failure_message_from = Some(failure_message_from);
  }

  pub fn with_failure_message_from(mut self, failure_message_from: ::models::ConfigNodePropertyString) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.failure_message_from = Some(failure_message_from);
    self
  }

  pub fn failure_message_from(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.failure_message_from.as_ref()
  }

  pub fn reset_failure_message_from(&mut self) {
    self.failure_message_from = None;
  }

  pub fn set_failure_template_path(&mut self, failure_template_path: ::models::ConfigNodePropertyString) {
    self.failure_template_path = Some(failure_template_path);
  }

  pub fn with_failure_template_path(mut self, failure_template_path: ::models::ConfigNodePropertyString) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.failure_template_path = Some(failure_template_path);
    self
  }

  pub fn failure_template_path(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.failure_template_path.as_ref()
  }

  pub fn reset_failure_template_path(&mut self) {
    self.failure_template_path = None;
  }

  pub fn set_max_retries(&mut self, max_retries: ::models::ConfigNodePropertyInteger) {
    self.max_retries = Some(max_retries);
  }

  pub fn with_max_retries(mut self, max_retries: ::models::ConfigNodePropertyInteger) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.max_retries = Some(max_retries);
    self
  }

  pub fn max_retries(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.max_retries.as_ref()
  }

  pub fn reset_max_retries(&mut self) {
    self.max_retries = None;
  }

  pub fn set_min_wait_between_retries(&mut self, min_wait_between_retries: ::models::ConfigNodePropertyInteger) {
    self.min_wait_between_retries = Some(min_wait_between_retries);
  }

  pub fn with_min_wait_between_retries(mut self, min_wait_between_retries: ::models::ConfigNodePropertyInteger) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.min_wait_between_retries = Some(min_wait_between_retries);
    self
  }

  pub fn min_wait_between_retries(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.min_wait_between_retries.as_ref()
  }

  pub fn reset_min_wait_between_retries(&mut self) {
    self.min_wait_between_retries = None;
  }

  pub fn set_count_update_pool_size(&mut self, count_update_pool_size: ::models::ConfigNodePropertyInteger) {
    self.count_update_pool_size = Some(count_update_pool_size);
  }

  pub fn with_count_update_pool_size(mut self, count_update_pool_size: ::models::ConfigNodePropertyInteger) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.count_update_pool_size = Some(count_update_pool_size);
    self
  }

  pub fn count_update_pool_size(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.count_update_pool_size.as_ref()
  }

  pub fn reset_count_update_pool_size(&mut self) {
    self.count_update_pool_size = None;
  }

  pub fn set_inbox_path(&mut self, inbox_path: ::models::ConfigNodePropertyString) {
    self.inbox_path = Some(inbox_path);
  }

  pub fn with_inbox_path(mut self, inbox_path: ::models::ConfigNodePropertyString) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.inbox_path = Some(inbox_path);
    self
  }

  pub fn inbox_path(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.inbox_path.as_ref()
  }

  pub fn reset_inbox_path(&mut self) {
    self.inbox_path = None;
  }

  pub fn set_sentitems_path(&mut self, sentitems_path: ::models::ConfigNodePropertyString) {
    self.sentitems_path = Some(sentitems_path);
  }

  pub fn with_sentitems_path(mut self, sentitems_path: ::models::ConfigNodePropertyString) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.sentitems_path = Some(sentitems_path);
    self
  }

  pub fn sentitems_path(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.sentitems_path.as_ref()
  }

  pub fn reset_sentitems_path(&mut self) {
    self.sentitems_path = None;
  }

  pub fn set_support_attachments(&mut self, support_attachments: ::models::ConfigNodePropertyBoolean) {
    self.support_attachments = Some(support_attachments);
  }

  pub fn with_support_attachments(mut self, support_attachments: ::models::ConfigNodePropertyBoolean) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.support_attachments = Some(support_attachments);
    self
  }

  pub fn support_attachments(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.support_attachments.as_ref()
  }

  pub fn reset_support_attachments(&mut self) {
    self.support_attachments = None;
  }

  pub fn set_support_group_messaging(&mut self, support_group_messaging: ::models::ConfigNodePropertyBoolean) {
    self.support_group_messaging = Some(support_group_messaging);
  }

  pub fn with_support_group_messaging(mut self, support_group_messaging: ::models::ConfigNodePropertyBoolean) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.support_group_messaging = Some(support_group_messaging);
    self
  }

  pub fn support_group_messaging(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.support_group_messaging.as_ref()
  }

  pub fn reset_support_group_messaging(&mut self) {
    self.support_group_messaging = None;
  }

  pub fn set_max_total_recipients(&mut self, max_total_recipients: ::models::ConfigNodePropertyInteger) {
    self.max_total_recipients = Some(max_total_recipients);
  }

  pub fn with_max_total_recipients(mut self, max_total_recipients: ::models::ConfigNodePropertyInteger) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.max_total_recipients = Some(max_total_recipients);
    self
  }

  pub fn max_total_recipients(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.max_total_recipients.as_ref()
  }

  pub fn reset_max_total_recipients(&mut self) {
    self.max_total_recipients = None;
  }

  pub fn set_batch_size(&mut self, batch_size: ::models::ConfigNodePropertyInteger) {
    self.batch_size = Some(batch_size);
  }

  pub fn with_batch_size(mut self, batch_size: ::models::ConfigNodePropertyInteger) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.batch_size = Some(batch_size);
    self
  }

  pub fn batch_size(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.batch_size.as_ref()
  }

  pub fn reset_batch_size(&mut self) {
    self.batch_size = None;
  }

  pub fn set_max_total_attachment_size(&mut self, max_total_attachment_size: ::models::ConfigNodePropertyInteger) {
    self.max_total_attachment_size = Some(max_total_attachment_size);
  }

  pub fn with_max_total_attachment_size(mut self, max_total_attachment_size: ::models::ConfigNodePropertyInteger) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.max_total_attachment_size = Some(max_total_attachment_size);
    self
  }

  pub fn max_total_attachment_size(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.max_total_attachment_size.as_ref()
  }

  pub fn reset_max_total_attachment_size(&mut self) {
    self.max_total_attachment_size = None;
  }

  pub fn set_attachment_type_blacklist(&mut self, attachment_type_blacklist: ::models::ConfigNodePropertyArray) {
    self.attachment_type_blacklist = Some(attachment_type_blacklist);
  }

  pub fn with_attachment_type_blacklist(mut self, attachment_type_blacklist: ::models::ConfigNodePropertyArray) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.attachment_type_blacklist = Some(attachment_type_blacklist);
    self
  }

  pub fn attachment_type_blacklist(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.attachment_type_blacklist.as_ref()
  }

  pub fn reset_attachment_type_blacklist(&mut self) {
    self.attachment_type_blacklist = None;
  }

  pub fn set_allowed_attachment_types(&mut self, allowed_attachment_types: ::models::ConfigNodePropertyArray) {
    self.allowed_attachment_types = Some(allowed_attachment_types);
  }

  pub fn with_allowed_attachment_types(mut self, allowed_attachment_types: ::models::ConfigNodePropertyArray) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.allowed_attachment_types = Some(allowed_attachment_types);
    self
  }

  pub fn allowed_attachment_types(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.allowed_attachment_types.as_ref()
  }

  pub fn reset_allowed_attachment_types(&mut self) {
    self.allowed_attachment_types = None;
  }

  pub fn set_service_selector(&mut self, service_selector: ::models::ConfigNodePropertyString) {
    self.service_selector = Some(service_selector);
  }

  pub fn with_service_selector(mut self, service_selector: ::models::ConfigNodePropertyString) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.service_selector = Some(service_selector);
    self
  }

  pub fn service_selector(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.service_selector.as_ref()
  }

  pub fn reset_service_selector(&mut self) {
    self.service_selector = None;
  }

  pub fn set_field_whitelist(&mut self, field_whitelist: ::models::ConfigNodePropertyArray) {
    self.field_whitelist = Some(field_whitelist);
  }

  pub fn with_field_whitelist(mut self, field_whitelist: ::models::ConfigNodePropertyArray) -> ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
    self.field_whitelist = Some(field_whitelist);
    self
  }

  pub fn field_whitelist(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.field_whitelist.as_ref()
  }

  pub fn reset_field_whitelist(&mut self) {
    self.field_whitelist = None;
  }

}


