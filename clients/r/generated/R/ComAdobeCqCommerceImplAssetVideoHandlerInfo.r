# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqCommerceImplAssetVideoHandlerInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqCommerceImplAssetVideoHandlerInfo <- R6::R6Class(
  'ComAdobeCqCommerceImplAssetVideoHandlerInfo',
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
      ComAdobeCqCommerceImplAssetVideoHandlerInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqCommerceImplAssetVideoHandlerInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqCommerceImplAssetVideoHandlerInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqCommerceImplAssetVideoHandlerInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqCommerceImplAssetVideoHandlerInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqCommerceImplAssetVideoHandlerInfoObject
    },
    fromJSON = function(ComAdobeCqCommerceImplAssetVideoHandlerInfoJson) {
      ComAdobeCqCommerceImplAssetVideoHandlerInfoObject <- jsonlite::fromJSON(ComAdobeCqCommerceImplAssetVideoHandlerInfoJson)
      if (!is.null(ComAdobeCqCommerceImplAssetVideoHandlerInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqCommerceImplAssetVideoHandlerInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqCommerceImplAssetVideoHandlerInfoObject$`title`)) {
        self$`title` <- ComAdobeCqCommerceImplAssetVideoHandlerInfoObject$`title`
      }
      if (!is.null(ComAdobeCqCommerceImplAssetVideoHandlerInfoObject$`description`)) {
        self$`description` <- ComAdobeCqCommerceImplAssetVideoHandlerInfoObject$`description`
      }
      if (!is.null(ComAdobeCqCommerceImplAssetVideoHandlerInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqCommerceImplAssetVideoHandlerProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqCommerceImplAssetVideoHandlerInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeCqCommerceImplAssetVideoHandlerInfoJson) {
      ComAdobeCqCommerceImplAssetVideoHandlerInfoObject <- jsonlite::fromJSON(ComAdobeCqCommerceImplAssetVideoHandlerInfoJson)
      self$`pid` <- ComAdobeCqCommerceImplAssetVideoHandlerInfoObject$`pid`
      self$`title` <- ComAdobeCqCommerceImplAssetVideoHandlerInfoObject$`title`
      self$`description` <- ComAdobeCqCommerceImplAssetVideoHandlerInfoObject$`description`
      ComAdobeCqCommerceImplAssetVideoHandlerPropertiesObject <- ComAdobeCqCommerceImplAssetVideoHandlerProperties$new()
      self$`properties` <- ComAdobeCqCommerceImplAssetVideoHandlerPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqCommerceImplAssetVideoHandlerInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
