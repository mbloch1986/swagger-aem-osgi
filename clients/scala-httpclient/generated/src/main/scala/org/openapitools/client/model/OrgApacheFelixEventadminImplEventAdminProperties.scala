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


case class OrgApacheFelixEventadminImplEventAdminProperties (
  orgApacheFelixEventadminThreadPoolSize: Option[ConfigNodePropertyInteger] = None,
  orgApacheFelixEventadminAsyncToSyncThreadRatio: Option[ConfigNodePropertyFloat] = None,
  orgApacheFelixEventadminTimeout: Option[ConfigNodePropertyInteger] = None,
  orgApacheFelixEventadminRequireTopic: Option[ConfigNodePropertyBoolean] = None,
  orgApacheFelixEventadminIgnoreTimeout: Option[ConfigNodePropertyArray] = None,
  orgApacheFelixEventadminIgnoreTopic: Option[ConfigNodePropertyArray] = None
)

