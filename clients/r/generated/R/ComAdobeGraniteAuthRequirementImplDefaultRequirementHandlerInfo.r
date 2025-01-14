# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfo <- R6::R6Class(
  'ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfo',
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
      ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject
    },
    fromJSON = function(ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoJson) {
      ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject <- jsonlite::fromJSON(ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoJson)
      if (!is.null(ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoJson) {
      ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject <- jsonlite::fromJSON(ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoJson)
      self$`pid` <- ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject$`pid`
      self$`title` <- ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject$`title`
      self$`description` <- ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject$`description`
      ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerPropertiesObject <- ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerProperties$new()
      self$`properties` <- ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthRequirementImplDefaultRequirementHandlerInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
