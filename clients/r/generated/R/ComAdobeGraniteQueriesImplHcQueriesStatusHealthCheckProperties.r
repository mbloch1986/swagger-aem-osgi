# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckProperties Class
#'
#' @field hc.tags 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckProperties <- R6::R6Class(
  'ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckProperties',
  public = list(
    `hc.tags` = NULL,
    initialize = function(`hc.tags`){
      if (!missing(`hc.tags`)) {
        stopifnot(R6::is.R6(`hc.tags`))
        self$`hc.tags` <- `hc.tags`
      }
    },
    toJSON = function() {
      ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckPropertiesObject <- list()
      if (!is.null(self$`hc.tags`)) {
        ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckPropertiesObject[['hc.tags']] <- self$`hc.tags`$toJSON()
      }

      ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckPropertiesJson) {
      ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckPropertiesJson)
      if (!is.null(ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckPropertiesObject$`hc.tags`)) {
        hc.tagsObject <- ConfigNodePropertyArray$new()
        hc.tagsObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckPropertiesObject$hc.tags, auto_unbox = TRUE))
        self$`hc.tags` <- hc.tagsObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "hc.tags": %s
        }',
        self$`hc.tags`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckPropertiesJson) {
      ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`hc.tags` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteQueriesImplHcQueriesStatusHealthCheckPropertiesObject$hc.tags, auto_unbox = TRUE))
    }
  )
)
