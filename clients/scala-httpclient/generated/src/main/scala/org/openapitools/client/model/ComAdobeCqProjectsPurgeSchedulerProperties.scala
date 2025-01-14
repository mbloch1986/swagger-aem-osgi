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


case class ComAdobeCqProjectsPurgeSchedulerProperties (
  scheduledpurgeName: Option[ConfigNodePropertyString] = None,
  scheduledpurgePurgeActive: Option[ConfigNodePropertyBoolean] = None,
  scheduledpurgeTemplates: Option[ConfigNodePropertyArray] = None,
  scheduledpurgePurgeGroups: Option[ConfigNodePropertyBoolean] = None,
  scheduledpurgePurgeAssets: Option[ConfigNodePropertyBoolean] = None,
  scheduledpurgeTerminateRunningWorkflows: Option[ConfigNodePropertyBoolean] = None,
  scheduledpurgeDaysold: Option[ConfigNodePropertyInteger] = None,
  scheduledpurgeSaveThreshold: Option[ConfigNodePropertyInteger] = None
)

