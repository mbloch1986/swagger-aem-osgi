# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties Class
#'
#' @field disabled.cipher.suites 
#' @field enabled.cipher.suites 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties <- R6::R6Class(
  'ComDayCqReplicationImplTransportBinaryLessTransportHandlerProperties',
  public = list(
    `disabled.cipher.suites` = NULL,
    `enabled.cipher.suites` = NULL,
    initialize = function(`disabled.cipher.suites`, `enabled.cipher.suites`){
      if (!missing(`disabled.cipher.suites`)) {
        stopifnot(R6::is.R6(`disabled.cipher.suites`))
        self$`disabled.cipher.suites` <- `disabled.cipher.suites`
      }
      if (!missing(`enabled.cipher.suites`)) {
        stopifnot(R6::is.R6(`enabled.cipher.suites`))
        self$`enabled.cipher.suites` <- `enabled.cipher.suites`
      }
    },
    toJSON = function() {
      ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesObject <- list()
      if (!is.null(self$`disabled.cipher.suites`)) {
        ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesObject[['disabled.cipher.suites']] <- self$`disabled.cipher.suites`$toJSON()
      }
      if (!is.null(self$`enabled.cipher.suites`)) {
        ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesObject[['enabled.cipher.suites']] <- self$`enabled.cipher.suites`$toJSON()
      }

      ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesObject
    },
    fromJSON = function(ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesJson) {
      ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesObject <- jsonlite::fromJSON(ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesJson)
      if (!is.null(ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesObject$`disabled.cipher.suites`)) {
        disabled.cipher.suitesObject <- ConfigNodePropertyArray$new()
        disabled.cipher.suitesObject$fromJSON(jsonlite::toJSON(ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesObject$disabled.cipher.suites, auto_unbox = TRUE))
        self$`disabled.cipher.suites` <- disabled.cipher.suitesObject
      }
      if (!is.null(ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesObject$`enabled.cipher.suites`)) {
        enabled.cipher.suitesObject <- ConfigNodePropertyArray$new()
        enabled.cipher.suitesObject$fromJSON(jsonlite::toJSON(ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesObject$enabled.cipher.suites, auto_unbox = TRUE))
        self$`enabled.cipher.suites` <- enabled.cipher.suitesObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "disabled.cipher.suites": %s,
           "enabled.cipher.suites": %s
        }',
        self$`disabled.cipher.suites`$toJSON(),
        self$`enabled.cipher.suites`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesJson) {
      ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesObject <- jsonlite::fromJSON(ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`disabled.cipher.suites` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesObject$disabled.cipher.suites, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`enabled.cipher.suites` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqReplicationImplTransportBinaryLessTransportHandlerPropertiesObject$enabled.cipher.suites, auto_unbox = TRUE))
    }
  )
)
