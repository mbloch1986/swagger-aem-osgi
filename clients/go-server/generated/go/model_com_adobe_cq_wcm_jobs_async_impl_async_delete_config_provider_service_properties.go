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

type ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties struct {

	Threshold *ConfigNodePropertyInteger `json:"threshold,omitempty"`

	JobTopicName *ConfigNodePropertyString `json:"jobTopicName,omitempty"`

	EmailEnabled *ConfigNodePropertyBoolean `json:"emailEnabled,omitempty"`
}
