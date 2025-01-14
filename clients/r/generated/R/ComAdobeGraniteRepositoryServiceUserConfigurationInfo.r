# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteRepositoryServiceUserConfigurationInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteRepositoryServiceUserConfigurationInfo <- R6::R6Class(
  'ComAdobeGraniteRepositoryServiceUserConfigurationInfo',
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
      ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject
    },
    fromJSON = function(ComAdobeGraniteRepositoryServiceUserConfigurationInfoJson) {
      ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject <- jsonlite::fromJSON(ComAdobeGraniteRepositoryServiceUserConfigurationInfoJson)
      if (!is.null(ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteRepositoryServiceUserConfigurationProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteRepositoryServiceUserConfigurationInfoJson) {
      ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject <- jsonlite::fromJSON(ComAdobeGraniteRepositoryServiceUserConfigurationInfoJson)
      self$`pid` <- ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject$`pid`
      self$`title` <- ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject$`title`
      self$`description` <- ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject$`description`
      ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject <- ComAdobeGraniteRepositoryServiceUserConfigurationProperties$new()
      self$`properties` <- ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryServiceUserConfigurationInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
