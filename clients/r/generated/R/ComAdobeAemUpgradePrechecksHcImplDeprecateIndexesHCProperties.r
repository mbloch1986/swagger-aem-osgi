# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCProperties Class
#'
#' @field hc.name 
#' @field hc.tags 
#' @field hc.mbean.name 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCProperties <- R6::R6Class(
  'ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCProperties',
  public = list(
    `hc.name` = NULL,
    `hc.tags` = NULL,
    `hc.mbean.name` = NULL,
    initialize = function(`hc.name`, `hc.tags`, `hc.mbean.name`){
      if (!missing(`hc.name`)) {
        stopifnot(R6::is.R6(`hc.name`))
        self$`hc.name` <- `hc.name`
      }
      if (!missing(`hc.tags`)) {
        stopifnot(R6::is.R6(`hc.tags`))
        self$`hc.tags` <- `hc.tags`
      }
      if (!missing(`hc.mbean.name`)) {
        stopifnot(R6::is.R6(`hc.mbean.name`))
        self$`hc.mbean.name` <- `hc.mbean.name`
      }
    },
    toJSON = function() {
      ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesObject <- list()
      if (!is.null(self$`hc.name`)) {
        ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesObject[['hc.name']] <- self$`hc.name`$toJSON()
      }
      if (!is.null(self$`hc.tags`)) {
        ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesObject[['hc.tags']] <- self$`hc.tags`$toJSON()
      }
      if (!is.null(self$`hc.mbean.name`)) {
        ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesObject[['hc.mbean.name']] <- self$`hc.mbean.name`$toJSON()
      }

      ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesObject
    },
    fromJSON = function(ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesJson) {
      ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesObject <- jsonlite::fromJSON(ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesJson)
      if (!is.null(ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesObject$`hc.name`)) {
        hc.nameObject <- ConfigNodePropertyString$new()
        hc.nameObject$fromJSON(jsonlite::toJSON(ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesObject$hc.name, auto_unbox = TRUE))
        self$`hc.name` <- hc.nameObject
      }
      if (!is.null(ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesObject$`hc.tags`)) {
        hc.tagsObject <- ConfigNodePropertyArray$new()
        hc.tagsObject$fromJSON(jsonlite::toJSON(ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesObject$hc.tags, auto_unbox = TRUE))
        self$`hc.tags` <- hc.tagsObject
      }
      if (!is.null(ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesObject$`hc.mbean.name`)) {
        hc.mbean.nameObject <- ConfigNodePropertyString$new()
        hc.mbean.nameObject$fromJSON(jsonlite::toJSON(ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesObject$hc.mbean.name, auto_unbox = TRUE))
        self$`hc.mbean.name` <- hc.mbean.nameObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "hc.name": %s,
           "hc.tags": %s,
           "hc.mbean.name": %s
        }',
        self$`hc.name`$toJSON(),
        self$`hc.tags`$toJSON(),
        self$`hc.mbean.name`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesJson) {
      ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesObject <- jsonlite::fromJSON(ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`hc.name` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesObject$hc.name, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`hc.tags` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesObject$hc.tags, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`hc.mbean.name` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeAemUpgradePrechecksHcImplDeprecateIndexesHCPropertiesObject$hc.mbean.name, auto_unbox = TRUE))
    }
  )
)
