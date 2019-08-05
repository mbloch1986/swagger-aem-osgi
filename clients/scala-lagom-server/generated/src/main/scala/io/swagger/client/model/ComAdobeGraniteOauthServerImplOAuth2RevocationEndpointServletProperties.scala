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

case class ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties (
                  slingServletPaths: Option[ConfigNodePropertyString],
                  oauthRevocationActive: Option[ConfigNodePropertyBoolean]
)

object ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties {
implicit val format: Format[ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties] = Json.format
}
