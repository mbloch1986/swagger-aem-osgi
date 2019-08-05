# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfo <- R6::R6Class(
  'ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfo',
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
      ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject
    },
    fromJSON = function(ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoJson) {
      ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject <- jsonlite::fromJSON(ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoJson)
      if (!is.null(ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoJson) {
      ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject <- jsonlite::fromJSON(ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoJson)
      self$`pid` <- ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject$`pid`
      self$`title` <- ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject$`title`
      self$`description` <- ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject$`description`
      ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckPropertiesObject <- ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckProperties$new()
      self$`properties` <- ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteBundlesHcImplInactiveBundlesHealthCheckInfoObject$properties, auto_unbox = TRUE))
    }
  )
)