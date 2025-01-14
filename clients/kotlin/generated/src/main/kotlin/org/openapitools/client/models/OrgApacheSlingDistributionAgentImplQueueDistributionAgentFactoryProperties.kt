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
import org.openapitools.client.models.ConfigNodePropertyDropDown
import org.openapitools.client.models.ConfigNodePropertyString

/**
 * 
 * @param name 
 * @param title 
 * @param details 
 * @param enabled 
 * @param serviceName 
 * @param logPeriodlevel 
 * @param allowedPeriodroots 
 * @param requestAuthorizationStrategyPeriodtarget 
 * @param queueProviderFactoryPeriodtarget 
 * @param packageBuilderPeriodtarget 
 * @param triggersPeriodtarget 
 * @param priorityQueues 
 */
data class OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryProperties (
    val name: ConfigNodePropertyString? = null,
    val title: ConfigNodePropertyString? = null,
    val details: ConfigNodePropertyString? = null,
    val enabled: ConfigNodePropertyBoolean? = null,
    val serviceName: ConfigNodePropertyString? = null,
    val logPeriodlevel: ConfigNodePropertyDropDown? = null,
    val allowedPeriodroots: ConfigNodePropertyArray? = null,
    val requestAuthorizationStrategyPeriodtarget: ConfigNodePropertyString? = null,
    val queueProviderFactoryPeriodtarget: ConfigNodePropertyString? = null,
    val packageBuilderPeriodtarget: ConfigNodePropertyString? = null,
    val triggersPeriodtarget: ConfigNodePropertyString? = null,
    val priorityQueues: ConfigNodePropertyArray? = null
) {

}

