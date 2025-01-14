# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamHandlerStandardPdfPdfHandlerProperties Class
#'
#' @field raster.annotation 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamHandlerStandardPdfPdfHandlerProperties <- R6::R6Class(
  'ComDayCqDamHandlerStandardPdfPdfHandlerProperties',
  public = list(
    `raster.annotation` = NULL,
    initialize = function(`raster.annotation`){
      if (!missing(`raster.annotation`)) {
        stopifnot(R6::is.R6(`raster.annotation`))
        self$`raster.annotation` <- `raster.annotation`
      }
    },
    toJSON = function() {
      ComDayCqDamHandlerStandardPdfPdfHandlerPropertiesObject <- list()
      if (!is.null(self$`raster.annotation`)) {
        ComDayCqDamHandlerStandardPdfPdfHandlerPropertiesObject[['raster.annotation']] <- self$`raster.annotation`$toJSON()
      }

      ComDayCqDamHandlerStandardPdfPdfHandlerPropertiesObject
    },
    fromJSON = function(ComDayCqDamHandlerStandardPdfPdfHandlerPropertiesJson) {
      ComDayCqDamHandlerStandardPdfPdfHandlerPropertiesObject <- jsonlite::fromJSON(ComDayCqDamHandlerStandardPdfPdfHandlerPropertiesJson)
      if (!is.null(ComDayCqDamHandlerStandardPdfPdfHandlerPropertiesObject$`raster.annotation`)) {
        raster.annotationObject <- ConfigNodePropertyBoolean$new()
        raster.annotationObject$fromJSON(jsonlite::toJSON(ComDayCqDamHandlerStandardPdfPdfHandlerPropertiesObject$raster.annotation, auto_unbox = TRUE))
        self$`raster.annotation` <- raster.annotationObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "raster.annotation": %s
        }',
        self$`raster.annotation`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqDamHandlerStandardPdfPdfHandlerPropertiesJson) {
      ComDayCqDamHandlerStandardPdfPdfHandlerPropertiesObject <- jsonlite::fromJSON(ComDayCqDamHandlerStandardPdfPdfHandlerPropertiesJson)
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`raster.annotation` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqDamHandlerStandardPdfPdfHandlerPropertiesObject$raster.annotation, auto_unbox = TRUE))
    }
  )
)
