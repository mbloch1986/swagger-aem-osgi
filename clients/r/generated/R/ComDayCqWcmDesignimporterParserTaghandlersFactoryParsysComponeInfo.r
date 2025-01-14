# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfo <- R6::R6Class(
  'ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfo',
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
      ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject
    },
    fromJSON = function(ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoJson) {
      ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject <- jsonlite::fromJSON(ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoJson)
      if (!is.null(ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject$`pid`)) {
        self$`pid` <- ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject$`pid`
      }
      if (!is.null(ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject$`title`)) {
        self$`title` <- ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject$`title`
      }
      if (!is.null(ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject$`description`)) {
        self$`description` <- ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject$`description`
      }
      if (!is.null(ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject$`properties`)) {
        propertiesObject <- ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoJson) {
      ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject <- jsonlite::fromJSON(ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoJson)
      self$`pid` <- ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject$`pid`
      self$`title` <- ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject$`title`
      self$`description` <- ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject$`description`
      ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponePropertiesObject <- ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeProperties$new()
      self$`properties` <- ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponePropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmDesignimporterParserTaghandlersFactoryParsysComponeInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
