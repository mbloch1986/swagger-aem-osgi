# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfo <- R6::R6Class(
  'ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfo',
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
      ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject
    },
    fromJSON = function(ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoJson) {
      ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoJson)
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject$`title`)) {
        self$`title` <- ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject$`title`
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject$`description`)) {
        self$`description` <- ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject$`description`
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoJson) {
      ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoJson)
      self$`pid` <- ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject$`pid`
      self$`title` <- ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject$`title`
      self$`description` <- ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject$`description`
      ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderPropertiesObject <- ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderProperties$new()
      self$`properties` <- ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
