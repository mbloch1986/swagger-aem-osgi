# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfo <- R6::R6Class(
  'ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfo',
  public = list(
    `pid` = NULL,
    `title` = NULL,
    `description` = NULL,
    `properties` = NULL,
    initialize = function(`pid`, `title`, `description`, `properties`){
      if (!missing(`pid`)) {
        stopifnot(is.character(`pid`), length(`pid`) == 1)
        self$`pid` <- `pid`
      }
      if (!missing(`title`)) {
        stopifnot(is.character(`title`), length(`title`) == 1)
        self$`title` <- `title`
      }
      if (!missing(`description`)) {
        stopifnot(is.character(`description`), length(`description`) == 1)
        self$`description` <- `description`
      }
      if (!missing(`properties`)) {
        stopifnot(R6::is.R6(`properties`))
        self$`properties` <- `properties`
      }
    },
    toJSON = function() {
      ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject
    },
    fromJSON = function(ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoJson) {
      ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject <- jsonlite::fromJSON(ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoJson)
      if (!is.null(ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject$`pid`)) {
        self$`pid` <- ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject$`pid`
      }
      if (!is.null(ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject$`title`)) {
        self$`title` <- ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject$`title`
      }
      if (!is.null(ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject$`description`)) {
        self$`description` <- ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject$`description`
      }
      if (!is.null(ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject$`properties`)) {
        propertiesObject <- ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject$properties, auto_unbox = TRUE))
        self$`properties` <- propertiesObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "pid": %s,
           "title": %s,
           "description": %s,
           "properties": %s
        }',
        self$`pid`,
        self$`title`,
        self$`description`,
        self$`properties`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoJson) {
      ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject <- jsonlite::fromJSON(ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoJson)
      self$`pid` <- ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject$`pid`
      self$`title` <- ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject$`title`
      self$`description` <- ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject$`description`
      ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplPropertiesObject <- ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplProperties$new()
      self$`properties` <- ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
