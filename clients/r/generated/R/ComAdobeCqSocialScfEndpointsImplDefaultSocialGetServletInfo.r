# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfo <- R6::R6Class(
  'ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfo',
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
      ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject
    },
    fromJSON = function(ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoJson) {
      ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoJson)
      if (!is.null(ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject$`title`)) {
        self$`title` <- ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject$`title`
      }
      if (!is.null(ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject$`description`)) {
        self$`description` <- ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject$`description`
      }
      if (!is.null(ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoJson) {
      ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoJson)
      self$`pid` <- ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject$`pid`
      self$`title` <- ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject$`title`
      self$`description` <- ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject$`description`
      ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletPropertiesObject <- ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletProperties$new()
      self$`properties` <- ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialScfEndpointsImplDefaultSocialGetServletInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
