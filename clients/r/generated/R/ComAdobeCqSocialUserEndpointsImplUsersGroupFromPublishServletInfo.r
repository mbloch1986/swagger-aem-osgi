# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfo <- R6::R6Class(
  'ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfo',
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
      ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject
    },
    fromJSON = function(ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoJson) {
      ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoJson)
      if (!is.null(ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject$`title`)) {
        self$`title` <- ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject$`title`
      }
      if (!is.null(ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject$`description`)) {
        self$`description` <- ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject$`description`
      }
      if (!is.null(ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoJson) {
      ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoJson)
      self$`pid` <- ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject$`pid`
      self$`title` <- ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject$`title`
      self$`description` <- ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject$`description`
      ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletPropertiesObject <- ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletProperties$new()
      self$`properties` <- ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
