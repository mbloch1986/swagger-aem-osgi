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
import org.openapitools.client.models.ConfigNodePropertyDropDown
import org.openapitools.client.models.ConfigNodePropertyInteger
import org.openapitools.client.models.ConfigNodePropertyString

/**
 * 
 * @param eventPeriodfilter 
 * @param launchesPeriodeventhandlerPeriodthreadpoolPeriodmaxsize 
 * @param launchesPeriodeventhandlerPeriodthreadpoolPeriodpriority 
 * @param launchesPeriodeventhandlerPeriodupdatelastmodification 
 */
data class ComAdobeCqWcmLaunchesImplLaunchesEventHandlerProperties (
    val eventPeriodfilter: ConfigNodePropertyString? = null,
    val launchesPeriodeventhandlerPeriodthreadpoolPeriodmaxsize: ConfigNodePropertyInteger? = null,
    val launchesPeriodeventhandlerPeriodthreadpoolPeriodpriority: ConfigNodePropertyDropDown? = null,
    val launchesPeriodeventhandlerPeriodupdatelastmodification: ConfigNodePropertyBoolean? = null
) {

}

