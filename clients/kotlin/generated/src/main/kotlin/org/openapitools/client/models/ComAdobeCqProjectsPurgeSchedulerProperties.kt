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
import org.openapitools.client.models.ConfigNodePropertyInteger
import org.openapitools.client.models.ConfigNodePropertyString

/**
 * 
 * @param scheduledpurgePeriodname 
 * @param scheduledpurgePeriodpurgeActive 
 * @param scheduledpurgePeriodtemplates 
 * @param scheduledpurgePeriodpurgeGroups 
 * @param scheduledpurgePeriodpurgeAssets 
 * @param scheduledpurgePeriodterminateRunningWorkflows 
 * @param scheduledpurgePerioddaysold 
 * @param scheduledpurgePeriodsaveThreshold 
 */
data class ComAdobeCqProjectsPurgeSchedulerProperties (
    val scheduledpurgePeriodname: ConfigNodePropertyString? = null,
    val scheduledpurgePeriodpurgeActive: ConfigNodePropertyBoolean? = null,
    val scheduledpurgePeriodtemplates: ConfigNodePropertyArray? = null,
    val scheduledpurgePeriodpurgeGroups: ConfigNodePropertyBoolean? = null,
    val scheduledpurgePeriodpurgeAssets: ConfigNodePropertyBoolean? = null,
    val scheduledpurgePeriodterminateRunningWorkflows: ConfigNodePropertyBoolean? = null,
    val scheduledpurgePerioddaysold: ConfigNodePropertyInteger? = null,
    val scheduledpurgePeriodsaveThreshold: ConfigNodePropertyInteger? = null
) {

}

