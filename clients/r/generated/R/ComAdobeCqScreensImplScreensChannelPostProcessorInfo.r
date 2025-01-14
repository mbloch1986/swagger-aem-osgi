# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqScreensImplScreensChannelPostProcessorInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqScreensImplScreensChannelPostProcessorInfo <- R6::R6Class(
  'ComAdobeCqScreensImplScreensChannelPostProcessorInfo',
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
      ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject
    },
    fromJSON = function(ComAdobeCqScreensImplScreensChannelPostProcessorInfoJson) {
      ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject <- jsonlite::fromJSON(ComAdobeCqScreensImplScreensChannelPostProcessorInfoJson)
      if (!is.null(ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject$`title`)) {
        self$`title` <- ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject$`title`
      }
      if (!is.null(ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject$`description`)) {
        self$`description` <- ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject$`description`
      }
      if (!is.null(ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqScreensImplScreensChannelPostProcessorProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeCqScreensImplScreensChannelPostProcessorInfoJson) {
      ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject <- jsonlite::fromJSON(ComAdobeCqScreensImplScreensChannelPostProcessorInfoJson)
      self$`pid` <- ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject$`pid`
      self$`title` <- ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject$`title`
      self$`description` <- ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject$`description`
      ComAdobeCqScreensImplScreensChannelPostProcessorPropertiesObject <- ComAdobeCqScreensImplScreensChannelPostProcessorProperties$new()
      self$`properties` <- ComAdobeCqScreensImplScreensChannelPostProcessorPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensImplScreensChannelPostProcessorInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
