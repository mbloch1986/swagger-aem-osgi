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
import org.openapitools.server.models.ConfigNodePropertyString

/**
 * 
 * @param osgiPeriodhttpPeriodwhiteboardPeriodcontextPeriodselect 
 * @param osgiPeriodhttpPeriodwhiteboardPeriodlistener 
 * @param authPeriodsudoPeriodcookie 
 * @param authPeriodsudoPeriodparameter 
 * @param authPeriodannonymous 
 * @param slingPeriodauthPeriodrequirements 
 * @param slingPeriodauthPeriodanonymousPerioduser 
 * @param slingPeriodauthPeriodanonymousPeriodpassword 
 * @param authPeriodhttp 
 * @param authPeriodhttpPeriodrealm 
 * @param authPerioduriPeriodsuffix 
 */
data class OrgApacheSlingEngineImplAuthSlingAuthenticatorProperties (
    val osgiPeriodhttpPeriodwhiteboardPeriodcontextPeriodselect: ConfigNodePropertyString? = null,
    val osgiPeriodhttpPeriodwhiteboardPeriodlistener: ConfigNodePropertyString? = null,
    val authPeriodsudoPeriodcookie: ConfigNodePropertyString? = null,
    val authPeriodsudoPeriodparameter: ConfigNodePropertyString? = null,
    val authPeriodannonymous: ConfigNodePropertyBoolean? = null,
    val slingPeriodauthPeriodrequirements: ConfigNodePropertyArray? = null,
    val slingPeriodauthPeriodanonymousPerioduser: ConfigNodePropertyString? = null,
    val slingPeriodauthPeriodanonymousPeriodpassword: ConfigNodePropertyString? = null,
    val authPeriodhttp: ConfigNodePropertyDropDown? = null,
    val authPeriodhttpPeriodrealm: ConfigNodePropertyString? = null,
    val authPerioduriPeriodsuffix: ConfigNodePropertyArray? = null
) {

}

