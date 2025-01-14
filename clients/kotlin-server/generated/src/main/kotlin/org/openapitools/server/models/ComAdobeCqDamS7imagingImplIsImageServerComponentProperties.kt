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

import org.openapitools.server.models.ConfigNodePropertyBoolean
import org.openapitools.server.models.ConfigNodePropertyInteger
import org.openapitools.server.models.ConfigNodePropertyString

/**
 * 
 * @param TcpPort 
 * @param AllowRemoteAccess 
 * @param MaxRenderRgnPixels 
 * @param MaxMessageSize 
 * @param RandomAccessUrlTimeout 
 * @param WorkerThreads 
 */
data class ComAdobeCqDamS7imagingImplIsImageServerComponentProperties (
    val TcpPort: ConfigNodePropertyString? = null,
    val AllowRemoteAccess: ConfigNodePropertyBoolean? = null,
    val MaxRenderRgnPixels: ConfigNodePropertyString? = null,
    val MaxMessageSize: ConfigNodePropertyString? = null,
    val RandomAccessUrlTimeout: ConfigNodePropertyInteger? = null,
    val WorkerThreads: ConfigNodePropertyInteger? = null
) {

}

