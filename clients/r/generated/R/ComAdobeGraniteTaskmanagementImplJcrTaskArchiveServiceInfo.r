# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfo <- R6::R6Class(
  'ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfo',
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
      ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject
    },
    fromJSON = function(ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoJson) {
      ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject <- jsonlite::fromJSON(ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoJson)
      if (!is.null(ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoJson) {
      ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject <- jsonlite::fromJSON(ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoJson)
      self$`pid` <- ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject$`pid`
      self$`title` <- ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject$`title`
      self$`description` <- ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject$`description`
      ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServicePropertiesObject <- ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceProperties$new()
      self$`properties` <- ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServicePropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteTaskmanagementImplJcrTaskArchiveServiceInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
