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

import org.openapitools.client.core.ApiModel
import org.joda.time.DateTime
import java.util.UUID

case class OrgApacheSlingDiscoveryOakConfigProperties (
  connectorPingTimeout: Option[ConfigNodePropertyInteger],
  connectorPingInterval: Option[ConfigNodePropertyInteger],
  discoveryLiteCheckInterval: Option[ConfigNodePropertyInteger],
  clusterSyncServiceTimeout: Option[ConfigNodePropertyInteger],
  clusterSyncServiceInterval: Option[ConfigNodePropertyInteger],
  enableSyncToken: Option[ConfigNodePropertyBoolean],
  minEventDelay: Option[ConfigNodePropertyInteger],
  socketConnectTimeout: Option[ConfigNodePropertyInteger],
  soTimeout: Option[ConfigNodePropertyInteger],
  topologyConnectorUrls: Option[ConfigNodePropertyArray],
  topologyConnectorWhitelist: Option[ConfigNodePropertyArray],
  autoStopLocalLoopEnabled: Option[ConfigNodePropertyBoolean],
  gzipConnectorRequestsEnabled: Option[ConfigNodePropertyBoolean],
  hmacEnabled: Option[ConfigNodePropertyBoolean],
  enableEncryption: Option[ConfigNodePropertyBoolean],
  sharedKey: Option[ConfigNodePropertyString],
  hmacSharedKeyTTL: Option[ConfigNodePropertyInteger],
  backoffStandbyFactor: Option[ConfigNodePropertyString],
  backoffStableFactor: Option[ConfigNodePropertyString]
) extends ApiModel


