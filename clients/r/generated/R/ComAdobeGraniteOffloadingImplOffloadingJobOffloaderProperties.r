# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties Class
#'
#' @field offloading.offloader.enabled 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties <- R6::R6Class(
  'ComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties',
  public = list(
    `offloading.offloader.enabled` = NULL,
    initialize = function(`offloading.offloader.enabled`){
      if (!missing(`offloading.offloader.enabled`)) {
        stopifnot(R6::is.R6(`offloading.offloader.enabled`))
        self$`offloading.offloader.enabled` <- `offloading.offloader.enabled`
      }
    },
    toJSON = function() {
      ComAdobeGraniteOffloadingImplOffloadingJobOffloaderPropertiesObject <- list()
      if (!is.null(self$`offloading.offloader.enabled`)) {
        ComAdobeGraniteOffloadingImplOffloadingJobOffloaderPropertiesObject[['offloading.offloader.enabled']] <- self$`offloading.offloader.enabled`$toJSON()
      }

      ComAdobeGraniteOffloadingImplOffloadingJobOffloaderPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteOffloadingImplOffloadingJobOffloaderPropertiesJson) {
      ComAdobeGraniteOffloadingImplOffloadingJobOffloaderPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteOffloadingImplOffloadingJobOffloaderPropertiesJson)
      if (!is.null(ComAdobeGraniteOffloadingImplOffloadingJobOffloaderPropertiesObject$`offloading.offloader.enabled`)) {
        offloading.offloader.enabledObject <- ConfigNodePropertyBoolean$new()
        offloading.offloader.enabledObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteOffloadingImplOffloadingJobOffloaderPropertiesObject$offloading.offloader.enabled, auto_unbox = TRUE))
        self$`offloading.offloader.enabled` <- offloading.offloader.enabledObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "offloading.offloader.enabled": %s
        }',
        self$`offloading.offloader.enabled`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteOffloadingImplOffloadingJobOffloaderPropertiesJson) {
      ComAdobeGraniteOffloadingImplOffloadingJobOffloaderPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteOffloadingImplOffloadingJobOffloaderPropertiesJson)
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`offloading.offloader.enabled` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteOffloadingImplOffloadingJobOffloaderPropertiesObject$offloading.offloader.enabled, auto_unbox = TRUE))
    }
  )
)
