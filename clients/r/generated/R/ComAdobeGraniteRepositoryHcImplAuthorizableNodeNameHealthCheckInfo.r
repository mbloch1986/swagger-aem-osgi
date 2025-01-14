# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfo <- R6::R6Class(
  'ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfo',
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
      ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject
    },
    fromJSON = function(ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoJson) {
      ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject <- jsonlite::fromJSON(ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoJson)
      if (!is.null(ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoJson) {
      ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject <- jsonlite::fromJSON(ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoJson)
      self$`pid` <- ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject$`pid`
      self$`title` <- ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject$`title`
      self$`description` <- ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject$`description`
      ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckPropertiesObject <- ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckProperties$new()
      self$`properties` <- ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
