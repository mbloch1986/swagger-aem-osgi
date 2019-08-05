# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfo <- R6::R6Class(
  'ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfo',
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
      ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject
    },
    fromJSON = function(ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoJson) {
      ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject <- jsonlite::fromJSON(ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoJson)
      if (!is.null(ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject$`pid`)) {
        self$`pid` <- ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject$`pid`
      }
      if (!is.null(ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject$`title`)) {
        self$`title` <- ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject$`title`
      }
      if (!is.null(ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject$`description`)) {
        self$`description` <- ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject$`description`
      }
      if (!is.null(ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject$`properties`)) {
        propertiesObject <- ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoJson) {
      ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject <- jsonlite::fromJSON(ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoJson)
      self$`pid` <- ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject$`pid`
      self$`title` <- ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject$`title`
      self$`description` <- ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject$`description`
      ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProPropertiesObject <- ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties$new()
      self$`properties` <- ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProInfoObject$properties, auto_unbox = TRUE))
    }
  )
)