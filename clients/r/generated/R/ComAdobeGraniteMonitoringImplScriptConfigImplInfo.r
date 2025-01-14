# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteMonitoringImplScriptConfigImplInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteMonitoringImplScriptConfigImplInfo <- R6::R6Class(
  'ComAdobeGraniteMonitoringImplScriptConfigImplInfo',
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
      ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject
    },
    fromJSON = function(ComAdobeGraniteMonitoringImplScriptConfigImplInfoJson) {
      ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject <- jsonlite::fromJSON(ComAdobeGraniteMonitoringImplScriptConfigImplInfoJson)
      if (!is.null(ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteMonitoringImplScriptConfigImplProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteMonitoringImplScriptConfigImplInfoJson) {
      ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject <- jsonlite::fromJSON(ComAdobeGraniteMonitoringImplScriptConfigImplInfoJson)
      self$`pid` <- ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject$`pid`
      self$`title` <- ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject$`title`
      self$`description` <- ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject$`description`
      ComAdobeGraniteMonitoringImplScriptConfigImplPropertiesObject <- ComAdobeGraniteMonitoringImplScriptConfigImplProperties$new()
      self$`properties` <- ComAdobeGraniteMonitoringImplScriptConfigImplPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteMonitoringImplScriptConfigImplInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
