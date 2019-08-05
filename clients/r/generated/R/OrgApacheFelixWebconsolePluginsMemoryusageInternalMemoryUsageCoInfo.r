# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfo <- R6::R6Class(
  'OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfo',
  public = list(
    `pid` = NULL,
    `title` = NULL,
    `description` = NULL,
    `properties` = NULL,
    initialize = function(`pid`, `title`, `description`, `properties`){
      if (!missing(`pid`)) {
        stopifnot(is.character(`pid`), length(`pid`) == 1)
        self$`pid` <- `pid`
      }
      if (!missing(`title`)) {
        stopifnot(is.character(`title`), length(`title`) == 1)
        self$`title` <- `title`
      }
      if (!missing(`description`)) {
        stopifnot(is.character(`description`), length(`description`) == 1)
        self$`description` <- `description`
      }
      if (!missing(`properties`)) {
        stopifnot(R6::is.R6(`properties`))
        self$`properties` <- `properties`
      }
    },
    toJSON = function() {
      OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject
    },
    fromJSON = function(OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoJson) {
      OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject <- jsonlite::fromJSON(OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoJson)
      if (!is.null(OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject$`pid`)) {
        self$`pid` <- OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject$`pid`
      }
      if (!is.null(OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject$`title`)) {
        self$`title` <- OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject$`title`
      }
      if (!is.null(OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject$`description`)) {
        self$`description` <- OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject$`description`
      }
      if (!is.null(OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject$`properties`)) {
        propertiesObject <- OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject$properties, auto_unbox = TRUE))
        self$`properties` <- propertiesObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "pid": %s,
           "title": %s,
           "description": %s,
           "properties": %s
        }',
        self$`pid`,
        self$`title`,
        self$`description`,
        self$`properties`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoJson) {
      OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject <- jsonlite::fromJSON(OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoJson)
      self$`pid` <- OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject$`pid`
      self$`title` <- OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject$`title`
      self$`description` <- OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject$`description`
      OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoPropertiesObject <- OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties$new()
      self$`properties` <- OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoInfoObject$properties, auto_unbox = TRUE))
    }
  )
)