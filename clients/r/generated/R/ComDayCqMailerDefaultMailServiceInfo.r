# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqMailerDefaultMailServiceInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqMailerDefaultMailServiceInfo <- R6::R6Class(
  'ComDayCqMailerDefaultMailServiceInfo',
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
      ComDayCqMailerDefaultMailServiceInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqMailerDefaultMailServiceInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqMailerDefaultMailServiceInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqMailerDefaultMailServiceInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqMailerDefaultMailServiceInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqMailerDefaultMailServiceInfoObject
    },
    fromJSON = function(ComDayCqMailerDefaultMailServiceInfoJson) {
      ComDayCqMailerDefaultMailServiceInfoObject <- jsonlite::fromJSON(ComDayCqMailerDefaultMailServiceInfoJson)
      if (!is.null(ComDayCqMailerDefaultMailServiceInfoObject$`pid`)) {
        self$`pid` <- ComDayCqMailerDefaultMailServiceInfoObject$`pid`
      }
      if (!is.null(ComDayCqMailerDefaultMailServiceInfoObject$`title`)) {
        self$`title` <- ComDayCqMailerDefaultMailServiceInfoObject$`title`
      }
      if (!is.null(ComDayCqMailerDefaultMailServiceInfoObject$`description`)) {
        self$`description` <- ComDayCqMailerDefaultMailServiceInfoObject$`description`
      }
      if (!is.null(ComDayCqMailerDefaultMailServiceInfoObject$`properties`)) {
        propertiesObject <- ComDayCqMailerDefaultMailServiceProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServiceInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqMailerDefaultMailServiceInfoJson) {
      ComDayCqMailerDefaultMailServiceInfoObject <- jsonlite::fromJSON(ComDayCqMailerDefaultMailServiceInfoJson)
      self$`pid` <- ComDayCqMailerDefaultMailServiceInfoObject$`pid`
      self$`title` <- ComDayCqMailerDefaultMailServiceInfoObject$`title`
      self$`description` <- ComDayCqMailerDefaultMailServiceInfoObject$`description`
      ComDayCqMailerDefaultMailServicePropertiesObject <- ComDayCqMailerDefaultMailServiceProperties$new()
      self$`properties` <- ComDayCqMailerDefaultMailServicePropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServiceInfoObject$properties, auto_unbox = TRUE))
    }
  )
)