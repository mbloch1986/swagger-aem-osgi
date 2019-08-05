# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo <- R6::R6Class(
  'OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfo',
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
      OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject
    },
    fromJSON = function(OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoJson) {
      OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoJson)
      if (!is.null(OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject$`pid`)) {
        self$`pid` <- OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject$`pid`
      }
      if (!is.null(OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject$`title`)) {
        self$`title` <- OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject$`title`
      }
      if (!is.null(OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject$`description`)) {
        self$`description` <- OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject$`description`
      }
      if (!is.null(OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject$`properties`)) {
        propertiesObject <- OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoJson) {
      OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoJson)
      self$`pid` <- OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject$`pid`
      self$`title` <- OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject$`title`
      self$`description` <- OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject$`description`
      OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigPropertiesObject <- OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigProperties$new()
      self$`properties` <- OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSecurityAuthenticationAuthenticationConfigInfoObject$properties, auto_unbox = TRUE))
    }
  )
)