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

type ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties struct {
	ComAdobeCqScreensAnalyticsImplUrl ConfigNodePropertyString `json:"com.adobe.cq.screens.analytics.impl.url,omitempty"`
	ComAdobeCqScreensAnalyticsImplApikey ConfigNodePropertyString `json:"com.adobe.cq.screens.analytics.impl.apikey,omitempty"`
	ComAdobeCqScreensAnalyticsImplProject ConfigNodePropertyString `json:"com.adobe.cq.screens.analytics.impl.project,omitempty"`
	ComAdobeCqScreensAnalyticsImplEnvironment ConfigNodePropertyDropDown `json:"com.adobe.cq.screens.analytics.impl.environment,omitempty"`
	ComAdobeCqScreensAnalyticsImplSendFrequency ConfigNodePropertyInteger `json:"com.adobe.cq.screens.analytics.impl.sendFrequency,omitempty"`
}
