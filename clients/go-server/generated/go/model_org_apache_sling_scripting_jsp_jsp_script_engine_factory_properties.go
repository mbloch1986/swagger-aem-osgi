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

type OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties struct {

	JasperCompilerTargetVM *ConfigNodePropertyString `json:"jasper.compilerTargetVM,omitempty"`

	JasperCompilerSourceVM *ConfigNodePropertyString `json:"jasper.compilerSourceVM,omitempty"`

	JasperClassdebuginfo *ConfigNodePropertyBoolean `json:"jasper.classdebuginfo,omitempty"`

	JasperEnablePooling *ConfigNodePropertyBoolean `json:"jasper.enablePooling,omitempty"`

	JasperIeClassId *ConfigNodePropertyString `json:"jasper.ieClassId,omitempty"`

	JasperGenStringAsCharArray *ConfigNodePropertyBoolean `json:"jasper.genStringAsCharArray,omitempty"`

	JasperKeepgenerated *ConfigNodePropertyBoolean `json:"jasper.keepgenerated,omitempty"`

	JasperMappedfile *ConfigNodePropertyBoolean `json:"jasper.mappedfile,omitempty"`

	JasperTrimSpaces *ConfigNodePropertyBoolean `json:"jasper.trimSpaces,omitempty"`

	JasperDisplaySourceFragments *ConfigNodePropertyBoolean `json:"jasper.displaySourceFragments,omitempty"`

	DefaultIsSession *ConfigNodePropertyBoolean `json:"default.is.session,omitempty"`
}