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

type ComDayCqDamCoreImplExpiryNotificationJobImplProperties struct {

	CqDamExpiryNotificationSchedulerIstimebased *ConfigNodePropertyBoolean `json:"cq.dam.expiry.notification.scheduler.istimebased,omitempty"`

	CqDamExpiryNotificationSchedulerTimebasedRule *ConfigNodePropertyString `json:"cq.dam.expiry.notification.scheduler.timebased.rule,omitempty"`

	CqDamExpiryNotificationSchedulerPeriodRule *ConfigNodePropertyInteger `json:"cq.dam.expiry.notification.scheduler.period.rule,omitempty"`

	SendEmail *ConfigNodePropertyBoolean `json:"send_email,omitempty"`

	AssetExpiredLimit *ConfigNodePropertyInteger `json:"asset_expired_limit,omitempty"`

	PriorNotificationSeconds *ConfigNodePropertyInteger `json:"prior_notification_seconds,omitempty"`

	CqDamExpiryNotificationUrlProtocol *ConfigNodePropertyString `json:"cq.dam.expiry.notification.url.protocol,omitempty"`
}