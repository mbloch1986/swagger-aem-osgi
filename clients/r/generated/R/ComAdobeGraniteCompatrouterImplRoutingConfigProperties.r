# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteCompatrouterImplRoutingConfigProperties Class
#'
#' @field id 
#' @field compatPath 
#' @field newPath 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteCompatrouterImplRoutingConfigProperties <- R6::R6Class(
  'ComAdobeGraniteCompatrouterImplRoutingConfigProperties',
  public = list(
    `id` = NULL,
    `compatPath` = NULL,
    `newPath` = NULL,
    initialize = function(`id`, `compatPath`, `newPath`){
      if (!missing(`id`)) {
        stopifnot(R6::is.R6(`id`))
        self$`id` <- `id`
      }
      if (!missing(`compatPath`)) {
        stopifnot(R6::is.R6(`compatPath`))
        self$`compatPath` <- `compatPath`
      }
      if (!missing(`newPath`)) {
        stopifnot(R6::is.R6(`newPath`))
        self$`newPath` <- `newPath`
      }
    },
    toJSON = function() {
      ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesObject <- list()
      if (!is.null(self$`id`)) {
        ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesObject[['id']] <- self$`id`$toJSON()
      }
      if (!is.null(self$`compatPath`)) {
        ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesObject[['compatPath']] <- self$`compatPath`$toJSON()
      }
      if (!is.null(self$`newPath`)) {
        ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesObject[['newPath']] <- self$`newPath`$toJSON()
      }

      ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesJson) {
      ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesJson)
      if (!is.null(ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesObject$`id`)) {
        idObject <- ConfigNodePropertyString$new()
        idObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesObject$id, auto_unbox = TRUE))
        self$`id` <- idObject
      }
      if (!is.null(ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesObject$`compatPath`)) {
        compatPathObject <- ConfigNodePropertyString$new()
        compatPathObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesObject$compatPath, auto_unbox = TRUE))
        self$`compatPath` <- compatPathObject
      }
      if (!is.null(ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesObject$`newPath`)) {
        newPathObject <- ConfigNodePropertyString$new()
        newPathObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesObject$newPath, auto_unbox = TRUE))
        self$`newPath` <- newPathObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "id": %s,
           "compatPath": %s,
           "newPath": %s
        }',
        self$`id`$toJSON(),
        self$`compatPath`$toJSON(),
        self$`newPath`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesJson) {
      ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`id` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesObject$id, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`compatPath` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesObject$compatPath, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`newPath` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesObject$newPath, auto_unbox = TRUE))
    }
  )
)
