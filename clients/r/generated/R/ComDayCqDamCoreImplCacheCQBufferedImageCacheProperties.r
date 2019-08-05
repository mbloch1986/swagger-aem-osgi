# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamCoreImplCacheCQBufferedImageCacheProperties Class
#'
#' @field cq.dam.image.cache.max.memory 
#' @field cq.dam.image.cache.max.age 
#' @field cq.dam.image.cache.max.dimension 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamCoreImplCacheCQBufferedImageCacheProperties <- R6::R6Class(
  'ComDayCqDamCoreImplCacheCQBufferedImageCacheProperties',
  public = list(
    `cq.dam.image.cache.max.memory` = NULL,
    `cq.dam.image.cache.max.age` = NULL,
    `cq.dam.image.cache.max.dimension` = NULL,
    initialize = function(`cq.dam.image.cache.max.memory`, `cq.dam.image.cache.max.age`, `cq.dam.image.cache.max.dimension`){
      if (!missing(`cq.dam.image.cache.max.memory`)) {
        stopifnot(R6::is.R6(`cq.dam.image.cache.max.memory`))
        self$`cq.dam.image.cache.max.memory` <- `cq.dam.image.cache.max.memory`
      }
      if (!missing(`cq.dam.image.cache.max.age`)) {
        stopifnot(R6::is.R6(`cq.dam.image.cache.max.age`))
        self$`cq.dam.image.cache.max.age` <- `cq.dam.image.cache.max.age`
      }
      if (!missing(`cq.dam.image.cache.max.dimension`)) {
        stopifnot(R6::is.R6(`cq.dam.image.cache.max.dimension`))
        self$`cq.dam.image.cache.max.dimension` <- `cq.dam.image.cache.max.dimension`
      }
    },
    toJSON = function() {
      ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesObject <- list()
      if (!is.null(self$`cq.dam.image.cache.max.memory`)) {
        ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesObject[['cq.dam.image.cache.max.memory']] <- self$`cq.dam.image.cache.max.memory`$toJSON()
      }
      if (!is.null(self$`cq.dam.image.cache.max.age`)) {
        ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesObject[['cq.dam.image.cache.max.age']] <- self$`cq.dam.image.cache.max.age`$toJSON()
      }
      if (!is.null(self$`cq.dam.image.cache.max.dimension`)) {
        ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesObject[['cq.dam.image.cache.max.dimension']] <- self$`cq.dam.image.cache.max.dimension`$toJSON()
      }

      ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesObject
    },
    fromJSON = function(ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesJson) {
      ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesObject <- jsonlite::fromJSON(ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesJson)
      if (!is.null(ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesObject$`cq.dam.image.cache.max.memory`)) {
        cq.dam.image.cache.max.memoryObject <- ConfigNodePropertyInteger$new()
        cq.dam.image.cache.max.memoryObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesObject$cq.dam.image.cache.max.memory, auto_unbox = TRUE))
        self$`cq.dam.image.cache.max.memory` <- cq.dam.image.cache.max.memoryObject
      }
      if (!is.null(ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesObject$`cq.dam.image.cache.max.age`)) {
        cq.dam.image.cache.max.ageObject <- ConfigNodePropertyInteger$new()
        cq.dam.image.cache.max.ageObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesObject$cq.dam.image.cache.max.age, auto_unbox = TRUE))
        self$`cq.dam.image.cache.max.age` <- cq.dam.image.cache.max.ageObject
      }
      if (!is.null(ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesObject$`cq.dam.image.cache.max.dimension`)) {
        cq.dam.image.cache.max.dimensionObject <- ConfigNodePropertyString$new()
        cq.dam.image.cache.max.dimensionObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesObject$cq.dam.image.cache.max.dimension, auto_unbox = TRUE))
        self$`cq.dam.image.cache.max.dimension` <- cq.dam.image.cache.max.dimensionObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "cq.dam.image.cache.max.memory": %s,
           "cq.dam.image.cache.max.age": %s,
           "cq.dam.image.cache.max.dimension": %s
        }',
        self$`cq.dam.image.cache.max.memory`$toJSON(),
        self$`cq.dam.image.cache.max.age`$toJSON(),
        self$`cq.dam.image.cache.max.dimension`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesJson) {
      ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesObject <- jsonlite::fromJSON(ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesJson)
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`cq.dam.image.cache.max.memory` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesObject$cq.dam.image.cache.max.memory, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`cq.dam.image.cache.max.age` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesObject$cq.dam.image.cache.max.age, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`cq.dam.image.cache.max.dimension` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplCacheCQBufferedImageCachePropertiesObject$cq.dam.image.cache.max.dimension, auto_unbox = TRUE))
    }
  )
)