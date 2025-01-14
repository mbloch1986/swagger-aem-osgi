# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties Class
#'
#' @field hc.tags 
#' @field minimum.code.cache.size 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties <- R6::R6Class(
  'ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties',
  public = list(
    `hc.tags` = NULL,
    `minimum.code.cache.size` = NULL,
    initialize = function(`hc.tags`, `minimum.code.cache.size`){
      if (!missing(`hc.tags`)) {
        stopifnot(R6::is.R6(`hc.tags`))
        self$`hc.tags` <- `hc.tags`
      }
      if (!missing(`minimum.code.cache.size`)) {
        stopifnot(R6::is.R6(`minimum.code.cache.size`))
        self$`minimum.code.cache.size` <- `minimum.code.cache.size`
      }
    },
    toJSON = function() {
      ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckPropertiesObject <- list()
      if (!is.null(self$`hc.tags`)) {
        ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckPropertiesObject[['hc.tags']] <- self$`hc.tags`$toJSON()
      }
      if (!is.null(self$`minimum.code.cache.size`)) {
        ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckPropertiesObject[['minimum.code.cache.size']] <- self$`minimum.code.cache.size`$toJSON()
      }

      ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckPropertiesJson) {
      ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckPropertiesJson)
      if (!is.null(ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckPropertiesObject$`hc.tags`)) {
        hc.tagsObject <- ConfigNodePropertyArray$new()
        hc.tagsObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckPropertiesObject$hc.tags, auto_unbox = TRUE))
        self$`hc.tags` <- hc.tagsObject
      }
      if (!is.null(ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckPropertiesObject$`minimum.code.cache.size`)) {
        minimum.code.cache.sizeObject <- ConfigNodePropertyInteger$new()
        minimum.code.cache.sizeObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckPropertiesObject$minimum.code.cache.size, auto_unbox = TRUE))
        self$`minimum.code.cache.size` <- minimum.code.cache.sizeObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "hc.tags": %s,
           "minimum.code.cache.size": %s
        }',
        self$`hc.tags`$toJSON(),
        self$`minimum.code.cache.size`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckPropertiesJson) {
      ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`hc.tags` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckPropertiesObject$hc.tags, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`minimum.code.cache.size` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteBundlesHcImplCodeCacheHealthCheckPropertiesObject$minimum.code.cache.size, auto_unbox = TRUE))
    }
  )
)
