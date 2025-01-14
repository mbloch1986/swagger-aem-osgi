# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties Class
#'
#' @field hc.tags 
#' @field disk.space.warn.threshold 
#' @field disk.space.error.threshold 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties <- R6::R6Class(
  'ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties',
  public = list(
    `hc.tags` = NULL,
    `disk.space.warn.threshold` = NULL,
    `disk.space.error.threshold` = NULL,
    initialize = function(`hc.tags`, `disk.space.warn.threshold`, `disk.space.error.threshold`){
      if (!missing(`hc.tags`)) {
        stopifnot(R6::is.R6(`hc.tags`))
        self$`hc.tags` <- `hc.tags`
      }
      if (!missing(`disk.space.warn.threshold`)) {
        stopifnot(R6::is.R6(`disk.space.warn.threshold`))
        self$`disk.space.warn.threshold` <- `disk.space.warn.threshold`
      }
      if (!missing(`disk.space.error.threshold`)) {
        stopifnot(R6::is.R6(`disk.space.error.threshold`))
        self$`disk.space.error.threshold` <- `disk.space.error.threshold`
      }
    },
    toJSON = function() {
      ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesObject <- list()
      if (!is.null(self$`hc.tags`)) {
        ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesObject[['hc.tags']] <- self$`hc.tags`$toJSON()
      }
      if (!is.null(self$`disk.space.warn.threshold`)) {
        ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesObject[['disk.space.warn.threshold']] <- self$`disk.space.warn.threshold`$toJSON()
      }
      if (!is.null(self$`disk.space.error.threshold`)) {
        ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesObject[['disk.space.error.threshold']] <- self$`disk.space.error.threshold`$toJSON()
      }

      ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesJson) {
      ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesJson)
      if (!is.null(ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesObject$`hc.tags`)) {
        hc.tagsObject <- ConfigNodePropertyArray$new()
        hc.tagsObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesObject$hc.tags, auto_unbox = TRUE))
        self$`hc.tags` <- hc.tagsObject
      }
      if (!is.null(ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesObject$`disk.space.warn.threshold`)) {
        disk.space.warn.thresholdObject <- ConfigNodePropertyInteger$new()
        disk.space.warn.thresholdObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesObject$disk.space.warn.threshold, auto_unbox = TRUE))
        self$`disk.space.warn.threshold` <- disk.space.warn.thresholdObject
      }
      if (!is.null(ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesObject$`disk.space.error.threshold`)) {
        disk.space.error.thresholdObject <- ConfigNodePropertyInteger$new()
        disk.space.error.thresholdObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesObject$disk.space.error.threshold, auto_unbox = TRUE))
        self$`disk.space.error.threshold` <- disk.space.error.thresholdObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "hc.tags": %s,
           "disk.space.warn.threshold": %s,
           "disk.space.error.threshold": %s
        }',
        self$`hc.tags`$toJSON(),
        self$`disk.space.warn.threshold`$toJSON(),
        self$`disk.space.error.threshold`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesJson) {
      ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`hc.tags` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesObject$hc.tags, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`disk.space.warn.threshold` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesObject$disk.space.warn.threshold, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`disk.space.error.threshold` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckPropertiesObject$disk.space.error.threshold, auto_unbox = TRUE))
    }
  )
)
