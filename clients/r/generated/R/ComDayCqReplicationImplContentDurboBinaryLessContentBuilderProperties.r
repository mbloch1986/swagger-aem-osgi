# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties Class
#'
#' @field binary.threshold 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties <- R6::R6Class(
  'ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties',
  public = list(
    `binary.threshold` = NULL,
    initialize = function(`binary.threshold`){
      if (!missing(`binary.threshold`)) {
        stopifnot(R6::is.R6(`binary.threshold`))
        self$`binary.threshold` <- `binary.threshold`
      }
    },
    toJSON = function() {
      ComDayCqReplicationImplContentDurboBinaryLessContentBuilderPropertiesObject <- list()
      if (!is.null(self$`binary.threshold`)) {
        ComDayCqReplicationImplContentDurboBinaryLessContentBuilderPropertiesObject[['binary.threshold']] <- self$`binary.threshold`$toJSON()
      }

      ComDayCqReplicationImplContentDurboBinaryLessContentBuilderPropertiesObject
    },
    fromJSON = function(ComDayCqReplicationImplContentDurboBinaryLessContentBuilderPropertiesJson) {
      ComDayCqReplicationImplContentDurboBinaryLessContentBuilderPropertiesObject <- jsonlite::fromJSON(ComDayCqReplicationImplContentDurboBinaryLessContentBuilderPropertiesJson)
      if (!is.null(ComDayCqReplicationImplContentDurboBinaryLessContentBuilderPropertiesObject$`binary.threshold`)) {
        binary.thresholdObject <- ConfigNodePropertyInteger$new()
        binary.thresholdObject$fromJSON(jsonlite::toJSON(ComDayCqReplicationImplContentDurboBinaryLessContentBuilderPropertiesObject$binary.threshold, auto_unbox = TRUE))
        self$`binary.threshold` <- binary.thresholdObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "binary.threshold": %s
        }',
        self$`binary.threshold`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqReplicationImplContentDurboBinaryLessContentBuilderPropertiesJson) {
      ComDayCqReplicationImplContentDurboBinaryLessContentBuilderPropertiesObject <- jsonlite::fromJSON(ComDayCqReplicationImplContentDurboBinaryLessContentBuilderPropertiesJson)
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`binary.threshold` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqReplicationImplContentDurboBinaryLessContentBuilderPropertiesObject$binary.threshold, auto_unbox = TRUE))
    }
  )
)
