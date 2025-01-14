# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties Class
#'
#' @field defaultConnectorName 
#' @field defaultCategory 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties <- R6::R6Class(
  'ComAdobeGraniteTranslationCoreImplTranslationManagerImplProperties',
  public = list(
    `defaultConnectorName` = NULL,
    `defaultCategory` = NULL,
    initialize = function(`defaultConnectorName`, `defaultCategory`){
      if (!missing(`defaultConnectorName`)) {
        stopifnot(R6::is.R6(`defaultConnectorName`))
        self$`defaultConnectorName` <- `defaultConnectorName`
      }
      if (!missing(`defaultCategory`)) {
        stopifnot(R6::is.R6(`defaultCategory`))
        self$`defaultCategory` <- `defaultCategory`
      }
    },
    toJSON = function() {
      ComAdobeGraniteTranslationCoreImplTranslationManagerImplPropertiesObject <- list()
      if (!is.null(self$`defaultConnectorName`)) {
        ComAdobeGraniteTranslationCoreImplTranslationManagerImplPropertiesObject[['defaultConnectorName']] <- self$`defaultConnectorName`$toJSON()
      }
      if (!is.null(self$`defaultCategory`)) {
        ComAdobeGraniteTranslationCoreImplTranslationManagerImplPropertiesObject[['defaultCategory']] <- self$`defaultCategory`$toJSON()
      }

      ComAdobeGraniteTranslationCoreImplTranslationManagerImplPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteTranslationCoreImplTranslationManagerImplPropertiesJson) {
      ComAdobeGraniteTranslationCoreImplTranslationManagerImplPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteTranslationCoreImplTranslationManagerImplPropertiesJson)
      if (!is.null(ComAdobeGraniteTranslationCoreImplTranslationManagerImplPropertiesObject$`defaultConnectorName`)) {
        defaultConnectorNameObject <- ConfigNodePropertyString$new()
        defaultConnectorNameObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteTranslationCoreImplTranslationManagerImplPropertiesObject$defaultConnectorName, auto_unbox = TRUE))
        self$`defaultConnectorName` <- defaultConnectorNameObject
      }
      if (!is.null(ComAdobeGraniteTranslationCoreImplTranslationManagerImplPropertiesObject$`defaultCategory`)) {
        defaultCategoryObject <- ConfigNodePropertyString$new()
        defaultCategoryObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteTranslationCoreImplTranslationManagerImplPropertiesObject$defaultCategory, auto_unbox = TRUE))
        self$`defaultCategory` <- defaultCategoryObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "defaultConnectorName": %s,
           "defaultCategory": %s
        }',
        self$`defaultConnectorName`$toJSON(),
        self$`defaultCategory`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteTranslationCoreImplTranslationManagerImplPropertiesJson) {
      ComAdobeGraniteTranslationCoreImplTranslationManagerImplPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteTranslationCoreImplTranslationManagerImplPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`defaultConnectorName` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteTranslationCoreImplTranslationManagerImplPropertiesObject$defaultConnectorName, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`defaultCategory` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteTranslationCoreImplTranslationManagerImplPropertiesObject$defaultCategory, auto_unbox = TRUE))
    }
  )
)
