# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqMcmImplMCMConfigurationInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqMcmImplMCMConfigurationInfo <- R6::R6Class(
  'ComDayCqMcmImplMCMConfigurationInfo',
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
      ComDayCqMcmImplMCMConfigurationInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqMcmImplMCMConfigurationInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqMcmImplMCMConfigurationInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqMcmImplMCMConfigurationInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqMcmImplMCMConfigurationInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqMcmImplMCMConfigurationInfoObject
    },
    fromJSON = function(ComDayCqMcmImplMCMConfigurationInfoJson) {
      ComDayCqMcmImplMCMConfigurationInfoObject <- jsonlite::fromJSON(ComDayCqMcmImplMCMConfigurationInfoJson)
      if (!is.null(ComDayCqMcmImplMCMConfigurationInfoObject$`pid`)) {
        self$`pid` <- ComDayCqMcmImplMCMConfigurationInfoObject$`pid`
      }
      if (!is.null(ComDayCqMcmImplMCMConfigurationInfoObject$`title`)) {
        self$`title` <- ComDayCqMcmImplMCMConfigurationInfoObject$`title`
      }
      if (!is.null(ComDayCqMcmImplMCMConfigurationInfoObject$`description`)) {
        self$`description` <- ComDayCqMcmImplMCMConfigurationInfoObject$`description`
      }
      if (!is.null(ComDayCqMcmImplMCMConfigurationInfoObject$`properties`)) {
        propertiesObject <- ComDayCqMcmImplMCMConfigurationProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqMcmImplMCMConfigurationInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqMcmImplMCMConfigurationInfoJson) {
      ComDayCqMcmImplMCMConfigurationInfoObject <- jsonlite::fromJSON(ComDayCqMcmImplMCMConfigurationInfoJson)
      self$`pid` <- ComDayCqMcmImplMCMConfigurationInfoObject$`pid`
      self$`title` <- ComDayCqMcmImplMCMConfigurationInfoObject$`title`
      self$`description` <- ComDayCqMcmImplMCMConfigurationInfoObject$`description`
      ComDayCqMcmImplMCMConfigurationPropertiesObject <- ComDayCqMcmImplMCMConfigurationProperties$new()
      self$`properties` <- ComDayCqMcmImplMCMConfigurationPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqMcmImplMCMConfigurationInfoObject$properties, auto_unbox = TRUE))
    }
  )
)