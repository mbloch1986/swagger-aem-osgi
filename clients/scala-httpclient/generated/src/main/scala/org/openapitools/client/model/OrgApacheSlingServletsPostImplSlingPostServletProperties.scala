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


case class OrgApacheSlingServletsPostImplSlingPostServletProperties (
  servletPostDateFormats: Option[ConfigNodePropertyArray] = None,
  servletPostNodeNameHints: Option[ConfigNodePropertyArray] = None,
  servletPostNodeNameMaxLength: Option[ConfigNodePropertyInteger] = None,
  servletPostCheckinNewVersionableNodes: Option[ConfigNodePropertyBoolean] = None,
  servletPostAutoCheckout: Option[ConfigNodePropertyBoolean] = None,
  servletPostAutoCheckin: Option[ConfigNodePropertyBoolean] = None,
  servletPostIgnorePattern: Option[ConfigNodePropertyString] = None
)
