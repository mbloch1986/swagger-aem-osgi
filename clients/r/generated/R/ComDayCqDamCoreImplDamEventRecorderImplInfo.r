# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamCoreImplDamEventRecorderImplInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamCoreImplDamEventRecorderImplInfo <- R6::R6Class(
  'ComDayCqDamCoreImplDamEventRecorderImplInfo',
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
      ComDayCqDamCoreImplDamEventRecorderImplInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqDamCoreImplDamEventRecorderImplInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqDamCoreImplDamEventRecorderImplInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqDamCoreImplDamEventRecorderImplInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqDamCoreImplDamEventRecorderImplInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqDamCoreImplDamEventRecorderImplInfoObject
    },
    fromJSON = function(ComDayCqDamCoreImplDamEventRecorderImplInfoJson) {
      ComDayCqDamCoreImplDamEventRecorderImplInfoObject <- jsonlite::fromJSON(ComDayCqDamCoreImplDamEventRecorderImplInfoJson)
      if (!is.null(ComDayCqDamCoreImplDamEventRecorderImplInfoObject$`pid`)) {
        self$`pid` <- ComDayCqDamCoreImplDamEventRecorderImplInfoObject$`pid`
      }
      if (!is.null(ComDayCqDamCoreImplDamEventRecorderImplInfoObject$`title`)) {
        self$`title` <- ComDayCqDamCoreImplDamEventRecorderImplInfoObject$`title`
      }
      if (!is.null(ComDayCqDamCoreImplDamEventRecorderImplInfoObject$`description`)) {
        self$`description` <- ComDayCqDamCoreImplDamEventRecorderImplInfoObject$`description`
      }
      if (!is.null(ComDayCqDamCoreImplDamEventRecorderImplInfoObject$`properties`)) {
        propertiesObject <- ComDayCqDamCoreImplDamEventRecorderImplProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplDamEventRecorderImplInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqDamCoreImplDamEventRecorderImplInfoJson) {
      ComDayCqDamCoreImplDamEventRecorderImplInfoObject <- jsonlite::fromJSON(ComDayCqDamCoreImplDamEventRecorderImplInfoJson)
      self$`pid` <- ComDayCqDamCoreImplDamEventRecorderImplInfoObject$`pid`
      self$`title` <- ComDayCqDamCoreImplDamEventRecorderImplInfoObject$`title`
      self$`description` <- ComDayCqDamCoreImplDamEventRecorderImplInfoObject$`description`
      ComDayCqDamCoreImplDamEventRecorderImplPropertiesObject <- ComDayCqDamCoreImplDamEventRecorderImplProperties$new()
      self$`properties` <- ComDayCqDamCoreImplDamEventRecorderImplPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplDamEventRecorderImplInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
