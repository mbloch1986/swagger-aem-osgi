# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqReportingImplRLogAnalyzerProperties Class
#'
#' @field request.log.output 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqReportingImplRLogAnalyzerProperties <- R6::R6Class(
  'ComDayCqReportingImplRLogAnalyzerProperties',
  public = list(
    `request.log.output` = NULL,
    initialize = function(`request.log.output`){
      if (!missing(`request.log.output`)) {
        stopifnot(R6::is.R6(`request.log.output`))
        self$`request.log.output` <- `request.log.output`
      }
    },
    toJSON = function() {
      ComDayCqReportingImplRLogAnalyzerPropertiesObject <- list()
      if (!is.null(self$`request.log.output`)) {
        ComDayCqReportingImplRLogAnalyzerPropertiesObject[['request.log.output']] <- self$`request.log.output`$toJSON()
      }

      ComDayCqReportingImplRLogAnalyzerPropertiesObject
    },
    fromJSON = function(ComDayCqReportingImplRLogAnalyzerPropertiesJson) {
      ComDayCqReportingImplRLogAnalyzerPropertiesObject <- jsonlite::fromJSON(ComDayCqReportingImplRLogAnalyzerPropertiesJson)
      if (!is.null(ComDayCqReportingImplRLogAnalyzerPropertiesObject$`request.log.output`)) {
        request.log.outputObject <- ConfigNodePropertyString$new()
        request.log.outputObject$fromJSON(jsonlite::toJSON(ComDayCqReportingImplRLogAnalyzerPropertiesObject$request.log.output, auto_unbox = TRUE))
        self$`request.log.output` <- request.log.outputObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "request.log.output": %s
        }',
        self$`request.log.output`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqReportingImplRLogAnalyzerPropertiesJson) {
      ComDayCqReportingImplRLogAnalyzerPropertiesObject <- jsonlite::fromJSON(ComDayCqReportingImplRLogAnalyzerPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`request.log.output` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqReportingImplRLogAnalyzerPropertiesObject$request.log.output, auto_unbox = TRUE))
    }
  )
)