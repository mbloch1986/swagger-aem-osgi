# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheFelixSystemreadySystemReadyMonitorInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheFelixSystemreadySystemReadyMonitorInfo <- R6::R6Class(
  'OrgApacheFelixSystemreadySystemReadyMonitorInfo',
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
      OrgApacheFelixSystemreadySystemReadyMonitorInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheFelixSystemreadySystemReadyMonitorInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheFelixSystemreadySystemReadyMonitorInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheFelixSystemreadySystemReadyMonitorInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheFelixSystemreadySystemReadyMonitorInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheFelixSystemreadySystemReadyMonitorInfoObject
    },
    fromJSON = function(OrgApacheFelixSystemreadySystemReadyMonitorInfoJson) {
      OrgApacheFelixSystemreadySystemReadyMonitorInfoObject <- jsonlite::fromJSON(OrgApacheFelixSystemreadySystemReadyMonitorInfoJson)
      if (!is.null(OrgApacheFelixSystemreadySystemReadyMonitorInfoObject$`pid`)) {
        self$`pid` <- OrgApacheFelixSystemreadySystemReadyMonitorInfoObject$`pid`
      }
      if (!is.null(OrgApacheFelixSystemreadySystemReadyMonitorInfoObject$`title`)) {
        self$`title` <- OrgApacheFelixSystemreadySystemReadyMonitorInfoObject$`title`
      }
      if (!is.null(OrgApacheFelixSystemreadySystemReadyMonitorInfoObject$`description`)) {
        self$`description` <- OrgApacheFelixSystemreadySystemReadyMonitorInfoObject$`description`
      }
      if (!is.null(OrgApacheFelixSystemreadySystemReadyMonitorInfoObject$`properties`)) {
        propertiesObject <- OrgApacheFelixSystemreadySystemReadyMonitorProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheFelixSystemreadySystemReadyMonitorInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheFelixSystemreadySystemReadyMonitorInfoJson) {
      OrgApacheFelixSystemreadySystemReadyMonitorInfoObject <- jsonlite::fromJSON(OrgApacheFelixSystemreadySystemReadyMonitorInfoJson)
      self$`pid` <- OrgApacheFelixSystemreadySystemReadyMonitorInfoObject$`pid`
      self$`title` <- OrgApacheFelixSystemreadySystemReadyMonitorInfoObject$`title`
      self$`description` <- OrgApacheFelixSystemreadySystemReadyMonitorInfoObject$`description`
      OrgApacheFelixSystemreadySystemReadyMonitorPropertiesObject <- OrgApacheFelixSystemreadySystemReadyMonitorProperties$new()
      self$`properties` <- OrgApacheFelixSystemreadySystemReadyMonitorPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheFelixSystemreadySystemReadyMonitorInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
