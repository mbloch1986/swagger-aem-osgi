# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties Class
#'
#' @field forward.requests 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties <- R6::R6Class(
  'ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties',
  public = list(
    `forward.requests` = NULL,
    initialize = function(`forward.requests`){
      if (!missing(`forward.requests`)) {
        stopifnot(R6::is.R6(`forward.requests`))
        self$`forward.requests` <- `forward.requests`
      }
    },
    toJSON = function() {
      ComAdobeGraniteDistributionCoreImplReplicationDistributionTransPropertiesObject <- list()
      if (!is.null(self$`forward.requests`)) {
        ComAdobeGraniteDistributionCoreImplReplicationDistributionTransPropertiesObject[['forward.requests']] <- self$`forward.requests`$toJSON()
      }

      ComAdobeGraniteDistributionCoreImplReplicationDistributionTransPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteDistributionCoreImplReplicationDistributionTransPropertiesJson) {
      ComAdobeGraniteDistributionCoreImplReplicationDistributionTransPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteDistributionCoreImplReplicationDistributionTransPropertiesJson)
      if (!is.null(ComAdobeGraniteDistributionCoreImplReplicationDistributionTransPropertiesObject$`forward.requests`)) {
        forward.requestsObject <- ConfigNodePropertyBoolean$new()
        forward.requestsObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteDistributionCoreImplReplicationDistributionTransPropertiesObject$forward.requests, auto_unbox = TRUE))
        self$`forward.requests` <- forward.requestsObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "forward.requests": %s
        }',
        self$`forward.requests`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteDistributionCoreImplReplicationDistributionTransPropertiesJson) {
      ComAdobeGraniteDistributionCoreImplReplicationDistributionTransPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteDistributionCoreImplReplicationDistributionTransPropertiesJson)
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`forward.requests` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteDistributionCoreImplReplicationDistributionTransPropertiesObject$forward.requests, auto_unbox = TRUE))
    }
  )
)