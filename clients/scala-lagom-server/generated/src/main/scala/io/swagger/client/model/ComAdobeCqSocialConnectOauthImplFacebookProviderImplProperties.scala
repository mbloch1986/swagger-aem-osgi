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

case class ComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties (
                  oauthProviderId: Option[ConfigNodePropertyString],
                  oauthCloudConfigRoot: Option[ConfigNodePropertyString],
                  providerConfigRoot: Option[ConfigNodePropertyString],
                  providerConfigCreateTagsEnabled: Option[ConfigNodePropertyBoolean],
                  providerConfigUserFolder: Option[ConfigNodePropertyDropDown],
                  providerConfigFacebookFetchFields: Option[ConfigNodePropertyBoolean],
                  providerConfigFacebookFields: Option[ConfigNodePropertyArray],
                  providerConfigRefreshUserdataEnabled: Option[ConfigNodePropertyBoolean]
)

object ComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties {
implicit val format: Format[ComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties] = Json.format
}
