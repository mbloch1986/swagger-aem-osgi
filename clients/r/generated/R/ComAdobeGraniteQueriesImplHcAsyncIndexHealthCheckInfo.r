# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfo <- R6::R6Class(
  'ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfo',
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
      ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject
    },
    fromJSON = function(ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoJson) {
      ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject <- jsonlite::fromJSON(ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoJson)
      if (!is.null(ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoJson) {
      ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject <- jsonlite::fromJSON(ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoJson)
      self$`pid` <- ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject$`pid`
      self$`title` <- ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject$`title`
      self$`description` <- ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject$`description`
      ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckPropertiesObject <- ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckProperties$new()
      self$`properties` <- ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteQueriesImplHcAsyncIndexHealthCheckInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
