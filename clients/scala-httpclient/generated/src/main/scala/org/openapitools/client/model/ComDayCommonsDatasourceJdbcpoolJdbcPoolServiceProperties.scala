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


case class ComDayCommonsDatasourceJdbcpoolJdbcPoolServiceProperties (
  jdbcDriverClass: Option[ConfigNodePropertyString] = None,
  jdbcConnectionUri: Option[ConfigNodePropertyString] = None,
  jdbcUsername: Option[ConfigNodePropertyString] = None,
  jdbcPassword: Option[ConfigNodePropertyString] = None,
  jdbcValidationQuery: Option[ConfigNodePropertyString] = None,
  defaultReadonly: Option[ConfigNodePropertyBoolean] = None,
  defaultAutocommit: Option[ConfigNodePropertyBoolean] = None,
  poolSize: Option[ConfigNodePropertyInteger] = None,
  poolMaxWaitMsec: Option[ConfigNodePropertyInteger] = None,
  datasourceName: Option[ConfigNodePropertyString] = None,
  datasourceSvcProperties: Option[ConfigNodePropertyArray] = None
)

