# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamCoreImplJmxAssetUpdateMonitorImplProperties Class
#'
#' @field jmx.objectname 
#' @field active 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamCoreImplJmxAssetUpdateMonitorImplProperties <- R6::R6Class(
  'ComDayCqDamCoreImplJmxAssetUpdateMonitorImplProperties',
  public = list(
    `jmx.objectname` = NULL,
    `active` = NULL,
    initialize = function(`jmx.objectname`, `active`){
      if (!missing(`jmx.objectname`)) {
        stopifnot(R6::is.R6(`jmx.objectname`))
        self$`jmx.objectname` <- `jmx.objectname`
      }
      if (!missing(`active`)) {
        stopifnot(R6::is.R6(`active`))
        self$`active` <- `active`
      }
    },
    toJSON = function() {
      ComDayCqDamCoreImplJmxAssetUpdateMonitorImplPropertiesObject <- list()
      if (!is.null(self$`jmx.objectname`)) {
        ComDayCqDamCoreImplJmxAssetUpdateMonitorImplPropertiesObject[['jmx.objectname']] <- self$`jmx.objectname`$toJSON()
      }
      if (!is.null(self$`active`)) {
        ComDayCqDamCoreImplJmxAssetUpdateMonitorImplPropertiesObject[['active']] <- self$`active`$toJSON()
      }

      ComDayCqDamCoreImplJmxAssetUpdateMonitorImplPropertiesObject
    },
    fromJSON = function(ComDayCqDamCoreImplJmxAssetUpdateMonitorImplPropertiesJson) {
      ComDayCqDamCoreImplJmxAssetUpdateMonitorImplPropertiesObject <- jsonlite::fromJSON(ComDayCqDamCoreImplJmxAssetUpdateMonitorImplPropertiesJson)
      if (!is.null(ComDayCqDamCoreImplJmxAssetUpdateMonitorImplPropertiesObject$`jmx.objectname`)) {
        jmx.objectnameObject <- ConfigNodePropertyString$new()
        jmx.objectnameObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplJmxAssetUpdateMonitorImplPropertiesObject$jmx.objectname, auto_unbox = TRUE))
        self$`jmx.objectname` <- jmx.objectnameObject
      }
      if (!is.null(ComDayCqDamCoreImplJmxAssetUpdateMonitorImplPropertiesObject$`active`)) {
        activeObject <- ConfigNodePropertyBoolean$new()
        activeObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplJmxAssetUpdateMonitorImplPropertiesObject$active, auto_unbox = TRUE))
        self$`active` <- activeObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "jmx.objectname": %s,
           "active": %s
        }',
        self$`jmx.objectname`$toJSON(),
        self$`active`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqDamCoreImplJmxAssetUpdateMonitorImplPropertiesJson) {
      ComDayCqDamCoreImplJmxAssetUpdateMonitorImplPropertiesObject <- jsonlite::fromJSON(ComDayCqDamCoreImplJmxAssetUpdateMonitorImplPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`jmx.objectname` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplJmxAssetUpdateMonitorImplPropertiesObject$jmx.objectname, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`active` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplJmxAssetUpdateMonitorImplPropertiesObject$active, auto_unbox = TRUE))
    }
  )
)
