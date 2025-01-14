# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfo <- R6::R6Class(
  'OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfo',
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
      OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject
    },
    fromJSON = function(OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoJson) {
      OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject <- jsonlite::fromJSON(OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoJson)
      if (!is.null(OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject$`pid`)) {
        self$`pid` <- OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject$`pid`
      }
      if (!is.null(OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject$`title`)) {
        self$`title` <- OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject$`title`
      }
      if (!is.null(OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject$`description`)) {
        self$`description` <- OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject$`description`
      }
      if (!is.null(OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject$`properties`)) {
        propertiesObject <- OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoJson) {
      OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject <- jsonlite::fromJSON(OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoJson)
      self$`pid` <- OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject$`pid`
      self$`title` <- OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject$`title`
      self$`description` <- OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject$`description`
      OrgApacheSlingJcrBaseInternalLoginAdminWhitelistPropertiesObject <- OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties$new()
      self$`properties` <- OrgApacheSlingJcrBaseInternalLoginAdminWhitelistPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingJcrBaseInternalLoginAdminWhitelistInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
