# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo <- R6::R6Class(
  'ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfo',
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
      ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject
    },
    fromJSON = function(ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoJson) {
      ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject <- jsonlite::fromJSON(ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoJson)
      if (!is.null(ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoJson) {
      ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject <- jsonlite::fromJSON(ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoJson)
      self$`pid` <- ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject$`pid`
      self$`title` <- ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject$`title`
      self$`description` <- ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject$`description`
      ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckPropertiesObject <- ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckProperties$new()
      self$`properties` <- ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteBundlesHcImplSlingJavaScriptHandlerHealthCheckInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
