# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfo <- R6::R6Class(
  'ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfo',
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
      ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject
    },
    fromJSON = function(ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoJson) {
      ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject <- jsonlite::fromJSON(ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoJson)
      if (!is.null(ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject$`title`)) {
        self$`title` <- ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject$`title`
      }
      if (!is.null(ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject$`description`)) {
        self$`description` <- ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject$`description`
      }
      if (!is.null(ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoJson) {
      ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject <- jsonlite::fromJSON(ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoJson)
      self$`pid` <- ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject$`pid`
      self$`title` <- ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject$`title`
      self$`description` <- ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject$`description`
      ComAdobeCqDamProcessorNuiImplNuiAssetProcessorPropertiesObject <- ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties$new()
      self$`properties` <- ComAdobeCqDamProcessorNuiImplNuiAssetProcessorPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqDamProcessorNuiImplNuiAssetProcessorInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
