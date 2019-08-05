# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqDtmImplServletsDTMDeployHookServletInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqDtmImplServletsDTMDeployHookServletInfo <- R6::R6Class(
  'ComAdobeCqDtmImplServletsDTMDeployHookServletInfo',
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
      ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject
    },
    fromJSON = function(ComAdobeCqDtmImplServletsDTMDeployHookServletInfoJson) {
      ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject <- jsonlite::fromJSON(ComAdobeCqDtmImplServletsDTMDeployHookServletInfoJson)
      if (!is.null(ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject$`title`)) {
        self$`title` <- ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject$`title`
      }
      if (!is.null(ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject$`description`)) {
        self$`description` <- ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject$`description`
      }
      if (!is.null(ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqDtmImplServletsDTMDeployHookServletProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeCqDtmImplServletsDTMDeployHookServletInfoJson) {
      ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject <- jsonlite::fromJSON(ComAdobeCqDtmImplServletsDTMDeployHookServletInfoJson)
      self$`pid` <- ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject$`pid`
      self$`title` <- ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject$`title`
      self$`description` <- ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject$`description`
      ComAdobeCqDtmImplServletsDTMDeployHookServletPropertiesObject <- ComAdobeCqDtmImplServletsDTMDeployHookServletProperties$new()
      self$`properties` <- ComAdobeCqDtmImplServletsDTMDeployHookServletPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqDtmImplServletsDTMDeployHookServletInfoObject$properties, auto_unbox = TRUE))
    }
  )
)