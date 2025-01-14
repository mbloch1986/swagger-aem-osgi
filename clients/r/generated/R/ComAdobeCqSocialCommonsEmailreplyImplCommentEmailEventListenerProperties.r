# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties Class
#'
#' @field event.topics 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties <- R6::R6Class(
  'ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties',
  public = list(
    `event.topics` = NULL,
    initialize = function(`event.topics`){
      if (!missing(`event.topics`)) {
        stopifnot(R6::is.R6(`event.topics`))
        self$`event.topics` <- `event.topics`
      }
    },
    toJSON = function() {
      ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerPropertiesObject <- list()
      if (!is.null(self$`event.topics`)) {
        ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerPropertiesObject[['event.topics']] <- self$`event.topics`$toJSON()
      }

      ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerPropertiesObject
    },
    fromJSON = function(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerPropertiesJson) {
      ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerPropertiesJson)
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerPropertiesObject$`event.topics`)) {
        event.topicsObject <- ConfigNodePropertyString$new()
        event.topicsObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerPropertiesObject$event.topics, auto_unbox = TRUE))
        self$`event.topics` <- event.topicsObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "event.topics": %s
        }',
        self$`event.topics`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerPropertiesJson) {
      ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`event.topics` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerPropertiesObject$event.topics, auto_unbox = TRUE))
    }
  )
)
