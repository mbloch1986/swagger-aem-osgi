# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' GuideLocalizationServiceProperties Class
#'
#' @field supportedLocales 
#' @field Localizable Properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
GuideLocalizationServiceProperties <- R6::R6Class(
  'GuideLocalizationServiceProperties',
  public = list(
    `supportedLocales` = NULL,
    `Localizable Properties` = NULL,
    initialize = function(`supportedLocales`, `Localizable Properties`){
      if (!missing(`supportedLocales`)) {
        stopifnot(R6::is.R6(`supportedLocales`))
        self$`supportedLocales` <- `supportedLocales`
      }
      if (!missing(`Localizable Properties`)) {
        stopifnot(R6::is.R6(`Localizable Properties`))
        self$`Localizable Properties` <- `Localizable Properties`
      }
    },
    toJSON = function() {
      GuideLocalizationServicePropertiesObject <- list()
      if (!is.null(self$`supportedLocales`)) {
        GuideLocalizationServicePropertiesObject[['supportedLocales']] <- self$`supportedLocales`$toJSON()
      }
      if (!is.null(self$`Localizable Properties`)) {
        GuideLocalizationServicePropertiesObject[['Localizable Properties']] <- self$`Localizable Properties`$toJSON()
      }

      GuideLocalizationServicePropertiesObject
    },
    fromJSON = function(GuideLocalizationServicePropertiesJson) {
      GuideLocalizationServicePropertiesObject <- jsonlite::fromJSON(GuideLocalizationServicePropertiesJson)
      if (!is.null(GuideLocalizationServicePropertiesObject$`supportedLocales`)) {
        supportedLocalesObject <- ConfigNodePropertyArray$new()
        supportedLocalesObject$fromJSON(jsonlite::toJSON(GuideLocalizationServicePropertiesObject$supportedLocales, auto_unbox = TRUE))
        self$`supportedLocales` <- supportedLocalesObject
      }
      if (!is.null(GuideLocalizationServicePropertiesObject$`Localizable Properties`)) {
        Localizable PropertiesObject <- ConfigNodePropertyArray$new()
        Localizable PropertiesObject$fromJSON(jsonlite::toJSON(GuideLocalizationServicePropertiesObject$Localizable Properties, auto_unbox = TRUE))
        self$`Localizable Properties` <- Localizable PropertiesObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "supportedLocales": %s,
           "Localizable Properties": %s
        }',
        self$`supportedLocales`$toJSON(),
        self$`Localizable Properties`$toJSON()
      )
    },
    fromJSONString = function(GuideLocalizationServicePropertiesJson) {
      GuideLocalizationServicePropertiesObject <- jsonlite::fromJSON(GuideLocalizationServicePropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`supportedLocales` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(GuideLocalizationServicePropertiesObject$supportedLocales, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`Localizable Properties` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(GuideLocalizationServicePropertiesObject$Localizable Properties, auto_unbox = TRUE))
    }
  )
)
