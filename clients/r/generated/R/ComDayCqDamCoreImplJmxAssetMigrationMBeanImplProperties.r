# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamCoreImplJmxAssetMigrationMBeanImplProperties Class
#'
#' @field jmx.objectname 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamCoreImplJmxAssetMigrationMBeanImplProperties <- R6::R6Class(
  'ComDayCqDamCoreImplJmxAssetMigrationMBeanImplProperties',
  public = list(
    `jmx.objectname` = NULL,
    initialize = function(`jmx.objectname`){
      if (!missing(`jmx.objectname`)) {
        stopifnot(R6::is.R6(`jmx.objectname`))
        self$`jmx.objectname` <- `jmx.objectname`
      }
    },
    toJSON = function() {
      ComDayCqDamCoreImplJmxAssetMigrationMBeanImplPropertiesObject <- list()
      if (!is.null(self$`jmx.objectname`)) {
        ComDayCqDamCoreImplJmxAssetMigrationMBeanImplPropertiesObject[['jmx.objectname']] <- self$`jmx.objectname`$toJSON()
      }

      ComDayCqDamCoreImplJmxAssetMigrationMBeanImplPropertiesObject
    },
    fromJSON = function(ComDayCqDamCoreImplJmxAssetMigrationMBeanImplPropertiesJson) {
      ComDayCqDamCoreImplJmxAssetMigrationMBeanImplPropertiesObject <- jsonlite::fromJSON(ComDayCqDamCoreImplJmxAssetMigrationMBeanImplPropertiesJson)
      if (!is.null(ComDayCqDamCoreImplJmxAssetMigrationMBeanImplPropertiesObject$`jmx.objectname`)) {
        jmx.objectnameObject <- ConfigNodePropertyString$new()
        jmx.objectnameObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplJmxAssetMigrationMBeanImplPropertiesObject$jmx.objectname, auto_unbox = TRUE))
        self$`jmx.objectname` <- jmx.objectnameObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "jmx.objectname": %s
        }',
        self$`jmx.objectname`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqDamCoreImplJmxAssetMigrationMBeanImplPropertiesJson) {
      ComDayCqDamCoreImplJmxAssetMigrationMBeanImplPropertiesObject <- jsonlite::fromJSON(ComDayCqDamCoreImplJmxAssetMigrationMBeanImplPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`jmx.objectname` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplJmxAssetMigrationMBeanImplPropertiesObject$jmx.objectname, auto_unbox = TRUE))
    }
  )
)
