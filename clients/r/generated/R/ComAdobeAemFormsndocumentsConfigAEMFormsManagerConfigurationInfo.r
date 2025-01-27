# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfo <- R6::R6Class(
  'ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfo',
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
      ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject
    },
    fromJSON = function(ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoJson) {
      ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject <- jsonlite::fromJSON(ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoJson)
      if (!is.null(ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject$`pid`)) {
        self$`pid` <- ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject$`pid`
      }
      if (!is.null(ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject$`title`)) {
        self$`title` <- ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject$`title`
      }
      if (!is.null(ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject$`description`)) {
        self$`description` <- ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject$`description`
      }
      if (!is.null(ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject$`properties`)) {
        propertiesObject <- ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoJson) {
      ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject <- jsonlite::fromJSON(ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoJson)
      self$`pid` <- ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject$`pid`
      self$`title` <- ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject$`title`
      self$`description` <- ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject$`description`
      ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationPropertiesObject <- ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties$new()
      self$`properties` <- ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
