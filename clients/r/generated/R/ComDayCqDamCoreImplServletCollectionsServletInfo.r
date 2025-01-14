# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamCoreImplServletCollectionsServletInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamCoreImplServletCollectionsServletInfo <- R6::R6Class(
  'ComDayCqDamCoreImplServletCollectionsServletInfo',
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
      ComDayCqDamCoreImplServletCollectionsServletInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqDamCoreImplServletCollectionsServletInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqDamCoreImplServletCollectionsServletInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqDamCoreImplServletCollectionsServletInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqDamCoreImplServletCollectionsServletInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqDamCoreImplServletCollectionsServletInfoObject
    },
    fromJSON = function(ComDayCqDamCoreImplServletCollectionsServletInfoJson) {
      ComDayCqDamCoreImplServletCollectionsServletInfoObject <- jsonlite::fromJSON(ComDayCqDamCoreImplServletCollectionsServletInfoJson)
      if (!is.null(ComDayCqDamCoreImplServletCollectionsServletInfoObject$`pid`)) {
        self$`pid` <- ComDayCqDamCoreImplServletCollectionsServletInfoObject$`pid`
      }
      if (!is.null(ComDayCqDamCoreImplServletCollectionsServletInfoObject$`title`)) {
        self$`title` <- ComDayCqDamCoreImplServletCollectionsServletInfoObject$`title`
      }
      if (!is.null(ComDayCqDamCoreImplServletCollectionsServletInfoObject$`description`)) {
        self$`description` <- ComDayCqDamCoreImplServletCollectionsServletInfoObject$`description`
      }
      if (!is.null(ComDayCqDamCoreImplServletCollectionsServletInfoObject$`properties`)) {
        propertiesObject <- ComDayCqDamCoreImplServletCollectionsServletProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplServletCollectionsServletInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqDamCoreImplServletCollectionsServletInfoJson) {
      ComDayCqDamCoreImplServletCollectionsServletInfoObject <- jsonlite::fromJSON(ComDayCqDamCoreImplServletCollectionsServletInfoJson)
      self$`pid` <- ComDayCqDamCoreImplServletCollectionsServletInfoObject$`pid`
      self$`title` <- ComDayCqDamCoreImplServletCollectionsServletInfoObject$`title`
      self$`description` <- ComDayCqDamCoreImplServletCollectionsServletInfoObject$`description`
      ComDayCqDamCoreImplServletCollectionsServletPropertiesObject <- ComDayCqDamCoreImplServletCollectionsServletProperties$new()
      self$`properties` <- ComDayCqDamCoreImplServletCollectionsServletPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplServletCollectionsServletInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
