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

type ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties struct {
	LinkcheckertransformerDisableRewriting ConfigNodePropertyBoolean `json:"linkcheckertransformer.disableRewriting,omitempty"`
	LinkcheckertransformerDisableChecking ConfigNodePropertyBoolean `json:"linkcheckertransformer.disableChecking,omitempty"`
	LinkcheckertransformerMapCacheSize ConfigNodePropertyInteger `json:"linkcheckertransformer.mapCacheSize,omitempty"`
	LinkcheckertransformerStrictExtensionCheck ConfigNodePropertyBoolean `json:"linkcheckertransformer.strictExtensionCheck,omitempty"`
	LinkcheckertransformerStripHtmltExtension ConfigNodePropertyBoolean `json:"linkcheckertransformer.stripHtmltExtension,omitempty"`
	LinkcheckertransformerRewriteElements ConfigNodePropertyArray `json:"linkcheckertransformer.rewriteElements,omitempty"`
	LinkcheckertransformerStripExtensionPathBlacklist ConfigNodePropertyArray `json:"linkcheckertransformer.stripExtensionPathBlacklist,omitempty"`
}
