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


case class ComDayCqWcmMsmImplRolloutManagerImplProperties (
  eventFilter: Option[ConfigNodePropertyString] = None,
  rolloutmgrExcludedpropsDefault: Option[ConfigNodePropertyArray] = None,
  rolloutmgrExcludedparagraphpropsDefault: Option[ConfigNodePropertyArray] = None,
  rolloutmgrExcludednodetypesDefault: Option[ConfigNodePropertyArray] = None,
  rolloutmgrThreadpoolMaxsize: Option[ConfigNodePropertyInteger] = None,
  rolloutmgrThreadpoolMaxshutdowntime: Option[ConfigNodePropertyInteger] = None,
  rolloutmgrThreadpoolPriority: Option[ConfigNodePropertyDropDown] = None,
  rolloutmgrCommitSize: Option[ConfigNodePropertyInteger] = None,
  rolloutmgrConflicthandlingEnabled: Option[ConfigNodePropertyBoolean] = None
)

