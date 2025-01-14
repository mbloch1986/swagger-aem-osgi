# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmFoundationImplPageImpressionsTrackerInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmFoundationImplPageImpressionsTrackerInfo <- R6::R6Class(
  'ComDayCqWcmFoundationImplPageImpressionsTrackerInfo',
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
      ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject
    },
    fromJSON = function(ComDayCqWcmFoundationImplPageImpressionsTrackerInfoJson) {
      ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject <- jsonlite::fromJSON(ComDayCqWcmFoundationImplPageImpressionsTrackerInfoJson)
      if (!is.null(ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject$`pid`)) {
        self$`pid` <- ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject$`pid`
      }
      if (!is.null(ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject$`title`)) {
        self$`title` <- ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject$`title`
      }
      if (!is.null(ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject$`description`)) {
        self$`description` <- ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject$`description`
      }
      if (!is.null(ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject$`properties`)) {
        propertiesObject <- ComDayCqWcmFoundationImplPageImpressionsTrackerProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqWcmFoundationImplPageImpressionsTrackerInfoJson) {
      ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject <- jsonlite::fromJSON(ComDayCqWcmFoundationImplPageImpressionsTrackerInfoJson)
      self$`pid` <- ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject$`pid`
      self$`title` <- ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject$`title`
      self$`description` <- ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject$`description`
      ComDayCqWcmFoundationImplPageImpressionsTrackerPropertiesObject <- ComDayCqWcmFoundationImplPageImpressionsTrackerProperties$new()
      self$`properties` <- ComDayCqWcmFoundationImplPageImpressionsTrackerPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmFoundationImplPageImpressionsTrackerInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
