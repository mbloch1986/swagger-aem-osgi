# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingDiscoveryOakConfigProperties Class
#'
#' @field connectorPingTimeout 
#' @field connectorPingInterval 
#' @field discoveryLiteCheckInterval 
#' @field clusterSyncServiceTimeout 
#' @field clusterSyncServiceInterval 
#' @field enableSyncToken 
#' @field minEventDelay 
#' @field socketConnectTimeout 
#' @field soTimeout 
#' @field topologyConnectorUrls 
#' @field topologyConnectorWhitelist 
#' @field autoStopLocalLoopEnabled 
#' @field gzipConnectorRequestsEnabled 
#' @field hmacEnabled 
#' @field enableEncryption 
#' @field sharedKey 
#' @field hmacSharedKeyTTL 
#' @field backoffStandbyFactor 
#' @field backoffStableFactor 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingDiscoveryOakConfigProperties <- R6::R6Class(
  'OrgApacheSlingDiscoveryOakConfigProperties',
  public = list(
    `connectorPingTimeout` = NULL,
    `connectorPingInterval` = NULL,
    `discoveryLiteCheckInterval` = NULL,
    `clusterSyncServiceTimeout` = NULL,
    `clusterSyncServiceInterval` = NULL,
    `enableSyncToken` = NULL,
    `minEventDelay` = NULL,
    `socketConnectTimeout` = NULL,
    `soTimeout` = NULL,
    `topologyConnectorUrls` = NULL,
    `topologyConnectorWhitelist` = NULL,
    `autoStopLocalLoopEnabled` = NULL,
    `gzipConnectorRequestsEnabled` = NULL,
    `hmacEnabled` = NULL,
    `enableEncryption` = NULL,
    `sharedKey` = NULL,
    `hmacSharedKeyTTL` = NULL,
    `backoffStandbyFactor` = NULL,
    `backoffStableFactor` = NULL,
    initialize = function(`connectorPingTimeout`, `connectorPingInterval`, `discoveryLiteCheckInterval`, `clusterSyncServiceTimeout`, `clusterSyncServiceInterval`, `enableSyncToken`, `minEventDelay`, `socketConnectTimeout`, `soTimeout`, `topologyConnectorUrls`, `topologyConnectorWhitelist`, `autoStopLocalLoopEnabled`, `gzipConnectorRequestsEnabled`, `hmacEnabled`, `enableEncryption`, `sharedKey`, `hmacSharedKeyTTL`, `backoffStandbyFactor`, `backoffStableFactor`){
      if (!missing(`connectorPingTimeout`)) {
        stopifnot(R6::is.R6(`connectorPingTimeout`))
        self$`connectorPingTimeout` <- `connectorPingTimeout`
      }
      if (!missing(`connectorPingInterval`)) {
        stopifnot(R6::is.R6(`connectorPingInterval`))
        self$`connectorPingInterval` <- `connectorPingInterval`
      }
      if (!missing(`discoveryLiteCheckInterval`)) {
        stopifnot(R6::is.R6(`discoveryLiteCheckInterval`))
        self$`discoveryLiteCheckInterval` <- `discoveryLiteCheckInterval`
      }
      if (!missing(`clusterSyncServiceTimeout`)) {
        stopifnot(R6::is.R6(`clusterSyncServiceTimeout`))
        self$`clusterSyncServiceTimeout` <- `clusterSyncServiceTimeout`
      }
      if (!missing(`clusterSyncServiceInterval`)) {
        stopifnot(R6::is.R6(`clusterSyncServiceInterval`))
        self$`clusterSyncServiceInterval` <- `clusterSyncServiceInterval`
      }
      if (!missing(`enableSyncToken`)) {
        stopifnot(R6::is.R6(`enableSyncToken`))
        self$`enableSyncToken` <- `enableSyncToken`
      }
      if (!missing(`minEventDelay`)) {
        stopifnot(R6::is.R6(`minEventDelay`))
        self$`minEventDelay` <- `minEventDelay`
      }
      if (!missing(`socketConnectTimeout`)) {
        stopifnot(R6::is.R6(`socketConnectTimeout`))
        self$`socketConnectTimeout` <- `socketConnectTimeout`
      }
      if (!missing(`soTimeout`)) {
        stopifnot(R6::is.R6(`soTimeout`))
        self$`soTimeout` <- `soTimeout`
      }
      if (!missing(`topologyConnectorUrls`)) {
        stopifnot(R6::is.R6(`topologyConnectorUrls`))
        self$`topologyConnectorUrls` <- `topologyConnectorUrls`
      }
      if (!missing(`topologyConnectorWhitelist`)) {
        stopifnot(R6::is.R6(`topologyConnectorWhitelist`))
        self$`topologyConnectorWhitelist` <- `topologyConnectorWhitelist`
      }
      if (!missing(`autoStopLocalLoopEnabled`)) {
        stopifnot(R6::is.R6(`autoStopLocalLoopEnabled`))
        self$`autoStopLocalLoopEnabled` <- `autoStopLocalLoopEnabled`
      }
      if (!missing(`gzipConnectorRequestsEnabled`)) {
        stopifnot(R6::is.R6(`gzipConnectorRequestsEnabled`))
        self$`gzipConnectorRequestsEnabled` <- `gzipConnectorRequestsEnabled`
      }
      if (!missing(`hmacEnabled`)) {
        stopifnot(R6::is.R6(`hmacEnabled`))
        self$`hmacEnabled` <- `hmacEnabled`
      }
      if (!missing(`enableEncryption`)) {
        stopifnot(R6::is.R6(`enableEncryption`))
        self$`enableEncryption` <- `enableEncryption`
      }
      if (!missing(`sharedKey`)) {
        stopifnot(R6::is.R6(`sharedKey`))
        self$`sharedKey` <- `sharedKey`
      }
      if (!missing(`hmacSharedKeyTTL`)) {
        stopifnot(R6::is.R6(`hmacSharedKeyTTL`))
        self$`hmacSharedKeyTTL` <- `hmacSharedKeyTTL`
      }
      if (!missing(`backoffStandbyFactor`)) {
        stopifnot(R6::is.R6(`backoffStandbyFactor`))
        self$`backoffStandbyFactor` <- `backoffStandbyFactor`
      }
      if (!missing(`backoffStableFactor`)) {
        stopifnot(R6::is.R6(`backoffStableFactor`))
        self$`backoffStableFactor` <- `backoffStableFactor`
      }
    },
    toJSON = function() {
      OrgApacheSlingDiscoveryOakConfigPropertiesObject <- list()
      if (!is.null(self$`connectorPingTimeout`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['connectorPingTimeout']] <- self$`connectorPingTimeout`$toJSON()
      }
      if (!is.null(self$`connectorPingInterval`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['connectorPingInterval']] <- self$`connectorPingInterval`$toJSON()
      }
      if (!is.null(self$`discoveryLiteCheckInterval`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['discoveryLiteCheckInterval']] <- self$`discoveryLiteCheckInterval`$toJSON()
      }
      if (!is.null(self$`clusterSyncServiceTimeout`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['clusterSyncServiceTimeout']] <- self$`clusterSyncServiceTimeout`$toJSON()
      }
      if (!is.null(self$`clusterSyncServiceInterval`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['clusterSyncServiceInterval']] <- self$`clusterSyncServiceInterval`$toJSON()
      }
      if (!is.null(self$`enableSyncToken`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['enableSyncToken']] <- self$`enableSyncToken`$toJSON()
      }
      if (!is.null(self$`minEventDelay`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['minEventDelay']] <- self$`minEventDelay`$toJSON()
      }
      if (!is.null(self$`socketConnectTimeout`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['socketConnectTimeout']] <- self$`socketConnectTimeout`$toJSON()
      }
      if (!is.null(self$`soTimeout`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['soTimeout']] <- self$`soTimeout`$toJSON()
      }
      if (!is.null(self$`topologyConnectorUrls`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['topologyConnectorUrls']] <- self$`topologyConnectorUrls`$toJSON()
      }
      if (!is.null(self$`topologyConnectorWhitelist`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['topologyConnectorWhitelist']] <- self$`topologyConnectorWhitelist`$toJSON()
      }
      if (!is.null(self$`autoStopLocalLoopEnabled`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['autoStopLocalLoopEnabled']] <- self$`autoStopLocalLoopEnabled`$toJSON()
      }
      if (!is.null(self$`gzipConnectorRequestsEnabled`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['gzipConnectorRequestsEnabled']] <- self$`gzipConnectorRequestsEnabled`$toJSON()
      }
      if (!is.null(self$`hmacEnabled`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['hmacEnabled']] <- self$`hmacEnabled`$toJSON()
      }
      if (!is.null(self$`enableEncryption`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['enableEncryption']] <- self$`enableEncryption`$toJSON()
      }
      if (!is.null(self$`sharedKey`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['sharedKey']] <- self$`sharedKey`$toJSON()
      }
      if (!is.null(self$`hmacSharedKeyTTL`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['hmacSharedKeyTTL']] <- self$`hmacSharedKeyTTL`$toJSON()
      }
      if (!is.null(self$`backoffStandbyFactor`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['backoffStandbyFactor']] <- self$`backoffStandbyFactor`$toJSON()
      }
      if (!is.null(self$`backoffStableFactor`)) {
        OrgApacheSlingDiscoveryOakConfigPropertiesObject[['backoffStableFactor']] <- self$`backoffStableFactor`$toJSON()
      }

      OrgApacheSlingDiscoveryOakConfigPropertiesObject
    },
    fromJSON = function(OrgApacheSlingDiscoveryOakConfigPropertiesJson) {
      OrgApacheSlingDiscoveryOakConfigPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingDiscoveryOakConfigPropertiesJson)
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`connectorPingTimeout`)) {
        connectorPingTimeoutObject <- ConfigNodePropertyInteger$new()
        connectorPingTimeoutObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$connectorPingTimeout, auto_unbox = TRUE))
        self$`connectorPingTimeout` <- connectorPingTimeoutObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`connectorPingInterval`)) {
        connectorPingIntervalObject <- ConfigNodePropertyInteger$new()
        connectorPingIntervalObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$connectorPingInterval, auto_unbox = TRUE))
        self$`connectorPingInterval` <- connectorPingIntervalObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`discoveryLiteCheckInterval`)) {
        discoveryLiteCheckIntervalObject <- ConfigNodePropertyInteger$new()
        discoveryLiteCheckIntervalObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$discoveryLiteCheckInterval, auto_unbox = TRUE))
        self$`discoveryLiteCheckInterval` <- discoveryLiteCheckIntervalObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`clusterSyncServiceTimeout`)) {
        clusterSyncServiceTimeoutObject <- ConfigNodePropertyInteger$new()
        clusterSyncServiceTimeoutObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$clusterSyncServiceTimeout, auto_unbox = TRUE))
        self$`clusterSyncServiceTimeout` <- clusterSyncServiceTimeoutObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`clusterSyncServiceInterval`)) {
        clusterSyncServiceIntervalObject <- ConfigNodePropertyInteger$new()
        clusterSyncServiceIntervalObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$clusterSyncServiceInterval, auto_unbox = TRUE))
        self$`clusterSyncServiceInterval` <- clusterSyncServiceIntervalObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`enableSyncToken`)) {
        enableSyncTokenObject <- ConfigNodePropertyBoolean$new()
        enableSyncTokenObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$enableSyncToken, auto_unbox = TRUE))
        self$`enableSyncToken` <- enableSyncTokenObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`minEventDelay`)) {
        minEventDelayObject <- ConfigNodePropertyInteger$new()
        minEventDelayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$minEventDelay, auto_unbox = TRUE))
        self$`minEventDelay` <- minEventDelayObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`socketConnectTimeout`)) {
        socketConnectTimeoutObject <- ConfigNodePropertyInteger$new()
        socketConnectTimeoutObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$socketConnectTimeout, auto_unbox = TRUE))
        self$`socketConnectTimeout` <- socketConnectTimeoutObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`soTimeout`)) {
        soTimeoutObject <- ConfigNodePropertyInteger$new()
        soTimeoutObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$soTimeout, auto_unbox = TRUE))
        self$`soTimeout` <- soTimeoutObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`topologyConnectorUrls`)) {
        topologyConnectorUrlsObject <- ConfigNodePropertyArray$new()
        topologyConnectorUrlsObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$topologyConnectorUrls, auto_unbox = TRUE))
        self$`topologyConnectorUrls` <- topologyConnectorUrlsObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`topologyConnectorWhitelist`)) {
        topologyConnectorWhitelistObject <- ConfigNodePropertyArray$new()
        topologyConnectorWhitelistObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$topologyConnectorWhitelist, auto_unbox = TRUE))
        self$`topologyConnectorWhitelist` <- topologyConnectorWhitelistObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`autoStopLocalLoopEnabled`)) {
        autoStopLocalLoopEnabledObject <- ConfigNodePropertyBoolean$new()
        autoStopLocalLoopEnabledObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$autoStopLocalLoopEnabled, auto_unbox = TRUE))
        self$`autoStopLocalLoopEnabled` <- autoStopLocalLoopEnabledObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`gzipConnectorRequestsEnabled`)) {
        gzipConnectorRequestsEnabledObject <- ConfigNodePropertyBoolean$new()
        gzipConnectorRequestsEnabledObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$gzipConnectorRequestsEnabled, auto_unbox = TRUE))
        self$`gzipConnectorRequestsEnabled` <- gzipConnectorRequestsEnabledObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`hmacEnabled`)) {
        hmacEnabledObject <- ConfigNodePropertyBoolean$new()
        hmacEnabledObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$hmacEnabled, auto_unbox = TRUE))
        self$`hmacEnabled` <- hmacEnabledObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`enableEncryption`)) {
        enableEncryptionObject <- ConfigNodePropertyBoolean$new()
        enableEncryptionObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$enableEncryption, auto_unbox = TRUE))
        self$`enableEncryption` <- enableEncryptionObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`sharedKey`)) {
        sharedKeyObject <- ConfigNodePropertyString$new()
        sharedKeyObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$sharedKey, auto_unbox = TRUE))
        self$`sharedKey` <- sharedKeyObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`hmacSharedKeyTTL`)) {
        hmacSharedKeyTTLObject <- ConfigNodePropertyInteger$new()
        hmacSharedKeyTTLObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$hmacSharedKeyTTL, auto_unbox = TRUE))
        self$`hmacSharedKeyTTL` <- hmacSharedKeyTTLObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`backoffStandbyFactor`)) {
        backoffStandbyFactorObject <- ConfigNodePropertyString$new()
        backoffStandbyFactorObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$backoffStandbyFactor, auto_unbox = TRUE))
        self$`backoffStandbyFactor` <- backoffStandbyFactorObject
      }
      if (!is.null(OrgApacheSlingDiscoveryOakConfigPropertiesObject$`backoffStableFactor`)) {
        backoffStableFactorObject <- ConfigNodePropertyString$new()
        backoffStableFactorObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$backoffStableFactor, auto_unbox = TRUE))
        self$`backoffStableFactor` <- backoffStableFactorObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "connectorPingTimeout": %s,
           "connectorPingInterval": %s,
           "discoveryLiteCheckInterval": %s,
           "clusterSyncServiceTimeout": %s,
           "clusterSyncServiceInterval": %s,
           "enableSyncToken": %s,
           "minEventDelay": %s,
           "socketConnectTimeout": %s,
           "soTimeout": %s,
           "topologyConnectorUrls": %s,
           "topologyConnectorWhitelist": %s,
           "autoStopLocalLoopEnabled": %s,
           "gzipConnectorRequestsEnabled": %s,
           "hmacEnabled": %s,
           "enableEncryption": %s,
           "sharedKey": %s,
           "hmacSharedKeyTTL": %s,
           "backoffStandbyFactor": %s,
           "backoffStableFactor": %s
        }',
        self$`connectorPingTimeout`$toJSON(),
        self$`connectorPingInterval`$toJSON(),
        self$`discoveryLiteCheckInterval`$toJSON(),
        self$`clusterSyncServiceTimeout`$toJSON(),
        self$`clusterSyncServiceInterval`$toJSON(),
        self$`enableSyncToken`$toJSON(),
        self$`minEventDelay`$toJSON(),
        self$`socketConnectTimeout`$toJSON(),
        self$`soTimeout`$toJSON(),
        self$`topologyConnectorUrls`$toJSON(),
        self$`topologyConnectorWhitelist`$toJSON(),
        self$`autoStopLocalLoopEnabled`$toJSON(),
        self$`gzipConnectorRequestsEnabled`$toJSON(),
        self$`hmacEnabled`$toJSON(),
        self$`enableEncryption`$toJSON(),
        self$`sharedKey`$toJSON(),
        self$`hmacSharedKeyTTL`$toJSON(),
        self$`backoffStandbyFactor`$toJSON(),
        self$`backoffStableFactor`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheSlingDiscoveryOakConfigPropertiesJson) {
      OrgApacheSlingDiscoveryOakConfigPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingDiscoveryOakConfigPropertiesJson)
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`connectorPingTimeout` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$connectorPingTimeout, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`connectorPingInterval` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$connectorPingInterval, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`discoveryLiteCheckInterval` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$discoveryLiteCheckInterval, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`clusterSyncServiceTimeout` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$clusterSyncServiceTimeout, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`clusterSyncServiceInterval` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$clusterSyncServiceInterval, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`enableSyncToken` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$enableSyncToken, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`minEventDelay` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$minEventDelay, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`socketConnectTimeout` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$socketConnectTimeout, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`soTimeout` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$soTimeout, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`topologyConnectorUrls` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$topologyConnectorUrls, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`topologyConnectorWhitelist` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$topologyConnectorWhitelist, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`autoStopLocalLoopEnabled` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$autoStopLocalLoopEnabled, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`gzipConnectorRequestsEnabled` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$gzipConnectorRequestsEnabled, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`hmacEnabled` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$hmacEnabled, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`enableEncryption` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$enableEncryption, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`sharedKey` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$sharedKey, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`hmacSharedKeyTTL` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$hmacSharedKeyTTL, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`backoffStandbyFactor` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$backoffStandbyFactor, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`backoffStableFactor` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDiscoveryOakConfigPropertiesObject$backoffStableFactor, auto_unbox = TRUE))
    }
  )
)