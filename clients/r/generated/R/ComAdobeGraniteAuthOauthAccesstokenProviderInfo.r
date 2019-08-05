# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteAuthOauthAccesstokenProviderInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteAuthOauthAccesstokenProviderInfo <- R6::R6Class(
  'ComAdobeGraniteAuthOauthAccesstokenProviderInfo',
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
      ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject
    },
    fromJSON = function(ComAdobeGraniteAuthOauthAccesstokenProviderInfoJson) {
      ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject <- jsonlite::fromJSON(ComAdobeGraniteAuthOauthAccesstokenProviderInfoJson)
      if (!is.null(ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteAuthOauthAccesstokenProviderProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteAuthOauthAccesstokenProviderInfoJson) {
      ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject <- jsonlite::fromJSON(ComAdobeGraniteAuthOauthAccesstokenProviderInfoJson)
      self$`pid` <- ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject$`pid`
      self$`title` <- ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject$`title`
      self$`description` <- ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject$`description`
      ComAdobeGraniteAuthOauthAccesstokenProviderPropertiesObject <- ComAdobeGraniteAuthOauthAccesstokenProviderProperties$new()
      self$`properties` <- ComAdobeGraniteAuthOauthAccesstokenProviderPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthOauthAccesstokenProviderInfoObject$properties, auto_unbox = TRUE))
    }
  )
)