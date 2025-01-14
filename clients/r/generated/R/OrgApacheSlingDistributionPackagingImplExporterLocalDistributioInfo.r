# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfo <- R6::R6Class(
  'OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfo',
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
      OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject
    },
    fromJSON = function(OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoJson) {
      OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject <- jsonlite::fromJSON(OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoJson)
      if (!is.null(OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject$`pid`)) {
        self$`pid` <- OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject$`pid`
      }
      if (!is.null(OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject$`title`)) {
        self$`title` <- OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject$`title`
      }
      if (!is.null(OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject$`description`)) {
        self$`description` <- OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject$`description`
      }
      if (!is.null(OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject$`properties`)) {
        propertiesObject <- OrgApacheSlingDistributionPackagingImplExporterLocalDistributioProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoJson) {
      OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject <- jsonlite::fromJSON(OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoJson)
      self$`pid` <- OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject$`pid`
      self$`title` <- OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject$`title`
      self$`description` <- OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject$`description`
      OrgApacheSlingDistributionPackagingImplExporterLocalDistributioPropertiesObject <- OrgApacheSlingDistributionPackagingImplExporterLocalDistributioProperties$new()
      self$`properties` <- OrgApacheSlingDistributionPackagingImplExporterLocalDistributioPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionPackagingImplExporterLocalDistributioInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
