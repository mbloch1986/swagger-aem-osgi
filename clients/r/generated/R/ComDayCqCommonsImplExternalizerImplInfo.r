# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqCommonsImplExternalizerImplInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#' @field bundle_location 
#' @field service_location 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqCommonsImplExternalizerImplInfo <- R6::R6Class(
  'ComDayCqCommonsImplExternalizerImplInfo',
  public = list(
    `pid` = NULL,
    `title` = NULL,
    `description` = NULL,
    `properties` = NULL,
    `bundle_location` = NULL,
    `service_location` = NULL,
    initialize = function(`pid`, `title`, `description`, `properties`, `bundle_location`, `service_location`){
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
      if (!missing(`bundle_location`)) {
        stopifnot(is.character(`bundle_location`), length(`bundle_location`) == 1)
        self$`bundle_location` <- `bundle_location`
      }
      if (!missing(`service_location`)) {
        stopifnot(is.character(`service_location`), length(`service_location`) == 1)
        self$`service_location` <- `service_location`
      }
    },
    toJSON = function() {
      ComDayCqCommonsImplExternalizerImplInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqCommonsImplExternalizerImplInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqCommonsImplExternalizerImplInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqCommonsImplExternalizerImplInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqCommonsImplExternalizerImplInfoObject[['properties']] <- self$`properties`$toJSON()
      }
      if (!is.null(self$`bundle_location`)) {
        ComDayCqCommonsImplExternalizerImplInfoObject[['bundle_location']] <- self$`bundle_location`
      }
      if (!is.null(self$`service_location`)) {
        ComDayCqCommonsImplExternalizerImplInfoObject[['service_location']] <- self$`service_location`
      }

      ComDayCqCommonsImplExternalizerImplInfoObject
    },
    fromJSON = function(ComDayCqCommonsImplExternalizerImplInfoJson) {
      ComDayCqCommonsImplExternalizerImplInfoObject <- jsonlite::fromJSON(ComDayCqCommonsImplExternalizerImplInfoJson)
      if (!is.null(ComDayCqCommonsImplExternalizerImplInfoObject$`pid`)) {
        self$`pid` <- ComDayCqCommonsImplExternalizerImplInfoObject$`pid`
      }
      if (!is.null(ComDayCqCommonsImplExternalizerImplInfoObject$`title`)) {
        self$`title` <- ComDayCqCommonsImplExternalizerImplInfoObject$`title`
      }
      if (!is.null(ComDayCqCommonsImplExternalizerImplInfoObject$`description`)) {
        self$`description` <- ComDayCqCommonsImplExternalizerImplInfoObject$`description`
      }
      if (!is.null(ComDayCqCommonsImplExternalizerImplInfoObject$`properties`)) {
        propertiesObject <- ComDayCqCommonsImplExternalizerImplProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqCommonsImplExternalizerImplInfoObject$properties, auto_unbox = TRUE))
        self$`properties` <- propertiesObject
      }
      if (!is.null(ComDayCqCommonsImplExternalizerImplInfoObject$`bundle_location`)) {
        self$`bundle_location` <- ComDayCqCommonsImplExternalizerImplInfoObject$`bundle_location`
      }
      if (!is.null(ComDayCqCommonsImplExternalizerImplInfoObject$`service_location`)) {
        self$`service_location` <- ComDayCqCommonsImplExternalizerImplInfoObject$`service_location`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "pid": %s,
           "title": %s,
           "description": %s,
           "properties": %s,
           "bundle_location": %s,
           "service_location": %s
        }',
        self$`pid`,
        self$`title`,
        self$`description`,
        self$`properties`$toJSON(),
        self$`bundle_location`,
        self$`service_location`
      )
    },
    fromJSONString = function(ComDayCqCommonsImplExternalizerImplInfoJson) {
      ComDayCqCommonsImplExternalizerImplInfoObject <- jsonlite::fromJSON(ComDayCqCommonsImplExternalizerImplInfoJson)
      self$`pid` <- ComDayCqCommonsImplExternalizerImplInfoObject$`pid`
      self$`title` <- ComDayCqCommonsImplExternalizerImplInfoObject$`title`
      self$`description` <- ComDayCqCommonsImplExternalizerImplInfoObject$`description`
      ComDayCqCommonsImplExternalizerImplPropertiesObject <- ComDayCqCommonsImplExternalizerImplProperties$new()
      self$`properties` <- ComDayCqCommonsImplExternalizerImplPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqCommonsImplExternalizerImplInfoObject$properties, auto_unbox = TRUE))
      self$`bundle_location` <- ComDayCqCommonsImplExternalizerImplInfoObject$`bundle_location`
      self$`service_location` <- ComDayCqCommonsImplExternalizerImplInfoObject$`service_location`
    }
  )
)
