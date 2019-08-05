# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfo <- R6::R6Class(
  'ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfo',
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
      ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject
    },
    fromJSON = function(ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoJson) {
      ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoJson)
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject$`title`)) {
        self$`title` <- ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject$`title`
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject$`description`)) {
        self$`description` <- ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject$`description`
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoJson) {
      ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoJson)
      self$`pid` <- ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject$`pid`
      self$`title` <- ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject$`title`
      self$`description` <- ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject$`description`
      ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderPropertiesObject <- ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderProperties$new()
      self$`properties` <- ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplIOSEmailClientProviderInfoObject$properties, auto_unbox = TRUE))
    }
  )
)