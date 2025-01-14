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

case class OrgApacheSlingDatasourceDataSourceFactoryProperties (
  datasourceName: Option[ConfigNodePropertyString],
  datasourceSvcPropName: Option[ConfigNodePropertyString],
  driverClassName: Option[ConfigNodePropertyString],
  url: Option[ConfigNodePropertyString],
  username: Option[ConfigNodePropertyString],
  password: Option[ConfigNodePropertyString],
  defaultAutoCommit: Option[ConfigNodePropertyDropDown],
  defaultReadOnly: Option[ConfigNodePropertyDropDown],
  defaultTransactionIsolation: Option[ConfigNodePropertyDropDown],
  defaultCatalog: Option[ConfigNodePropertyString],
  maxActive: Option[ConfigNodePropertyInteger],
  maxIdle: Option[ConfigNodePropertyInteger],
  minIdle: Option[ConfigNodePropertyInteger],
  initialSize: Option[ConfigNodePropertyInteger],
  maxWait: Option[ConfigNodePropertyInteger],
  maxAge: Option[ConfigNodePropertyInteger],
  testOnBorrow: Option[ConfigNodePropertyBoolean],
  testOnReturn: Option[ConfigNodePropertyBoolean],
  testWhileIdle: Option[ConfigNodePropertyBoolean],
  validationQuery: Option[ConfigNodePropertyString],
  validationQueryTimeout: Option[ConfigNodePropertyInteger],
  timeBetweenEvictionRunsMillis: Option[ConfigNodePropertyInteger],
  minEvictableIdleTimeMillis: Option[ConfigNodePropertyInteger],
  connectionProperties: Option[ConfigNodePropertyString],
  initSQL: Option[ConfigNodePropertyString],
  jdbcInterceptors: Option[ConfigNodePropertyString],
  validationInterval: Option[ConfigNodePropertyInteger],
  logValidationErrors: Option[ConfigNodePropertyBoolean],
  datasourceSvcProperties: Option[ConfigNodePropertyArray]
) extends ApiModel


