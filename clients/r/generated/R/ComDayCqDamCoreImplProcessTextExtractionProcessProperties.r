# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamCoreImplProcessTextExtractionProcessProperties Class
#'
#' @field mimeTypes 
#' @field maxExtract 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamCoreImplProcessTextExtractionProcessProperties <- R6::R6Class(
  'ComDayCqDamCoreImplProcessTextExtractionProcessProperties',
  public = list(
    `mimeTypes` = NULL,
    `maxExtract` = NULL,
    initialize = function(`mimeTypes`, `maxExtract`){
      if (!missing(`mimeTypes`)) {
        stopifnot(R6::is.R6(`mimeTypes`))
        self$`mimeTypes` <- `mimeTypes`
      }
      if (!missing(`maxExtract`)) {
        stopifnot(R6::is.R6(`maxExtract`))
        self$`maxExtract` <- `maxExtract`
      }
    },
    toJSON = function() {
      ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesObject <- list()
      if (!is.null(self$`mimeTypes`)) {
        ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesObject[['mimeTypes']] <- self$`mimeTypes`$toJSON()
      }
      if (!is.null(self$`maxExtract`)) {
        ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesObject[['maxExtract']] <- self$`maxExtract`$toJSON()
      }

      ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesObject
    },
    fromJSON = function(ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesJson) {
      ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesObject <- jsonlite::fromJSON(ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesJson)
      if (!is.null(ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesObject$`mimeTypes`)) {
        mimeTypesObject <- ConfigNodePropertyArray$new()
        mimeTypesObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesObject$mimeTypes, auto_unbox = TRUE))
        self$`mimeTypes` <- mimeTypesObject
      }
      if (!is.null(ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesObject$`maxExtract`)) {
        maxExtractObject <- ConfigNodePropertyInteger$new()
        maxExtractObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesObject$maxExtract, auto_unbox = TRUE))
        self$`maxExtract` <- maxExtractObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "mimeTypes": %s,
           "maxExtract": %s
        }',
        self$`mimeTypes`$toJSON(),
        self$`maxExtract`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesJson) {
      ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesObject <- jsonlite::fromJSON(ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`mimeTypes` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesObject$mimeTypes, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`maxExtract` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesObject$maxExtract, auto_unbox = TRUE))
    }
  )
)
