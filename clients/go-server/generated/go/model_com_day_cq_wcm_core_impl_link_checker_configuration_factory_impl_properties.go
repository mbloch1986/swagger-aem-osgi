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

type ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties struct {

	LinkExpiredPrefix *ConfigNodePropertyString `json:"link.expired.prefix,omitempty"`

	LinkExpiredRemove *ConfigNodePropertyBoolean `json:"link.expired.remove,omitempty"`

	LinkExpiredSuffix *ConfigNodePropertyString `json:"link.expired.suffix,omitempty"`

	LinkInvalidPrefix *ConfigNodePropertyString `json:"link.invalid.prefix,omitempty"`

	LinkInvalidRemove *ConfigNodePropertyBoolean `json:"link.invalid.remove,omitempty"`

	LinkInvalidSuffix *ConfigNodePropertyString `json:"link.invalid.suffix,omitempty"`

	LinkPredatedPrefix *ConfigNodePropertyString `json:"link.predated.prefix,omitempty"`

	LinkPredatedRemove *ConfigNodePropertyBoolean `json:"link.predated.remove,omitempty"`

	LinkPredatedSuffix *ConfigNodePropertyString `json:"link.predated.suffix,omitempty"`

	LinkWcmmodes *ConfigNodePropertyArray `json:"link.wcmmodes,omitempty"`
}