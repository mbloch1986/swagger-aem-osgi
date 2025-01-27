# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfo <- R6::R6Class(
  'ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfo',
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
      ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject
    },
    fromJSON = function(ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoJson) {
      ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject <- jsonlite::fromJSON(ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoJson)
      if (!is.null(ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteFragsImplCheckHttpHeaderFlagProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoJson) {
      ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject <- jsonlite::fromJSON(ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoJson)
      self$`pid` <- ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject$`pid`
      self$`title` <- ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject$`title`
      self$`description` <- ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject$`description`
      ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject <- ComAdobeGraniteFragsImplCheckHttpHeaderFlagProperties$new()
      self$`properties` <- ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteFragsImplCheckHttpHeaderFlagInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
