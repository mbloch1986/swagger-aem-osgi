# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' MessagingUserComponentFactoryProperties Class
#'
#' @field priority 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MessagingUserComponentFactoryProperties <- R6::R6Class(
  'MessagingUserComponentFactoryProperties',
  public = list(
    `priority` = NULL,
    initialize = function(`priority`){
      if (!missing(`priority`)) {
        stopifnot(R6::is.R6(`priority`))
        self$`priority` <- `priority`
      }
    },
    toJSON = function() {
      MessagingUserComponentFactoryPropertiesObject <- list()
      if (!is.null(self$`priority`)) {
        MessagingUserComponentFactoryPropertiesObject[['priority']] <- self$`priority`$toJSON()
      }

      MessagingUserComponentFactoryPropertiesObject
    },
    fromJSON = function(MessagingUserComponentFactoryPropertiesJson) {
      MessagingUserComponentFactoryPropertiesObject <- jsonlite::fromJSON(MessagingUserComponentFactoryPropertiesJson)
      if (!is.null(MessagingUserComponentFactoryPropertiesObject$`priority`)) {
        priorityObject <- ConfigNodePropertyInteger$new()
        priorityObject$fromJSON(jsonlite::toJSON(MessagingUserComponentFactoryPropertiesObject$priority, auto_unbox = TRUE))
        self$`priority` <- priorityObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "priority": %s
        }',
        self$`priority`$toJSON()
      )
    },
    fromJSONString = function(MessagingUserComponentFactoryPropertiesJson) {
      MessagingUserComponentFactoryPropertiesObject <- jsonlite::fromJSON(MessagingUserComponentFactoryPropertiesJson)
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`priority` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(MessagingUserComponentFactoryPropertiesObject$priority, auto_unbox = TRUE))
    }
  )
)