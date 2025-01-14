/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.model


case class ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorProperties (
  jmxObjectname: Option[ConfigNodePropertyString] = None,
  propertyMeasureEnabled: Option[ConfigNodePropertyBoolean] = None,
  propertyName: Option[ConfigNodePropertyString] = None,
  propertyMaxWaitMs: Option[ConfigNodePropertyInteger] = None,
  propertyMaxRate: Option[ConfigNodePropertyFloat] = None,
  fulltextMeasureEnabled: Option[ConfigNodePropertyBoolean] = None,
  fulltextName: Option[ConfigNodePropertyString] = None,
  fulltextMaxWaitMs: Option[ConfigNodePropertyInteger] = None,
  fulltextMaxRate: Option[ConfigNodePropertyFloat] = None
)

