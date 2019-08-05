# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo <- R6::R6Class(
  'ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfo',
  public = list(
    `pid` = NULL,
    `title` = NULL,
    `description` = NULL,
    `properties` = NULL,
    initialize = function(`pid`, `title`, `description`, `properties`){
      if (!missing(`pid`)) {
        stopifnot(is.character(`pid`), length(`pid`) == 1)
        self$`pid` <- `pid`
      }
      if (!missing(`title`)) {
        stopifnot(is.character(`title`), length(`title`) == 1)
        self$`title` <- `title`
      }
      if (!missing(`description`)) {
        stopifnot(is.character(`description`), length(`description`) == 1)
        self$`description` <- `description`
      }
      if (!missing(`properties`)) {
        stopifnot(R6::is.R6(`properties`))
        self$`properties` <- `properties`
      }
    },
    toJSON = function() {
      ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject
    },
    fromJSON = function(ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoJson) {
      ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject <- jsonlite::fromJSON(ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoJson)
      if (!is.null(ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject$`pid`)) {
        self$`pid` <- ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject$`pid`
      }
      if (!is.null(ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject$`title`)) {
        self$`title` <- ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject$`title`
      }
      if (!is.null(ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject$`description`)) {
        self$`description` <- ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject$`description`
      }
      if (!is.null(ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject$`properties`)) {
        propertiesObject <- ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject$properties, auto_unbox = TRUE))
        self$`properties` <- propertiesObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "pid": %s,
           "title": %s,
           "description": %s,
           "properties": %s
        }',
        self$`pid`,
        self$`title`,
        self$`description`,
        self$`properties`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoJson) {
      ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject <- jsonlite::fromJSON(ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoJson)
      self$`pid` <- ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject$`pid`
      self$`title` <- ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject$`title`
      self$`description` <- ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject$`description`
      ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryPropertiesObject <- ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties$new()
      self$`properties` <- ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryInfoObject$properties, auto_unbox = TRUE))
    }
  )
)