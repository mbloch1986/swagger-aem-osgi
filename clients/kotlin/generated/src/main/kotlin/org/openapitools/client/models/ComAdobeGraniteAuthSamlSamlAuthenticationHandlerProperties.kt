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
import org.openapitools.client.models.ConfigNodePropertyInteger
import org.openapitools.client.models.ConfigNodePropertyString

/**
 * 
 * @param path 
 * @param servicePeriodranking 
 * @param idpUrl 
 * @param idpCertAlias 
 * @param idpHttpRedirect 
 * @param serviceProviderEntityId 
 * @param assertionConsumerServiceURL 
 * @param spPrivateKeyAlias 
 * @param keyStorePassword 
 * @param defaultRedirectUrl 
 * @param userIDAttribute 
 * @param useEncryption 
 * @param createUser 
 * @param userIntermediatePath 
 * @param addGroupMemberships 
 * @param groupMembershipAttribute 
 * @param defaultGroups 
 * @param nameIdFormat 
 * @param synchronizeAttributes 
 * @param handleLogout 
 * @param logoutUrl 
 * @param clockTolerance 
 * @param digestMethod 
 * @param signatureMethod 
 * @param identitySyncType 
 * @param idpIdentifier 
 */
data class ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties (
    val path: ConfigNodePropertyArray? = null,
    val servicePeriodranking: ConfigNodePropertyInteger? = null,
    val idpUrl: ConfigNodePropertyString? = null,
    val idpCertAlias: ConfigNodePropertyString? = null,
    val idpHttpRedirect: ConfigNodePropertyBoolean? = null,
    val serviceProviderEntityId: ConfigNodePropertyString? = null,
    val assertionConsumerServiceURL: ConfigNodePropertyString? = null,
    val spPrivateKeyAlias: ConfigNodePropertyString? = null,
    val keyStorePassword: ConfigNodePropertyString? = null,
    val defaultRedirectUrl: ConfigNodePropertyString? = null,
    val userIDAttribute: ConfigNodePropertyString? = null,
    val useEncryption: ConfigNodePropertyBoolean? = null,
    val createUser: ConfigNodePropertyBoolean? = null,
    val userIntermediatePath: ConfigNodePropertyString? = null,
    val addGroupMemberships: ConfigNodePropertyBoolean? = null,
    val groupMembershipAttribute: ConfigNodePropertyString? = null,
    val defaultGroups: ConfigNodePropertyArray? = null,
    val nameIdFormat: ConfigNodePropertyString? = null,
    val synchronizeAttributes: ConfigNodePropertyArray? = null,
    val handleLogout: ConfigNodePropertyBoolean? = null,
    val logoutUrl: ConfigNodePropertyString? = null,
    val clockTolerance: ConfigNodePropertyInteger? = null,
    val digestMethod: ConfigNodePropertyString? = null,
    val signatureMethod: ConfigNodePropertyString? = null,
    val identitySyncType: ConfigNodePropertyDropDown? = null,
    val idpIdentifier: ConfigNodePropertyString? = null
) {

}

