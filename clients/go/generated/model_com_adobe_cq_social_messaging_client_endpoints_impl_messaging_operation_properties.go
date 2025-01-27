/*
 * Adobe Experience Manager OSGI config (AEM) API
 *
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * API version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties struct {
	MessageProperties ConfigNodePropertyArray `json:"message.properties,omitempty"`
	MessageBoxSizeLimit ConfigNodePropertyInteger `json:"messageBoxSizeLimit,omitempty"`
	MessageCountLimit ConfigNodePropertyInteger `json:"messageCountLimit,omitempty"`
	NotifyFailure ConfigNodePropertyBoolean `json:"notifyFailure,omitempty"`
	FailureMessageFrom ConfigNodePropertyString `json:"failureMessageFrom,omitempty"`
	FailureTemplatePath ConfigNodePropertyString `json:"failureTemplatePath,omitempty"`
	MaxRetries ConfigNodePropertyInteger `json:"maxRetries,omitempty"`
	MinWaitBetweenRetries ConfigNodePropertyInteger `json:"minWaitBetweenRetries,omitempty"`
	CountUpdatePoolSize ConfigNodePropertyInteger `json:"countUpdatePoolSize,omitempty"`
	InboxPath ConfigNodePropertyString `json:"inbox.path,omitempty"`
	SentitemsPath ConfigNodePropertyString `json:"sentitems.path,omitempty"`
	SupportAttachments ConfigNodePropertyBoolean `json:"supportAttachments,omitempty"`
	SupportGroupMessaging ConfigNodePropertyBoolean `json:"supportGroupMessaging,omitempty"`
	MaxTotalRecipients ConfigNodePropertyInteger `json:"maxTotalRecipients,omitempty"`
	BatchSize ConfigNodePropertyInteger `json:"batchSize,omitempty"`
	MaxTotalAttachmentSize ConfigNodePropertyInteger `json:"maxTotalAttachmentSize,omitempty"`
	AttachmentTypeBlacklist ConfigNodePropertyArray `json:"attachmentTypeBlacklist,omitempty"`
	AllowedAttachmentTypes ConfigNodePropertyArray `json:"allowedAttachmentTypes,omitempty"`
	ServiceSelector ConfigNodePropertyString `json:"serviceSelector,omitempty"`
	FieldWhitelist ConfigNodePropertyArray `json:"fieldWhitelist,omitempty"`
}
