/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model

case class ComAdobeGraniteWorkflowCoreWorkflowSessionFactoryProperties(
  granitePeriodworkflowinboxPeriodsortPeriodpropertyName: Option[ConfigNodePropertyDropDown],

  granitePeriodworkflowinboxPeriodsortPeriodorder: Option[ConfigNodePropertyString],

  cqPeriodworkflowPeriodjobPeriodretry: Option[ConfigNodePropertyInteger],

  cqPeriodworkflowPeriodsuperuser: Option[ConfigNodePropertyArray],

  granitePeriodworkflowPeriodinboxQuerySize: Option[ConfigNodePropertyInteger],

  granitePeriodworkflowPeriodadminUserGroupFilter: Option[ConfigNodePropertyBoolean],

  granitePeriodworkflowPeriodenforceWorkitemAssigneePermissions: Option[ConfigNodePropertyBoolean],

  granitePeriodworkflowPeriodenforceWorkflowInitiatorPermissions: Option[ConfigNodePropertyBoolean],

  granitePeriodworkflowPeriodinjectTenantIdInJobTopics: Option[ConfigNodePropertyBoolean],

  granitePeriodworkflowPeriodmaxPurgeSaveThreshold: Option[ConfigNodePropertyInteger],

  granitePeriodworkflowPeriodmaxPurgeQueryCount: Option[ConfigNodePropertyInteger]

 )
