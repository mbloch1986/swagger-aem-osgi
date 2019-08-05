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
 * @param handlerPeriodname 
 * @param userPeriodexpirationTime 
 * @param userPeriodautoMembership 
 * @param userPeriodpropertyMapping 
 * @param userPeriodpathPrefix 
 * @param userPeriodmembershipExpTime 
 * @param userPeriodmembershipNestingDepth 
 * @param userPerioddynamicMembership 
 * @param userPerioddisableMissing 
 * @param groupPeriodexpirationTime 
 * @param groupPeriodautoMembership 
 * @param groupPeriodpropertyMapping 
 * @param groupPeriodpathPrefix 
 * @param enableRFC7613UsercaseMappedProfile 
 */
data class OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties (
    val handlerPeriodname: ConfigNodePropertyString? = null,
    val userPeriodexpirationTime: ConfigNodePropertyString? = null,
    val userPeriodautoMembership: ConfigNodePropertyArray? = null,
    val userPeriodpropertyMapping: ConfigNodePropertyArray? = null,
    val userPeriodpathPrefix: ConfigNodePropertyString? = null,
    val userPeriodmembershipExpTime: ConfigNodePropertyString? = null,
    val userPeriodmembershipNestingDepth: ConfigNodePropertyInteger? = null,
    val userPerioddynamicMembership: ConfigNodePropertyBoolean? = null,
    val userPerioddisableMissing: ConfigNodePropertyBoolean? = null,
    val groupPeriodexpirationTime: ConfigNodePropertyString? = null,
    val groupPeriodautoMembership: ConfigNodePropertyArray? = null,
    val groupPeriodpropertyMapping: ConfigNodePropertyArray? = null,
    val groupPeriodpathPrefix: ConfigNodePropertyString? = null,
    val enableRFC7613UsercaseMappedProfile: ConfigNodePropertyBoolean? = null
) {

}
