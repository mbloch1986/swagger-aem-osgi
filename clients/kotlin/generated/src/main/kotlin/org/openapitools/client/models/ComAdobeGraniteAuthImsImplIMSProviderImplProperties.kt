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
import org.openapitools.client.models.ConfigNodePropertyString

/**
 * 
 * @param oauthPeriodproviderPeriodid 
 * @param oauthPeriodproviderPeriodimsPeriodauthorizationPeriodurl 
 * @param oauthPeriodproviderPeriodimsPeriodtokenPeriodurl 
 * @param oauthPeriodproviderPeriodimsPeriodprofilePeriodurl 
 * @param oauthPeriodproviderPeriodimsPeriodextendedPerioddetailsPeriodurls 
 * @param oauthPeriodproviderPeriodimsPeriodvalidatePeriodtokenPeriodurl 
 * @param oauthPeriodproviderPeriodimsPeriodsessionPeriodproperty 
 * @param oauthPeriodproviderPeriodimsPeriodservicePeriodtokenPeriodclientPeriodid 
 * @param oauthPeriodproviderPeriodimsPeriodservicePeriodtokenPeriodclientPeriodsecret 
 * @param oauthPeriodproviderPeriodimsPeriodservicePeriodtoken 
 * @param imsPeriodorgPeriodref 
 * @param imsPeriodgroupPeriodmapping 
 * @param oauthPeriodproviderPeriodimsPeriodonlyPeriodlicensePeriodgroup 
 */
data class ComAdobeGraniteAuthImsImplIMSProviderImplProperties (
    val oauthPeriodproviderPeriodid: ConfigNodePropertyString? = null,
    val oauthPeriodproviderPeriodimsPeriodauthorizationPeriodurl: ConfigNodePropertyString? = null,
    val oauthPeriodproviderPeriodimsPeriodtokenPeriodurl: ConfigNodePropertyString? = null,
    val oauthPeriodproviderPeriodimsPeriodprofilePeriodurl: ConfigNodePropertyString? = null,
    val oauthPeriodproviderPeriodimsPeriodextendedPerioddetailsPeriodurls: ConfigNodePropertyArray? = null,
    val oauthPeriodproviderPeriodimsPeriodvalidatePeriodtokenPeriodurl: ConfigNodePropertyString? = null,
    val oauthPeriodproviderPeriodimsPeriodsessionPeriodproperty: ConfigNodePropertyString? = null,
    val oauthPeriodproviderPeriodimsPeriodservicePeriodtokenPeriodclientPeriodid: ConfigNodePropertyString? = null,
    val oauthPeriodproviderPeriodimsPeriodservicePeriodtokenPeriodclientPeriodsecret: ConfigNodePropertyString? = null,
    val oauthPeriodproviderPeriodimsPeriodservicePeriodtoken: ConfigNodePropertyString? = null,
    val imsPeriodorgPeriodref: ConfigNodePropertyString? = null,
    val imsPeriodgroupPeriodmapping: ConfigNodePropertyArray? = null,
    val oauthPeriodproviderPeriodimsPeriodonlyPeriodlicensePeriodgroup: ConfigNodePropertyBoolean? = null
) {

}

