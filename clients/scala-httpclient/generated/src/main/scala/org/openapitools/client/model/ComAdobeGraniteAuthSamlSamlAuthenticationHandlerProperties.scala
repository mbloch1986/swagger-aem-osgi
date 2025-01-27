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

package org.openapitools.client.model


case class ComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties (
  `path`: Option[ConfigNodePropertyArray] = None,
  serviceRanking: Option[ConfigNodePropertyInteger] = None,
  idpUrl: Option[ConfigNodePropertyString] = None,
  idpCertAlias: Option[ConfigNodePropertyString] = None,
  idpHttpRedirect: Option[ConfigNodePropertyBoolean] = None,
  serviceProviderEntityId: Option[ConfigNodePropertyString] = None,
  assertionConsumerServiceURL: Option[ConfigNodePropertyString] = None,
  spPrivateKeyAlias: Option[ConfigNodePropertyString] = None,
  keyStorePassword: Option[ConfigNodePropertyString] = None,
  defaultRedirectUrl: Option[ConfigNodePropertyString] = None,
  userIDAttribute: Option[ConfigNodePropertyString] = None,
  useEncryption: Option[ConfigNodePropertyBoolean] = None,
  createUser: Option[ConfigNodePropertyBoolean] = None,
  userIntermediatePath: Option[ConfigNodePropertyString] = None,
  addGroupMemberships: Option[ConfigNodePropertyBoolean] = None,
  groupMembershipAttribute: Option[ConfigNodePropertyString] = None,
  defaultGroups: Option[ConfigNodePropertyArray] = None,
  nameIdFormat: Option[ConfigNodePropertyString] = None,
  synchronizeAttributes: Option[ConfigNodePropertyArray] = None,
  handleLogout: Option[ConfigNodePropertyBoolean] = None,
  logoutUrl: Option[ConfigNodePropertyString] = None,
  clockTolerance: Option[ConfigNodePropertyInteger] = None,
  digestMethod: Option[ConfigNodePropertyString] = None,
  signatureMethod: Option[ConfigNodePropertyString] = None,
  identitySyncType: Option[ConfigNodePropertyDropDown] = None,
  idpIdentifier: Option[ConfigNodePropertyString] = None
)

