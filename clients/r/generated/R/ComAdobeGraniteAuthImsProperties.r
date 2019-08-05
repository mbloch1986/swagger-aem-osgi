# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteAuthImsProperties Class
#'
#' @field configid 
#' @field scope 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteAuthImsProperties <- R6::R6Class(
  'ComAdobeGraniteAuthImsProperties',
  public = list(
    `configid` = NULL,
    `scope` = NULL,
    initialize = function(`configid`, `scope`){
      if (!missing(`configid`)) {
        stopifnot(R6::is.R6(`configid`))
        self$`configid` <- `configid`
      }
      if (!missing(`scope`)) {
        stopifnot(R6::is.R6(`scope`))
        self$`scope` <- `scope`
      }
    },
    toJSON = function() {
      ComAdobeGraniteAuthImsPropertiesObject <- list()
      if (!is.null(self$`configid`)) {
        ComAdobeGraniteAuthImsPropertiesObject[['configid']] <- self$`configid`$toJSON()
      }
      if (!is.null(self$`scope`)) {
        ComAdobeGraniteAuthImsPropertiesObject[['scope']] <- self$`scope`$toJSON()
      }

      ComAdobeGraniteAuthImsPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteAuthImsPropertiesJson) {
      ComAdobeGraniteAuthImsPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteAuthImsPropertiesJson)
      if (!is.null(ComAdobeGraniteAuthImsPropertiesObject$`configid`)) {
        configidObject <- ConfigNodePropertyString$new()
        configidObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthImsPropertiesObject$configid, auto_unbox = TRUE))
        self$`configid` <- configidObject
      }
      if (!is.null(ComAdobeGraniteAuthImsPropertiesObject$`scope`)) {
        scopeObject <- ConfigNodePropertyString$new()
        scopeObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthImsPropertiesObject$scope, auto_unbox = TRUE))
        self$`scope` <- scopeObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "configid": %s,
           "scope": %s
        }',
        self$`configid`$toJSON(),
        self$`scope`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteAuthImsPropertiesJson) {
      ComAdobeGraniteAuthImsPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteAuthImsPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`configid` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthImsPropertiesObject$configid, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`scope` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthImsPropertiesObject$scope, auto_unbox = TRUE))
    }
  )
)