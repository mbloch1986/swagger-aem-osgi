# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfo <- R6::R6Class(
  'ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfo',
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
      ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject
    },
    fromJSON = function(ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoJson) {
      ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoJson)
      if (!is.null(ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject$`title`)) {
        self$`title` <- ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject$`title`
      }
      if (!is.null(ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject$`description`)) {
        self$`description` <- ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject$`description`
      }
      if (!is.null(ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoJson) {
      ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoJson)
      self$`pid` <- ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject$`pid`
      self$`title` <- ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject$`title`
      self$`description` <- ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject$`description`
      ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplPropertiesObject <- ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplProperties$new()
      self$`properties` <- ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsUgclimiterImplUGCLimiterServiceImplInfoObject$properties, auto_unbox = TRUE))
    }
  )
)