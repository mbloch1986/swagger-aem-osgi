# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfo <- R6::R6Class(
  'ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfo',
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
      ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject
    },
    fromJSON = function(ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoJson) {
      ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject <- jsonlite::fromJSON(ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoJson)
      if (!is.null(ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject$`pid`)) {
        self$`pid` <- ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject$`pid`
      }
      if (!is.null(ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject$`title`)) {
        self$`title` <- ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject$`title`
      }
      if (!is.null(ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject$`description`)) {
        self$`description` <- ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject$`description`
      }
      if (!is.null(ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject$`properties`)) {
        propertiesObject <- ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoJson) {
      ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject <- jsonlite::fromJSON(ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoJson)
      self$`pid` <- ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject$`pid`
      self$`title` <- ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject$`title`
      self$`description` <- ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject$`description`
      ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplPropertiesObject <- ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplProperties$new()
      self$`properties` <- ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamS7damCommonVideoImplVideoProxyClientServiceImplInfoObject$properties, auto_unbox = TRUE))
    }
  )
)