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
 * @param slingPerioddefaultPeriodparameterPeriodencoding 
 * @param slingPerioddefaultPeriodmaxPeriodparameters 
 * @param filePeriodlocation 
 * @param filePeriodthreshold 
 * @param filePeriodmax 
 * @param requestPeriodmax 
 * @param slingPerioddefaultPeriodparameterPeriodcheckForAdditionalContainerParameters 
 */
data class OrgApacheSlingEngineParametersProperties (
    val slingPerioddefaultPeriodparameterPeriodencoding: ConfigNodePropertyString? = null,
    val slingPerioddefaultPeriodmaxPeriodparameters: ConfigNodePropertyInteger? = null,
    val filePeriodlocation: ConfigNodePropertyString? = null,
    val filePeriodthreshold: ConfigNodePropertyInteger? = null,
    val filePeriodmax: ConfigNodePropertyInteger? = null,
    val requestPeriodmax: ConfigNodePropertyInteger? = null,
    val slingPerioddefaultPeriodparameterPeriodcheckForAdditionalContainerParameters: ConfigNodePropertyBoolean? = null
) {

}

