# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqAuthImplCugCugSupportImplInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqAuthImplCugCugSupportImplInfo <- R6::R6Class(
  'ComDayCqAuthImplCugCugSupportImplInfo',
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
      ComDayCqAuthImplCugCugSupportImplInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqAuthImplCugCugSupportImplInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqAuthImplCugCugSupportImplInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqAuthImplCugCugSupportImplInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqAuthImplCugCugSupportImplInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqAuthImplCugCugSupportImplInfoObject
    },
    fromJSON = function(ComDayCqAuthImplCugCugSupportImplInfoJson) {
      ComDayCqAuthImplCugCugSupportImplInfoObject <- jsonlite::fromJSON(ComDayCqAuthImplCugCugSupportImplInfoJson)
      if (!is.null(ComDayCqAuthImplCugCugSupportImplInfoObject$`pid`)) {
        self$`pid` <- ComDayCqAuthImplCugCugSupportImplInfoObject$`pid`
      }
      if (!is.null(ComDayCqAuthImplCugCugSupportImplInfoObject$`title`)) {
        self$`title` <- ComDayCqAuthImplCugCugSupportImplInfoObject$`title`
      }
      if (!is.null(ComDayCqAuthImplCugCugSupportImplInfoObject$`description`)) {
        self$`description` <- ComDayCqAuthImplCugCugSupportImplInfoObject$`description`
      }
      if (!is.null(ComDayCqAuthImplCugCugSupportImplInfoObject$`properties`)) {
        propertiesObject <- ComDayCqAuthImplCugCugSupportImplProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqAuthImplCugCugSupportImplInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqAuthImplCugCugSupportImplInfoJson) {
      ComDayCqAuthImplCugCugSupportImplInfoObject <- jsonlite::fromJSON(ComDayCqAuthImplCugCugSupportImplInfoJson)
      self$`pid` <- ComDayCqAuthImplCugCugSupportImplInfoObject$`pid`
      self$`title` <- ComDayCqAuthImplCugCugSupportImplInfoObject$`title`
      self$`description` <- ComDayCqAuthImplCugCugSupportImplInfoObject$`description`
      ComDayCqAuthImplCugCugSupportImplPropertiesObject <- ComDayCqAuthImplCugCugSupportImplProperties$new()
      self$`properties` <- ComDayCqAuthImplCugCugSupportImplPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqAuthImplCugCugSupportImplInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
