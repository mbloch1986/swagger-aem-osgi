# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#' @field bundle_location 
#' @field service_location 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo <- R6::R6Class(
  'OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfo',
  public = list(
    `pid` = NULL,
    `title` = NULL,
    `description` = NULL,
    `properties` = NULL,
    `bundle_location` = NULL,
    `service_location` = NULL,
    initialize = function(`pid`, `title`, `description`, `properties`, `bundle_location`, `service_location`){
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
      if (!missing(`bundle_location`)) {
        stopifnot(is.character(`bundle_location`), length(`bundle_location`) == 1)
        self$`bundle_location` <- `bundle_location`
      }
      if (!missing(`service_location`)) {
        stopifnot(is.character(`service_location`), length(`service_location`) == 1)
        self$`service_location` <- `service_location`
      }
    },
    toJSON = function() {
      OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject[['properties']] <- self$`properties`$toJSON()
      }
      if (!is.null(self$`bundle_location`)) {
        OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject[['bundle_location']] <- self$`bundle_location`
      }
      if (!is.null(self$`service_location`)) {
        OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject[['service_location']] <- self$`service_location`
      }

      OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject
    },
    fromJSON = function(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoJson) {
      OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoJson)
      if (!is.null(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$`pid`)) {
        self$`pid` <- OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$`pid`
      }
      if (!is.null(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$`title`)) {
        self$`title` <- OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$`title`
      }
      if (!is.null(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$`description`)) {
        self$`description` <- OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$`description`
      }
      if (!is.null(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$`properties`)) {
        propertiesObject <- OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$properties, auto_unbox = TRUE))
        self$`properties` <- propertiesObject
      }
      if (!is.null(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$`bundle_location`)) {
        self$`bundle_location` <- OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$`bundle_location`
      }
      if (!is.null(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$`service_location`)) {
        self$`service_location` <- OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$`service_location`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "pid": %s,
           "title": %s,
           "description": %s,
           "properties": %s,
           "bundle_location": %s,
           "service_location": %s
        }',
        self$`pid`,
        self$`title`,
        self$`description`,
        self$`properties`$toJSON(),
        self$`bundle_location`,
        self$`service_location`
      )
    },
    fromJSONString = function(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoJson) {
      OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoJson)
      self$`pid` <- OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$`pid`
      self$`title` <- OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$`title`
      self$`description` <- OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$`description`
      OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject <- OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties$new()
      self$`properties` <- OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$properties, auto_unbox = TRUE))
      self$`bundle_location` <- OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$`bundle_location`
      self$`service_location` <- OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableInfoObject$`service_location`
    }
  )
)