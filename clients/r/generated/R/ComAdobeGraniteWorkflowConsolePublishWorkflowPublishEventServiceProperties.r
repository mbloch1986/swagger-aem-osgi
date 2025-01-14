# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties Class
#'
#' @field granite.workflow.WorkflowPublishEventService.enabled 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties <- R6::R6Class(
  'ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServiceProperties',
  public = list(
    `granite.workflow.WorkflowPublishEventService.enabled` = NULL,
    initialize = function(`granite.workflow.WorkflowPublishEventService.enabled`){
      if (!missing(`granite.workflow.WorkflowPublishEventService.enabled`)) {
        stopifnot(R6::is.R6(`granite.workflow.WorkflowPublishEventService.enabled`))
        self$`granite.workflow.WorkflowPublishEventService.enabled` <- `granite.workflow.WorkflowPublishEventService.enabled`
      }
    },
    toJSON = function() {
      ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServicePropertiesObject <- list()
      if (!is.null(self$`granite.workflow.WorkflowPublishEventService.enabled`)) {
        ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServicePropertiesObject[['granite.workflow.WorkflowPublishEventService.enabled']] <- self$`granite.workflow.WorkflowPublishEventService.enabled`$toJSON()
      }

      ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServicePropertiesObject
    },
    fromJSON = function(ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServicePropertiesJson) {
      ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServicePropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServicePropertiesJson)
      if (!is.null(ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServicePropertiesObject$`granite.workflow.WorkflowPublishEventService.enabled`)) {
        granite.workflow.WorkflowPublishEventService.enabledObject <- ConfigNodePropertyBoolean$new()
        granite.workflow.WorkflowPublishEventService.enabledObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServicePropertiesObject$granite.workflow.WorkflowPublishEventService.enabled, auto_unbox = TRUE))
        self$`granite.workflow.WorkflowPublishEventService.enabled` <- granite.workflow.WorkflowPublishEventService.enabledObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "granite.workflow.WorkflowPublishEventService.enabled": %s
        }',
        self$`granite.workflow.WorkflowPublishEventService.enabled`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServicePropertiesJson) {
      ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServicePropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServicePropertiesJson)
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`granite.workflow.WorkflowPublishEventService.enabled` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteWorkflowConsolePublishWorkflowPublishEventServicePropertiesObject$granite.workflow.WorkflowPublishEventService.enabled, auto_unbox = TRUE))
    }
  )
)
