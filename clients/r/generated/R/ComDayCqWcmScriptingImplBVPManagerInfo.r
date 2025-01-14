# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmScriptingImplBVPManagerInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmScriptingImplBVPManagerInfo <- R6::R6Class(
  'ComDayCqWcmScriptingImplBVPManagerInfo',
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
      ComDayCqWcmScriptingImplBVPManagerInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqWcmScriptingImplBVPManagerInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqWcmScriptingImplBVPManagerInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqWcmScriptingImplBVPManagerInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqWcmScriptingImplBVPManagerInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqWcmScriptingImplBVPManagerInfoObject
    },
    fromJSON = function(ComDayCqWcmScriptingImplBVPManagerInfoJson) {
      ComDayCqWcmScriptingImplBVPManagerInfoObject <- jsonlite::fromJSON(ComDayCqWcmScriptingImplBVPManagerInfoJson)
      if (!is.null(ComDayCqWcmScriptingImplBVPManagerInfoObject$`pid`)) {
        self$`pid` <- ComDayCqWcmScriptingImplBVPManagerInfoObject$`pid`
      }
      if (!is.null(ComDayCqWcmScriptingImplBVPManagerInfoObject$`title`)) {
        self$`title` <- ComDayCqWcmScriptingImplBVPManagerInfoObject$`title`
      }
      if (!is.null(ComDayCqWcmScriptingImplBVPManagerInfoObject$`description`)) {
        self$`description` <- ComDayCqWcmScriptingImplBVPManagerInfoObject$`description`
      }
      if (!is.null(ComDayCqWcmScriptingImplBVPManagerInfoObject$`properties`)) {
        propertiesObject <- ComDayCqWcmScriptingImplBVPManagerProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmScriptingImplBVPManagerInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqWcmScriptingImplBVPManagerInfoJson) {
      ComDayCqWcmScriptingImplBVPManagerInfoObject <- jsonlite::fromJSON(ComDayCqWcmScriptingImplBVPManagerInfoJson)
      self$`pid` <- ComDayCqWcmScriptingImplBVPManagerInfoObject$`pid`
      self$`title` <- ComDayCqWcmScriptingImplBVPManagerInfoObject$`title`
      self$`description` <- ComDayCqWcmScriptingImplBVPManagerInfoObject$`description`
      ComDayCqWcmScriptingImplBVPManagerPropertiesObject <- ComDayCqWcmScriptingImplBVPManagerProperties$new()
      self$`properties` <- ComDayCqWcmScriptingImplBVPManagerPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmScriptingImplBVPManagerInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
