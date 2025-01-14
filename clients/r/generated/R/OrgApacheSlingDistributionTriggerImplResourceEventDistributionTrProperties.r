# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties Class
#'
#' @field name 
#' @field path 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties <- R6::R6Class(
  'OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrProperties',
  public = list(
    `name` = NULL,
    `path` = NULL,
    initialize = function(`name`, `path`){
      if (!missing(`name`)) {
        stopifnot(R6::is.R6(`name`))
        self$`name` <- `name`
      }
      if (!missing(`path`)) {
        stopifnot(R6::is.R6(`path`))
        self$`path` <- `path`
      }
    },
    toJSON = function() {
      OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrPropertiesObject <- list()
      if (!is.null(self$`name`)) {
        OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrPropertiesObject[['name']] <- self$`name`$toJSON()
      }
      if (!is.null(self$`path`)) {
        OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrPropertiesObject[['path']] <- self$`path`$toJSON()
      }

      OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrPropertiesObject
    },
    fromJSON = function(OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrPropertiesJson) {
      OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrPropertiesJson)
      if (!is.null(OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrPropertiesObject$`name`)) {
        nameObject <- ConfigNodePropertyString$new()
        nameObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrPropertiesObject$name, auto_unbox = TRUE))
        self$`name` <- nameObject
      }
      if (!is.null(OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrPropertiesObject$`path`)) {
        pathObject <- ConfigNodePropertyString$new()
        pathObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrPropertiesObject$path, auto_unbox = TRUE))
        self$`path` <- pathObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "name": %s,
           "path": %s
        }',
        self$`name`$toJSON(),
        self$`path`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrPropertiesJson) {
      OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`name` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrPropertiesObject$name, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`path` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionTriggerImplResourceEventDistributionTrPropertiesObject$path, auto_unbox = TRUE))
    }
  )
)
