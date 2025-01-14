# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfo <- R6::R6Class(
  'ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfo',
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
      ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject
    },
    fromJSON = function(ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoJson) {
      ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoJson)
      if (!is.null(ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject$`title`)) {
        self$`title` <- ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject$`title`
      }
      if (!is.null(ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject$`description`)) {
        self$`description` <- ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject$`description`
      }
      if (!is.null(ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoJson) {
      ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoJson)
      self$`pid` <- ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject$`pid`
      self$`title` <- ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject$`title`
      self$`description` <- ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject$`description`
      ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoPropertiesObject <- ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties$new()
      self$`properties` <- ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
