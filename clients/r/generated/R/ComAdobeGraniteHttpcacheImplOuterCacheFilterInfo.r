# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteHttpcacheImplOuterCacheFilterInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteHttpcacheImplOuterCacheFilterInfo <- R6::R6Class(
  'ComAdobeGraniteHttpcacheImplOuterCacheFilterInfo',
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
      ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject
    },
    fromJSON = function(ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoJson) {
      ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject <- jsonlite::fromJSON(ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoJson)
      if (!is.null(ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteHttpcacheImplOuterCacheFilterProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoJson) {
      ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject <- jsonlite::fromJSON(ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoJson)
      self$`pid` <- ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject$`pid`
      self$`title` <- ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject$`title`
      self$`description` <- ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject$`description`
      ComAdobeGraniteHttpcacheImplOuterCacheFilterPropertiesObject <- ComAdobeGraniteHttpcacheImplOuterCacheFilterProperties$new()
      self$`properties` <- ComAdobeGraniteHttpcacheImplOuterCacheFilterPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteHttpcacheImplOuterCacheFilterInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
