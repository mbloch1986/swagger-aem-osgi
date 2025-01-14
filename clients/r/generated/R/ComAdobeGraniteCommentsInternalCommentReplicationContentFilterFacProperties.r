# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties Class
#'
#' @field replicate.comment.resourceTypes 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties <- R6::R6Class(
  'ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties',
  public = list(
    `replicate.comment.resourceTypes` = NULL,
    initialize = function(`replicate.comment.resourceTypes`){
      if (!missing(`replicate.comment.resourceTypes`)) {
        stopifnot(R6::is.R6(`replicate.comment.resourceTypes`))
        self$`replicate.comment.resourceTypes` <- `replicate.comment.resourceTypes`
      }
    },
    toJSON = function() {
      ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacPropertiesObject <- list()
      if (!is.null(self$`replicate.comment.resourceTypes`)) {
        ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacPropertiesObject[['replicate.comment.resourceTypes']] <- self$`replicate.comment.resourceTypes`$toJSON()
      }

      ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacPropertiesJson) {
      ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacPropertiesJson)
      if (!is.null(ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacPropertiesObject$`replicate.comment.resourceTypes`)) {
        replicate.comment.resourceTypesObject <- ConfigNodePropertyArray$new()
        replicate.comment.resourceTypesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacPropertiesObject$replicate.comment.resourceTypes, auto_unbox = TRUE))
        self$`replicate.comment.resourceTypes` <- replicate.comment.resourceTypesObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "replicate.comment.resourceTypes": %s
        }',
        self$`replicate.comment.resourceTypes`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacPropertiesJson) {
      ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`replicate.comment.resourceTypes` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacPropertiesObject$replicate.comment.resourceTypes, auto_unbox = TRUE))
    }
  )
)
