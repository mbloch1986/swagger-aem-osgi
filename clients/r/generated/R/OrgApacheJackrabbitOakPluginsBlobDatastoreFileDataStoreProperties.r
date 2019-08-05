# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties Class
#'
#' @field path 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties <- R6::R6Class(
  'OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties',
  public = list(
    `path` = NULL,
    initialize = function(`path`){
      if (!missing(`path`)) {
        stopifnot(R6::is.R6(`path`))
        self$`path` <- `path`
      }
    },
    toJSON = function() {
      OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStorePropertiesObject <- list()
      if (!is.null(self$`path`)) {
        OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStorePropertiesObject[['path']] <- self$`path`$toJSON()
      }

      OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStorePropertiesObject
    },
    fromJSON = function(OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStorePropertiesJson) {
      OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStorePropertiesObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStorePropertiesJson)
      if (!is.null(OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStorePropertiesObject$`path`)) {
        pathObject <- ConfigNodePropertyString$new()
        pathObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStorePropertiesObject$path, auto_unbox = TRUE))
        self$`path` <- pathObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "path": %s
        }',
        self$`path`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStorePropertiesJson) {
      OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStorePropertiesObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStorePropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`path` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStorePropertiesObject$path, auto_unbox = TRUE))
    }
  )
)