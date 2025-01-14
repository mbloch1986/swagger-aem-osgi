# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamCoreImplServletMetadataGetServletInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamCoreImplServletMetadataGetServletInfo <- R6::R6Class(
  'ComDayCqDamCoreImplServletMetadataGetServletInfo',
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
      ComDayCqDamCoreImplServletMetadataGetServletInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqDamCoreImplServletMetadataGetServletInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqDamCoreImplServletMetadataGetServletInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqDamCoreImplServletMetadataGetServletInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqDamCoreImplServletMetadataGetServletInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqDamCoreImplServletMetadataGetServletInfoObject
    },
    fromJSON = function(ComDayCqDamCoreImplServletMetadataGetServletInfoJson) {
      ComDayCqDamCoreImplServletMetadataGetServletInfoObject <- jsonlite::fromJSON(ComDayCqDamCoreImplServletMetadataGetServletInfoJson)
      if (!is.null(ComDayCqDamCoreImplServletMetadataGetServletInfoObject$`pid`)) {
        self$`pid` <- ComDayCqDamCoreImplServletMetadataGetServletInfoObject$`pid`
      }
      if (!is.null(ComDayCqDamCoreImplServletMetadataGetServletInfoObject$`title`)) {
        self$`title` <- ComDayCqDamCoreImplServletMetadataGetServletInfoObject$`title`
      }
      if (!is.null(ComDayCqDamCoreImplServletMetadataGetServletInfoObject$`description`)) {
        self$`description` <- ComDayCqDamCoreImplServletMetadataGetServletInfoObject$`description`
      }
      if (!is.null(ComDayCqDamCoreImplServletMetadataGetServletInfoObject$`properties`)) {
        propertiesObject <- ComDayCqDamCoreImplServletMetadataGetServletProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplServletMetadataGetServletInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqDamCoreImplServletMetadataGetServletInfoJson) {
      ComDayCqDamCoreImplServletMetadataGetServletInfoObject <- jsonlite::fromJSON(ComDayCqDamCoreImplServletMetadataGetServletInfoJson)
      self$`pid` <- ComDayCqDamCoreImplServletMetadataGetServletInfoObject$`pid`
      self$`title` <- ComDayCqDamCoreImplServletMetadataGetServletInfoObject$`title`
      self$`description` <- ComDayCqDamCoreImplServletMetadataGetServletInfoObject$`description`
      ComDayCqDamCoreImplServletMetadataGetServletPropertiesObject <- ComDayCqDamCoreImplServletMetadataGetServletProperties$new()
      self$`properties` <- ComDayCqDamCoreImplServletMetadataGetServletPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplServletMetadataGetServletInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
