# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggeProperties Class
#'
#' @field name 
#' @field path 
#' @field seconds 
#' @field serviceName 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggeProperties <- R6::R6Class(
  'OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggeProperties',
  public = list(
    `name` = NULL,
    `path` = NULL,
    `seconds` = NULL,
    `serviceName` = NULL,
    initialize = function(`name`, `path`, `seconds`, `serviceName`){
      if (!missing(`name`)) {
        stopifnot(R6::is.R6(`name`))
        self$`name` <- `name`
      }
      if (!missing(`path`)) {
        stopifnot(R6::is.R6(`path`))
        self$`path` <- `path`
      }
      if (!missing(`seconds`)) {
        stopifnot(R6::is.R6(`seconds`))
        self$`seconds` <- `seconds`
      }
      if (!missing(`serviceName`)) {
        stopifnot(R6::is.R6(`serviceName`))
        self$`serviceName` <- `serviceName`
      }
    },
    toJSON = function() {
      OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject <- list()
      if (!is.null(self$`name`)) {
        OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject[['name']] <- self$`name`$toJSON()
      }
      if (!is.null(self$`path`)) {
        OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject[['path']] <- self$`path`$toJSON()
      }
      if (!is.null(self$`seconds`)) {
        OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject[['seconds']] <- self$`seconds`$toJSON()
      }
      if (!is.null(self$`serviceName`)) {
        OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject[['serviceName']] <- self$`serviceName`$toJSON()
      }

      OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject
    },
    fromJSON = function(OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesJson) {
      OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject <- jsonlite::fromJSON(OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesJson)
      if (!is.null(OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject$`name`)) {
        nameObject <- ConfigNodePropertyString$new()
        nameObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject$name, auto_unbox = TRUE))
        self$`name` <- nameObject
      }
      if (!is.null(OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject$`path`)) {
        pathObject <- ConfigNodePropertyString$new()
        pathObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject$path, auto_unbox = TRUE))
        self$`path` <- pathObject
      }
      if (!is.null(OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject$`seconds`)) {
        secondsObject <- ConfigNodePropertyString$new()
        secondsObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject$seconds, auto_unbox = TRUE))
        self$`seconds` <- secondsObject
      }
      if (!is.null(OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject$`serviceName`)) {
        serviceNameObject <- ConfigNodePropertyString$new()
        serviceNameObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject$serviceName, auto_unbox = TRUE))
        self$`serviceName` <- serviceNameObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "name": %s,
           "path": %s,
           "seconds": %s,
           "serviceName": %s
        }',
        self$`name`$toJSON(),
        self$`path`$toJSON(),
        self$`seconds`$toJSON(),
        self$`serviceName`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesJson) {
      OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject <- jsonlite::fromJSON(OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`name` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject$name, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`path` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject$path, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`seconds` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject$seconds, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`serviceName` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionTriggerImplScheduledDistributionTriggePropertiesObject$serviceName, auto_unbox = TRUE))
    }
  )
)
