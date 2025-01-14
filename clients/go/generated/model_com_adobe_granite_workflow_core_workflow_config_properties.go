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

type ComAdobeGraniteWorkflowCoreWorkflowConfigProperties struct {
	CqWorkflowConfigWorkflowPackagesRootPath ConfigNodePropertyArray `json:"cq.workflow.config.workflow.packages.root.path,omitempty"`
	CqWorkflowConfigWorkflowProcessLegacyMode ConfigNodePropertyBoolean `json:"cq.workflow.config.workflow.process.legacy.mode,omitempty"`
	CqWorkflowConfigAllowLocking ConfigNodePropertyBoolean `json:"cq.workflow.config.allow.locking,omitempty"`
}
