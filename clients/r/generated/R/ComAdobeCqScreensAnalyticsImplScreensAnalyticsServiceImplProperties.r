# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties Class
#'
#' @field com.adobe.cq.screens.analytics.impl.url 
#' @field com.adobe.cq.screens.analytics.impl.apikey 
#' @field com.adobe.cq.screens.analytics.impl.project 
#' @field com.adobe.cq.screens.analytics.impl.environment 
#' @field com.adobe.cq.screens.analytics.impl.sendFrequency 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties <- R6::R6Class(
  'ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplProperties',
  public = list(
    `com.adobe.cq.screens.analytics.impl.url` = NULL,
    `com.adobe.cq.screens.analytics.impl.apikey` = NULL,
    `com.adobe.cq.screens.analytics.impl.project` = NULL,
    `com.adobe.cq.screens.analytics.impl.environment` = NULL,
    `com.adobe.cq.screens.analytics.impl.sendFrequency` = NULL,
    initialize = function(`com.adobe.cq.screens.analytics.impl.url`, `com.adobe.cq.screens.analytics.impl.apikey`, `com.adobe.cq.screens.analytics.impl.project`, `com.adobe.cq.screens.analytics.impl.environment`, `com.adobe.cq.screens.analytics.impl.sendFrequency`){
      if (!missing(`com.adobe.cq.screens.analytics.impl.url`)) {
        stopifnot(R6::is.R6(`com.adobe.cq.screens.analytics.impl.url`))
        self$`com.adobe.cq.screens.analytics.impl.url` <- `com.adobe.cq.screens.analytics.impl.url`
      }
      if (!missing(`com.adobe.cq.screens.analytics.impl.apikey`)) {
        stopifnot(R6::is.R6(`com.adobe.cq.screens.analytics.impl.apikey`))
        self$`com.adobe.cq.screens.analytics.impl.apikey` <- `com.adobe.cq.screens.analytics.impl.apikey`
      }
      if (!missing(`com.adobe.cq.screens.analytics.impl.project`)) {
        stopifnot(R6::is.R6(`com.adobe.cq.screens.analytics.impl.project`))
        self$`com.adobe.cq.screens.analytics.impl.project` <- `com.adobe.cq.screens.analytics.impl.project`
      }
      if (!missing(`com.adobe.cq.screens.analytics.impl.environment`)) {
        stopifnot(R6::is.R6(`com.adobe.cq.screens.analytics.impl.environment`))
        self$`com.adobe.cq.screens.analytics.impl.environment` <- `com.adobe.cq.screens.analytics.impl.environment`
      }
      if (!missing(`com.adobe.cq.screens.analytics.impl.sendFrequency`)) {
        stopifnot(R6::is.R6(`com.adobe.cq.screens.analytics.impl.sendFrequency`))
        self$`com.adobe.cq.screens.analytics.impl.sendFrequency` <- `com.adobe.cq.screens.analytics.impl.sendFrequency`
      }
    },
    toJSON = function() {
      ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject <- list()
      if (!is.null(self$`com.adobe.cq.screens.analytics.impl.url`)) {
        ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject[['com.adobe.cq.screens.analytics.impl.url']] <- self$`com.adobe.cq.screens.analytics.impl.url`$toJSON()
      }
      if (!is.null(self$`com.adobe.cq.screens.analytics.impl.apikey`)) {
        ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject[['com.adobe.cq.screens.analytics.impl.apikey']] <- self$`com.adobe.cq.screens.analytics.impl.apikey`$toJSON()
      }
      if (!is.null(self$`com.adobe.cq.screens.analytics.impl.project`)) {
        ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject[['com.adobe.cq.screens.analytics.impl.project']] <- self$`com.adobe.cq.screens.analytics.impl.project`$toJSON()
      }
      if (!is.null(self$`com.adobe.cq.screens.analytics.impl.environment`)) {
        ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject[['com.adobe.cq.screens.analytics.impl.environment']] <- self$`com.adobe.cq.screens.analytics.impl.environment`$toJSON()
      }
      if (!is.null(self$`com.adobe.cq.screens.analytics.impl.sendFrequency`)) {
        ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject[['com.adobe.cq.screens.analytics.impl.sendFrequency']] <- self$`com.adobe.cq.screens.analytics.impl.sendFrequency`$toJSON()
      }

      ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject
    },
    fromJSON = function(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesJson) {
      ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject <- jsonlite::fromJSON(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesJson)
      if (!is.null(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject$`com.adobe.cq.screens.analytics.impl.url`)) {
        com.adobe.cq.screens.analytics.impl.urlObject <- ConfigNodePropertyString$new()
        com.adobe.cq.screens.analytics.impl.urlObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject$com.adobe.cq.screens.analytics.impl.url, auto_unbox = TRUE))
        self$`com.adobe.cq.screens.analytics.impl.url` <- com.adobe.cq.screens.analytics.impl.urlObject
      }
      if (!is.null(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject$`com.adobe.cq.screens.analytics.impl.apikey`)) {
        com.adobe.cq.screens.analytics.impl.apikeyObject <- ConfigNodePropertyString$new()
        com.adobe.cq.screens.analytics.impl.apikeyObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject$com.adobe.cq.screens.analytics.impl.apikey, auto_unbox = TRUE))
        self$`com.adobe.cq.screens.analytics.impl.apikey` <- com.adobe.cq.screens.analytics.impl.apikeyObject
      }
      if (!is.null(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject$`com.adobe.cq.screens.analytics.impl.project`)) {
        com.adobe.cq.screens.analytics.impl.projectObject <- ConfigNodePropertyString$new()
        com.adobe.cq.screens.analytics.impl.projectObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject$com.adobe.cq.screens.analytics.impl.project, auto_unbox = TRUE))
        self$`com.adobe.cq.screens.analytics.impl.project` <- com.adobe.cq.screens.analytics.impl.projectObject
      }
      if (!is.null(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject$`com.adobe.cq.screens.analytics.impl.environment`)) {
        com.adobe.cq.screens.analytics.impl.environmentObject <- ConfigNodePropertyDropDown$new()
        com.adobe.cq.screens.analytics.impl.environmentObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject$com.adobe.cq.screens.analytics.impl.environment, auto_unbox = TRUE))
        self$`com.adobe.cq.screens.analytics.impl.environment` <- com.adobe.cq.screens.analytics.impl.environmentObject
      }
      if (!is.null(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject$`com.adobe.cq.screens.analytics.impl.sendFrequency`)) {
        com.adobe.cq.screens.analytics.impl.sendFrequencyObject <- ConfigNodePropertyInteger$new()
        com.adobe.cq.screens.analytics.impl.sendFrequencyObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject$com.adobe.cq.screens.analytics.impl.sendFrequency, auto_unbox = TRUE))
        self$`com.adobe.cq.screens.analytics.impl.sendFrequency` <- com.adobe.cq.screens.analytics.impl.sendFrequencyObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "com.adobe.cq.screens.analytics.impl.url": %s,
           "com.adobe.cq.screens.analytics.impl.apikey": %s,
           "com.adobe.cq.screens.analytics.impl.project": %s,
           "com.adobe.cq.screens.analytics.impl.environment": %s,
           "com.adobe.cq.screens.analytics.impl.sendFrequency": %s
        }',
        self$`com.adobe.cq.screens.analytics.impl.url`$toJSON(),
        self$`com.adobe.cq.screens.analytics.impl.apikey`$toJSON(),
        self$`com.adobe.cq.screens.analytics.impl.project`$toJSON(),
        self$`com.adobe.cq.screens.analytics.impl.environment`$toJSON(),
        self$`com.adobe.cq.screens.analytics.impl.sendFrequency`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesJson) {
      ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject <- jsonlite::fromJSON(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`com.adobe.cq.screens.analytics.impl.url` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject$com.adobe.cq.screens.analytics.impl.url, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`com.adobe.cq.screens.analytics.impl.apikey` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject$com.adobe.cq.screens.analytics.impl.apikey, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`com.adobe.cq.screens.analytics.impl.project` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject$com.adobe.cq.screens.analytics.impl.project, auto_unbox = TRUE))
      ConfigNodePropertyDropDownObject <- ConfigNodePropertyDropDown$new()
      self$`com.adobe.cq.screens.analytics.impl.environment` <- ConfigNodePropertyDropDownObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject$com.adobe.cq.screens.analytics.impl.environment, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`com.adobe.cq.screens.analytics.impl.sendFrequency` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensAnalyticsImplScreensAnalyticsServiceImplPropertiesObject$com.adobe.cq.screens.analytics.impl.sendFrequency, auto_unbox = TRUE))
    }
  )
)