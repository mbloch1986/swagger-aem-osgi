# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmUndoUndoConfigProperties Class
#'
#' @field cq.wcm.undo.enabled 
#' @field cq.wcm.undo.path 
#' @field cq.wcm.undo.validity 
#' @field cq.wcm.undo.steps 
#' @field cq.wcm.undo.persistence 
#' @field cq.wcm.undo.persistence.mode 
#' @field cq.wcm.undo.markermode 
#' @field cq.wcm.undo.whitelist 
#' @field cq.wcm.undo.blacklist 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmUndoUndoConfigProperties <- R6::R6Class(
  'ComDayCqWcmUndoUndoConfigProperties',
  public = list(
    `cq.wcm.undo.enabled` = NULL,
    `cq.wcm.undo.path` = NULL,
    `cq.wcm.undo.validity` = NULL,
    `cq.wcm.undo.steps` = NULL,
    `cq.wcm.undo.persistence` = NULL,
    `cq.wcm.undo.persistence.mode` = NULL,
    `cq.wcm.undo.markermode` = NULL,
    `cq.wcm.undo.whitelist` = NULL,
    `cq.wcm.undo.blacklist` = NULL,
    initialize = function(`cq.wcm.undo.enabled`, `cq.wcm.undo.path`, `cq.wcm.undo.validity`, `cq.wcm.undo.steps`, `cq.wcm.undo.persistence`, `cq.wcm.undo.persistence.mode`, `cq.wcm.undo.markermode`, `cq.wcm.undo.whitelist`, `cq.wcm.undo.blacklist`){
      if (!missing(`cq.wcm.undo.enabled`)) {
        stopifnot(R6::is.R6(`cq.wcm.undo.enabled`))
        self$`cq.wcm.undo.enabled` <- `cq.wcm.undo.enabled`
      }
      if (!missing(`cq.wcm.undo.path`)) {
        stopifnot(R6::is.R6(`cq.wcm.undo.path`))
        self$`cq.wcm.undo.path` <- `cq.wcm.undo.path`
      }
      if (!missing(`cq.wcm.undo.validity`)) {
        stopifnot(R6::is.R6(`cq.wcm.undo.validity`))
        self$`cq.wcm.undo.validity` <- `cq.wcm.undo.validity`
      }
      if (!missing(`cq.wcm.undo.steps`)) {
        stopifnot(R6::is.R6(`cq.wcm.undo.steps`))
        self$`cq.wcm.undo.steps` <- `cq.wcm.undo.steps`
      }
      if (!missing(`cq.wcm.undo.persistence`)) {
        stopifnot(R6::is.R6(`cq.wcm.undo.persistence`))
        self$`cq.wcm.undo.persistence` <- `cq.wcm.undo.persistence`
      }
      if (!missing(`cq.wcm.undo.persistence.mode`)) {
        stopifnot(R6::is.R6(`cq.wcm.undo.persistence.mode`))
        self$`cq.wcm.undo.persistence.mode` <- `cq.wcm.undo.persistence.mode`
      }
      if (!missing(`cq.wcm.undo.markermode`)) {
        stopifnot(R6::is.R6(`cq.wcm.undo.markermode`))
        self$`cq.wcm.undo.markermode` <- `cq.wcm.undo.markermode`
      }
      if (!missing(`cq.wcm.undo.whitelist`)) {
        stopifnot(R6::is.R6(`cq.wcm.undo.whitelist`))
        self$`cq.wcm.undo.whitelist` <- `cq.wcm.undo.whitelist`
      }
      if (!missing(`cq.wcm.undo.blacklist`)) {
        stopifnot(R6::is.R6(`cq.wcm.undo.blacklist`))
        self$`cq.wcm.undo.blacklist` <- `cq.wcm.undo.blacklist`
      }
    },
    toJSON = function() {
      ComDayCqWcmUndoUndoConfigPropertiesObject <- list()
      if (!is.null(self$`cq.wcm.undo.enabled`)) {
        ComDayCqWcmUndoUndoConfigPropertiesObject[['cq.wcm.undo.enabled']] <- self$`cq.wcm.undo.enabled`$toJSON()
      }
      if (!is.null(self$`cq.wcm.undo.path`)) {
        ComDayCqWcmUndoUndoConfigPropertiesObject[['cq.wcm.undo.path']] <- self$`cq.wcm.undo.path`$toJSON()
      }
      if (!is.null(self$`cq.wcm.undo.validity`)) {
        ComDayCqWcmUndoUndoConfigPropertiesObject[['cq.wcm.undo.validity']] <- self$`cq.wcm.undo.validity`$toJSON()
      }
      if (!is.null(self$`cq.wcm.undo.steps`)) {
        ComDayCqWcmUndoUndoConfigPropertiesObject[['cq.wcm.undo.steps']] <- self$`cq.wcm.undo.steps`$toJSON()
      }
      if (!is.null(self$`cq.wcm.undo.persistence`)) {
        ComDayCqWcmUndoUndoConfigPropertiesObject[['cq.wcm.undo.persistence']] <- self$`cq.wcm.undo.persistence`$toJSON()
      }
      if (!is.null(self$`cq.wcm.undo.persistence.mode`)) {
        ComDayCqWcmUndoUndoConfigPropertiesObject[['cq.wcm.undo.persistence.mode']] <- self$`cq.wcm.undo.persistence.mode`$toJSON()
      }
      if (!is.null(self$`cq.wcm.undo.markermode`)) {
        ComDayCqWcmUndoUndoConfigPropertiesObject[['cq.wcm.undo.markermode']] <- self$`cq.wcm.undo.markermode`$toJSON()
      }
      if (!is.null(self$`cq.wcm.undo.whitelist`)) {
        ComDayCqWcmUndoUndoConfigPropertiesObject[['cq.wcm.undo.whitelist']] <- self$`cq.wcm.undo.whitelist`$toJSON()
      }
      if (!is.null(self$`cq.wcm.undo.blacklist`)) {
        ComDayCqWcmUndoUndoConfigPropertiesObject[['cq.wcm.undo.blacklist']] <- self$`cq.wcm.undo.blacklist`$toJSON()
      }

      ComDayCqWcmUndoUndoConfigPropertiesObject
    },
    fromJSON = function(ComDayCqWcmUndoUndoConfigPropertiesJson) {
      ComDayCqWcmUndoUndoConfigPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmUndoUndoConfigPropertiesJson)
      if (!is.null(ComDayCqWcmUndoUndoConfigPropertiesObject$`cq.wcm.undo.enabled`)) {
        cq.wcm.undo.enabledObject <- ConfigNodePropertyBoolean$new()
        cq.wcm.undo.enabledObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.enabled, auto_unbox = TRUE))
        self$`cq.wcm.undo.enabled` <- cq.wcm.undo.enabledObject
      }
      if (!is.null(ComDayCqWcmUndoUndoConfigPropertiesObject$`cq.wcm.undo.path`)) {
        cq.wcm.undo.pathObject <- ConfigNodePropertyString$new()
        cq.wcm.undo.pathObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.path, auto_unbox = TRUE))
        self$`cq.wcm.undo.path` <- cq.wcm.undo.pathObject
      }
      if (!is.null(ComDayCqWcmUndoUndoConfigPropertiesObject$`cq.wcm.undo.validity`)) {
        cq.wcm.undo.validityObject <- ConfigNodePropertyInteger$new()
        cq.wcm.undo.validityObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.validity, auto_unbox = TRUE))
        self$`cq.wcm.undo.validity` <- cq.wcm.undo.validityObject
      }
      if (!is.null(ComDayCqWcmUndoUndoConfigPropertiesObject$`cq.wcm.undo.steps`)) {
        cq.wcm.undo.stepsObject <- ConfigNodePropertyInteger$new()
        cq.wcm.undo.stepsObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.steps, auto_unbox = TRUE))
        self$`cq.wcm.undo.steps` <- cq.wcm.undo.stepsObject
      }
      if (!is.null(ComDayCqWcmUndoUndoConfigPropertiesObject$`cq.wcm.undo.persistence`)) {
        cq.wcm.undo.persistenceObject <- ConfigNodePropertyString$new()
        cq.wcm.undo.persistenceObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.persistence, auto_unbox = TRUE))
        self$`cq.wcm.undo.persistence` <- cq.wcm.undo.persistenceObject
      }
      if (!is.null(ComDayCqWcmUndoUndoConfigPropertiesObject$`cq.wcm.undo.persistence.mode`)) {
        cq.wcm.undo.persistence.modeObject <- ConfigNodePropertyBoolean$new()
        cq.wcm.undo.persistence.modeObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.persistence.mode, auto_unbox = TRUE))
        self$`cq.wcm.undo.persistence.mode` <- cq.wcm.undo.persistence.modeObject
      }
      if (!is.null(ComDayCqWcmUndoUndoConfigPropertiesObject$`cq.wcm.undo.markermode`)) {
        cq.wcm.undo.markermodeObject <- ConfigNodePropertyString$new()
        cq.wcm.undo.markermodeObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.markermode, auto_unbox = TRUE))
        self$`cq.wcm.undo.markermode` <- cq.wcm.undo.markermodeObject
      }
      if (!is.null(ComDayCqWcmUndoUndoConfigPropertiesObject$`cq.wcm.undo.whitelist`)) {
        cq.wcm.undo.whitelistObject <- ConfigNodePropertyArray$new()
        cq.wcm.undo.whitelistObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.whitelist, auto_unbox = TRUE))
        self$`cq.wcm.undo.whitelist` <- cq.wcm.undo.whitelistObject
      }
      if (!is.null(ComDayCqWcmUndoUndoConfigPropertiesObject$`cq.wcm.undo.blacklist`)) {
        cq.wcm.undo.blacklistObject <- ConfigNodePropertyArray$new()
        cq.wcm.undo.blacklistObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.blacklist, auto_unbox = TRUE))
        self$`cq.wcm.undo.blacklist` <- cq.wcm.undo.blacklistObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "cq.wcm.undo.enabled": %s,
           "cq.wcm.undo.path": %s,
           "cq.wcm.undo.validity": %s,
           "cq.wcm.undo.steps": %s,
           "cq.wcm.undo.persistence": %s,
           "cq.wcm.undo.persistence.mode": %s,
           "cq.wcm.undo.markermode": %s,
           "cq.wcm.undo.whitelist": %s,
           "cq.wcm.undo.blacklist": %s
        }',
        self$`cq.wcm.undo.enabled`$toJSON(),
        self$`cq.wcm.undo.path`$toJSON(),
        self$`cq.wcm.undo.validity`$toJSON(),
        self$`cq.wcm.undo.steps`$toJSON(),
        self$`cq.wcm.undo.persistence`$toJSON(),
        self$`cq.wcm.undo.persistence.mode`$toJSON(),
        self$`cq.wcm.undo.markermode`$toJSON(),
        self$`cq.wcm.undo.whitelist`$toJSON(),
        self$`cq.wcm.undo.blacklist`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqWcmUndoUndoConfigPropertiesJson) {
      ComDayCqWcmUndoUndoConfigPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmUndoUndoConfigPropertiesJson)
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`cq.wcm.undo.enabled` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.enabled, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`cq.wcm.undo.path` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.path, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`cq.wcm.undo.validity` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.validity, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`cq.wcm.undo.steps` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.steps, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`cq.wcm.undo.persistence` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.persistence, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`cq.wcm.undo.persistence.mode` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.persistence.mode, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`cq.wcm.undo.markermode` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.markermode, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`cq.wcm.undo.whitelist` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.whitelist, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`cq.wcm.undo.blacklist` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqWcmUndoUndoConfigPropertiesObject$cq.wcm.undo.blacklist, auto_unbox = TRUE))
    }
  )
)
