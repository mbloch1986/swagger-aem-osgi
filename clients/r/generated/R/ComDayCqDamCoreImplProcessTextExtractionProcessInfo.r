# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamCoreImplProcessTextExtractionProcessInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamCoreImplProcessTextExtractionProcessInfo <- R6::R6Class(
  'ComDayCqDamCoreImplProcessTextExtractionProcessInfo',
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
      ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject
    },
    fromJSON = function(ComDayCqDamCoreImplProcessTextExtractionProcessInfoJson) {
      ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject <- jsonlite::fromJSON(ComDayCqDamCoreImplProcessTextExtractionProcessInfoJson)
      if (!is.null(ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject$`pid`)) {
        self$`pid` <- ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject$`pid`
      }
      if (!is.null(ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject$`title`)) {
        self$`title` <- ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject$`title`
      }
      if (!is.null(ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject$`description`)) {
        self$`description` <- ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject$`description`
      }
      if (!is.null(ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject$`properties`)) {
        propertiesObject <- ComDayCqDamCoreImplProcessTextExtractionProcessProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqDamCoreImplProcessTextExtractionProcessInfoJson) {
      ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject <- jsonlite::fromJSON(ComDayCqDamCoreImplProcessTextExtractionProcessInfoJson)
      self$`pid` <- ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject$`pid`
      self$`title` <- ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject$`title`
      self$`description` <- ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject$`description`
      ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesObject <- ComDayCqDamCoreImplProcessTextExtractionProcessProperties$new()
      self$`properties` <- ComDayCqDamCoreImplProcessTextExtractionProcessPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplProcessTextExtractionProcessInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
