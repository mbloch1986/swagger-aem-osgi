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

package io.swagger.client.model
import play.api.libs.json._

case class OrgApacheSlingHcCoreImplCompositeHealthCheckInfo (
                  pid: Option[String],
                  title: Option[String],
                  description: Option[String],
                  properties: Option[OrgApacheSlingHcCoreImplCompositeHealthCheckProperties]
)

object OrgApacheSlingHcCoreImplCompositeHealthCheckInfo {
implicit val format: Format[OrgApacheSlingHcCoreImplCompositeHealthCheckInfo] = Json.format
}

