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

import org.openapitools.server.models.ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties

/**
 * 
 * @param pid 
 * @param title 
 * @param description 
 * @param properties 
 * @param bundleUnderscorelocation 
 * @param serviceUnderscorelocation 
 */
data class ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskInfo (
    val pid: kotlin.String? = null,
    val title: kotlin.String? = null,
    val description: kotlin.String? = null,
    val properties: ComAdobeGraniteMaintenanceCrxImplDataStoreGarbageCollectionTaskProperties? = null,
    val bundleUnderscorelocation: kotlin.String? = null,
    val serviceUnderscorelocation: kotlin.String? = null
) {

}
