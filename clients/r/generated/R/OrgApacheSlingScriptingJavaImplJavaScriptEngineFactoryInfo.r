# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#' @field bundle_location 
#' @field service_location 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfo <- R6::R6Class(
  'OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfo',
  public = list(
    `pid` = NULL,
    `title` = NULL,
    `description` = NULL,
    `properties` = NULL,
    `bundle_location` = NULL,
    `service_location` = NULL,
    initialize = function(`pid`, `title`, `description`, `properties`, `bundle_location`, `service_location`){
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
      if (!missing(`bundle_location`)) {
        stopifnot(is.character(`bundle_location`), length(`bundle_location`) == 1)
        self$`bundle_location` <- `bundle_location`
      }
      if (!missing(`service_location`)) {
        stopifnot(is.character(`service_location`), length(`service_location`) == 1)
        self$`service_location` <- `service_location`
      }
    },
    toJSON = function() {
      OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject[['properties']] <- self$`properties`$toJSON()
      }
      if (!is.null(self$`bundle_location`)) {
        OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject[['bundle_location']] <- self$`bundle_location`
      }
      if (!is.null(self$`service_location`)) {
        OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject[['service_location']] <- self$`service_location`
      }

      OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject
    },
    fromJSON = function(OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoJson) {
      OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject <- jsonlite::fromJSON(OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoJson)
      if (!is.null(OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$`pid`)) {
        self$`pid` <- OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$`pid`
      }
      if (!is.null(OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$`title`)) {
        self$`title` <- OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$`title`
      }
      if (!is.null(OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$`description`)) {
        self$`description` <- OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$`description`
      }
      if (!is.null(OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$`properties`)) {
        propertiesObject <- OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$properties, auto_unbox = TRUE))
        self$`properties` <- propertiesObject
      }
      if (!is.null(OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$`bundle_location`)) {
        self$`bundle_location` <- OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$`bundle_location`
      }
      if (!is.null(OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$`service_location`)) {
        self$`service_location` <- OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$`service_location`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "pid": %s,
           "title": %s,
           "description": %s,
           "properties": %s,
           "bundle_location": %s,
           "service_location": %s
        }',
        self$`pid`,
        self$`title`,
        self$`description`,
        self$`properties`$toJSON(),
        self$`bundle_location`,
        self$`service_location`
      )
    },
    fromJSONString = function(OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoJson) {
      OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject <- jsonlite::fromJSON(OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoJson)
      self$`pid` <- OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$`pid`
      self$`title` <- OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$`title`
      self$`description` <- OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$`description`
      OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryPropertiesObject <- OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryProperties$new()
      self$`properties` <- OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$properties, auto_unbox = TRUE))
      self$`bundle_location` <- OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$`bundle_location`
      self$`service_location` <- OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryInfoObject$`service_location`
    }
  )
)
