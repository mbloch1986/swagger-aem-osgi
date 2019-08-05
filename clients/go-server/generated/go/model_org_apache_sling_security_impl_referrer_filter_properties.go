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

type OrgApacheSlingSecurityImplReferrerFilterProperties struct {

	AllowEmpty *ConfigNodePropertyBoolean `json:"allow.empty,omitempty"`

	AllowHosts *ConfigNodePropertyArray `json:"allow.hosts,omitempty"`

	AllowHostsRegexp *ConfigNodePropertyArray `json:"allow.hosts.regexp,omitempty"`

	FilterMethods *ConfigNodePropertyArray `json:"filter.methods,omitempty"`

	ExcludeAgentsRegexp *ConfigNodePropertyArray `json:"exclude.agents.regexp,omitempty"`
}