# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfo <- R6::R6Class(
  'OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfo',
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
      OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject
    },
    fromJSON = function(OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoJson) {
      OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject <- jsonlite::fromJSON(OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoJson)
      if (!is.null(OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject$`pid`)) {
        self$`pid` <- OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject$`pid`
      }
      if (!is.null(OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject$`title`)) {
        self$`title` <- OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject$`title`
      }
      if (!is.null(OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject$`description`)) {
        self$`description` <- OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject$`description`
      }
      if (!is.null(OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject$`properties`)) {
        propertiesObject <- OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoJson) {
      OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject <- jsonlite::fromJSON(OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoJson)
      self$`pid` <- OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject$`pid`
      self$`title` <- OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject$`title`
      self$`description` <- OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject$`description`
      OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerPropertiesObject <- OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties$new()
      self$`properties` <- OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerInfoObject$properties, auto_unbox = TRUE))
    }
  )
)