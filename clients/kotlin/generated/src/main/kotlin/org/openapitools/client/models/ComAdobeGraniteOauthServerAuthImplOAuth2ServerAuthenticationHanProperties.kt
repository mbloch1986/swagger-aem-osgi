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
 * @param path 
 * @param jaasPeriodcontrolFlag 
 * @param jaasPeriodrealmName 
 * @param jaasPeriodranking 
 * @param oauthPeriodofflinePeriodvalidation 
 */
data class ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties (
    val path: ConfigNodePropertyString? = null,
    val jaasPeriodcontrolFlag: ConfigNodePropertyString? = null,
    val jaasPeriodrealmName: ConfigNodePropertyString? = null,
    val jaasPeriodranking: ConfigNodePropertyInteger? = null,
    val oauthPeriodofflinePeriodvalidation: ConfigNodePropertyBoolean? = null
) {

}
