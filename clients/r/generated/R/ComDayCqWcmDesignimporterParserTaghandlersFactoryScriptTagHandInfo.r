# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfo <- R6::R6Class(
  'ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfo',
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
      ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject
    },
    fromJSON = function(ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoJson) {
      ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject <- jsonlite::fromJSON(ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoJson)
      if (!is.null(ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject$`pid`)) {
        self$`pid` <- ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject$`pid`
      }
      if (!is.null(ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject$`title`)) {
        self$`title` <- ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject$`title`
      }
      if (!is.null(ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject$`description`)) {
        self$`description` <- ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject$`description`
      }
      if (!is.null(ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject$`properties`)) {
        propertiesObject <- ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoJson) {
      ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject <- jsonlite::fromJSON(ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoJson)
      self$`pid` <- ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject$`pid`
      self$`title` <- ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject$`title`
      self$`description` <- ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject$`description`
      ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandPropertiesObject <- ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandProperties$new()
      self$`properties` <- ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmDesignimporterParserTaghandlersFactoryScriptTagHandInfoObject$properties, auto_unbox = TRUE))
    }
  )
)