# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqMcmImplMCMConfigurationProperties Class
#'
#' @field experience.indirection 
#' @field touchpoint.indirection 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqMcmImplMCMConfigurationProperties <- R6::R6Class(
  'ComDayCqMcmImplMCMConfigurationProperties',
  public = list(
    `experience.indirection` = NULL,
    `touchpoint.indirection` = NULL,
    initialize = function(`experience.indirection`, `touchpoint.indirection`){
      if (!missing(`experience.indirection`)) {
        stopifnot(R6::is.R6(`experience.indirection`))
        self$`experience.indirection` <- `experience.indirection`
      }
      if (!missing(`touchpoint.indirection`)) {
        stopifnot(R6::is.R6(`touchpoint.indirection`))
        self$`touchpoint.indirection` <- `touchpoint.indirection`
      }
    },
    toJSON = function() {
      ComDayCqMcmImplMCMConfigurationPropertiesObject <- list()
      if (!is.null(self$`experience.indirection`)) {
        ComDayCqMcmImplMCMConfigurationPropertiesObject[['experience.indirection']] <- self$`experience.indirection`$toJSON()
      }
      if (!is.null(self$`touchpoint.indirection`)) {
        ComDayCqMcmImplMCMConfigurationPropertiesObject[['touchpoint.indirection']] <- self$`touchpoint.indirection`$toJSON()
      }

      ComDayCqMcmImplMCMConfigurationPropertiesObject
    },
    fromJSON = function(ComDayCqMcmImplMCMConfigurationPropertiesJson) {
      ComDayCqMcmImplMCMConfigurationPropertiesObject <- jsonlite::fromJSON(ComDayCqMcmImplMCMConfigurationPropertiesJson)
      if (!is.null(ComDayCqMcmImplMCMConfigurationPropertiesObject$`experience.indirection`)) {
        experience.indirectionObject <- ConfigNodePropertyArray$new()
        experience.indirectionObject$fromJSON(jsonlite::toJSON(ComDayCqMcmImplMCMConfigurationPropertiesObject$experience.indirection, auto_unbox = TRUE))
        self$`experience.indirection` <- experience.indirectionObject
      }
      if (!is.null(ComDayCqMcmImplMCMConfigurationPropertiesObject$`touchpoint.indirection`)) {
        touchpoint.indirectionObject <- ConfigNodePropertyArray$new()
        touchpoint.indirectionObject$fromJSON(jsonlite::toJSON(ComDayCqMcmImplMCMConfigurationPropertiesObject$touchpoint.indirection, auto_unbox = TRUE))
        self$`touchpoint.indirection` <- touchpoint.indirectionObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "experience.indirection": %s,
           "touchpoint.indirection": %s
        }',
        self$`experience.indirection`$toJSON(),
        self$`touchpoint.indirection`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqMcmImplMCMConfigurationPropertiesJson) {
      ComDayCqMcmImplMCMConfigurationPropertiesObject <- jsonlite::fromJSON(ComDayCqMcmImplMCMConfigurationPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`experience.indirection` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqMcmImplMCMConfigurationPropertiesObject$experience.indirection, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`touchpoint.indirection` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqMcmImplMCMConfigurationPropertiesObject$touchpoint.indirection, auto_unbox = TRUE))
    }
  )
)
