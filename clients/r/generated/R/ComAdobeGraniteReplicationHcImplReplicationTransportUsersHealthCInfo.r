# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfo <- R6::R6Class(
  'ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfo',
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
      ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject
    },
    fromJSON = function(ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoJson) {
      ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject <- jsonlite::fromJSON(ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoJson)
      if (!is.null(ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoJson) {
      ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject <- jsonlite::fromJSON(ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoJson)
      self$`pid` <- ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject$`pid`
      self$`title` <- ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject$`title`
      self$`description` <- ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject$`description`
      ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCPropertiesObject <- ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCProperties$new()
      self$`properties` <- ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCInfoObject$properties, auto_unbox = TRUE))
    }
  )
)