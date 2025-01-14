# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties Class
#'
#' @field event.filter 
#' @field minThreadPoolSize 
#' @field maxThreadPoolSize 
#' @field cq.wcm.workflow.terminate.on.activate 
#' @field cq.wcm.worklfow.terminate.exclusion.list 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties <- R6::R6Class(
  'ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties',
  public = list(
    `event.filter` = NULL,
    `minThreadPoolSize` = NULL,
    `maxThreadPoolSize` = NULL,
    `cq.wcm.workflow.terminate.on.activate` = NULL,
    `cq.wcm.worklfow.terminate.exclusion.list` = NULL,
    initialize = function(`event.filter`, `minThreadPoolSize`, `maxThreadPoolSize`, `cq.wcm.workflow.terminate.on.activate`, `cq.wcm.worklfow.terminate.exclusion.list`){
      if (!missing(`event.filter`)) {
        stopifnot(R6::is.R6(`event.filter`))
        self$`event.filter` <- `event.filter`
      }
      if (!missing(`minThreadPoolSize`)) {
        stopifnot(R6::is.R6(`minThreadPoolSize`))
        self$`minThreadPoolSize` <- `minThreadPoolSize`
      }
      if (!missing(`maxThreadPoolSize`)) {
        stopifnot(R6::is.R6(`maxThreadPoolSize`))
        self$`maxThreadPoolSize` <- `maxThreadPoolSize`
      }
      if (!missing(`cq.wcm.workflow.terminate.on.activate`)) {
        stopifnot(R6::is.R6(`cq.wcm.workflow.terminate.on.activate`))
        self$`cq.wcm.workflow.terminate.on.activate` <- `cq.wcm.workflow.terminate.on.activate`
      }
      if (!missing(`cq.wcm.worklfow.terminate.exclusion.list`)) {
        stopifnot(R6::is.R6(`cq.wcm.worklfow.terminate.exclusion.list`))
        self$`cq.wcm.worklfow.terminate.exclusion.list` <- `cq.wcm.worklfow.terminate.exclusion.list`
      }
    },
    toJSON = function() {
      ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject <- list()
      if (!is.null(self$`event.filter`)) {
        ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject[['event.filter']] <- self$`event.filter`$toJSON()
      }
      if (!is.null(self$`minThreadPoolSize`)) {
        ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject[['minThreadPoolSize']] <- self$`minThreadPoolSize`$toJSON()
      }
      if (!is.null(self$`maxThreadPoolSize`)) {
        ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject[['maxThreadPoolSize']] <- self$`maxThreadPoolSize`$toJSON()
      }
      if (!is.null(self$`cq.wcm.workflow.terminate.on.activate`)) {
        ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject[['cq.wcm.workflow.terminate.on.activate']] <- self$`cq.wcm.workflow.terminate.on.activate`$toJSON()
      }
      if (!is.null(self$`cq.wcm.worklfow.terminate.exclusion.list`)) {
        ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject[['cq.wcm.worklfow.terminate.exclusion.list']] <- self$`cq.wcm.worklfow.terminate.exclusion.list`$toJSON()
      }

      ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject
    },
    fromJSON = function(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesJson) {
      ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesJson)
      if (!is.null(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject$`event.filter`)) {
        event.filterObject <- ConfigNodePropertyString$new()
        event.filterObject$fromJSON(jsonlite::toJSON(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject$event.filter, auto_unbox = TRUE))
        self$`event.filter` <- event.filterObject
      }
      if (!is.null(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject$`minThreadPoolSize`)) {
        minThreadPoolSizeObject <- ConfigNodePropertyInteger$new()
        minThreadPoolSizeObject$fromJSON(jsonlite::toJSON(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject$minThreadPoolSize, auto_unbox = TRUE))
        self$`minThreadPoolSize` <- minThreadPoolSizeObject
      }
      if (!is.null(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject$`maxThreadPoolSize`)) {
        maxThreadPoolSizeObject <- ConfigNodePropertyInteger$new()
        maxThreadPoolSizeObject$fromJSON(jsonlite::toJSON(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject$maxThreadPoolSize, auto_unbox = TRUE))
        self$`maxThreadPoolSize` <- maxThreadPoolSizeObject
      }
      if (!is.null(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject$`cq.wcm.workflow.terminate.on.activate`)) {
        cq.wcm.workflow.terminate.on.activateObject <- ConfigNodePropertyBoolean$new()
        cq.wcm.workflow.terminate.on.activateObject$fromJSON(jsonlite::toJSON(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject$cq.wcm.workflow.terminate.on.activate, auto_unbox = TRUE))
        self$`cq.wcm.workflow.terminate.on.activate` <- cq.wcm.workflow.terminate.on.activateObject
      }
      if (!is.null(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject$`cq.wcm.worklfow.terminate.exclusion.list`)) {
        cq.wcm.worklfow.terminate.exclusion.listObject <- ConfigNodePropertyArray$new()
        cq.wcm.worklfow.terminate.exclusion.listObject$fromJSON(jsonlite::toJSON(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject$cq.wcm.worklfow.terminate.exclusion.list, auto_unbox = TRUE))
        self$`cq.wcm.worklfow.terminate.exclusion.list` <- cq.wcm.worklfow.terminate.exclusion.listObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "event.filter": %s,
           "minThreadPoolSize": %s,
           "maxThreadPoolSize": %s,
           "cq.wcm.workflow.terminate.on.activate": %s,
           "cq.wcm.worklfow.terminate.exclusion.list": %s
        }',
        self$`event.filter`$toJSON(),
        self$`minThreadPoolSize`$toJSON(),
        self$`maxThreadPoolSize`$toJSON(),
        self$`cq.wcm.workflow.terminate.on.activate`$toJSON(),
        self$`cq.wcm.worklfow.terminate.exclusion.list`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesJson) {
      ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`event.filter` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject$event.filter, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`minThreadPoolSize` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject$minThreadPoolSize, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`maxThreadPoolSize` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject$maxThreadPoolSize, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`cq.wcm.workflow.terminate.on.activate` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject$cq.wcm.workflow.terminate.on.activate, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`cq.wcm.worklfow.terminate.exclusion.list` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqWcmWorkflowImplWcmWorkflowServiceImplPropertiesObject$cq.wcm.worklfow.terminate.exclusion.list, auto_unbox = TRUE))
    }
  )
)
