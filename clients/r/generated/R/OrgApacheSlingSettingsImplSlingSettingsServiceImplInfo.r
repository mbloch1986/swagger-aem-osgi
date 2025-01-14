# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingSettingsImplSlingSettingsServiceImplInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingSettingsImplSlingSettingsServiceImplInfo <- R6::R6Class(
  'OrgApacheSlingSettingsImplSlingSettingsServiceImplInfo',
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
      OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject
    },
    fromJSON = function(OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoJson) {
      OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject <- jsonlite::fromJSON(OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoJson)
      if (!is.null(OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject$`pid`)) {
        self$`pid` <- OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject$`pid`
      }
      if (!is.null(OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject$`title`)) {
        self$`title` <- OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject$`title`
      }
      if (!is.null(OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject$`description`)) {
        self$`description` <- OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject$`description`
      }
      if (!is.null(OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject$`properties`)) {
        propertiesObject <- OrgApacheSlingSettingsImplSlingSettingsServiceImplProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoJson) {
      OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject <- jsonlite::fromJSON(OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoJson)
      self$`pid` <- OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject$`pid`
      self$`title` <- OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject$`title`
      self$`description` <- OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject$`description`
      OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesObject <- OrgApacheSlingSettingsImplSlingSettingsServiceImplProperties$new()
      self$`properties` <- OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingSettingsImplSlingSettingsServiceImplInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
