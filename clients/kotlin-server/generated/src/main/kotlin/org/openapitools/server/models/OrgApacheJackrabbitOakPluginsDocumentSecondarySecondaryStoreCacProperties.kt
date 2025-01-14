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
package org.openapitools.server.models

import org.openapitools.server.models.ConfigNodePropertyArray
import org.openapitools.server.models.ConfigNodePropertyBoolean
import org.openapitools.server.models.ConfigNodePropertyInteger

/**
 * 
 * @param includedPaths 
 * @param enableAsyncObserver 
 * @param observerQueueSize 
 */
data class OrgApacheJackrabbitOakPluginsDocumentSecondarySecondaryStoreCacProperties (
    val includedPaths: ConfigNodePropertyArray? = null,
    val enableAsyncObserver: ConfigNodePropertyBoolean? = null,
    val observerQueueSize: ConfigNodePropertyInteger? = null
) {

}

