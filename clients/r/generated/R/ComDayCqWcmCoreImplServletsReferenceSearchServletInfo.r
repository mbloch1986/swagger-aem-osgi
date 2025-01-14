# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmCoreImplServletsReferenceSearchServletInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmCoreImplServletsReferenceSearchServletInfo <- R6::R6Class(
  'ComDayCqWcmCoreImplServletsReferenceSearchServletInfo',
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
      ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject
    },
    fromJSON = function(ComDayCqWcmCoreImplServletsReferenceSearchServletInfoJson) {
      ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject <- jsonlite::fromJSON(ComDayCqWcmCoreImplServletsReferenceSearchServletInfoJson)
      if (!is.null(ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject$`pid`)) {
        self$`pid` <- ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject$`pid`
      }
      if (!is.null(ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject$`title`)) {
        self$`title` <- ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject$`title`
      }
      if (!is.null(ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject$`description`)) {
        self$`description` <- ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject$`description`
      }
      if (!is.null(ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject$`properties`)) {
        propertiesObject <- ComDayCqWcmCoreImplServletsReferenceSearchServletProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqWcmCoreImplServletsReferenceSearchServletInfoJson) {
      ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject <- jsonlite::fromJSON(ComDayCqWcmCoreImplServletsReferenceSearchServletInfoJson)
      self$`pid` <- ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject$`pid`
      self$`title` <- ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject$`title`
      self$`description` <- ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject$`description`
      ComDayCqWcmCoreImplServletsReferenceSearchServletPropertiesObject <- ComDayCqWcmCoreImplServletsReferenceSearchServletProperties$new()
      self$`properties` <- ComDayCqWcmCoreImplServletsReferenceSearchServletPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmCoreImplServletsReferenceSearchServletInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
