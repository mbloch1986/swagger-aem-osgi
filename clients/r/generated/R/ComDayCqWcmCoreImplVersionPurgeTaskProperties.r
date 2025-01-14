# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmCoreImplVersionPurgeTaskProperties Class
#'
#' @field versionpurge.paths 
#' @field versionpurge.recursive 
#' @field versionpurge.maxVersions 
#' @field versionpurge.minVersions 
#' @field versionpurge.maxAgeDays 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmCoreImplVersionPurgeTaskProperties <- R6::R6Class(
  'ComDayCqWcmCoreImplVersionPurgeTaskProperties',
  public = list(
    `versionpurge.paths` = NULL,
    `versionpurge.recursive` = NULL,
    `versionpurge.maxVersions` = NULL,
    `versionpurge.minVersions` = NULL,
    `versionpurge.maxAgeDays` = NULL,
    initialize = function(`versionpurge.paths`, `versionpurge.recursive`, `versionpurge.maxVersions`, `versionpurge.minVersions`, `versionpurge.maxAgeDays`){
      if (!missing(`versionpurge.paths`)) {
        stopifnot(R6::is.R6(`versionpurge.paths`))
        self$`versionpurge.paths` <- `versionpurge.paths`
      }
      if (!missing(`versionpurge.recursive`)) {
        stopifnot(R6::is.R6(`versionpurge.recursive`))
        self$`versionpurge.recursive` <- `versionpurge.recursive`
      }
      if (!missing(`versionpurge.maxVersions`)) {
        stopifnot(R6::is.R6(`versionpurge.maxVersions`))
        self$`versionpurge.maxVersions` <- `versionpurge.maxVersions`
      }
      if (!missing(`versionpurge.minVersions`)) {
        stopifnot(R6::is.R6(`versionpurge.minVersions`))
        self$`versionpurge.minVersions` <- `versionpurge.minVersions`
      }
      if (!missing(`versionpurge.maxAgeDays`)) {
        stopifnot(R6::is.R6(`versionpurge.maxAgeDays`))
        self$`versionpurge.maxAgeDays` <- `versionpurge.maxAgeDays`
      }
    },
    toJSON = function() {
      ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject <- list()
      if (!is.null(self$`versionpurge.paths`)) {
        ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject[['versionpurge.paths']] <- self$`versionpurge.paths`$toJSON()
      }
      if (!is.null(self$`versionpurge.recursive`)) {
        ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject[['versionpurge.recursive']] <- self$`versionpurge.recursive`$toJSON()
      }
      if (!is.null(self$`versionpurge.maxVersions`)) {
        ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject[['versionpurge.maxVersions']] <- self$`versionpurge.maxVersions`$toJSON()
      }
      if (!is.null(self$`versionpurge.minVersions`)) {
        ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject[['versionpurge.minVersions']] <- self$`versionpurge.minVersions`$toJSON()
      }
      if (!is.null(self$`versionpurge.maxAgeDays`)) {
        ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject[['versionpurge.maxAgeDays']] <- self$`versionpurge.maxAgeDays`$toJSON()
      }

      ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject
    },
    fromJSON = function(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesJson) {
      ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesJson)
      if (!is.null(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject$`versionpurge.paths`)) {
        versionpurge.pathsObject <- ConfigNodePropertyArray$new()
        versionpurge.pathsObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject$versionpurge.paths, auto_unbox = TRUE))
        self$`versionpurge.paths` <- versionpurge.pathsObject
      }
      if (!is.null(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject$`versionpurge.recursive`)) {
        versionpurge.recursiveObject <- ConfigNodePropertyBoolean$new()
        versionpurge.recursiveObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject$versionpurge.recursive, auto_unbox = TRUE))
        self$`versionpurge.recursive` <- versionpurge.recursiveObject
      }
      if (!is.null(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject$`versionpurge.maxVersions`)) {
        versionpurge.maxVersionsObject <- ConfigNodePropertyInteger$new()
        versionpurge.maxVersionsObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject$versionpurge.maxVersions, auto_unbox = TRUE))
        self$`versionpurge.maxVersions` <- versionpurge.maxVersionsObject
      }
      if (!is.null(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject$`versionpurge.minVersions`)) {
        versionpurge.minVersionsObject <- ConfigNodePropertyInteger$new()
        versionpurge.minVersionsObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject$versionpurge.minVersions, auto_unbox = TRUE))
        self$`versionpurge.minVersions` <- versionpurge.minVersionsObject
      }
      if (!is.null(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject$`versionpurge.maxAgeDays`)) {
        versionpurge.maxAgeDaysObject <- ConfigNodePropertyInteger$new()
        versionpurge.maxAgeDaysObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject$versionpurge.maxAgeDays, auto_unbox = TRUE))
        self$`versionpurge.maxAgeDays` <- versionpurge.maxAgeDaysObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "versionpurge.paths": %s,
           "versionpurge.recursive": %s,
           "versionpurge.maxVersions": %s,
           "versionpurge.minVersions": %s,
           "versionpurge.maxAgeDays": %s
        }',
        self$`versionpurge.paths`$toJSON(),
        self$`versionpurge.recursive`$toJSON(),
        self$`versionpurge.maxVersions`$toJSON(),
        self$`versionpurge.minVersions`$toJSON(),
        self$`versionpurge.maxAgeDays`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesJson) {
      ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`versionpurge.paths` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject$versionpurge.paths, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`versionpurge.recursive` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject$versionpurge.recursive, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`versionpurge.maxVersions` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject$versionpurge.maxVersions, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`versionpurge.minVersions` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject$versionpurge.minVersions, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`versionpurge.maxAgeDays` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplVersionPurgeTaskPropertiesObject$versionpurge.maxAgeDays, auto_unbox = TRUE))
    }
  )
)
