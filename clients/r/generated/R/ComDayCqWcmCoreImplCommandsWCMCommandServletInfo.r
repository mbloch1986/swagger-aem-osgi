# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmCoreImplCommandsWCMCommandServletInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmCoreImplCommandsWCMCommandServletInfo <- R6::R6Class(
  'ComDayCqWcmCoreImplCommandsWCMCommandServletInfo',
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
      ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject
    },
    fromJSON = function(ComDayCqWcmCoreImplCommandsWCMCommandServletInfoJson) {
      ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject <- jsonlite::fromJSON(ComDayCqWcmCoreImplCommandsWCMCommandServletInfoJson)
      if (!is.null(ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject$`pid`)) {
        self$`pid` <- ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject$`pid`
      }
      if (!is.null(ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject$`title`)) {
        self$`title` <- ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject$`title`
      }
      if (!is.null(ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject$`description`)) {
        self$`description` <- ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject$`description`
      }
      if (!is.null(ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject$`properties`)) {
        propertiesObject <- ComDayCqWcmCoreImplCommandsWCMCommandServletProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqWcmCoreImplCommandsWCMCommandServletInfoJson) {
      ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject <- jsonlite::fromJSON(ComDayCqWcmCoreImplCommandsWCMCommandServletInfoJson)
      self$`pid` <- ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject$`pid`
      self$`title` <- ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject$`title`
      self$`description` <- ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject$`description`
      ComDayCqWcmCoreImplCommandsWCMCommandServletPropertiesObject <- ComDayCqWcmCoreImplCommandsWCMCommandServletProperties$new()
      self$`properties` <- ComDayCqWcmCoreImplCommandsWCMCommandServletPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplCommandsWCMCommandServletInfoObject$properties, auto_unbox = TRUE))
    }
  )
)