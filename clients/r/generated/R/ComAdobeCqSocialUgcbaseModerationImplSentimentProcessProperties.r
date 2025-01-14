# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties Class
#'
#' @field watchwords.positive 
#' @field watchwords.negative 
#' @field watchwords.path 
#' @field sentiment.path 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties <- R6::R6Class(
  'ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties',
  public = list(
    `watchwords.positive` = NULL,
    `watchwords.negative` = NULL,
    `watchwords.path` = NULL,
    `sentiment.path` = NULL,
    initialize = function(`watchwords.positive`, `watchwords.negative`, `watchwords.path`, `sentiment.path`){
      if (!missing(`watchwords.positive`)) {
        stopifnot(R6::is.R6(`watchwords.positive`))
        self$`watchwords.positive` <- `watchwords.positive`
      }
      if (!missing(`watchwords.negative`)) {
        stopifnot(R6::is.R6(`watchwords.negative`))
        self$`watchwords.negative` <- `watchwords.negative`
      }
      if (!missing(`watchwords.path`)) {
        stopifnot(R6::is.R6(`watchwords.path`))
        self$`watchwords.path` <- `watchwords.path`
      }
      if (!missing(`sentiment.path`)) {
        stopifnot(R6::is.R6(`sentiment.path`))
        self$`sentiment.path` <- `sentiment.path`
      }
    },
    toJSON = function() {
      ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject <- list()
      if (!is.null(self$`watchwords.positive`)) {
        ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject[['watchwords.positive']] <- self$`watchwords.positive`$toJSON()
      }
      if (!is.null(self$`watchwords.negative`)) {
        ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject[['watchwords.negative']] <- self$`watchwords.negative`$toJSON()
      }
      if (!is.null(self$`watchwords.path`)) {
        ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject[['watchwords.path']] <- self$`watchwords.path`$toJSON()
      }
      if (!is.null(self$`sentiment.path`)) {
        ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject[['sentiment.path']] <- self$`sentiment.path`$toJSON()
      }

      ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject
    },
    fromJSON = function(ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesJson) {
      ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesJson)
      if (!is.null(ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject$`watchwords.positive`)) {
        watchwords.positiveObject <- ConfigNodePropertyArray$new()
        watchwords.positiveObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject$watchwords.positive, auto_unbox = TRUE))
        self$`watchwords.positive` <- watchwords.positiveObject
      }
      if (!is.null(ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject$`watchwords.negative`)) {
        watchwords.negativeObject <- ConfigNodePropertyArray$new()
        watchwords.negativeObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject$watchwords.negative, auto_unbox = TRUE))
        self$`watchwords.negative` <- watchwords.negativeObject
      }
      if (!is.null(ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject$`watchwords.path`)) {
        watchwords.pathObject <- ConfigNodePropertyString$new()
        watchwords.pathObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject$watchwords.path, auto_unbox = TRUE))
        self$`watchwords.path` <- watchwords.pathObject
      }
      if (!is.null(ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject$`sentiment.path`)) {
        sentiment.pathObject <- ConfigNodePropertyString$new()
        sentiment.pathObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject$sentiment.path, auto_unbox = TRUE))
        self$`sentiment.path` <- sentiment.pathObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "watchwords.positive": %s,
           "watchwords.negative": %s,
           "watchwords.path": %s,
           "sentiment.path": %s
        }',
        self$`watchwords.positive`$toJSON(),
        self$`watchwords.negative`$toJSON(),
        self$`watchwords.path`$toJSON(),
        self$`sentiment.path`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesJson) {
      ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`watchwords.positive` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject$watchwords.positive, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`watchwords.negative` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject$watchwords.negative, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`watchwords.path` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject$watchwords.path, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`sentiment.path` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseModerationImplSentimentProcessPropertiesObject$sentiment.path, auto_unbox = TRUE))
    }
  )
)
