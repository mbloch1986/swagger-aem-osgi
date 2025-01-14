# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties Class
#'
#' @field redirect.enabled 
#' @field redirect.stats.enabled 
#' @field redirect.extensions 
#' @field redirect.paths 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties <- R6::R6Class(
  'ComDayCqWcmMobileCoreImplRedirectRedirectFilterProperties',
  public = list(
    `redirect.enabled` = NULL,
    `redirect.stats.enabled` = NULL,
    `redirect.extensions` = NULL,
    `redirect.paths` = NULL,
    initialize = function(`redirect.enabled`, `redirect.stats.enabled`, `redirect.extensions`, `redirect.paths`){
      if (!missing(`redirect.enabled`)) {
        stopifnot(R6::is.R6(`redirect.enabled`))
        self$`redirect.enabled` <- `redirect.enabled`
      }
      if (!missing(`redirect.stats.enabled`)) {
        stopifnot(R6::is.R6(`redirect.stats.enabled`))
        self$`redirect.stats.enabled` <- `redirect.stats.enabled`
      }
      if (!missing(`redirect.extensions`)) {
        stopifnot(R6::is.R6(`redirect.extensions`))
        self$`redirect.extensions` <- `redirect.extensions`
      }
      if (!missing(`redirect.paths`)) {
        stopifnot(R6::is.R6(`redirect.paths`))
        self$`redirect.paths` <- `redirect.paths`
      }
    },
    toJSON = function() {
      ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject <- list()
      if (!is.null(self$`redirect.enabled`)) {
        ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject[['redirect.enabled']] <- self$`redirect.enabled`$toJSON()
      }
      if (!is.null(self$`redirect.stats.enabled`)) {
        ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject[['redirect.stats.enabled']] <- self$`redirect.stats.enabled`$toJSON()
      }
      if (!is.null(self$`redirect.extensions`)) {
        ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject[['redirect.extensions']] <- self$`redirect.extensions`$toJSON()
      }
      if (!is.null(self$`redirect.paths`)) {
        ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject[['redirect.paths']] <- self$`redirect.paths`$toJSON()
      }

      ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject
    },
    fromJSON = function(ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesJson) {
      ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesJson)
      if (!is.null(ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject$`redirect.enabled`)) {
        redirect.enabledObject <- ConfigNodePropertyBoolean$new()
        redirect.enabledObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject$redirect.enabled, auto_unbox = TRUE))
        self$`redirect.enabled` <- redirect.enabledObject
      }
      if (!is.null(ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject$`redirect.stats.enabled`)) {
        redirect.stats.enabledObject <- ConfigNodePropertyBoolean$new()
        redirect.stats.enabledObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject$redirect.stats.enabled, auto_unbox = TRUE))
        self$`redirect.stats.enabled` <- redirect.stats.enabledObject
      }
      if (!is.null(ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject$`redirect.extensions`)) {
        redirect.extensionsObject <- ConfigNodePropertyArray$new()
        redirect.extensionsObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject$redirect.extensions, auto_unbox = TRUE))
        self$`redirect.extensions` <- redirect.extensionsObject
      }
      if (!is.null(ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject$`redirect.paths`)) {
        redirect.pathsObject <- ConfigNodePropertyArray$new()
        redirect.pathsObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject$redirect.paths, auto_unbox = TRUE))
        self$`redirect.paths` <- redirect.pathsObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "redirect.enabled": %s,
           "redirect.stats.enabled": %s,
           "redirect.extensions": %s,
           "redirect.paths": %s
        }',
        self$`redirect.enabled`$toJSON(),
        self$`redirect.stats.enabled`$toJSON(),
        self$`redirect.extensions`$toJSON(),
        self$`redirect.paths`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesJson) {
      ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesJson)
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`redirect.enabled` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject$redirect.enabled, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`redirect.stats.enabled` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject$redirect.stats.enabled, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`redirect.extensions` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject$redirect.extensions, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`redirect.paths` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMobileCoreImplRedirectRedirectFilterPropertiesObject$redirect.paths, auto_unbox = TRUE))
    }
  )
)
