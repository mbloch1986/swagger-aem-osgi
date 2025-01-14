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


case class OrgApacheSlingEventJobsQueueConfigurationProperties (
  queueName: Option[ConfigNodePropertyString] = None,
  queueTopics: Option[ConfigNodePropertyArray] = None,
  queueType: Option[ConfigNodePropertyDropDown] = None,
  queuePriority: Option[ConfigNodePropertyDropDown] = None,
  queueRetries: Option[ConfigNodePropertyInteger] = None,
  queueRetrydelay: Option[ConfigNodePropertyInteger] = None,
  queueMaxparallel: Option[ConfigNodePropertyFloat] = None,
  queueKeepJobs: Option[ConfigNodePropertyBoolean] = None,
  queuePreferRunOnCreationInstance: Option[ConfigNodePropertyBoolean] = None,
  queueThreadPoolSize: Option[ConfigNodePropertyInteger] = None,
  serviceRanking: Option[ConfigNodePropertyInteger] = None
)

