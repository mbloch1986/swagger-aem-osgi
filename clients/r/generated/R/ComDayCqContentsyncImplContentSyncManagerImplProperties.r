# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqContentsyncImplContentSyncManagerImplProperties Class
#'
#' @field contentsync.fallback.authorizable 
#' @field contentsync.fallback.updateuser 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqContentsyncImplContentSyncManagerImplProperties <- R6::R6Class(
  'ComDayCqContentsyncImplContentSyncManagerImplProperties',
  public = list(
    `contentsync.fallback.authorizable` = NULL,
    `contentsync.fallback.updateuser` = NULL,
    initialize = function(`contentsync.fallback.authorizable`, `contentsync.fallback.updateuser`){
      if (!missing(`contentsync.fallback.authorizable`)) {
        stopifnot(R6::is.R6(`contentsync.fallback.authorizable`))
        self$`contentsync.fallback.authorizable` <- `contentsync.fallback.authorizable`
      }
      if (!missing(`contentsync.fallback.updateuser`)) {
        stopifnot(R6::is.R6(`contentsync.fallback.updateuser`))
        self$`contentsync.fallback.updateuser` <- `contentsync.fallback.updateuser`
      }
    },
    toJSON = function() {
      ComDayCqContentsyncImplContentSyncManagerImplPropertiesObject <- list()
      if (!is.null(self$`contentsync.fallback.authorizable`)) {
        ComDayCqContentsyncImplContentSyncManagerImplPropertiesObject[['contentsync.fallback.authorizable']] <- self$`contentsync.fallback.authorizable`$toJSON()
      }
      if (!is.null(self$`contentsync.fallback.updateuser`)) {
        ComDayCqContentsyncImplContentSyncManagerImplPropertiesObject[['contentsync.fallback.updateuser']] <- self$`contentsync.fallback.updateuser`$toJSON()
      }

      ComDayCqContentsyncImplContentSyncManagerImplPropertiesObject
    },
    fromJSON = function(ComDayCqContentsyncImplContentSyncManagerImplPropertiesJson) {
      ComDayCqContentsyncImplContentSyncManagerImplPropertiesObject <- jsonlite::fromJSON(ComDayCqContentsyncImplContentSyncManagerImplPropertiesJson)
      if (!is.null(ComDayCqContentsyncImplContentSyncManagerImplPropertiesObject$`contentsync.fallback.authorizable`)) {
        contentsync.fallback.authorizableObject <- ConfigNodePropertyString$new()
        contentsync.fallback.authorizableObject$fromJSON(jsonlite::toJSON(ComDayCqContentsyncImplContentSyncManagerImplPropertiesObject$contentsync.fallback.authorizable, auto_unbox = TRUE))
        self$`contentsync.fallback.authorizable` <- contentsync.fallback.authorizableObject
      }
      if (!is.null(ComDayCqContentsyncImplContentSyncManagerImplPropertiesObject$`contentsync.fallback.updateuser`)) {
        contentsync.fallback.updateuserObject <- ConfigNodePropertyString$new()
        contentsync.fallback.updateuserObject$fromJSON(jsonlite::toJSON(ComDayCqContentsyncImplContentSyncManagerImplPropertiesObject$contentsync.fallback.updateuser, auto_unbox = TRUE))
        self$`contentsync.fallback.updateuser` <- contentsync.fallback.updateuserObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "contentsync.fallback.authorizable": %s,
           "contentsync.fallback.updateuser": %s
        }',
        self$`contentsync.fallback.authorizable`$toJSON(),
        self$`contentsync.fallback.updateuser`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqContentsyncImplContentSyncManagerImplPropertiesJson) {
      ComDayCqContentsyncImplContentSyncManagerImplPropertiesObject <- jsonlite::fromJSON(ComDayCqContentsyncImplContentSyncManagerImplPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`contentsync.fallback.authorizable` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqContentsyncImplContentSyncManagerImplPropertiesObject$contentsync.fallback.authorizable, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`contentsync.fallback.updateuser` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqContentsyncImplContentSyncManagerImplPropertiesObject$contentsync.fallback.updateuser, auto_unbox = TRUE))
    }
  )
)