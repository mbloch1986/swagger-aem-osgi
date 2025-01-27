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
 * @param providerPeriodname 
 * @param hostPeriodname 
 * @param hostPeriodport 
 * @param hostPeriodssl 
 * @param hostPeriodtls 
 * @param hostPeriodnoCertCheck 
 * @param bindPerioddn 
 * @param bindPeriodpassword 
 * @param searchTimeout 
 * @param adminPoolPeriodmaxActive 
 * @param adminPoolPeriodlookupOnValidate 
 * @param userPoolPeriodmaxActive 
 * @param userPoolPeriodlookupOnValidate 
 * @param userPeriodbaseDN 
 * @param userPeriodobjectclass 
 * @param userPeriodidAttribute 
 * @param userPeriodextraFilter 
 * @param userPeriodmakeDnPath 
 * @param groupPeriodbaseDN 
 * @param groupPeriodobjectclass 
 * @param groupPeriodnameAttribute 
 * @param groupPeriodextraFilter 
 * @param groupPeriodmakeDnPath 
 * @param groupPeriodmemberAttribute 
 * @param useUidForExtId 
 * @param customattributes 
 */
data class OrgApacheJackrabbitOakSecurityAuthenticationLdapImplLdapIdentiProperties (
    val providerPeriodname: ConfigNodePropertyString? = null,
    val hostPeriodname: ConfigNodePropertyString? = null,
    val hostPeriodport: ConfigNodePropertyInteger? = null,
    val hostPeriodssl: ConfigNodePropertyBoolean? = null,
    val hostPeriodtls: ConfigNodePropertyBoolean? = null,
    val hostPeriodnoCertCheck: ConfigNodePropertyBoolean? = null,
    val bindPerioddn: ConfigNodePropertyString? = null,
    val bindPeriodpassword: ConfigNodePropertyString? = null,
    val searchTimeout: ConfigNodePropertyString? = null,
    val adminPoolPeriodmaxActive: ConfigNodePropertyInteger? = null,
    val adminPoolPeriodlookupOnValidate: ConfigNodePropertyBoolean? = null,
    val userPoolPeriodmaxActive: ConfigNodePropertyInteger? = null,
    val userPoolPeriodlookupOnValidate: ConfigNodePropertyBoolean? = null,
    val userPeriodbaseDN: ConfigNodePropertyString? = null,
    val userPeriodobjectclass: ConfigNodePropertyArray? = null,
    val userPeriodidAttribute: ConfigNodePropertyString? = null,
    val userPeriodextraFilter: ConfigNodePropertyString? = null,
    val userPeriodmakeDnPath: ConfigNodePropertyBoolean? = null,
    val groupPeriodbaseDN: ConfigNodePropertyString? = null,
    val groupPeriodobjectclass: ConfigNodePropertyArray? = null,
    val groupPeriodnameAttribute: ConfigNodePropertyString? = null,
    val groupPeriodextraFilter: ConfigNodePropertyString? = null,
    val groupPeriodmakeDnPath: ConfigNodePropertyBoolean? = null,
    val groupPeriodmemberAttribute: ConfigNodePropertyString? = null,
    val useUidForExtId: ConfigNodePropertyBoolean? = null,
    val customattributes: ConfigNodePropertyArray? = null
) {

}

