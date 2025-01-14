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

import org.openapitools.client.models.ConfigNodePropertyBoolean
import org.openapitools.client.models.ConfigNodePropertyInteger
import org.openapitools.client.models.ConfigNodePropertyString

/**
 * 
 * @param id 
 * @param enabled 
 * @param reference 
 * @param interval 
 * @param expression 
 * @param source 
 * @param target 
 * @param login 
 * @param password 
 */
data class ComDayCqPollingImporterImplManagedPollConfigImplProperties (
    val id: ConfigNodePropertyString? = null,
    val enabled: ConfigNodePropertyBoolean? = null,
    val reference: ConfigNodePropertyBoolean? = null,
    val interval: ConfigNodePropertyInteger? = null,
    val expression: ConfigNodePropertyString? = null,
    val source: ConfigNodePropertyString? = null,
    val target: ConfigNodePropertyString? = null,
    val login: ConfigNodePropertyString? = null,
    val password: ConfigNodePropertyString? = null
) {

}

