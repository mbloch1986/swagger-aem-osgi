# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamCoreProcessExifToolExtractMetadataProcessProperties Class
#'
#' @field process.label 
#' @field cq.dam.enable.sha1 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamCoreProcessExifToolExtractMetadataProcessProperties <- R6::R6Class(
  'ComDayCqDamCoreProcessExifToolExtractMetadataProcessProperties',
  public = list(
    `process.label` = NULL,
    `cq.dam.enable.sha1` = NULL,
    initialize = function(`process.label`, `cq.dam.enable.sha1`){
      if (!missing(`process.label`)) {
        stopifnot(R6::is.R6(`process.label`))
        self$`process.label` <- `process.label`
      }
      if (!missing(`cq.dam.enable.sha1`)) {
        stopifnot(R6::is.R6(`cq.dam.enable.sha1`))
        self$`cq.dam.enable.sha1` <- `cq.dam.enable.sha1`
      }
    },
    toJSON = function() {
      ComDayCqDamCoreProcessExifToolExtractMetadataProcessPropertiesObject <- list()
      if (!is.null(self$`process.label`)) {
        ComDayCqDamCoreProcessExifToolExtractMetadataProcessPropertiesObject[['process.label']] <- self$`process.label`$toJSON()
      }
      if (!is.null(self$`cq.dam.enable.sha1`)) {
        ComDayCqDamCoreProcessExifToolExtractMetadataProcessPropertiesObject[['cq.dam.enable.sha1']] <- self$`cq.dam.enable.sha1`$toJSON()
      }

      ComDayCqDamCoreProcessExifToolExtractMetadataProcessPropertiesObject
    },
    fromJSON = function(ComDayCqDamCoreProcessExifToolExtractMetadataProcessPropertiesJson) {
      ComDayCqDamCoreProcessExifToolExtractMetadataProcessPropertiesObject <- jsonlite::fromJSON(ComDayCqDamCoreProcessExifToolExtractMetadataProcessPropertiesJson)
      if (!is.null(ComDayCqDamCoreProcessExifToolExtractMetadataProcessPropertiesObject$`process.label`)) {
        process.labelObject <- ConfigNodePropertyString$new()
        process.labelObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreProcessExifToolExtractMetadataProcessPropertiesObject$process.label, auto_unbox = TRUE))
        self$`process.label` <- process.labelObject
      }
      if (!is.null(ComDayCqDamCoreProcessExifToolExtractMetadataProcessPropertiesObject$`cq.dam.enable.sha1`)) {
        cq.dam.enable.sha1Object <- ConfigNodePropertyBoolean$new()
        cq.dam.enable.sha1Object$fromJSON(jsonlite::toJSON(ComDayCqDamCoreProcessExifToolExtractMetadataProcessPropertiesObject$cq.dam.enable.sha1, auto_unbox = TRUE))
        self$`cq.dam.enable.sha1` <- cq.dam.enable.sha1Object
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "process.label": %s,
           "cq.dam.enable.sha1": %s
        }',
        self$`process.label`$toJSON(),
        self$`cq.dam.enable.sha1`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqDamCoreProcessExifToolExtractMetadataProcessPropertiesJson) {
      ComDayCqDamCoreProcessExifToolExtractMetadataProcessPropertiesObject <- jsonlite::fromJSON(ComDayCqDamCoreProcessExifToolExtractMetadataProcessPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`process.label` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreProcessExifToolExtractMetadataProcessPropertiesObject$process.label, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`cq.dam.enable.sha1` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreProcessExifToolExtractMetadataProcessPropertiesObject$cq.dam.enable.sha1, auto_unbox = TRUE))
    }
  )
)