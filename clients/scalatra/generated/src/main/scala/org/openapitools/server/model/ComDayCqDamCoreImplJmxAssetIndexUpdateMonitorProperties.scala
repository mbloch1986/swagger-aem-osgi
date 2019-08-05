/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model

case class ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorProperties(
  jmxPeriodobjectname: Option[ConfigNodePropertyString],

  propertyPeriodmeasurePeriodenabled: Option[ConfigNodePropertyBoolean],

  propertyPeriodname: Option[ConfigNodePropertyString],

  propertyPeriodmaxPeriodwaitPeriodms: Option[ConfigNodePropertyInteger],

  propertyPeriodmaxPeriodrate: Option[ConfigNodePropertyFloat],

  fulltextPeriodmeasurePeriodenabled: Option[ConfigNodePropertyBoolean],

  fulltextPeriodname: Option[ConfigNodePropertyString],

  fulltextPeriodmaxPeriodwaitPeriodms: Option[ConfigNodePropertyInteger],

  fulltextPeriodmaxPeriodrate: Option[ConfigNodePropertyFloat]

 )