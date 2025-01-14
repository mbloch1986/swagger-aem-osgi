# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteContexthubImplContextHubImplProperties Class
#'
#' @field com.adobe.granite.contexthub.silent_mode 
#' @field com.adobe.granite.contexthub.show_ui 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteContexthubImplContextHubImplProperties <- R6::R6Class(
  'ComAdobeGraniteContexthubImplContextHubImplProperties',
  public = list(
    `com.adobe.granite.contexthub.silent_mode` = NULL,
    `com.adobe.granite.contexthub.show_ui` = NULL,
    initialize = function(`com.adobe.granite.contexthub.silent_mode`, `com.adobe.granite.contexthub.show_ui`){
      if (!missing(`com.adobe.granite.contexthub.silent_mode`)) {
        stopifnot(R6::is.R6(`com.adobe.granite.contexthub.silent_mode`))
        self$`com.adobe.granite.contexthub.silent_mode` <- `com.adobe.granite.contexthub.silent_mode`
      }
      if (!missing(`com.adobe.granite.contexthub.show_ui`)) {
        stopifnot(R6::is.R6(`com.adobe.granite.contexthub.show_ui`))
        self$`com.adobe.granite.contexthub.show_ui` <- `com.adobe.granite.contexthub.show_ui`
      }
    },
    toJSON = function() {
      ComAdobeGraniteContexthubImplContextHubImplPropertiesObject <- list()
      if (!is.null(self$`com.adobe.granite.contexthub.silent_mode`)) {
        ComAdobeGraniteContexthubImplContextHubImplPropertiesObject[['com.adobe.granite.contexthub.silent_mode']] <- self$`com.adobe.granite.contexthub.silent_mode`$toJSON()
      }
      if (!is.null(self$`com.adobe.granite.contexthub.show_ui`)) {
        ComAdobeGraniteContexthubImplContextHubImplPropertiesObject[['com.adobe.granite.contexthub.show_ui']] <- self$`com.adobe.granite.contexthub.show_ui`$toJSON()
      }

      ComAdobeGraniteContexthubImplContextHubImplPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteContexthubImplContextHubImplPropertiesJson) {
      ComAdobeGraniteContexthubImplContextHubImplPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteContexthubImplContextHubImplPropertiesJson)
      if (!is.null(ComAdobeGraniteContexthubImplContextHubImplPropertiesObject$`com.adobe.granite.contexthub.silent_mode`)) {
        com.adobe.granite.contexthub.silent_modeObject <- ConfigNodePropertyBoolean$new()
        com.adobe.granite.contexthub.silent_modeObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteContexthubImplContextHubImplPropertiesObject$com.adobe.granite.contexthub.silent_mode, auto_unbox = TRUE))
        self$`com.adobe.granite.contexthub.silent_mode` <- com.adobe.granite.contexthub.silent_modeObject
      }
      if (!is.null(ComAdobeGraniteContexthubImplContextHubImplPropertiesObject$`com.adobe.granite.contexthub.show_ui`)) {
        com.adobe.granite.contexthub.show_uiObject <- ConfigNodePropertyBoolean$new()
        com.adobe.granite.contexthub.show_uiObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteContexthubImplContextHubImplPropertiesObject$com.adobe.granite.contexthub.show_ui, auto_unbox = TRUE))
        self$`com.adobe.granite.contexthub.show_ui` <- com.adobe.granite.contexthub.show_uiObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "com.adobe.granite.contexthub.silent_mode": %s,
           "com.adobe.granite.contexthub.show_ui": %s
        }',
        self$`com.adobe.granite.contexthub.silent_mode`$toJSON(),
        self$`com.adobe.granite.contexthub.show_ui`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteContexthubImplContextHubImplPropertiesJson) {
      ComAdobeGraniteContexthubImplContextHubImplPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteContexthubImplContextHubImplPropertiesJson)
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`com.adobe.granite.contexthub.silent_mode` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteContexthubImplContextHubImplPropertiesObject$com.adobe.granite.contexthub.silent_mode, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`com.adobe.granite.contexthub.show_ui` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteContexthubImplContextHubImplPropertiesObject$com.adobe.granite.contexthub.show_ui, auto_unbox = TRUE))
    }
  )
)
