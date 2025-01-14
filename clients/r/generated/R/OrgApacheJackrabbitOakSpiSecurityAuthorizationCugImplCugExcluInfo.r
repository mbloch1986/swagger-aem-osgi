# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfo <- R6::R6Class(
  'OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfo',
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
      OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject
    },
    fromJSON = function(OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoJson) {
      OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoJson)
      if (!is.null(OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject$`pid`)) {
        self$`pid` <- OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject$`pid`
      }
      if (!is.null(OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject$`title`)) {
        self$`title` <- OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject$`title`
      }
      if (!is.null(OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject$`description`)) {
        self$`description` <- OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject$`description`
      }
      if (!is.null(OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject$`properties`)) {
        propertiesObject <- OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoJson) {
      OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoJson)
      self$`pid` <- OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject$`pid`
      self$`title` <- OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject$`title`
      self$`description` <- OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject$`description`
      OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluPropertiesObject <- OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties$new()
      self$`properties` <- OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
