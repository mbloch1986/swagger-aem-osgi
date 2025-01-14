# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamIdsImplIDSJobProcessorInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamIdsImplIDSJobProcessorInfo <- R6::R6Class(
  'ComDayCqDamIdsImplIDSJobProcessorInfo',
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
      ComDayCqDamIdsImplIDSJobProcessorInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqDamIdsImplIDSJobProcessorInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqDamIdsImplIDSJobProcessorInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqDamIdsImplIDSJobProcessorInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqDamIdsImplIDSJobProcessorInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqDamIdsImplIDSJobProcessorInfoObject
    },
    fromJSON = function(ComDayCqDamIdsImplIDSJobProcessorInfoJson) {
      ComDayCqDamIdsImplIDSJobProcessorInfoObject <- jsonlite::fromJSON(ComDayCqDamIdsImplIDSJobProcessorInfoJson)
      if (!is.null(ComDayCqDamIdsImplIDSJobProcessorInfoObject$`pid`)) {
        self$`pid` <- ComDayCqDamIdsImplIDSJobProcessorInfoObject$`pid`
      }
      if (!is.null(ComDayCqDamIdsImplIDSJobProcessorInfoObject$`title`)) {
        self$`title` <- ComDayCqDamIdsImplIDSJobProcessorInfoObject$`title`
      }
      if (!is.null(ComDayCqDamIdsImplIDSJobProcessorInfoObject$`description`)) {
        self$`description` <- ComDayCqDamIdsImplIDSJobProcessorInfoObject$`description`
      }
      if (!is.null(ComDayCqDamIdsImplIDSJobProcessorInfoObject$`properties`)) {
        propertiesObject <- ComDayCqDamIdsImplIDSJobProcessorProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamIdsImplIDSJobProcessorInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqDamIdsImplIDSJobProcessorInfoJson) {
      ComDayCqDamIdsImplIDSJobProcessorInfoObject <- jsonlite::fromJSON(ComDayCqDamIdsImplIDSJobProcessorInfoJson)
      self$`pid` <- ComDayCqDamIdsImplIDSJobProcessorInfoObject$`pid`
      self$`title` <- ComDayCqDamIdsImplIDSJobProcessorInfoObject$`title`
      self$`description` <- ComDayCqDamIdsImplIDSJobProcessorInfoObject$`description`
      ComDayCqDamIdsImplIDSJobProcessorPropertiesObject <- ComDayCqDamIdsImplIDSJobProcessorProperties$new()
      self$`properties` <- ComDayCqDamIdsImplIDSJobProcessorPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamIdsImplIDSJobProcessorInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
