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

type ComAdobeGraniteQueriesImplHcLargeIndexHealthCheckProperties struct {
	LargeIndexCriticalThreshold ConfigNodePropertyInteger `json:"large.index.critical.threshold,omitempty"`
	LargeIndexWarnThreshold ConfigNodePropertyInteger `json:"large.index.warn.threshold,omitempty"`
	HcTags ConfigNodePropertyArray `json:"hc.tags,omitempty"`
}