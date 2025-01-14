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

type ComDayCqPollingImporterImplPollingImporterImplProperties struct {

	ImporterMinInterval *ConfigNodePropertyInteger `json:"importer.min.interval,omitempty"`

	ImporterUser *ConfigNodePropertyString `json:"importer.user,omitempty"`

	ExcludePaths *ConfigNodePropertyArray `json:"exclude.paths,omitempty"`

	IncludePaths *ConfigNodePropertyArray `json:"include.paths,omitempty"`
}
