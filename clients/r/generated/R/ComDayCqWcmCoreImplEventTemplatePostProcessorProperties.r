# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmCoreImplEventTemplatePostProcessorProperties Class
#'
#' @field paths 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmCoreImplEventTemplatePostProcessorProperties <- R6::R6Class(
  'ComDayCqWcmCoreImplEventTemplatePostProcessorProperties',
  public = list(
    `paths` = NULL,
    initialize = function(`paths`){
      if (!missing(`paths`)) {
        stopifnot(R6::is.R6(`paths`))
        self$`paths` <- `paths`
      }
    },
    toJSON = function() {
      ComDayCqWcmCoreImplEventTemplatePostProcessorPropertiesObject <- list()
      if (!is.null(self$`paths`)) {
        ComDayCqWcmCoreImplEventTemplatePostProcessorPropertiesObject[['paths']] <- self$`paths`$toJSON()
      }

      ComDayCqWcmCoreImplEventTemplatePostProcessorPropertiesObject
    },
    fromJSON = function(ComDayCqWcmCoreImplEventTemplatePostProcessorPropertiesJson) {
      ComDayCqWcmCoreImplEventTemplatePostProcessorPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmCoreImplEventTemplatePostProcessorPropertiesJson)
      if (!is.null(ComDayCqWcmCoreImplEventTemplatePostProcessorPropertiesObject$`paths`)) {
        pathsObject <- ConfigNodePropertyString$new()
        pathsObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplEventTemplatePostProcessorPropertiesObject$paths, auto_unbox = TRUE))
        self$`paths` <- pathsObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "paths": %s
        }',
        self$`paths`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqWcmCoreImplEventTemplatePostProcessorPropertiesJson) {
      ComDayCqWcmCoreImplEventTemplatePostProcessorPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmCoreImplEventTemplatePostProcessorPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`paths` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplEventTemplatePostProcessorPropertiesObject$paths, auto_unbox = TRUE))
    }
  )
)