# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfo Class
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
OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfo <- R6::R6Class(
  'OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfo',
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
      OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject[['properties']] <- self$`properties`$toJSON()
      }
      if (!is.null(self$`bundle_location`)) {
        OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject[['bundle_location']] <- self$`bundle_location`
      }
      if (!is.null(self$`service_location`)) {
        OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject[['service_location']] <- self$`service_location`
      }

      OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject
    },
    fromJSON = function(OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoJson) {
      OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoJson)
      if (!is.null(OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$`pid`)) {
        self$`pid` <- OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$`pid`
      }
      if (!is.null(OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$`title`)) {
        self$`title` <- OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$`title`
      }
      if (!is.null(OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$`description`)) {
        self$`description` <- OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$`description`
      }
      if (!is.null(OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$`properties`)) {
        propertiesObject <- OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$properties, auto_unbox = TRUE))
        self$`properties` <- propertiesObject
      }
      if (!is.null(OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$`bundle_location`)) {
        self$`bundle_location` <- OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$`bundle_location`
      }
      if (!is.null(OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$`service_location`)) {
        self$`service_location` <- OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$`service_location`
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
    fromJSONString = function(OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoJson) {
      OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoJson)
      self$`pid` <- OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$`pid`
      self$`title` <- OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$`title`
      self$`description` <- OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$`description`
      OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurPropertiesObject <- OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurProperties$new()
      self$`properties` <- OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$properties, auto_unbox = TRUE))
      self$`bundle_location` <- OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$`bundle_location`
      self$`service_location` <- OrgApacheJackrabbitOakSecurityAuthorizationAuthorizationConfigurInfoObject$`service_location`
    }
  )
)
