# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties Class
#'
#' @field datasources 
#' @field step 
#' @field archives 
#' @field path 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties <- R6::R6Class(
  'OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterProperties',
  public = list(
    `datasources` = NULL,
    `step` = NULL,
    `archives` = NULL,
    `path` = NULL,
    initialize = function(`datasources`, `step`, `archives`, `path`){
      if (!missing(`datasources`)) {
        stopifnot(R6::is.R6(`datasources`))
        self$`datasources` <- `datasources`
      }
      if (!missing(`step`)) {
        stopifnot(R6::is.R6(`step`))
        self$`step` <- `step`
      }
      if (!missing(`archives`)) {
        stopifnot(R6::is.R6(`archives`))
        self$`archives` <- `archives`
      }
      if (!missing(`path`)) {
        stopifnot(R6::is.R6(`path`))
        self$`path` <- `path`
      }
    },
    toJSON = function() {
      OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject <- list()
      if (!is.null(self$`datasources`)) {
        OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject[['datasources']] <- self$`datasources`$toJSON()
      }
      if (!is.null(self$`step`)) {
        OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject[['step']] <- self$`step`$toJSON()
      }
      if (!is.null(self$`archives`)) {
        OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject[['archives']] <- self$`archives`$toJSON()
      }
      if (!is.null(self$`path`)) {
        OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject[['path']] <- self$`path`$toJSON()
      }

      OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject
    },
    fromJSON = function(OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesJson) {
      OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesJson)
      if (!is.null(OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject$`datasources`)) {
        datasourcesObject <- ConfigNodePropertyArray$new()
        datasourcesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject$datasources, auto_unbox = TRUE))
        self$`datasources` <- datasourcesObject
      }
      if (!is.null(OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject$`step`)) {
        stepObject <- ConfigNodePropertyInteger$new()
        stepObject$fromJSON(jsonlite::toJSON(OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject$step, auto_unbox = TRUE))
        self$`step` <- stepObject
      }
      if (!is.null(OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject$`archives`)) {
        archivesObject <- ConfigNodePropertyArray$new()
        archivesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject$archives, auto_unbox = TRUE))
        self$`archives` <- archivesObject
      }
      if (!is.null(OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject$`path`)) {
        pathObject <- ConfigNodePropertyString$new()
        pathObject$fromJSON(jsonlite::toJSON(OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject$path, auto_unbox = TRUE))
        self$`path` <- pathObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "datasources": %s,
           "step": %s,
           "archives": %s,
           "path": %s
        }',
        self$`datasources`$toJSON(),
        self$`step`$toJSON(),
        self$`archives`$toJSON(),
        self$`path`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesJson) {
      OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`datasources` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject$datasources, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`step` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject$step, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`archives` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject$archives, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`path` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingCommonsMetricsRrd4jImplCodahaleMetricsReporterPropertiesObject$path, auto_unbox = TRUE))
    }
  )
)