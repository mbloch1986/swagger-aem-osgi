# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryProperties Class
#'
#' @field name 
#' @field title 
#' @field details 
#' @field enabled 
#' @field serviceName 
#' @field log.level 
#' @field allowed.roots 
#' @field requestAuthorizationStrategy.target 
#' @field queueProviderFactory.target 
#' @field packageBuilder.target 
#' @field triggers.target 
#' @field priorityQueues 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryProperties <- R6::R6Class(
  'OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryProperties',
  public = list(
    `name` = NULL,
    `title` = NULL,
    `details` = NULL,
    `enabled` = NULL,
    `serviceName` = NULL,
    `log.level` = NULL,
    `allowed.roots` = NULL,
    `requestAuthorizationStrategy.target` = NULL,
    `queueProviderFactory.target` = NULL,
    `packageBuilder.target` = NULL,
    `triggers.target` = NULL,
    `priorityQueues` = NULL,
    initialize = function(`name`, `title`, `details`, `enabled`, `serviceName`, `log.level`, `allowed.roots`, `requestAuthorizationStrategy.target`, `queueProviderFactory.target`, `packageBuilder.target`, `triggers.target`, `priorityQueues`){
      if (!missing(`name`)) {
        stopifnot(R6::is.R6(`name`))
        self$`name` <- `name`
      }
      if (!missing(`title`)) {
        stopifnot(R6::is.R6(`title`))
        self$`title` <- `title`
      }
      if (!missing(`details`)) {
        stopifnot(R6::is.R6(`details`))
        self$`details` <- `details`
      }
      if (!missing(`enabled`)) {
        stopifnot(R6::is.R6(`enabled`))
        self$`enabled` <- `enabled`
      }
      if (!missing(`serviceName`)) {
        stopifnot(R6::is.R6(`serviceName`))
        self$`serviceName` <- `serviceName`
      }
      if (!missing(`log.level`)) {
        stopifnot(R6::is.R6(`log.level`))
        self$`log.level` <- `log.level`
      }
      if (!missing(`allowed.roots`)) {
        stopifnot(R6::is.R6(`allowed.roots`))
        self$`allowed.roots` <- `allowed.roots`
      }
      if (!missing(`requestAuthorizationStrategy.target`)) {
        stopifnot(R6::is.R6(`requestAuthorizationStrategy.target`))
        self$`requestAuthorizationStrategy.target` <- `requestAuthorizationStrategy.target`
      }
      if (!missing(`queueProviderFactory.target`)) {
        stopifnot(R6::is.R6(`queueProviderFactory.target`))
        self$`queueProviderFactory.target` <- `queueProviderFactory.target`
      }
      if (!missing(`packageBuilder.target`)) {
        stopifnot(R6::is.R6(`packageBuilder.target`))
        self$`packageBuilder.target` <- `packageBuilder.target`
      }
      if (!missing(`triggers.target`)) {
        stopifnot(R6::is.R6(`triggers.target`))
        self$`triggers.target` <- `triggers.target`
      }
      if (!missing(`priorityQueues`)) {
        stopifnot(R6::is.R6(`priorityQueues`))
        self$`priorityQueues` <- `priorityQueues`
      }
    },
    toJSON = function() {
      OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject <- list()
      if (!is.null(self$`name`)) {
        OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject[['name']] <- self$`name`$toJSON()
      }
      if (!is.null(self$`title`)) {
        OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject[['title']] <- self$`title`$toJSON()
      }
      if (!is.null(self$`details`)) {
        OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject[['details']] <- self$`details`$toJSON()
      }
      if (!is.null(self$`enabled`)) {
        OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject[['enabled']] <- self$`enabled`$toJSON()
      }
      if (!is.null(self$`serviceName`)) {
        OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject[['serviceName']] <- self$`serviceName`$toJSON()
      }
      if (!is.null(self$`log.level`)) {
        OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject[['log.level']] <- self$`log.level`$toJSON()
      }
      if (!is.null(self$`allowed.roots`)) {
        OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject[['allowed.roots']] <- self$`allowed.roots`$toJSON()
      }
      if (!is.null(self$`requestAuthorizationStrategy.target`)) {
        OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject[['requestAuthorizationStrategy.target']] <- self$`requestAuthorizationStrategy.target`$toJSON()
      }
      if (!is.null(self$`queueProviderFactory.target`)) {
        OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject[['queueProviderFactory.target']] <- self$`queueProviderFactory.target`$toJSON()
      }
      if (!is.null(self$`packageBuilder.target`)) {
        OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject[['packageBuilder.target']] <- self$`packageBuilder.target`$toJSON()
      }
      if (!is.null(self$`triggers.target`)) {
        OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject[['triggers.target']] <- self$`triggers.target`$toJSON()
      }
      if (!is.null(self$`priorityQueues`)) {
        OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject[['priorityQueues']] <- self$`priorityQueues`$toJSON()
      }

      OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject
    },
    fromJSON = function(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesJson) {
      OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesJson)
      if (!is.null(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$`name`)) {
        nameObject <- ConfigNodePropertyString$new()
        nameObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$name, auto_unbox = TRUE))
        self$`name` <- nameObject
      }
      if (!is.null(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$`title`)) {
        titleObject <- ConfigNodePropertyString$new()
        titleObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$title, auto_unbox = TRUE))
        self$`title` <- titleObject
      }
      if (!is.null(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$`details`)) {
        detailsObject <- ConfigNodePropertyString$new()
        detailsObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$details, auto_unbox = TRUE))
        self$`details` <- detailsObject
      }
      if (!is.null(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$`enabled`)) {
        enabledObject <- ConfigNodePropertyBoolean$new()
        enabledObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$enabled, auto_unbox = TRUE))
        self$`enabled` <- enabledObject
      }
      if (!is.null(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$`serviceName`)) {
        serviceNameObject <- ConfigNodePropertyString$new()
        serviceNameObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$serviceName, auto_unbox = TRUE))
        self$`serviceName` <- serviceNameObject
      }
      if (!is.null(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$`log.level`)) {
        log.levelObject <- ConfigNodePropertyDropDown$new()
        log.levelObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$log.level, auto_unbox = TRUE))
        self$`log.level` <- log.levelObject
      }
      if (!is.null(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$`allowed.roots`)) {
        allowed.rootsObject <- ConfigNodePropertyArray$new()
        allowed.rootsObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$allowed.roots, auto_unbox = TRUE))
        self$`allowed.roots` <- allowed.rootsObject
      }
      if (!is.null(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$`requestAuthorizationStrategy.target`)) {
        requestAuthorizationStrategy.targetObject <- ConfigNodePropertyString$new()
        requestAuthorizationStrategy.targetObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$requestAuthorizationStrategy.target, auto_unbox = TRUE))
        self$`requestAuthorizationStrategy.target` <- requestAuthorizationStrategy.targetObject
      }
      if (!is.null(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$`queueProviderFactory.target`)) {
        queueProviderFactory.targetObject <- ConfigNodePropertyString$new()
        queueProviderFactory.targetObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$queueProviderFactory.target, auto_unbox = TRUE))
        self$`queueProviderFactory.target` <- queueProviderFactory.targetObject
      }
      if (!is.null(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$`packageBuilder.target`)) {
        packageBuilder.targetObject <- ConfigNodePropertyString$new()
        packageBuilder.targetObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$packageBuilder.target, auto_unbox = TRUE))
        self$`packageBuilder.target` <- packageBuilder.targetObject
      }
      if (!is.null(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$`triggers.target`)) {
        triggers.targetObject <- ConfigNodePropertyString$new()
        triggers.targetObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$triggers.target, auto_unbox = TRUE))
        self$`triggers.target` <- triggers.targetObject
      }
      if (!is.null(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$`priorityQueues`)) {
        priorityQueuesObject <- ConfigNodePropertyArray$new()
        priorityQueuesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$priorityQueues, auto_unbox = TRUE))
        self$`priorityQueues` <- priorityQueuesObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "name": %s,
           "title": %s,
           "details": %s,
           "enabled": %s,
           "serviceName": %s,
           "log.level": %s,
           "allowed.roots": %s,
           "requestAuthorizationStrategy.target": %s,
           "queueProviderFactory.target": %s,
           "packageBuilder.target": %s,
           "triggers.target": %s,
           "priorityQueues": %s
        }',
        self$`name`$toJSON(),
        self$`title`$toJSON(),
        self$`details`$toJSON(),
        self$`enabled`$toJSON(),
        self$`serviceName`$toJSON(),
        self$`log.level`$toJSON(),
        self$`allowed.roots`$toJSON(),
        self$`requestAuthorizationStrategy.target`$toJSON(),
        self$`queueProviderFactory.target`$toJSON(),
        self$`packageBuilder.target`$toJSON(),
        self$`triggers.target`$toJSON(),
        self$`priorityQueues`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesJson) {
      OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`name` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$name, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`title` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$title, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`details` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$details, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`enabled` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$enabled, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`serviceName` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$serviceName, auto_unbox = TRUE))
      ConfigNodePropertyDropDownObject <- ConfigNodePropertyDropDown$new()
      self$`log.level` <- ConfigNodePropertyDropDownObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$log.level, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`allowed.roots` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$allowed.roots, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`requestAuthorizationStrategy.target` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$requestAuthorizationStrategy.target, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`queueProviderFactory.target` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$queueProviderFactory.target, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`packageBuilder.target` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$packageBuilder.target, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`triggers.target` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$triggers.target, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`priorityQueues` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplQueueDistributionAgentFactoryPropertiesObject$priorityQueues, auto_unbox = TRUE))
    }
  )
)
