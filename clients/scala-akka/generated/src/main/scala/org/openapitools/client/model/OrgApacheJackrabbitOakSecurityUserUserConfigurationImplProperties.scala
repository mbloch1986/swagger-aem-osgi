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

import org.openapitools.client.core.ApiModel
import org.joda.time.DateTime
import java.util.UUID

case class OrgApacheJackrabbitOakSecurityUserUserConfigurationImplProperties (
  usersPath: Option[ConfigNodePropertyString],
  groupsPath: Option[ConfigNodePropertyString],
  systemRelativePath: Option[ConfigNodePropertyString],
  defaultDepth: Option[ConfigNodePropertyInteger],
  importBehavior: Option[ConfigNodePropertyDropDown],
  passwordHashAlgorithm: Option[ConfigNodePropertyString],
  passwordHashIterations: Option[ConfigNodePropertyInteger],
  passwordSaltSize: Option[ConfigNodePropertyInteger],
  omitAdminPw: Option[ConfigNodePropertyBoolean],
  supportAutoSave: Option[ConfigNodePropertyBoolean],
  passwordMaxAge: Option[ConfigNodePropertyInteger],
  initialPasswordChange: Option[ConfigNodePropertyBoolean],
  passwordHistorySize: Option[ConfigNodePropertyInteger],
  passwordExpiryForAdmin: Option[ConfigNodePropertyBoolean],
  cacheExpiration: Option[ConfigNodePropertyInteger],
  enableRFC7613UsercaseMappedProfile: Option[ConfigNodePropertyBoolean]
) extends ApiModel

