# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteFragsImplCheckHttpHeaderFlagProperties Class
#'
#' @field feature.name 
#' @field feature.description 
#' @field http.header.name 
#' @field http.header.valuepattern 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteFragsImplCheckHttpHeaderFlagProperties <- R6::R6Class(
  'ComAdobeGraniteFragsImplCheckHttpHeaderFlagProperties',
  public = list(
    `feature.name` = NULL,
    `feature.description` = NULL,
    `http.header.name` = NULL,
    `http.header.valuepattern` = NULL,
    initialize = function(`feature.name`, `feature.description`, `http.header.name`, `http.header.valuepattern`){
      if (!missing(`feature.name`)) {
        stopifnot(R6::is.R6(`feature.name`))
        self$`feature.name` <- `feature.name`
      }
      if (!missing(`feature.description`)) {
        stopifnot(R6::is.R6(`feature.description`))
        self$`feature.description` <- `feature.description`
      }
      if (!missing(`http.header.name`)) {
        stopifnot(R6::is.R6(`http.header.name`))
        self$`http.header.name` <- `http.header.name`
      }
      if (!missing(`http.header.valuepattern`)) {
        stopifnot(R6::is.R6(`http.header.valuepattern`))
        self$`http.header.valuepattern` <- `http.header.valuepattern`
      }
    },
    toJSON = function() {
      ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject <- list()
      if (!is.null(self$`feature.name`)) {
        ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject[['feature.name']] <- self$`feature.name`$toJSON()
      }
      if (!is.null(self$`feature.description`)) {
        ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject[['feature.description']] <- self$`feature.description`$toJSON()
      }
      if (!is.null(self$`http.header.name`)) {
        ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject[['http.header.name']] <- self$`http.header.name`$toJSON()
      }
      if (!is.null(self$`http.header.valuepattern`)) {
        ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject[['http.header.valuepattern']] <- self$`http.header.valuepattern`$toJSON()
      }

      ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesJson) {
      ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesJson)
      if (!is.null(ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject$`feature.name`)) {
        feature.nameObject <- ConfigNodePropertyString$new()
        feature.nameObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject$feature.name, auto_unbox = TRUE))
        self$`feature.name` <- feature.nameObject
      }
      if (!is.null(ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject$`feature.description`)) {
        feature.descriptionObject <- ConfigNodePropertyString$new()
        feature.descriptionObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject$feature.description, auto_unbox = TRUE))
        self$`feature.description` <- feature.descriptionObject
      }
      if (!is.null(ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject$`http.header.name`)) {
        http.header.nameObject <- ConfigNodePropertyString$new()
        http.header.nameObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject$http.header.name, auto_unbox = TRUE))
        self$`http.header.name` <- http.header.nameObject
      }
      if (!is.null(ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject$`http.header.valuepattern`)) {
        http.header.valuepatternObject <- ConfigNodePropertyString$new()
        http.header.valuepatternObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject$http.header.valuepattern, auto_unbox = TRUE))
        self$`http.header.valuepattern` <- http.header.valuepatternObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "feature.name": %s,
           "feature.description": %s,
           "http.header.name": %s,
           "http.header.valuepattern": %s
        }',
        self$`feature.name`$toJSON(),
        self$`feature.description`$toJSON(),
        self$`http.header.name`$toJSON(),
        self$`http.header.valuepattern`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesJson) {
      ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`feature.name` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject$feature.name, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`feature.description` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject$feature.description, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`http.header.name` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject$http.header.name, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`http.header.valuepattern` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteFragsImplCheckHttpHeaderFlagPropertiesObject$http.header.valuepattern, auto_unbox = TRUE))
    }
  )
)