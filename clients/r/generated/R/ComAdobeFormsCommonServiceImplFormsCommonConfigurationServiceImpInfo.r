# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfo <- R6::R6Class(
  'ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfo',
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
      ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject
    },
    fromJSON = function(ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoJson) {
      ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject <- jsonlite::fromJSON(ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoJson)
      if (!is.null(ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject$`pid`)) {
        self$`pid` <- ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject$`pid`
      }
      if (!is.null(ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject$`title`)) {
        self$`title` <- ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject$`title`
      }
      if (!is.null(ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject$`description`)) {
        self$`description` <- ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject$`description`
      }
      if (!is.null(ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject$`properties`)) {
        propertiesObject <- ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoJson) {
      ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject <- jsonlite::fromJSON(ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoJson)
      self$`pid` <- ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject$`pid`
      self$`title` <- ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject$`title`
      self$`description` <- ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject$`description`
      ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpPropertiesObject <- ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties$new()
      self$`properties` <- ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
