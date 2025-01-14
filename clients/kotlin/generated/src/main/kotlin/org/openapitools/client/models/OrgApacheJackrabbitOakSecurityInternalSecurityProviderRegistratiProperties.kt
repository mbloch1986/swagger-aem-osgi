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
import org.openapitools.client.models.ConfigNodePropertyDropDown

/**
 * 
 * @param requiredServicePids 
 * @param authorizationCompositionType 
 */
data class OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties (
    val requiredServicePids: ConfigNodePropertyArray? = null,
    val authorizationCompositionType: ConfigNodePropertyDropDown? = null
) {

}

