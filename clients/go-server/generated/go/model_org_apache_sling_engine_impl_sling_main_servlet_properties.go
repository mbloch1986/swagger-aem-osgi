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

type OrgApacheSlingEngineImplSlingMainServletProperties struct {

	SlingMaxCalls *ConfigNodePropertyInteger `json:"sling.max.calls,omitempty"`

	SlingMaxInclusions *ConfigNodePropertyInteger `json:"sling.max.inclusions,omitempty"`

	SlingTraceAllow *ConfigNodePropertyBoolean `json:"sling.trace.allow,omitempty"`

	SlingMaxRecordRequests *ConfigNodePropertyInteger `json:"sling.max.record.requests,omitempty"`

	SlingStorePatternRequests *ConfigNodePropertyArray `json:"sling.store.pattern.requests,omitempty"`

	SlingServerinfo *ConfigNodePropertyString `json:"sling.serverinfo,omitempty"`

	SlingAdditionalResponseHeaders *ConfigNodePropertyArray `json:"sling.additional.response.headers,omitempty"`
}
