# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfo <- R6::R6Class(
  'ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfo',
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
      ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject
    },
    fromJSON = function(ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoJson) {
      ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject <- jsonlite::fromJSON(ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoJson)
      if (!is.null(ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoJson) {
      ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject <- jsonlite::fromJSON(ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoJson)
      self$`pid` <- ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject$`pid`
      self$`title` <- ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject$`title`
      self$`description` <- ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject$`description`
      ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumPropertiesObject <- ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumProperties$new()
      self$`properties` <- ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteWorkflowCoreOffloadingWorkflowOffloadingJobConsumInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
