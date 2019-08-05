# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteI18nImplBundlePseudoTranslationsProperties Class
#'
#' @field pseudo.patterns 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteI18nImplBundlePseudoTranslationsProperties <- R6::R6Class(
  'ComAdobeGraniteI18nImplBundlePseudoTranslationsProperties',
  public = list(
    `pseudo.patterns` = NULL,
    initialize = function(`pseudo.patterns`){
      if (!missing(`pseudo.patterns`)) {
        stopifnot(R6::is.R6(`pseudo.patterns`))
        self$`pseudo.patterns` <- `pseudo.patterns`
      }
    },
    toJSON = function() {
      ComAdobeGraniteI18nImplBundlePseudoTranslationsPropertiesObject <- list()
      if (!is.null(self$`pseudo.patterns`)) {
        ComAdobeGraniteI18nImplBundlePseudoTranslationsPropertiesObject[['pseudo.patterns']] <- self$`pseudo.patterns`$toJSON()
      }

      ComAdobeGraniteI18nImplBundlePseudoTranslationsPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteI18nImplBundlePseudoTranslationsPropertiesJson) {
      ComAdobeGraniteI18nImplBundlePseudoTranslationsPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteI18nImplBundlePseudoTranslationsPropertiesJson)
      if (!is.null(ComAdobeGraniteI18nImplBundlePseudoTranslationsPropertiesObject$`pseudo.patterns`)) {
        pseudo.patternsObject <- ConfigNodePropertyArray$new()
        pseudo.patternsObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteI18nImplBundlePseudoTranslationsPropertiesObject$pseudo.patterns, auto_unbox = TRUE))
        self$`pseudo.patterns` <- pseudo.patternsObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "pseudo.patterns": %s
        }',
        self$`pseudo.patterns`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteI18nImplBundlePseudoTranslationsPropertiesJson) {
      ComAdobeGraniteI18nImplBundlePseudoTranslationsPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteI18nImplBundlePseudoTranslationsPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`pseudo.patterns` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteI18nImplBundlePseudoTranslationsPropertiesObject$pseudo.patterns, auto_unbox = TRUE))
    }
  )
)