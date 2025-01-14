# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties Class
#'
#' @field nonValidChars 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties <- R6::R6Class(
  'ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorProperties',
  public = list(
    `nonValidChars` = NULL,
    initialize = function(`nonValidChars`){
      if (!missing(`nonValidChars`)) {
        stopifnot(R6::is.R6(`nonValidChars`))
        self$`nonValidChars` <- `nonValidChars`
      }
    },
    toJSON = function() {
      ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorPropertiesObject <- list()
      if (!is.null(self$`nonValidChars`)) {
        ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorPropertiesObject[['nonValidChars']] <- self$`nonValidChars`$toJSON()
      }

      ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorPropertiesObject
    },
    fromJSON = function(ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorPropertiesJson) {
      ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorPropertiesJson)
      if (!is.null(ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorPropertiesObject$`nonValidChars`)) {
        nonValidCharsObject <- ConfigNodePropertyString$new()
        nonValidCharsObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorPropertiesObject$nonValidChars, auto_unbox = TRUE))
        self$`nonValidChars` <- nonValidCharsObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "nonValidChars": %s
        }',
        self$`nonValidChars`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorPropertiesJson) {
      ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`nonValidChars` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplUtilsDefaultPageNameValidatorPropertiesObject$nonValidChars, auto_unbox = TRUE))
    }
  )
)
