# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfo <- R6::R6Class(
  'ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfo',
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
      ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject
    },
    fromJSON = function(ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoJson) {
      ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject <- jsonlite::fromJSON(ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoJson)
      if (!is.null(ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoJson) {
      ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject <- jsonlite::fromJSON(ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoJson)
      self$`pid` <- ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject$`pid`
      self$`title` <- ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject$`title`
      self$`description` <- ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject$`description`
      ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterPropertiesObject <- ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties$new()
      self$`properties` <- ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoObject$properties, auto_unbox = TRUE))
    }
  )
)