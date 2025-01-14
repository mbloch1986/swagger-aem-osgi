# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqReplicationImplReplicationReceiverImplProperties Class
#'
#' @field receiver.tmpfile.threshold 
#' @field receiver.packages.use.install 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqReplicationImplReplicationReceiverImplProperties <- R6::R6Class(
  'ComDayCqReplicationImplReplicationReceiverImplProperties',
  public = list(
    `receiver.tmpfile.threshold` = NULL,
    `receiver.packages.use.install` = NULL,
    initialize = function(`receiver.tmpfile.threshold`, `receiver.packages.use.install`){
      if (!missing(`receiver.tmpfile.threshold`)) {
        stopifnot(R6::is.R6(`receiver.tmpfile.threshold`))
        self$`receiver.tmpfile.threshold` <- `receiver.tmpfile.threshold`
      }
      if (!missing(`receiver.packages.use.install`)) {
        stopifnot(R6::is.R6(`receiver.packages.use.install`))
        self$`receiver.packages.use.install` <- `receiver.packages.use.install`
      }
    },
    toJSON = function() {
      ComDayCqReplicationImplReplicationReceiverImplPropertiesObject <- list()
      if (!is.null(self$`receiver.tmpfile.threshold`)) {
        ComDayCqReplicationImplReplicationReceiverImplPropertiesObject[['receiver.tmpfile.threshold']] <- self$`receiver.tmpfile.threshold`$toJSON()
      }
      if (!is.null(self$`receiver.packages.use.install`)) {
        ComDayCqReplicationImplReplicationReceiverImplPropertiesObject[['receiver.packages.use.install']] <- self$`receiver.packages.use.install`$toJSON()
      }

      ComDayCqReplicationImplReplicationReceiverImplPropertiesObject
    },
    fromJSON = function(ComDayCqReplicationImplReplicationReceiverImplPropertiesJson) {
      ComDayCqReplicationImplReplicationReceiverImplPropertiesObject <- jsonlite::fromJSON(ComDayCqReplicationImplReplicationReceiverImplPropertiesJson)
      if (!is.null(ComDayCqReplicationImplReplicationReceiverImplPropertiesObject$`receiver.tmpfile.threshold`)) {
        receiver.tmpfile.thresholdObject <- ConfigNodePropertyInteger$new()
        receiver.tmpfile.thresholdObject$fromJSON(jsonlite::toJSON(ComDayCqReplicationImplReplicationReceiverImplPropertiesObject$receiver.tmpfile.threshold, auto_unbox = TRUE))
        self$`receiver.tmpfile.threshold` <- receiver.tmpfile.thresholdObject
      }
      if (!is.null(ComDayCqReplicationImplReplicationReceiverImplPropertiesObject$`receiver.packages.use.install`)) {
        receiver.packages.use.installObject <- ConfigNodePropertyBoolean$new()
        receiver.packages.use.installObject$fromJSON(jsonlite::toJSON(ComDayCqReplicationImplReplicationReceiverImplPropertiesObject$receiver.packages.use.install, auto_unbox = TRUE))
        self$`receiver.packages.use.install` <- receiver.packages.use.installObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "receiver.tmpfile.threshold": %s,
           "receiver.packages.use.install": %s
        }',
        self$`receiver.tmpfile.threshold`$toJSON(),
        self$`receiver.packages.use.install`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqReplicationImplReplicationReceiverImplPropertiesJson) {
      ComDayCqReplicationImplReplicationReceiverImplPropertiesObject <- jsonlite::fromJSON(ComDayCqReplicationImplReplicationReceiverImplPropertiesJson)
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`receiver.tmpfile.threshold` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqReplicationImplReplicationReceiverImplPropertiesObject$receiver.tmpfile.threshold, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`receiver.packages.use.install` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqReplicationImplReplicationReceiverImplPropertiesObject$receiver.packages.use.install, auto_unbox = TRUE))
    }
  )
)
