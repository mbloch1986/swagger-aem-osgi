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


case class ComDayCqReportingImplConfigServiceImplProperties (
  repconfTimezone: Option[ConfigNodePropertyString] = None,
  repconfLocale: Option[ConfigNodePropertyString] = None,
  repconfSnapshots: Option[ConfigNodePropertyString] = None,
  repconfRepdir: Option[ConfigNodePropertyString] = None,
  repconfHourofday: Option[ConfigNodePropertyInteger] = None,
  repconfMinofhour: Option[ConfigNodePropertyInteger] = None,
  repconfMaxrows: Option[ConfigNodePropertyInteger] = None,
  repconfFakedata: Option[ConfigNodePropertyBoolean] = None,
  repconfSnapshotuser: Option[ConfigNodePropertyString] = None,
  repconfEnforcesnapshotuser: Option[ConfigNodePropertyBoolean] = None
)
