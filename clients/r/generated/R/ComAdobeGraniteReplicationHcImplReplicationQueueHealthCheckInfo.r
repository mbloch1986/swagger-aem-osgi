# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfo <- R6::R6Class(
  'ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfo',
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
      ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject
    },
    fromJSON = function(ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoJson) {
      ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject <- jsonlite::fromJSON(ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoJson)
      if (!is.null(ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoJson) {
      ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject <- jsonlite::fromJSON(ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoJson)
      self$`pid` <- ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject$`pid`
      self$`title` <- ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject$`title`
      self$`description` <- ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject$`description`
      ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckPropertiesObject <- ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties$new()
      self$`properties` <- ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
