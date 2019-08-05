# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo <- R6::R6Class(
  'ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfo',
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
      ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject
    },
    fromJSON = function(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoJson) {
      ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject <- jsonlite::fromJSON(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoJson)
      if (!is.null(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoJson) {
      ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject <- jsonlite::fromJSON(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoJson)
      self$`pid` <- ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject$`pid`
      self$`title` <- ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject$`title`
      self$`description` <- ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject$`description`
      ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletPropertiesObject <- ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties$new()
      self$`properties` <- ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletInfoObject$properties, auto_unbox = TRUE))
    }
  )
)