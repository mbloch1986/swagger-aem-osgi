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

case class OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties (
                  name: Option[ConfigNodePropertyString],
                  title: Option[ConfigNodePropertyString],
                  details: Option[ConfigNodePropertyString],
                  enabled: Option[ConfigNodePropertyBoolean],
                  serviceName: Option[ConfigNodePropertyString],
                  logLevel: Option[ConfigNodePropertyDropDown],
                  queueProcessingEnabled: Option[ConfigNodePropertyBoolean],
                  packageExporterEndpoints: Option[ConfigNodePropertyArray],
                  pullItems: Option[ConfigNodePropertyInteger],
                  httpConnTimeout: Option[ConfigNodePropertyInteger],
                  requestAuthorizationStrategyTarget: Option[ConfigNodePropertyString],
                  transportSecretProviderTarget: Option[ConfigNodePropertyString],
                  packageBuilderTarget: Option[ConfigNodePropertyString],
                  triggersTarget: Option[ConfigNodePropertyString]
)

object OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
implicit val format: Format[OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties] = Json.format
}
