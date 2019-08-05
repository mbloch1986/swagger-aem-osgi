# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmFoundationFormsImplMailServletInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmFoundationFormsImplMailServletInfo <- R6::R6Class(
  'ComDayCqWcmFoundationFormsImplMailServletInfo',
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
      ComDayCqWcmFoundationFormsImplMailServletInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqWcmFoundationFormsImplMailServletInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqWcmFoundationFormsImplMailServletInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqWcmFoundationFormsImplMailServletInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqWcmFoundationFormsImplMailServletInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqWcmFoundationFormsImplMailServletInfoObject
    },
    fromJSON = function(ComDayCqWcmFoundationFormsImplMailServletInfoJson) {
      ComDayCqWcmFoundationFormsImplMailServletInfoObject <- jsonlite::fromJSON(ComDayCqWcmFoundationFormsImplMailServletInfoJson)
      if (!is.null(ComDayCqWcmFoundationFormsImplMailServletInfoObject$`pid`)) {
        self$`pid` <- ComDayCqWcmFoundationFormsImplMailServletInfoObject$`pid`
      }
      if (!is.null(ComDayCqWcmFoundationFormsImplMailServletInfoObject$`title`)) {
        self$`title` <- ComDayCqWcmFoundationFormsImplMailServletInfoObject$`title`
      }
      if (!is.null(ComDayCqWcmFoundationFormsImplMailServletInfoObject$`description`)) {
        self$`description` <- ComDayCqWcmFoundationFormsImplMailServletInfoObject$`description`
      }
      if (!is.null(ComDayCqWcmFoundationFormsImplMailServletInfoObject$`properties`)) {
        propertiesObject <- ComDayCqWcmFoundationFormsImplMailServletProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmFoundationFormsImplMailServletInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqWcmFoundationFormsImplMailServletInfoJson) {
      ComDayCqWcmFoundationFormsImplMailServletInfoObject <- jsonlite::fromJSON(ComDayCqWcmFoundationFormsImplMailServletInfoJson)
      self$`pid` <- ComDayCqWcmFoundationFormsImplMailServletInfoObject$`pid`
      self$`title` <- ComDayCqWcmFoundationFormsImplMailServletInfoObject$`title`
      self$`description` <- ComDayCqWcmFoundationFormsImplMailServletInfoObject$`description`
      ComDayCqWcmFoundationFormsImplMailServletPropertiesObject <- ComDayCqWcmFoundationFormsImplMailServletProperties$new()
      self$`properties` <- ComDayCqWcmFoundationFormsImplMailServletPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmFoundationFormsImplMailServletInfoObject$properties, auto_unbox = TRUE))
    }
  )
)