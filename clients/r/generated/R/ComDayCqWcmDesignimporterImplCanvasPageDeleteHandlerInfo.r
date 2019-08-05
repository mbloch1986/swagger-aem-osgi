# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfo <- R6::R6Class(
  'ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfo',
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
      ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject
    },
    fromJSON = function(ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoJson) {
      ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject <- jsonlite::fromJSON(ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoJson)
      if (!is.null(ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject$`pid`)) {
        self$`pid` <- ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject$`pid`
      }
      if (!is.null(ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject$`title`)) {
        self$`title` <- ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject$`title`
      }
      if (!is.null(ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject$`description`)) {
        self$`description` <- ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject$`description`
      }
      if (!is.null(ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject$`properties`)) {
        propertiesObject <- ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoJson) {
      ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject <- jsonlite::fromJSON(ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoJson)
      self$`pid` <- ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject$`pid`
      self$`title` <- ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject$`title`
      self$`description` <- ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject$`description`
      ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerPropertiesObject <- ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties$new()
      self$`properties` <- ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerInfoObject$properties, auto_unbox = TRUE))
    }
  )
)