# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheJackrabbitVaultPackagingImplPackagingImplInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheJackrabbitVaultPackagingImplPackagingImplInfo <- R6::R6Class(
  'OrgApacheJackrabbitVaultPackagingImplPackagingImplInfo',
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
      OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject
    },
    fromJSON = function(OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoJson) {
      OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject <- jsonlite::fromJSON(OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoJson)
      if (!is.null(OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject$`pid`)) {
        self$`pid` <- OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject$`pid`
      }
      if (!is.null(OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject$`title`)) {
        self$`title` <- OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject$`title`
      }
      if (!is.null(OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject$`description`)) {
        self$`description` <- OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject$`description`
      }
      if (!is.null(OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject$`properties`)) {
        propertiesObject <- OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoJson) {
      OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject <- jsonlite::fromJSON(OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoJson)
      self$`pid` <- OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject$`pid`
      self$`title` <- OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject$`title`
      self$`description` <- OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject$`description`
      OrgApacheJackrabbitVaultPackagingImplPackagingImplPropertiesObject <- OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties$new()
      self$`properties` <- OrgApacheJackrabbitVaultPackagingImplPackagingImplPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitVaultPackagingImplPackagingImplInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
