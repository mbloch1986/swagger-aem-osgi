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
 * @param enabled 
 * @param agentName 
 * @param diffPath 
 * @param observedPath 
 * @param serviceName 
 * @param propertyNames 
 * @param distributionDelay 
 * @param serviceUserPeriodtarget 
 */
data class ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties (
    val enabled: ConfigNodePropertyBoolean? = null,
    val agentName: ConfigNodePropertyString? = null,
    val diffPath: ConfigNodePropertyString? = null,
    val observedPath: ConfigNodePropertyString? = null,
    val serviceName: ConfigNodePropertyString? = null,
    val propertyNames: ConfigNodePropertyString? = null,
    val distributionDelay: ConfigNodePropertyInteger? = null,
    val serviceUserPeriodtarget: ConfigNodePropertyString? = null
) {

}
