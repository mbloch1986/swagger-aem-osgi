# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfo <- R6::R6Class(
  'OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfo',
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
      OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject
    },
    fromJSON = function(OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoJson) {
      OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject <- jsonlite::fromJSON(OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoJson)
      if (!is.null(OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject$`pid`)) {
        self$`pid` <- OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject$`pid`
      }
      if (!is.null(OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject$`title`)) {
        self$`title` <- OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject$`title`
      }
      if (!is.null(OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject$`description`)) {
        self$`description` <- OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject$`description`
      }
      if (!is.null(OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject$`properties`)) {
        propertiesObject <- OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoJson) {
      OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject <- jsonlite::fromJSON(OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoJson)
      self$`pid` <- OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject$`pid`
      self$`title` <- OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject$`title`
      self$`description` <- OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject$`description`
      OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportPropertiesObject <- OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportProperties$new()
      self$`properties` <- OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingJcrJackrabbitServerRmiRegistrationSupportInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
