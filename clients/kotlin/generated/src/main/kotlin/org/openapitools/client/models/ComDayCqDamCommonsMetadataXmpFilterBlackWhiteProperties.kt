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

/**
 * 
 * @param xmpPeriodfilterPeriodapplyUnderscorewhitelist 
 * @param xmpPeriodfilterPeriodwhitelist 
 * @param xmpPeriodfilterPeriodapplyUnderscoreblacklist 
 * @param xmpPeriodfilterPeriodblacklist 
 */
data class ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties (
    val xmpPeriodfilterPeriodapplyUnderscorewhitelist: ConfigNodePropertyBoolean? = null,
    val xmpPeriodfilterPeriodwhitelist: ConfigNodePropertyArray? = null,
    val xmpPeriodfilterPeriodapplyUnderscoreblacklist: ConfigNodePropertyBoolean? = null,
    val xmpPeriodfilterPeriodblacklist: ConfigNodePropertyArray? = null
) {

}

