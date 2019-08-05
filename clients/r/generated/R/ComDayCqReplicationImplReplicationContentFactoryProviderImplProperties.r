# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties Class
#'
#' @field replication.content.useFileStorage 
#' @field replication.content.maxCommitAttempts 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties <- R6::R6Class(
  'ComDayCqReplicationImplReplicationContentFactoryProviderImplProperties',
  public = list(
    `replication.content.useFileStorage` = NULL,
    `replication.content.maxCommitAttempts` = NULL,
    initialize = function(`replication.content.useFileStorage`, `replication.content.maxCommitAttempts`){
      if (!missing(`replication.content.useFileStorage`)) {
        stopifnot(R6::is.R6(`replication.content.useFileStorage`))
        self$`replication.content.useFileStorage` <- `replication.content.useFileStorage`
      }
      if (!missing(`replication.content.maxCommitAttempts`)) {
        stopifnot(R6::is.R6(`replication.content.maxCommitAttempts`))
        self$`replication.content.maxCommitAttempts` <- `replication.content.maxCommitAttempts`
      }
    },
    toJSON = function() {
      ComDayCqReplicationImplReplicationContentFactoryProviderImplPropertiesObject <- list()
      if (!is.null(self$`replication.content.useFileStorage`)) {
        ComDayCqReplicationImplReplicationContentFactoryProviderImplPropertiesObject[['replication.content.useFileStorage']] <- self$`replication.content.useFileStorage`$toJSON()
      }
      if (!is.null(self$`replication.content.maxCommitAttempts`)) {
        ComDayCqReplicationImplReplicationContentFactoryProviderImplPropertiesObject[['replication.content.maxCommitAttempts']] <- self$`replication.content.maxCommitAttempts`$toJSON()
      }

      ComDayCqReplicationImplReplicationContentFactoryProviderImplPropertiesObject
    },
    fromJSON = function(ComDayCqReplicationImplReplicationContentFactoryProviderImplPropertiesJson) {
      ComDayCqReplicationImplReplicationContentFactoryProviderImplPropertiesObject <- jsonlite::fromJSON(ComDayCqReplicationImplReplicationContentFactoryProviderImplPropertiesJson)
      if (!is.null(ComDayCqReplicationImplReplicationContentFactoryProviderImplPropertiesObject$`replication.content.useFileStorage`)) {
        replication.content.useFileStorageObject <- ConfigNodePropertyBoolean$new()
        replication.content.useFileStorageObject$fromJSON(jsonlite::toJSON(ComDayCqReplicationImplReplicationContentFactoryProviderImplPropertiesObject$replication.content.useFileStorage, auto_unbox = TRUE))
        self$`replication.content.useFileStorage` <- replication.content.useFileStorageObject
      }
      if (!is.null(ComDayCqReplicationImplReplicationContentFactoryProviderImplPropertiesObject$`replication.content.maxCommitAttempts`)) {
        replication.content.maxCommitAttemptsObject <- ConfigNodePropertyInteger$new()
        replication.content.maxCommitAttemptsObject$fromJSON(jsonlite::toJSON(ComDayCqReplicationImplReplicationContentFactoryProviderImplPropertiesObject$replication.content.maxCommitAttempts, auto_unbox = TRUE))
        self$`replication.content.maxCommitAttempts` <- replication.content.maxCommitAttemptsObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "replication.content.useFileStorage": %s,
           "replication.content.maxCommitAttempts": %s
        }',
        self$`replication.content.useFileStorage`$toJSON(),
        self$`replication.content.maxCommitAttempts`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqReplicationImplReplicationContentFactoryProviderImplPropertiesJson) {
      ComDayCqReplicationImplReplicationContentFactoryProviderImplPropertiesObject <- jsonlite::fromJSON(ComDayCqReplicationImplReplicationContentFactoryProviderImplPropertiesJson)
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`replication.content.useFileStorage` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqReplicationImplReplicationContentFactoryProviderImplPropertiesObject$replication.content.useFileStorage, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`replication.content.maxCommitAttempts` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqReplicationImplReplicationContentFactoryProviderImplPropertiesObject$replication.content.maxCommitAttempts, auto_unbox = TRUE))
    }
  )
)