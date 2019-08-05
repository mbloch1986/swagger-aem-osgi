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

type ComAdobeCqSecurityHcDispatcherImplDispatcherAccessHealthCheckProperties struct {
	HcTags ConfigNodePropertyArray `json:"hc.tags,omitempty"`
	DispatcherAddress ConfigNodePropertyString `json:"dispatcher.address,omitempty"`
	DispatcherFilterAllowed ConfigNodePropertyArray `json:"dispatcher.filter.allowed,omitempty"`
	DispatcherFilterBlocked ConfigNodePropertyArray `json:"dispatcher.filter.blocked,omitempty"`
}