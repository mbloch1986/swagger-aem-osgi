# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties Class
#'
#' @field default.externalizer.domain 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties <- R6::R6Class(
  'ComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties',
  public = list(
    `default.externalizer.domain` = NULL,
    initialize = function(`default.externalizer.domain`){
      if (!missing(`default.externalizer.domain`)) {
        stopifnot(R6::is.R6(`default.externalizer.domain`))
        self$`default.externalizer.domain` <- `default.externalizer.domain`
      }
    },
    toJSON = function() {
      ComDayCqWcmCoreImplVariantsPageVariantsProviderImplPropertiesObject <- list()
      if (!is.null(self$`default.externalizer.domain`)) {
        ComDayCqWcmCoreImplVariantsPageVariantsProviderImplPropertiesObject[['default.externalizer.domain']] <- self$`default.externalizer.domain`$toJSON()
      }

      ComDayCqWcmCoreImplVariantsPageVariantsProviderImplPropertiesObject
    },
    fromJSON = function(ComDayCqWcmCoreImplVariantsPageVariantsProviderImplPropertiesJson) {
      ComDayCqWcmCoreImplVariantsPageVariantsProviderImplPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmCoreImplVariantsPageVariantsProviderImplPropertiesJson)
      if (!is.null(ComDayCqWcmCoreImplVariantsPageVariantsProviderImplPropertiesObject$`default.externalizer.domain`)) {
        default.externalizer.domainObject <- ConfigNodePropertyString$new()
        default.externalizer.domainObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplVariantsPageVariantsProviderImplPropertiesObject$default.externalizer.domain, auto_unbox = TRUE))
        self$`default.externalizer.domain` <- default.externalizer.domainObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "default.externalizer.domain": %s
        }',
        self$`default.externalizer.domain`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqWcmCoreImplVariantsPageVariantsProviderImplPropertiesJson) {
      ComDayCqWcmCoreImplVariantsPageVariantsProviderImplPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmCoreImplVariantsPageVariantsProviderImplPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`default.externalizer.domain` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplVariantsPageVariantsProviderImplPropertiesObject$default.externalizer.domain, auto_unbox = TRUE))
    }
  )
)