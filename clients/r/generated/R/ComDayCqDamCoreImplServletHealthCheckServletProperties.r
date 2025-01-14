# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamCoreImplServletHealthCheckServletProperties Class
#'
#' @field cq.dam.sync.workflow.id 
#' @field cq.dam.sync.folder.types 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamCoreImplServletHealthCheckServletProperties <- R6::R6Class(
  'ComDayCqDamCoreImplServletHealthCheckServletProperties',
  public = list(
    `cq.dam.sync.workflow.id` = NULL,
    `cq.dam.sync.folder.types` = NULL,
    initialize = function(`cq.dam.sync.workflow.id`, `cq.dam.sync.folder.types`){
      if (!missing(`cq.dam.sync.workflow.id`)) {
        stopifnot(R6::is.R6(`cq.dam.sync.workflow.id`))
        self$`cq.dam.sync.workflow.id` <- `cq.dam.sync.workflow.id`
      }
      if (!missing(`cq.dam.sync.folder.types`)) {
        stopifnot(R6::is.R6(`cq.dam.sync.folder.types`))
        self$`cq.dam.sync.folder.types` <- `cq.dam.sync.folder.types`
      }
    },
    toJSON = function() {
      ComDayCqDamCoreImplServletHealthCheckServletPropertiesObject <- list()
      if (!is.null(self$`cq.dam.sync.workflow.id`)) {
        ComDayCqDamCoreImplServletHealthCheckServletPropertiesObject[['cq.dam.sync.workflow.id']] <- self$`cq.dam.sync.workflow.id`$toJSON()
      }
      if (!is.null(self$`cq.dam.sync.folder.types`)) {
        ComDayCqDamCoreImplServletHealthCheckServletPropertiesObject[['cq.dam.sync.folder.types']] <- self$`cq.dam.sync.folder.types`$toJSON()
      }

      ComDayCqDamCoreImplServletHealthCheckServletPropertiesObject
    },
    fromJSON = function(ComDayCqDamCoreImplServletHealthCheckServletPropertiesJson) {
      ComDayCqDamCoreImplServletHealthCheckServletPropertiesObject <- jsonlite::fromJSON(ComDayCqDamCoreImplServletHealthCheckServletPropertiesJson)
      if (!is.null(ComDayCqDamCoreImplServletHealthCheckServletPropertiesObject$`cq.dam.sync.workflow.id`)) {
        cq.dam.sync.workflow.idObject <- ConfigNodePropertyString$new()
        cq.dam.sync.workflow.idObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplServletHealthCheckServletPropertiesObject$cq.dam.sync.workflow.id, auto_unbox = TRUE))
        self$`cq.dam.sync.workflow.id` <- cq.dam.sync.workflow.idObject
      }
      if (!is.null(ComDayCqDamCoreImplServletHealthCheckServletPropertiesObject$`cq.dam.sync.folder.types`)) {
        cq.dam.sync.folder.typesObject <- ConfigNodePropertyArray$new()
        cq.dam.sync.folder.typesObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplServletHealthCheckServletPropertiesObject$cq.dam.sync.folder.types, auto_unbox = TRUE))
        self$`cq.dam.sync.folder.types` <- cq.dam.sync.folder.typesObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "cq.dam.sync.workflow.id": %s,
           "cq.dam.sync.folder.types": %s
        }',
        self$`cq.dam.sync.workflow.id`$toJSON(),
        self$`cq.dam.sync.folder.types`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqDamCoreImplServletHealthCheckServletPropertiesJson) {
      ComDayCqDamCoreImplServletHealthCheckServletPropertiesObject <- jsonlite::fromJSON(ComDayCqDamCoreImplServletHealthCheckServletPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`cq.dam.sync.workflow.id` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplServletHealthCheckServletPropertiesObject$cq.dam.sync.workflow.id, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`cq.dam.sync.folder.types` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplServletHealthCheckServletPropertiesObject$cq.dam.sync.folder.types, auto_unbox = TRUE))
    }
  )
)
