# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfo <- R6::R6Class(
  'OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfo',
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
      OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject
    },
    fromJSON = function(OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoJson) {
      OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoJson)
      if (!is.null(OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject$`pid`)) {
        self$`pid` <- OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject$`pid`
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject$`title`)) {
        self$`title` <- OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject$`title`
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject$`description`)) {
        self$`description` <- OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject$`description`
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject$`properties`)) {
        propertiesObject <- OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoJson) {
      OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoJson)
      self$`pid` <- OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject$`pid`
      self$`title` <- OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject$`title`
      self$`description` <- OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject$`description`
      OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServicePropertiesObject <- OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceProperties$new()
      self$`properties` <- OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServicePropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsDocumentDocumentNodeStoreServiceInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
