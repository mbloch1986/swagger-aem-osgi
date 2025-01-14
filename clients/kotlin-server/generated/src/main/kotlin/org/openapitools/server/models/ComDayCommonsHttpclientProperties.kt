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
import org.openapitools.server.models.ConfigNodePropertyString

/**
 * 
 * @param proxyPeriodenabled 
 * @param proxyPeriodhost 
 * @param proxyPerioduser 
 * @param proxyPeriodpassword 
 * @param proxyPeriodntlmPeriodhost 
 * @param proxyPeriodntlmPerioddomain 
 * @param proxyPeriodexceptions 
 */
data class ComDayCommonsHttpclientProperties (
    val proxyPeriodenabled: ConfigNodePropertyBoolean? = null,
    val proxyPeriodhost: ConfigNodePropertyString? = null,
    val proxyPerioduser: ConfigNodePropertyString? = null,
    val proxyPeriodpassword: ConfigNodePropertyString? = null,
    val proxyPeriodntlmPeriodhost: ConfigNodePropertyString? = null,
    val proxyPeriodntlmPerioddomain: ConfigNodePropertyString? = null,
    val proxyPeriodexceptions: ConfigNodePropertyArray? = null
) {

}

