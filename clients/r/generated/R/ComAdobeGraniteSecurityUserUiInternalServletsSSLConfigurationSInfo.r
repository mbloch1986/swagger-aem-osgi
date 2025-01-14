# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfo <- R6::R6Class(
  'ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfo',
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
      ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject
    },
    fromJSON = function(ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoJson) {
      ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject <- jsonlite::fromJSON(ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoJson)
      if (!is.null(ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoJson) {
      ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject <- jsonlite::fromJSON(ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoJson)
      self$`pid` <- ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject$`pid`
      self$`title` <- ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject$`title`
      self$`description` <- ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject$`description`
      ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSPropertiesObject <- ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSProperties$new()
      self$`properties` <- ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
