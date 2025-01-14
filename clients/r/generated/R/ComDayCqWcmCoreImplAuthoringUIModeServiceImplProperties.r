# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties Class
#'
#' @field authoringUIModeService.default 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties <- R6::R6Class(
  'ComDayCqWcmCoreImplAuthoringUIModeServiceImplProperties',
  public = list(
    `authoringUIModeService.default` = NULL,
    initialize = function(`authoringUIModeService.default`){
      if (!missing(`authoringUIModeService.default`)) {
        stopifnot(R6::is.R6(`authoringUIModeService.default`))
        self$`authoringUIModeService.default` <- `authoringUIModeService.default`
      }
    },
    toJSON = function() {
      ComDayCqWcmCoreImplAuthoringUIModeServiceImplPropertiesObject <- list()
      if (!is.null(self$`authoringUIModeService.default`)) {
        ComDayCqWcmCoreImplAuthoringUIModeServiceImplPropertiesObject[['authoringUIModeService.default']] <- self$`authoringUIModeService.default`$toJSON()
      }

      ComDayCqWcmCoreImplAuthoringUIModeServiceImplPropertiesObject
    },
    fromJSON = function(ComDayCqWcmCoreImplAuthoringUIModeServiceImplPropertiesJson) {
      ComDayCqWcmCoreImplAuthoringUIModeServiceImplPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmCoreImplAuthoringUIModeServiceImplPropertiesJson)
      if (!is.null(ComDayCqWcmCoreImplAuthoringUIModeServiceImplPropertiesObject$`authoringUIModeService.default`)) {
        authoringUIModeService.defaultObject <- ConfigNodePropertyString$new()
        authoringUIModeService.defaultObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplAuthoringUIModeServiceImplPropertiesObject$authoringUIModeService.default, auto_unbox = TRUE))
        self$`authoringUIModeService.default` <- authoringUIModeService.defaultObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "authoringUIModeService.default": %s
        }',
        self$`authoringUIModeService.default`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqWcmCoreImplAuthoringUIModeServiceImplPropertiesJson) {
      ComDayCqWcmCoreImplAuthoringUIModeServiceImplPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmCoreImplAuthoringUIModeServiceImplPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`authoringUIModeService.default` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplAuthoringUIModeServiceImplPropertiesObject$authoringUIModeService.default, auto_unbox = TRUE))
    }
  )
)
