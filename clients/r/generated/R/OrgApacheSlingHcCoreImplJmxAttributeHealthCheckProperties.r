# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties Class
#'
#' @field hc.name 
#' @field hc.tags 
#' @field hc.mbean.name 
#' @field mbean.name 
#' @field attribute.name 
#' @field attribute.value.constraint 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties <- R6::R6Class(
  'OrgApacheSlingHcCoreImplJmxAttributeHealthCheckProperties',
  public = list(
    `hc.name` = NULL,
    `hc.tags` = NULL,
    `hc.mbean.name` = NULL,
    `mbean.name` = NULL,
    `attribute.name` = NULL,
    `attribute.value.constraint` = NULL,
    initialize = function(`hc.name`, `hc.tags`, `hc.mbean.name`, `mbean.name`, `attribute.name`, `attribute.value.constraint`){
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
      if (!missing(`mbean.name`)) {
        stopifnot(R6::is.R6(`mbean.name`))
        self$`mbean.name` <- `mbean.name`
      }
      if (!missing(`attribute.name`)) {
        stopifnot(R6::is.R6(`attribute.name`))
        self$`attribute.name` <- `attribute.name`
      }
      if (!missing(`attribute.value.constraint`)) {
        stopifnot(R6::is.R6(`attribute.value.constraint`))
        self$`attribute.value.constraint` <- `attribute.value.constraint`
      }
    },
    toJSON = function() {
      OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject <- list()
      if (!is.null(self$`hc.name`)) {
        OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject[['hc.name']] <- self$`hc.name`$toJSON()
      }
      if (!is.null(self$`hc.tags`)) {
        OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject[['hc.tags']] <- self$`hc.tags`$toJSON()
      }
      if (!is.null(self$`hc.mbean.name`)) {
        OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject[['hc.mbean.name']] <- self$`hc.mbean.name`$toJSON()
      }
      if (!is.null(self$`mbean.name`)) {
        OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject[['mbean.name']] <- self$`mbean.name`$toJSON()
      }
      if (!is.null(self$`attribute.name`)) {
        OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject[['attribute.name']] <- self$`attribute.name`$toJSON()
      }
      if (!is.null(self$`attribute.value.constraint`)) {
        OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject[['attribute.value.constraint']] <- self$`attribute.value.constraint`$toJSON()
      }

      OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject
    },
    fromJSON = function(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesJson) {
      OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesJson)
      if (!is.null(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$`hc.name`)) {
        hc.nameObject <- ConfigNodePropertyString$new()
        hc.nameObject$fromJSON(jsonlite::toJSON(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$hc.name, auto_unbox = TRUE))
        self$`hc.name` <- hc.nameObject
      }
      if (!is.null(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$`hc.tags`)) {
        hc.tagsObject <- ConfigNodePropertyArray$new()
        hc.tagsObject$fromJSON(jsonlite::toJSON(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$hc.tags, auto_unbox = TRUE))
        self$`hc.tags` <- hc.tagsObject
      }
      if (!is.null(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$`hc.mbean.name`)) {
        hc.mbean.nameObject <- ConfigNodePropertyString$new()
        hc.mbean.nameObject$fromJSON(jsonlite::toJSON(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$hc.mbean.name, auto_unbox = TRUE))
        self$`hc.mbean.name` <- hc.mbean.nameObject
      }
      if (!is.null(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$`mbean.name`)) {
        mbean.nameObject <- ConfigNodePropertyString$new()
        mbean.nameObject$fromJSON(jsonlite::toJSON(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$mbean.name, auto_unbox = TRUE))
        self$`mbean.name` <- mbean.nameObject
      }
      if (!is.null(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$`attribute.name`)) {
        attribute.nameObject <- ConfigNodePropertyString$new()
        attribute.nameObject$fromJSON(jsonlite::toJSON(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$attribute.name, auto_unbox = TRUE))
        self$`attribute.name` <- attribute.nameObject
      }
      if (!is.null(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$`attribute.value.constraint`)) {
        attribute.value.constraintObject <- ConfigNodePropertyString$new()
        attribute.value.constraintObject$fromJSON(jsonlite::toJSON(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$attribute.value.constraint, auto_unbox = TRUE))
        self$`attribute.value.constraint` <- attribute.value.constraintObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "hc.name": %s,
           "hc.tags": %s,
           "hc.mbean.name": %s,
           "mbean.name": %s,
           "attribute.name": %s,
           "attribute.value.constraint": %s
        }',
        self$`hc.name`$toJSON(),
        self$`hc.tags`$toJSON(),
        self$`hc.mbean.name`$toJSON(),
        self$`mbean.name`$toJSON(),
        self$`attribute.name`$toJSON(),
        self$`attribute.value.constraint`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesJson) {
      OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`hc.name` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$hc.name, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`hc.tags` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$hc.tags, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`hc.mbean.name` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$hc.mbean.name, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`mbean.name` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$mbean.name, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`attribute.name` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$attribute.name, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`attribute.value.constraint` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingHcCoreImplJmxAttributeHealthCheckPropertiesObject$attribute.value.constraint, auto_unbox = TRUE))
    }
  )
)
