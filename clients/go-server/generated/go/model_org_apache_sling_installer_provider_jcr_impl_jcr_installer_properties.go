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

type OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties struct {

	HandlerSchemes *ConfigNodePropertyArray `json:"handler.schemes,omitempty"`

	SlingJcrinstallFolderNameRegexp *ConfigNodePropertyString `json:"sling.jcrinstall.folder.name.regexp,omitempty"`

	SlingJcrinstallFolderMaxDepth *ConfigNodePropertyInteger `json:"sling.jcrinstall.folder.max.depth,omitempty"`

	SlingJcrinstallSearchPath *ConfigNodePropertyArray `json:"sling.jcrinstall.search.path,omitempty"`

	SlingJcrinstallNewConfigPath *ConfigNodePropertyString `json:"sling.jcrinstall.new.config.path,omitempty"`

	SlingJcrinstallSignalPath *ConfigNodePropertyString `json:"sling.jcrinstall.signal.path,omitempty"`

	SlingJcrinstallEnableWriteback *ConfigNodePropertyBoolean `json:"sling.jcrinstall.enable.writeback,omitempty"`
}
