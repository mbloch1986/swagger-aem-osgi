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

type ComDayCqDamCoreImplDamEventRecorderImplProperties struct {
	EventFilter ConfigNodePropertyString `json:"event.filter,omitempty"`
	EventQueueLength ConfigNodePropertyInteger `json:"event.queue.length,omitempty"`
	EventrecorderEnabled ConfigNodePropertyBoolean `json:"eventrecorder.enabled,omitempty"`
	EventrecorderBlacklist ConfigNodePropertyArray `json:"eventrecorder.blacklist,omitempty"`
	EventrecorderEventtypes ConfigNodePropertyDropDown `json:"eventrecorder.eventtypes,omitempty"`
}