# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfo <- R6::R6Class(
  'OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfo',
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
      OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject
    },
    fromJSON = function(OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoJson) {
      OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject <- jsonlite::fromJSON(OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoJson)
      if (!is.null(OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject$`pid`)) {
        self$`pid` <- OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject$`pid`
      }
      if (!is.null(OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject$`title`)) {
        self$`title` <- OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject$`title`
      }
      if (!is.null(OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject$`description`)) {
        self$`description` <- OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject$`description`
      }
      if (!is.null(OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject$`properties`)) {
        propertiesObject <- OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoJson) {
      OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject <- jsonlite::fromJSON(OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoJson)
      self$`pid` <- OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject$`pid`
      self$`title` <- OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject$`title`
      self$`description` <- OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject$`description`
      OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedPropertiesObject <- OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedProperties$new()
      self$`properties` <- OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingServiceusermappingImplServiceUserMapperImplAmendedInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
