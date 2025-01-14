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
import org.openapitools.server.models.ConfigNodePropertyDropDown
import org.openapitools.server.models.ConfigNodePropertyInteger
import org.openapitools.server.models.ConfigNodePropertyString

/**
 * 
 * @param eventPeriodfilter 
 * @param eventPeriodqueuePeriodlength 
 * @param eventrecorderPeriodenabled 
 * @param eventrecorderPeriodblacklist 
 * @param eventrecorderPeriodeventtypes 
 */
data class ComDayCqDamCoreImplDamEventRecorderImplProperties (
    val eventPeriodfilter: ConfigNodePropertyString? = null,
    val eventPeriodqueuePeriodlength: ConfigNodePropertyInteger? = null,
    val eventrecorderPeriodenabled: ConfigNodePropertyBoolean? = null,
    val eventrecorderPeriodblacklist: ConfigNodePropertyArray? = null,
    val eventrecorderPeriodeventtypes: ConfigNodePropertyDropDown? = null
) {

}

