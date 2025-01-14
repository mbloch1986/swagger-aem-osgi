# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmFoundationImplPageRedirectServletInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmFoundationImplPageRedirectServletInfo <- R6::R6Class(
  'ComDayCqWcmFoundationImplPageRedirectServletInfo',
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
      ComDayCqWcmFoundationImplPageRedirectServletInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqWcmFoundationImplPageRedirectServletInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqWcmFoundationImplPageRedirectServletInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqWcmFoundationImplPageRedirectServletInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqWcmFoundationImplPageRedirectServletInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqWcmFoundationImplPageRedirectServletInfoObject
    },
    fromJSON = function(ComDayCqWcmFoundationImplPageRedirectServletInfoJson) {
      ComDayCqWcmFoundationImplPageRedirectServletInfoObject <- jsonlite::fromJSON(ComDayCqWcmFoundationImplPageRedirectServletInfoJson)
      if (!is.null(ComDayCqWcmFoundationImplPageRedirectServletInfoObject$`pid`)) {
        self$`pid` <- ComDayCqWcmFoundationImplPageRedirectServletInfoObject$`pid`
      }
      if (!is.null(ComDayCqWcmFoundationImplPageRedirectServletInfoObject$`title`)) {
        self$`title` <- ComDayCqWcmFoundationImplPageRedirectServletInfoObject$`title`
      }
      if (!is.null(ComDayCqWcmFoundationImplPageRedirectServletInfoObject$`description`)) {
        self$`description` <- ComDayCqWcmFoundationImplPageRedirectServletInfoObject$`description`
      }
      if (!is.null(ComDayCqWcmFoundationImplPageRedirectServletInfoObject$`properties`)) {
        propertiesObject <- ComDayCqWcmFoundationImplPageRedirectServletProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmFoundationImplPageRedirectServletInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqWcmFoundationImplPageRedirectServletInfoJson) {
      ComDayCqWcmFoundationImplPageRedirectServletInfoObject <- jsonlite::fromJSON(ComDayCqWcmFoundationImplPageRedirectServletInfoJson)
      self$`pid` <- ComDayCqWcmFoundationImplPageRedirectServletInfoObject$`pid`
      self$`title` <- ComDayCqWcmFoundationImplPageRedirectServletInfoObject$`title`
      self$`description` <- ComDayCqWcmFoundationImplPageRedirectServletInfoObject$`description`
      ComDayCqWcmFoundationImplPageRedirectServletPropertiesObject <- ComDayCqWcmFoundationImplPageRedirectServletProperties$new()
      self$`properties` <- ComDayCqWcmFoundationImplPageRedirectServletPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmFoundationImplPageRedirectServletInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
