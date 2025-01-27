# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingHapiImplHApiUtilImplInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingHapiImplHApiUtilImplInfo <- R6::R6Class(
  'OrgApacheSlingHapiImplHApiUtilImplInfo',
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
      OrgApacheSlingHapiImplHApiUtilImplInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheSlingHapiImplHApiUtilImplInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheSlingHapiImplHApiUtilImplInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheSlingHapiImplHApiUtilImplInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheSlingHapiImplHApiUtilImplInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheSlingHapiImplHApiUtilImplInfoObject
    },
    fromJSON = function(OrgApacheSlingHapiImplHApiUtilImplInfoJson) {
      OrgApacheSlingHapiImplHApiUtilImplInfoObject <- jsonlite::fromJSON(OrgApacheSlingHapiImplHApiUtilImplInfoJson)
      if (!is.null(OrgApacheSlingHapiImplHApiUtilImplInfoObject$`pid`)) {
        self$`pid` <- OrgApacheSlingHapiImplHApiUtilImplInfoObject$`pid`
      }
      if (!is.null(OrgApacheSlingHapiImplHApiUtilImplInfoObject$`title`)) {
        self$`title` <- OrgApacheSlingHapiImplHApiUtilImplInfoObject$`title`
      }
      if (!is.null(OrgApacheSlingHapiImplHApiUtilImplInfoObject$`description`)) {
        self$`description` <- OrgApacheSlingHapiImplHApiUtilImplInfoObject$`description`
      }
      if (!is.null(OrgApacheSlingHapiImplHApiUtilImplInfoObject$`properties`)) {
        propertiesObject <- OrgApacheSlingHapiImplHApiUtilImplProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingHapiImplHApiUtilImplInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheSlingHapiImplHApiUtilImplInfoJson) {
      OrgApacheSlingHapiImplHApiUtilImplInfoObject <- jsonlite::fromJSON(OrgApacheSlingHapiImplHApiUtilImplInfoJson)
      self$`pid` <- OrgApacheSlingHapiImplHApiUtilImplInfoObject$`pid`
      self$`title` <- OrgApacheSlingHapiImplHApiUtilImplInfoObject$`title`
      self$`description` <- OrgApacheSlingHapiImplHApiUtilImplInfoObject$`description`
      OrgApacheSlingHapiImplHApiUtilImplPropertiesObject <- OrgApacheSlingHapiImplHApiUtilImplProperties$new()
      self$`properties` <- OrgApacheSlingHapiImplHApiUtilImplPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingHapiImplHApiUtilImplInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
