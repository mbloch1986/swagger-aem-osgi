# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplProperties Class
#'
#' @field poolSize 
#' @field maxPoolSize 
#' @field queueSize 
#' @field keepAliveTime 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplProperties <- R6::R6Class(
  'ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplProperties',
  public = list(
    `poolSize` = NULL,
    `maxPoolSize` = NULL,
    `queueSize` = NULL,
    `keepAliveTime` = NULL,
    initialize = function(`poolSize`, `maxPoolSize`, `queueSize`, `keepAliveTime`){
      if (!missing(`poolSize`)) {
        stopifnot(R6::is.R6(`poolSize`))
        self$`poolSize` <- `poolSize`
      }
      if (!missing(`maxPoolSize`)) {
        stopifnot(R6::is.R6(`maxPoolSize`))
        self$`maxPoolSize` <- `maxPoolSize`
      }
      if (!missing(`queueSize`)) {
        stopifnot(R6::is.R6(`queueSize`))
        self$`queueSize` <- `queueSize`
      }
      if (!missing(`keepAliveTime`)) {
        stopifnot(R6::is.R6(`keepAliveTime`))
        self$`keepAliveTime` <- `keepAliveTime`
      }
    },
    toJSON = function() {
      ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject <- list()
      if (!is.null(self$`poolSize`)) {
        ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject[['poolSize']] <- self$`poolSize`$toJSON()
      }
      if (!is.null(self$`maxPoolSize`)) {
        ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject[['maxPoolSize']] <- self$`maxPoolSize`$toJSON()
      }
      if (!is.null(self$`queueSize`)) {
        ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject[['queueSize']] <- self$`queueSize`$toJSON()
      }
      if (!is.null(self$`keepAliveTime`)) {
        ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject[['keepAliveTime']] <- self$`keepAliveTime`$toJSON()
      }

      ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject
    },
    fromJSON = function(ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesJson) {
      ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesJson)
      if (!is.null(ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject$`poolSize`)) {
        poolSizeObject <- ConfigNodePropertyInteger$new()
        poolSizeObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject$poolSize, auto_unbox = TRUE))
        self$`poolSize` <- poolSizeObject
      }
      if (!is.null(ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject$`maxPoolSize`)) {
        maxPoolSizeObject <- ConfigNodePropertyInteger$new()
        maxPoolSizeObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject$maxPoolSize, auto_unbox = TRUE))
        self$`maxPoolSize` <- maxPoolSizeObject
      }
      if (!is.null(ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject$`queueSize`)) {
        queueSizeObject <- ConfigNodePropertyInteger$new()
        queueSizeObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject$queueSize, auto_unbox = TRUE))
        self$`queueSize` <- queueSizeObject
      }
      if (!is.null(ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject$`keepAliveTime`)) {
        keepAliveTimeObject <- ConfigNodePropertyInteger$new()
        keepAliveTimeObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject$keepAliveTime, auto_unbox = TRUE))
        self$`keepAliveTime` <- keepAliveTimeObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "poolSize": %s,
           "maxPoolSize": %s,
           "queueSize": %s,
           "keepAliveTime": %s
        }',
        self$`poolSize`$toJSON(),
        self$`maxPoolSize`$toJSON(),
        self$`queueSize`$toJSON(),
        self$`keepAliveTime`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesJson) {
      ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesJson)
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`poolSize` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject$poolSize, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`maxPoolSize` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject$maxPoolSize, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`queueSize` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject$queueSize, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`keepAliveTime` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseImplAysncReverseReplicatorImplPropertiesObject$keepAliveTime, auto_unbox = TRUE))
    }
  )
)
