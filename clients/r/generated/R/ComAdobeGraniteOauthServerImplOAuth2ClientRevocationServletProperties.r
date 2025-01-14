# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties Class
#'
#' @field oauth.client.revocation.active 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties <- R6::R6Class(
  'ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties',
  public = list(
    `oauth.client.revocation.active` = NULL,
    initialize = function(`oauth.client.revocation.active`){
      if (!missing(`oauth.client.revocation.active`)) {
        stopifnot(R6::is.R6(`oauth.client.revocation.active`))
        self$`oauth.client.revocation.active` <- `oauth.client.revocation.active`
      }
    },
    toJSON = function() {
      ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletPropertiesObject <- list()
      if (!is.null(self$`oauth.client.revocation.active`)) {
        ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletPropertiesObject[['oauth.client.revocation.active']] <- self$`oauth.client.revocation.active`$toJSON()
      }

      ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletPropertiesJson) {
      ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletPropertiesJson)
      if (!is.null(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletPropertiesObject$`oauth.client.revocation.active`)) {
        oauth.client.revocation.activeObject <- ConfigNodePropertyBoolean$new()
        oauth.client.revocation.activeObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletPropertiesObject$oauth.client.revocation.active, auto_unbox = TRUE))
        self$`oauth.client.revocation.active` <- oauth.client.revocation.activeObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "oauth.client.revocation.active": %s
        }',
        self$`oauth.client.revocation.active`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletPropertiesJson) {
      ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletPropertiesJson)
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`oauth.client.revocation.active` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletPropertiesObject$oauth.client.revocation.active, auto_unbox = TRUE))
    }
  )
)
