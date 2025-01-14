# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionProperties Class
#'
#' @field oauth.provider.id 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionProperties <- R6::R6Class(
  'ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionProperties',
  public = list(
    `oauth.provider.id` = NULL,
    initialize = function(`oauth.provider.id`){
      if (!missing(`oauth.provider.id`)) {
        stopifnot(R6::is.R6(`oauth.provider.id`))
        self$`oauth.provider.id` <- `oauth.provider.id`
      }
    },
    toJSON = function() {
      ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionPropertiesObject <- list()
      if (!is.null(self$`oauth.provider.id`)) {
        ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionPropertiesObject[['oauth.provider.id']] <- self$`oauth.provider.id`$toJSON()
      }

      ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionPropertiesJson) {
      ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionPropertiesJson)
      if (!is.null(ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionPropertiesObject$`oauth.provider.id`)) {
        oauth.provider.idObject <- ConfigNodePropertyString$new()
        oauth.provider.idObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionPropertiesObject$oauth.provider.id, auto_unbox = TRUE))
        self$`oauth.provider.id` <- oauth.provider.idObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "oauth.provider.id": %s
        }',
        self$`oauth.provider.id`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionPropertiesJson) {
      ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`oauth.provider.id` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionPropertiesObject$oauth.provider.id, auto_unbox = TRUE))
    }
  )
)
