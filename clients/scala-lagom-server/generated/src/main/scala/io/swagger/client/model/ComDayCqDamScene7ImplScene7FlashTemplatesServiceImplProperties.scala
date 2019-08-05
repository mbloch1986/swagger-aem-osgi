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

case class ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties (
                  scene7FlashTemplatesRti: Option[ConfigNodePropertyString],
                  scene7FlashTemplatesRsi: Option[ConfigNodePropertyString],
                  scene7FlashTemplatesRb: Option[ConfigNodePropertyString],
                  scene7FlashTemplatesRurl: Option[ConfigNodePropertyString],
                  scene7FlashTemplateUrlFormatParameter: Option[ConfigNodePropertyString]
)

object ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties {
implicit val format: Format[ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties] = Json.format
}
