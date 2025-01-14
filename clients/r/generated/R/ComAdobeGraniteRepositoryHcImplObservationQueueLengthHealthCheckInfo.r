# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfo <- R6::R6Class(
  'ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfo',
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
      ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject
    },
    fromJSON = function(ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoJson) {
      ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject <- jsonlite::fromJSON(ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoJson)
      if (!is.null(ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoJson) {
      ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject <- jsonlite::fromJSON(ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoJson)
      self$`pid` <- ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject$`pid`
      self$`title` <- ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject$`title`
      self$`description` <- ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject$`description`
      ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckPropertiesObject <- ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckProperties$new()
      self$`properties` <- ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryHcImplObservationQueueLengthHealthCheckInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
