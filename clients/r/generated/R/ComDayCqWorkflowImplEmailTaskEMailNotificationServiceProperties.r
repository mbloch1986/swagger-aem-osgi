# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties Class
#'
#' @field notify.onupdate 
#' @field notify.oncomplete 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties <- R6::R6Class(
  'ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties',
  public = list(
    `notify.onupdate` = NULL,
    `notify.oncomplete` = NULL,
    initialize = function(`notify.onupdate`, `notify.oncomplete`){
      if (!missing(`notify.onupdate`)) {
        stopifnot(R6::is.R6(`notify.onupdate`))
        self$`notify.onupdate` <- `notify.onupdate`
      }
      if (!missing(`notify.oncomplete`)) {
        stopifnot(R6::is.R6(`notify.oncomplete`))
        self$`notify.oncomplete` <- `notify.oncomplete`
      }
    },
    toJSON = function() {
      ComDayCqWorkflowImplEmailTaskEMailNotificationServicePropertiesObject <- list()
      if (!is.null(self$`notify.onupdate`)) {
        ComDayCqWorkflowImplEmailTaskEMailNotificationServicePropertiesObject[['notify.onupdate']] <- self$`notify.onupdate`$toJSON()
      }
      if (!is.null(self$`notify.oncomplete`)) {
        ComDayCqWorkflowImplEmailTaskEMailNotificationServicePropertiesObject[['notify.oncomplete']] <- self$`notify.oncomplete`$toJSON()
      }

      ComDayCqWorkflowImplEmailTaskEMailNotificationServicePropertiesObject
    },
    fromJSON = function(ComDayCqWorkflowImplEmailTaskEMailNotificationServicePropertiesJson) {
      ComDayCqWorkflowImplEmailTaskEMailNotificationServicePropertiesObject <- jsonlite::fromJSON(ComDayCqWorkflowImplEmailTaskEMailNotificationServicePropertiesJson)
      if (!is.null(ComDayCqWorkflowImplEmailTaskEMailNotificationServicePropertiesObject$`notify.onupdate`)) {
        notify.onupdateObject <- ConfigNodePropertyBoolean$new()
        notify.onupdateObject$fromJSON(jsonlite::toJSON(ComDayCqWorkflowImplEmailTaskEMailNotificationServicePropertiesObject$notify.onupdate, auto_unbox = TRUE))
        self$`notify.onupdate` <- notify.onupdateObject
      }
      if (!is.null(ComDayCqWorkflowImplEmailTaskEMailNotificationServicePropertiesObject$`notify.oncomplete`)) {
        notify.oncompleteObject <- ConfigNodePropertyBoolean$new()
        notify.oncompleteObject$fromJSON(jsonlite::toJSON(ComDayCqWorkflowImplEmailTaskEMailNotificationServicePropertiesObject$notify.oncomplete, auto_unbox = TRUE))
        self$`notify.oncomplete` <- notify.oncompleteObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "notify.onupdate": %s,
           "notify.oncomplete": %s
        }',
        self$`notify.onupdate`$toJSON(),
        self$`notify.oncomplete`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqWorkflowImplEmailTaskEMailNotificationServicePropertiesJson) {
      ComDayCqWorkflowImplEmailTaskEMailNotificationServicePropertiesObject <- jsonlite::fromJSON(ComDayCqWorkflowImplEmailTaskEMailNotificationServicePropertiesJson)
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`notify.onupdate` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqWorkflowImplEmailTaskEMailNotificationServicePropertiesObject$notify.onupdate, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`notify.oncomplete` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqWorkflowImplEmailTaskEMailNotificationServicePropertiesObject$notify.oncomplete, auto_unbox = TRUE))
    }
  )
)
