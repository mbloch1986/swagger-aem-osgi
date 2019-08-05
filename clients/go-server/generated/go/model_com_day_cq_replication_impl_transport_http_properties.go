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

type ComDayCqReplicationImplTransportHttpProperties struct {

	DisabledCipherSuites *ConfigNodePropertyArray `json:"disabled.cipher.suites,omitempty"`

	EnabledCipherSuites *ConfigNodePropertyArray `json:"enabled.cipher.suites,omitempty"`
}