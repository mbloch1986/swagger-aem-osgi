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
package org.openapitools.client.models

import org.openapitools.client.models.ConfigNodePropertyArray
import org.openapitools.client.models.ConfigNodePropertyBoolean
import org.openapitools.client.models.ConfigNodePropertyInteger
import org.openapitools.client.models.ConfigNodePropertyString

/**
 * 
 * @param connectorPingTimeout 
 * @param connectorPingInterval 
 * @param discoveryLiteCheckInterval 
 * @param clusterSyncServiceTimeout 
 * @param clusterSyncServiceInterval 
 * @param enableSyncToken 
 * @param minEventDelay 
 * @param socketConnectTimeout 
 * @param soTimeout 
 * @param topologyConnectorUrls 
 * @param topologyConnectorWhitelist 
 * @param autoStopLocalLoopEnabled 
 * @param gzipConnectorRequestsEnabled 
 * @param hmacEnabled 
 * @param enableEncryption 
 * @param sharedKey 
 * @param hmacSharedKeyTTL 
 * @param backoffStandbyFactor 
 * @param backoffStableFactor 
 */
data class OrgApacheSlingDiscoveryOakConfigProperties (
    val connectorPingTimeout: ConfigNodePropertyInteger? = null,
    val connectorPingInterval: ConfigNodePropertyInteger? = null,
    val discoveryLiteCheckInterval: ConfigNodePropertyInteger? = null,
    val clusterSyncServiceTimeout: ConfigNodePropertyInteger? = null,
    val clusterSyncServiceInterval: ConfigNodePropertyInteger? = null,
    val enableSyncToken: ConfigNodePropertyBoolean? = null,
    val minEventDelay: ConfigNodePropertyInteger? = null,
    val socketConnectTimeout: ConfigNodePropertyInteger? = null,
    val soTimeout: ConfigNodePropertyInteger? = null,
    val topologyConnectorUrls: ConfigNodePropertyArray? = null,
    val topologyConnectorWhitelist: ConfigNodePropertyArray? = null,
    val autoStopLocalLoopEnabled: ConfigNodePropertyBoolean? = null,
    val gzipConnectorRequestsEnabled: ConfigNodePropertyBoolean? = null,
    val hmacEnabled: ConfigNodePropertyBoolean? = null,
    val enableEncryption: ConfigNodePropertyBoolean? = null,
    val sharedKey: ConfigNodePropertyString? = null,
    val hmacSharedKeyTTL: ConfigNodePropertyInteger? = null,
    val backoffStandbyFactor: ConfigNodePropertyString? = null,
    val backoffStableFactor: ConfigNodePropertyString? = null
) {

}

