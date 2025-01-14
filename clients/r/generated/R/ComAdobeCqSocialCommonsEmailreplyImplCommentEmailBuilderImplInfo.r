# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfo <- R6::R6Class(
  'ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfo',
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
      ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject
    },
    fromJSON = function(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoJson) {
      ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoJson)
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject$`title`)) {
        self$`title` <- ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject$`title`
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject$`description`)) {
        self$`description` <- ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject$`description`
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoJson) {
      ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoJson)
      self$`pid` <- ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject$`pid`
      self$`title` <- ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject$`title`
      self$`description` <- ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject$`description`
      ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplPropertiesObject <- ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplProperties$new()
      self$`properties` <- ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailBuilderImplInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
