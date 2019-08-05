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

type ComAdobeGraniteFragsImplCheckHttpHeaderFlagProperties struct {

	FeatureName *ConfigNodePropertyString `json:"feature.name,omitempty"`

	FeatureDescription *ConfigNodePropertyString `json:"feature.description,omitempty"`

	HttpHeaderName *ConfigNodePropertyString `json:"http.header.name,omitempty"`

	HttpHeaderValuepattern *ConfigNodePropertyString `json:"http.header.valuepattern,omitempty"`
}