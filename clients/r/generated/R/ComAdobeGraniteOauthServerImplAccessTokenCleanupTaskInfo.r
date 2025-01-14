# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfo <- R6::R6Class(
  'ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfo',
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
      ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject
    },
    fromJSON = function(ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoJson) {
      ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject <- jsonlite::fromJSON(ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoJson)
      if (!is.null(ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoJson) {
      ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject <- jsonlite::fromJSON(ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoJson)
      self$`pid` <- ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject$`pid`
      self$`title` <- ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject$`title`
      self$`description` <- ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject$`description`
      ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskPropertiesObject <- ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskProperties$new()
      self$`properties` <- ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteOauthServerImplAccessTokenCleanupTaskInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
