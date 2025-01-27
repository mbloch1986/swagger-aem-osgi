# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties Class
#'
#' @field forms.formparagraphpostprocessor.enabled 
#' @field forms.formparagraphpostprocessor.formresourcetypes 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties <- R6::R6Class(
  'ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties',
  public = list(
    `forms.formparagraphpostprocessor.enabled` = NULL,
    `forms.formparagraphpostprocessor.formresourcetypes` = NULL,
    initialize = function(`forms.formparagraphpostprocessor.enabled`, `forms.formparagraphpostprocessor.formresourcetypes`){
      if (!missing(`forms.formparagraphpostprocessor.enabled`)) {
        stopifnot(R6::is.R6(`forms.formparagraphpostprocessor.enabled`))
        self$`forms.formparagraphpostprocessor.enabled` <- `forms.formparagraphpostprocessor.enabled`
      }
      if (!missing(`forms.formparagraphpostprocessor.formresourcetypes`)) {
        stopifnot(R6::is.R6(`forms.formparagraphpostprocessor.formresourcetypes`))
        self$`forms.formparagraphpostprocessor.formresourcetypes` <- `forms.formparagraphpostprocessor.formresourcetypes`
      }
    },
    toJSON = function() {
      ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorPropertiesObject <- list()
      if (!is.null(self$`forms.formparagraphpostprocessor.enabled`)) {
        ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorPropertiesObject[['forms.formparagraphpostprocessor.enabled']] <- self$`forms.formparagraphpostprocessor.enabled`$toJSON()
      }
      if (!is.null(self$`forms.formparagraphpostprocessor.formresourcetypes`)) {
        ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorPropertiesObject[['forms.formparagraphpostprocessor.formresourcetypes']] <- self$`forms.formparagraphpostprocessor.formresourcetypes`$toJSON()
      }

      ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorPropertiesObject
    },
    fromJSON = function(ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorPropertiesJson) {
      ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorPropertiesJson)
      if (!is.null(ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorPropertiesObject$`forms.formparagraphpostprocessor.enabled`)) {
        forms.formparagraphpostprocessor.enabledObject <- ConfigNodePropertyBoolean$new()
        forms.formparagraphpostprocessor.enabledObject$fromJSON(jsonlite::toJSON(ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorPropertiesObject$forms.formparagraphpostprocessor.enabled, auto_unbox = TRUE))
        self$`forms.formparagraphpostprocessor.enabled` <- forms.formparagraphpostprocessor.enabledObject
      }
      if (!is.null(ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorPropertiesObject$`forms.formparagraphpostprocessor.formresourcetypes`)) {
        forms.formparagraphpostprocessor.formresourcetypesObject <- ConfigNodePropertyArray$new()
        forms.formparagraphpostprocessor.formresourcetypesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorPropertiesObject$forms.formparagraphpostprocessor.formresourcetypes, auto_unbox = TRUE))
        self$`forms.formparagraphpostprocessor.formresourcetypes` <- forms.formparagraphpostprocessor.formresourcetypesObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "forms.formparagraphpostprocessor.enabled": %s,
           "forms.formparagraphpostprocessor.formresourcetypes": %s
        }',
        self$`forms.formparagraphpostprocessor.enabled`$toJSON(),
        self$`forms.formparagraphpostprocessor.formresourcetypes`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorPropertiesJson) {
      ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorPropertiesJson)
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`forms.formparagraphpostprocessor.enabled` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorPropertiesObject$forms.formparagraphpostprocessor.enabled, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`forms.formparagraphpostprocessor.formresourcetypes` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorPropertiesObject$forms.formparagraphpostprocessor.formresourcetypes, auto_unbox = TRUE))
    }
  )
)
