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

case class ComDayCqWidgetImplHtmlLibraryManagerImplProperties (
  htmllibmanagerClientmanager: Option[ConfigNodePropertyString],
  htmllibmanagerDebug: Option[ConfigNodePropertyBoolean],
  htmllibmanagerDebugConsole: Option[ConfigNodePropertyBoolean],
  htmllibmanagerDebugInitJs: Option[ConfigNodePropertyString],
  htmllibmanagerDefaultthemename: Option[ConfigNodePropertyString],
  htmllibmanagerDefaultuserthemename: Option[ConfigNodePropertyString],
  htmllibmanagerFirebuglitePath: Option[ConfigNodePropertyString],
  htmllibmanagerForceCQUrlInfo: Option[ConfigNodePropertyBoolean],
  htmllibmanagerGzip: Option[ConfigNodePropertyBoolean],
  htmllibmanagerMaxage: Option[ConfigNodePropertyInteger],
  htmllibmanagerMaxDataUriSize: Option[ConfigNodePropertyInteger],
  htmllibmanagerMinify: Option[ConfigNodePropertyBoolean],
  htmllibmanagerPathList: Option[ConfigNodePropertyArray],
  htmllibmanagerTiming: Option[ConfigNodePropertyBoolean]
) extends ApiModel


