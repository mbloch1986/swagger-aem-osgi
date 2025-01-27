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

type ComAdobeGraniteCsrfImplCsrfFilterProperties struct {

	FilterMethods *ConfigNodePropertyArray `json:"filter.methods,omitempty"`

	FilterEnableSafeUserAgents *ConfigNodePropertyBoolean `json:"filter.enable.safe.user.agents,omitempty"`

	FilterSafeUserAgents *ConfigNodePropertyArray `json:"filter.safe.user.agents,omitempty"`

	FilterExcludedPaths *ConfigNodePropertyArray `json:"filter.excluded.paths,omitempty"`
}
