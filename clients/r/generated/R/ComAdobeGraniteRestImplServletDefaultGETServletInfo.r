# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteRestImplServletDefaultGETServletInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteRestImplServletDefaultGETServletInfo <- R6::R6Class(
  'ComAdobeGraniteRestImplServletDefaultGETServletInfo',
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
      ComAdobeGraniteRestImplServletDefaultGETServletInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteRestImplServletDefaultGETServletInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteRestImplServletDefaultGETServletInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteRestImplServletDefaultGETServletInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteRestImplServletDefaultGETServletInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteRestImplServletDefaultGETServletInfoObject
    },
    fromJSON = function(ComAdobeGraniteRestImplServletDefaultGETServletInfoJson) {
      ComAdobeGraniteRestImplServletDefaultGETServletInfoObject <- jsonlite::fromJSON(ComAdobeGraniteRestImplServletDefaultGETServletInfoJson)
      if (!is.null(ComAdobeGraniteRestImplServletDefaultGETServletInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteRestImplServletDefaultGETServletInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteRestImplServletDefaultGETServletInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteRestImplServletDefaultGETServletInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteRestImplServletDefaultGETServletInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteRestImplServletDefaultGETServletInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteRestImplServletDefaultGETServletInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteRestImplServletDefaultGETServletProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRestImplServletDefaultGETServletInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteRestImplServletDefaultGETServletInfoJson) {
      ComAdobeGraniteRestImplServletDefaultGETServletInfoObject <- jsonlite::fromJSON(ComAdobeGraniteRestImplServletDefaultGETServletInfoJson)
      self$`pid` <- ComAdobeGraniteRestImplServletDefaultGETServletInfoObject$`pid`
      self$`title` <- ComAdobeGraniteRestImplServletDefaultGETServletInfoObject$`title`
      self$`description` <- ComAdobeGraniteRestImplServletDefaultGETServletInfoObject$`description`
      ComAdobeGraniteRestImplServletDefaultGETServletPropertiesObject <- ComAdobeGraniteRestImplServletDefaultGETServletProperties$new()
      self$`properties` <- ComAdobeGraniteRestImplServletDefaultGETServletPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRestImplServletDefaultGETServletInfoObject$properties, auto_unbox = TRUE))
    }
  )
)