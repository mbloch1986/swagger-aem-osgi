# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqCommerceImplAssetStaticImageHandlerInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqCommerceImplAssetStaticImageHandlerInfo <- R6::R6Class(
  'ComAdobeCqCommerceImplAssetStaticImageHandlerInfo',
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
      ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject
    },
    fromJSON = function(ComAdobeCqCommerceImplAssetStaticImageHandlerInfoJson) {
      ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject <- jsonlite::fromJSON(ComAdobeCqCommerceImplAssetStaticImageHandlerInfoJson)
      if (!is.null(ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject$`title`)) {
        self$`title` <- ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject$`title`
      }
      if (!is.null(ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject$`description`)) {
        self$`description` <- ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject$`description`
      }
      if (!is.null(ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqCommerceImplAssetStaticImageHandlerProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeCqCommerceImplAssetStaticImageHandlerInfoJson) {
      ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject <- jsonlite::fromJSON(ComAdobeCqCommerceImplAssetStaticImageHandlerInfoJson)
      self$`pid` <- ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject$`pid`
      self$`title` <- ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject$`title`
      self$`description` <- ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject$`description`
      ComAdobeCqCommerceImplAssetStaticImageHandlerPropertiesObject <- ComAdobeCqCommerceImplAssetStaticImageHandlerProperties$new()
      self$`properties` <- ComAdobeCqCommerceImplAssetStaticImageHandlerPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqCommerceImplAssetStaticImageHandlerInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
