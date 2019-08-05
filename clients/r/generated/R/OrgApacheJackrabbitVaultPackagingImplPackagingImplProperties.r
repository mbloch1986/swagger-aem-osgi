# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties Class
#'
#' @field packageRoots 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties <- R6::R6Class(
  'OrgApacheJackrabbitVaultPackagingImplPackagingImplProperties',
  public = list(
    `packageRoots` = NULL,
    initialize = function(`packageRoots`){
      if (!missing(`packageRoots`)) {
        stopifnot(R6::is.R6(`packageRoots`))
        self$`packageRoots` <- `packageRoots`
      }
    },
    toJSON = function() {
      OrgApacheJackrabbitVaultPackagingImplPackagingImplPropertiesObject <- list()
      if (!is.null(self$`packageRoots`)) {
        OrgApacheJackrabbitVaultPackagingImplPackagingImplPropertiesObject[['packageRoots']] <- self$`packageRoots`$toJSON()
      }

      OrgApacheJackrabbitVaultPackagingImplPackagingImplPropertiesObject
    },
    fromJSON = function(OrgApacheJackrabbitVaultPackagingImplPackagingImplPropertiesJson) {
      OrgApacheJackrabbitVaultPackagingImplPackagingImplPropertiesObject <- jsonlite::fromJSON(OrgApacheJackrabbitVaultPackagingImplPackagingImplPropertiesJson)
      if (!is.null(OrgApacheJackrabbitVaultPackagingImplPackagingImplPropertiesObject$`packageRoots`)) {
        packageRootsObject <- ConfigNodePropertyArray$new()
        packageRootsObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitVaultPackagingImplPackagingImplPropertiesObject$packageRoots, auto_unbox = TRUE))
        self$`packageRoots` <- packageRootsObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "packageRoots": %s
        }',
        self$`packageRoots`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheJackrabbitVaultPackagingImplPackagingImplPropertiesJson) {
      OrgApacheJackrabbitVaultPackagingImplPackagingImplPropertiesObject <- jsonlite::fromJSON(OrgApacheJackrabbitVaultPackagingImplPackagingImplPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`packageRoots` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitVaultPackagingImplPackagingImplPropertiesObject$packageRoots, auto_unbox = TRUE))
    }
  )
)