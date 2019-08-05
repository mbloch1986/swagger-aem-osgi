# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfo <- R6::R6Class(
  'ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfo',
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
      ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject
    },
    fromJSON = function(ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoJson) {
      ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject <- jsonlite::fromJSON(ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoJson)
      if (!is.null(ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject$`pid`)) {
        self$`pid` <- ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject$`pid`
      }
      if (!is.null(ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject$`title`)) {
        self$`title` <- ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject$`title`
      }
      if (!is.null(ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject$`description`)) {
        self$`description` <- ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject$`description`
      }
      if (!is.null(ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject$`properties`)) {
        propertiesObject <- ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoJson) {
      ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject <- jsonlite::fromJSON(ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoJson)
      self$`pid` <- ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject$`pid`
      self$`title` <- ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject$`title`
      self$`description` <- ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject$`description`
      ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorPropertiesObject <- ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorProperties$new()
      self$`properties` <- ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplJmxAssetIndexUpdateMonitorInfoObject$properties, auto_unbox = TRUE))
    }
  )
)