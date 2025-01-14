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

type ComDayCqWcmCoreImplVersionPurgeTaskProperties struct {
	VersionpurgePaths ConfigNodePropertyArray `json:"versionpurge.paths,omitempty"`
	VersionpurgeRecursive ConfigNodePropertyBoolean `json:"versionpurge.recursive,omitempty"`
	VersionpurgeMaxVersions ConfigNodePropertyInteger `json:"versionpurge.maxVersions,omitempty"`
	VersionpurgeMinVersions ConfigNodePropertyInteger `json:"versionpurge.minVersions,omitempty"`
	VersionpurgeMaxAgeDays ConfigNodePropertyInteger `json:"versionpurge.maxAgeDays,omitempty"`
}
