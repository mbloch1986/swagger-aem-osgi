# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfo <- R6::R6Class(
  'ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfo',
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
      ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject
    },
    fromJSON = function(ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoJson) {
      ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoJson)
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject$`title`)) {
        self$`title` <- ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject$`title`
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject$`description`)) {
        self$`description` <- ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject$`description`
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoJson) {
      ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoJson)
      self$`pid` <- ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject$`pid`
      self$`title` <- ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject$`title`
      self$`description` <- ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject$`description`
      ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterPropertiesObject <- ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterProperties$new()
      self$`properties` <- ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailReplyImporterInfoObject$properties, auto_unbox = TRUE))
    }
  )
)