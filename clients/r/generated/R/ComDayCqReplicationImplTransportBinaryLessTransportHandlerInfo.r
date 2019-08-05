# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfo <- R6::R6Class(
  'ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfo',
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
      ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject
    },
    fromJSON = function(ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoJson) {
      ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject <- jsonlite::fromJSON(ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoJson)
      if (!is.null(ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject$`pid`)) {
        self$`pid` <- ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject$`pid`
      }
      if (!is.null(ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject$`title`)) {
        self$`title` <- ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject$`title`
      }
      if (!is.null(ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject$`description`)) {
        self$`description` <- ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject$`description`
      }
      if (!is.null(ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject$`properties`)) {
        propertiesObject <- ComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoJson) {
      ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject <- jsonlite::fromJSON(ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoJson)
      self$`pid` <- ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject$`pid`
      self$`title` <- ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject$`title`
      self$`description` <- ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject$`description`
      ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesObject <- ComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties$new()
      self$`properties` <- ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqReplicationImplTransportBinaryLessTransportHandlerInfoObject$properties, auto_unbox = TRUE))
    }
  )
)