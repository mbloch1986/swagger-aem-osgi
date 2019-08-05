# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties Class
#'
#' @field translate.language 
#' @field translate.display 
#' @field translate.attribution 
#' @field translate.caching 
#' @field translate.smart.rendering 
#' @field translate.caching.duration 
#' @field translate.session.save.interval 
#' @field translate.session.save.batchLimit 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties <- R6::R6Class(
  'ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerProperties',
  public = list(
    `translate.language` = NULL,
    `translate.display` = NULL,
    `translate.attribution` = NULL,
    `translate.caching` = NULL,
    `translate.smart.rendering` = NULL,
    `translate.caching.duration` = NULL,
    `translate.session.save.interval` = NULL,
    `translate.session.save.batchLimit` = NULL,
    initialize = function(`translate.language`, `translate.display`, `translate.attribution`, `translate.caching`, `translate.smart.rendering`, `translate.caching.duration`, `translate.session.save.interval`, `translate.session.save.batchLimit`){
      if (!missing(`translate.language`)) {
        stopifnot(R6::is.R6(`translate.language`))
        self$`translate.language` <- `translate.language`
      }
      if (!missing(`translate.display`)) {
        stopifnot(R6::is.R6(`translate.display`))
        self$`translate.display` <- `translate.display`
      }
      if (!missing(`translate.attribution`)) {
        stopifnot(R6::is.R6(`translate.attribution`))
        self$`translate.attribution` <- `translate.attribution`
      }
      if (!missing(`translate.caching`)) {
        stopifnot(R6::is.R6(`translate.caching`))
        self$`translate.caching` <- `translate.caching`
      }
      if (!missing(`translate.smart.rendering`)) {
        stopifnot(R6::is.R6(`translate.smart.rendering`))
        self$`translate.smart.rendering` <- `translate.smart.rendering`
      }
      if (!missing(`translate.caching.duration`)) {
        stopifnot(R6::is.R6(`translate.caching.duration`))
        self$`translate.caching.duration` <- `translate.caching.duration`
      }
      if (!missing(`translate.session.save.interval`)) {
        stopifnot(R6::is.R6(`translate.session.save.interval`))
        self$`translate.session.save.interval` <- `translate.session.save.interval`
      }
      if (!missing(`translate.session.save.batchLimit`)) {
        stopifnot(R6::is.R6(`translate.session.save.batchLimit`))
        self$`translate.session.save.batchLimit` <- `translate.session.save.batchLimit`
      }
    },
    toJSON = function() {
      ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject <- list()
      if (!is.null(self$`translate.language`)) {
        ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject[['translate.language']] <- self$`translate.language`$toJSON()
      }
      if (!is.null(self$`translate.display`)) {
        ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject[['translate.display']] <- self$`translate.display`$toJSON()
      }
      if (!is.null(self$`translate.attribution`)) {
        ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject[['translate.attribution']] <- self$`translate.attribution`$toJSON()
      }
      if (!is.null(self$`translate.caching`)) {
        ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject[['translate.caching']] <- self$`translate.caching`$toJSON()
      }
      if (!is.null(self$`translate.smart.rendering`)) {
        ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject[['translate.smart.rendering']] <- self$`translate.smart.rendering`$toJSON()
      }
      if (!is.null(self$`translate.caching.duration`)) {
        ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject[['translate.caching.duration']] <- self$`translate.caching.duration`$toJSON()
      }
      if (!is.null(self$`translate.session.save.interval`)) {
        ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject[['translate.session.save.interval']] <- self$`translate.session.save.interval`$toJSON()
      }
      if (!is.null(self$`translate.session.save.batchLimit`)) {
        ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject[['translate.session.save.batchLimit']] <- self$`translate.session.save.batchLimit`$toJSON()
      }

      ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject
    },
    fromJSON = function(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesJson) {
      ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesJson)
      if (!is.null(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$`translate.language`)) {
        translate.languageObject <- ConfigNodePropertyDropDown$new()
        translate.languageObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$translate.language, auto_unbox = TRUE))
        self$`translate.language` <- translate.languageObject
      }
      if (!is.null(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$`translate.display`)) {
        translate.displayObject <- ConfigNodePropertyDropDown$new()
        translate.displayObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$translate.display, auto_unbox = TRUE))
        self$`translate.display` <- translate.displayObject
      }
      if (!is.null(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$`translate.attribution`)) {
        translate.attributionObject <- ConfigNodePropertyBoolean$new()
        translate.attributionObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$translate.attribution, auto_unbox = TRUE))
        self$`translate.attribution` <- translate.attributionObject
      }
      if (!is.null(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$`translate.caching`)) {
        translate.cachingObject <- ConfigNodePropertyDropDown$new()
        translate.cachingObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$translate.caching, auto_unbox = TRUE))
        self$`translate.caching` <- translate.cachingObject
      }
      if (!is.null(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$`translate.smart.rendering`)) {
        translate.smart.renderingObject <- ConfigNodePropertyDropDown$new()
        translate.smart.renderingObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$translate.smart.rendering, auto_unbox = TRUE))
        self$`translate.smart.rendering` <- translate.smart.renderingObject
      }
      if (!is.null(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$`translate.caching.duration`)) {
        translate.caching.durationObject <- ConfigNodePropertyString$new()
        translate.caching.durationObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$translate.caching.duration, auto_unbox = TRUE))
        self$`translate.caching.duration` <- translate.caching.durationObject
      }
      if (!is.null(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$`translate.session.save.interval`)) {
        translate.session.save.intervalObject <- ConfigNodePropertyString$new()
        translate.session.save.intervalObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$translate.session.save.interval, auto_unbox = TRUE))
        self$`translate.session.save.interval` <- translate.session.save.intervalObject
      }
      if (!is.null(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$`translate.session.save.batchLimit`)) {
        translate.session.save.batchLimitObject <- ConfigNodePropertyString$new()
        translate.session.save.batchLimitObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$translate.session.save.batchLimit, auto_unbox = TRUE))
        self$`translate.session.save.batchLimit` <- translate.session.save.batchLimitObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "translate.language": %s,
           "translate.display": %s,
           "translate.attribution": %s,
           "translate.caching": %s,
           "translate.smart.rendering": %s,
           "translate.caching.duration": %s,
           "translate.session.save.interval": %s,
           "translate.session.save.batchLimit": %s
        }',
        self$`translate.language`$toJSON(),
        self$`translate.display`$toJSON(),
        self$`translate.attribution`$toJSON(),
        self$`translate.caching`$toJSON(),
        self$`translate.smart.rendering`$toJSON(),
        self$`translate.caching.duration`$toJSON(),
        self$`translate.session.save.interval`$toJSON(),
        self$`translate.session.save.batchLimit`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesJson) {
      ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesJson)
      ConfigNodePropertyDropDownObject <- ConfigNodePropertyDropDown$new()
      self$`translate.language` <- ConfigNodePropertyDropDownObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$translate.language, auto_unbox = TRUE))
      ConfigNodePropertyDropDownObject <- ConfigNodePropertyDropDown$new()
      self$`translate.display` <- ConfigNodePropertyDropDownObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$translate.display, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`translate.attribution` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$translate.attribution, auto_unbox = TRUE))
      ConfigNodePropertyDropDownObject <- ConfigNodePropertyDropDown$new()
      self$`translate.caching` <- ConfigNodePropertyDropDownObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$translate.caching, auto_unbox = TRUE))
      ConfigNodePropertyDropDownObject <- ConfigNodePropertyDropDown$new()
      self$`translate.smart.rendering` <- ConfigNodePropertyDropDownObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$translate.smart.rendering, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`translate.caching.duration` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$translate.caching.duration, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`translate.session.save.interval` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$translate.session.save.interval, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`translate.session.save.batchLimit` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialTranslationImplTranslationServiceConfigManagerPropertiesObject$translate.session.save.batchLimit, auto_unbox = TRUE))
    }
  )
)