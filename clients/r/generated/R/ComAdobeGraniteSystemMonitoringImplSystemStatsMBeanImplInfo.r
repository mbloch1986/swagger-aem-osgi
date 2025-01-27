# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfo <- R6::R6Class(
  'ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfo',
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
      ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject
    },
    fromJSON = function(ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoJson) {
      ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject <- jsonlite::fromJSON(ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoJson)
      if (!is.null(ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoJson) {
      ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject <- jsonlite::fromJSON(ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoJson)
      self$`pid` <- ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject$`pid`
      self$`title` <- ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject$`title`
      self$`description` <- ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject$`description`
      ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplPropertiesObject <- ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplProperties$new()
      self$`properties` <- ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
