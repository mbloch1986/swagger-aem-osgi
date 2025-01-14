# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamCoreImplReportsReportPurgeServiceProperties Class
#'
#' @field scheduler.expression 
#' @field maxSavedReports 
#' @field timeDuration 
#' @field enableReportPurge 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamCoreImplReportsReportPurgeServiceProperties <- R6::R6Class(
  'ComDayCqDamCoreImplReportsReportPurgeServiceProperties',
  public = list(
    `scheduler.expression` = NULL,
    `maxSavedReports` = NULL,
    `timeDuration` = NULL,
    `enableReportPurge` = NULL,
    initialize = function(`scheduler.expression`, `maxSavedReports`, `timeDuration`, `enableReportPurge`){
      if (!missing(`scheduler.expression`)) {
        stopifnot(R6::is.R6(`scheduler.expression`))
        self$`scheduler.expression` <- `scheduler.expression`
      }
      if (!missing(`maxSavedReports`)) {
        stopifnot(R6::is.R6(`maxSavedReports`))
        self$`maxSavedReports` <- `maxSavedReports`
      }
      if (!missing(`timeDuration`)) {
        stopifnot(R6::is.R6(`timeDuration`))
        self$`timeDuration` <- `timeDuration`
      }
      if (!missing(`enableReportPurge`)) {
        stopifnot(R6::is.R6(`enableReportPurge`))
        self$`enableReportPurge` <- `enableReportPurge`
      }
    },
    toJSON = function() {
      ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject <- list()
      if (!is.null(self$`scheduler.expression`)) {
        ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject[['scheduler.expression']] <- self$`scheduler.expression`$toJSON()
      }
      if (!is.null(self$`maxSavedReports`)) {
        ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject[['maxSavedReports']] <- self$`maxSavedReports`$toJSON()
      }
      if (!is.null(self$`timeDuration`)) {
        ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject[['timeDuration']] <- self$`timeDuration`$toJSON()
      }
      if (!is.null(self$`enableReportPurge`)) {
        ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject[['enableReportPurge']] <- self$`enableReportPurge`$toJSON()
      }

      ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject
    },
    fromJSON = function(ComDayCqDamCoreImplReportsReportPurgeServicePropertiesJson) {
      ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject <- jsonlite::fromJSON(ComDayCqDamCoreImplReportsReportPurgeServicePropertiesJson)
      if (!is.null(ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject$`scheduler.expression`)) {
        scheduler.expressionObject <- ConfigNodePropertyString$new()
        scheduler.expressionObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject$scheduler.expression, auto_unbox = TRUE))
        self$`scheduler.expression` <- scheduler.expressionObject
      }
      if (!is.null(ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject$`maxSavedReports`)) {
        maxSavedReportsObject <- ConfigNodePropertyInteger$new()
        maxSavedReportsObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject$maxSavedReports, auto_unbox = TRUE))
        self$`maxSavedReports` <- maxSavedReportsObject
      }
      if (!is.null(ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject$`timeDuration`)) {
        timeDurationObject <- ConfigNodePropertyInteger$new()
        timeDurationObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject$timeDuration, auto_unbox = TRUE))
        self$`timeDuration` <- timeDurationObject
      }
      if (!is.null(ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject$`enableReportPurge`)) {
        enableReportPurgeObject <- ConfigNodePropertyBoolean$new()
        enableReportPurgeObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject$enableReportPurge, auto_unbox = TRUE))
        self$`enableReportPurge` <- enableReportPurgeObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "scheduler.expression": %s,
           "maxSavedReports": %s,
           "timeDuration": %s,
           "enableReportPurge": %s
        }',
        self$`scheduler.expression`$toJSON(),
        self$`maxSavedReports`$toJSON(),
        self$`timeDuration`$toJSON(),
        self$`enableReportPurge`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqDamCoreImplReportsReportPurgeServicePropertiesJson) {
      ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject <- jsonlite::fromJSON(ComDayCqDamCoreImplReportsReportPurgeServicePropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`scheduler.expression` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject$scheduler.expression, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`maxSavedReports` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject$maxSavedReports, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`timeDuration` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject$timeDuration, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`enableReportPurge` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplReportsReportPurgeServicePropertiesObject$enableReportPurge, auto_unbox = TRUE))
    }
  )
)
