# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfo <- R6::R6Class(
  'OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfo',
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
      OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject
    },
    fromJSON = function(OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoJson) {
      OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoJson)
      if (!is.null(OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject$`pid`)) {
        self$`pid` <- OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject$`pid`
      }
      if (!is.null(OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject$`title`)) {
        self$`title` <- OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject$`title`
      }
      if (!is.null(OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject$`description`)) {
        self$`description` <- OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject$`description`
      }
      if (!is.null(OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject$`properties`)) {
        propertiesObject <- OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoJson) {
      OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoJson)
      self$`pid` <- OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject$`pid`
      self$`title` <- OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject$`title`
      self$`description` <- OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject$`description`
      OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServicePropertiesObject <- OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties$new()
      self$`properties` <- OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServicePropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
