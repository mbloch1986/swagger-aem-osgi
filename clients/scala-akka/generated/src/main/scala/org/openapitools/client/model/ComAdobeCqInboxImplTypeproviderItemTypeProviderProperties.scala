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

case class ComAdobeCqInboxImplTypeproviderItemTypeProviderProperties (
  inboxImplTypeproviderRegistrypaths: Option[ConfigNodePropertyArray],
  inboxImplTypeproviderLegacypaths: Option[ConfigNodePropertyArray],
  inboxImplTypeproviderDefaulturlFailureitem: Option[ConfigNodePropertyString],
  inboxImplTypeproviderDefaulturlWorkitem: Option[ConfigNodePropertyString],
  inboxImplTypeproviderDefaulturlTask: Option[ConfigNodePropertyString]
) extends ApiModel

