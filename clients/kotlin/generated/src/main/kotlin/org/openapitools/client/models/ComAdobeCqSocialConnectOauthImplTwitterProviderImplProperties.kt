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
 * @param oauthPeriodproviderPeriodid 
 * @param oauthPeriodcloudPeriodconfigPeriodroot 
 * @param providerPeriodconfigPeriodroot 
 * @param providerPeriodconfigPerioduserPeriodfolder 
 * @param providerPeriodconfigPeriodtwitterPeriodenablePeriodparams 
 * @param providerPeriodconfigPeriodtwitterPeriodparams 
 * @param providerPeriodconfigPeriodrefreshPerioduserdataPeriodenabled 
 */
data class ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties (
    val oauthPeriodproviderPeriodid: ConfigNodePropertyString? = null,
    val oauthPeriodcloudPeriodconfigPeriodroot: ConfigNodePropertyString? = null,
    val providerPeriodconfigPeriodroot: ConfigNodePropertyString? = null,
    val providerPeriodconfigPerioduserPeriodfolder: ConfigNodePropertyDropDown? = null,
    val providerPeriodconfigPeriodtwitterPeriodenablePeriodparams: ConfigNodePropertyBoolean? = null,
    val providerPeriodconfigPeriodtwitterPeriodparams: ConfigNodePropertyArray? = null,
    val providerPeriodconfigPeriodrefreshPerioduserdataPeriodenabled: ConfigNodePropertyBoolean? = null
) {

}

