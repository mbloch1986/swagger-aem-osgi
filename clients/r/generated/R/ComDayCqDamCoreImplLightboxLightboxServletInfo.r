# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamCoreImplLightboxLightboxServletInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamCoreImplLightboxLightboxServletInfo <- R6::R6Class(
  'ComDayCqDamCoreImplLightboxLightboxServletInfo',
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
      ComDayCqDamCoreImplLightboxLightboxServletInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqDamCoreImplLightboxLightboxServletInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqDamCoreImplLightboxLightboxServletInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqDamCoreImplLightboxLightboxServletInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqDamCoreImplLightboxLightboxServletInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqDamCoreImplLightboxLightboxServletInfoObject
    },
    fromJSON = function(ComDayCqDamCoreImplLightboxLightboxServletInfoJson) {
      ComDayCqDamCoreImplLightboxLightboxServletInfoObject <- jsonlite::fromJSON(ComDayCqDamCoreImplLightboxLightboxServletInfoJson)
      if (!is.null(ComDayCqDamCoreImplLightboxLightboxServletInfoObject$`pid`)) {
        self$`pid` <- ComDayCqDamCoreImplLightboxLightboxServletInfoObject$`pid`
      }
      if (!is.null(ComDayCqDamCoreImplLightboxLightboxServletInfoObject$`title`)) {
        self$`title` <- ComDayCqDamCoreImplLightboxLightboxServletInfoObject$`title`
      }
      if (!is.null(ComDayCqDamCoreImplLightboxLightboxServletInfoObject$`description`)) {
        self$`description` <- ComDayCqDamCoreImplLightboxLightboxServletInfoObject$`description`
      }
      if (!is.null(ComDayCqDamCoreImplLightboxLightboxServletInfoObject$`properties`)) {
        propertiesObject <- ComDayCqDamCoreImplLightboxLightboxServletProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplLightboxLightboxServletInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqDamCoreImplLightboxLightboxServletInfoJson) {
      ComDayCqDamCoreImplLightboxLightboxServletInfoObject <- jsonlite::fromJSON(ComDayCqDamCoreImplLightboxLightboxServletInfoJson)
      self$`pid` <- ComDayCqDamCoreImplLightboxLightboxServletInfoObject$`pid`
      self$`title` <- ComDayCqDamCoreImplLightboxLightboxServletInfoObject$`title`
      self$`description` <- ComDayCqDamCoreImplLightboxLightboxServletInfoObject$`description`
      ComDayCqDamCoreImplLightboxLightboxServletPropertiesObject <- ComDayCqDamCoreImplLightboxLightboxServletProperties$new()
      self$`properties` <- ComDayCqDamCoreImplLightboxLightboxServletPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamCoreImplLightboxLightboxServletInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
