# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingServletsPostImplSlingPostServletInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingServletsPostImplSlingPostServletInfo <- R6::R6Class(
  'OrgApacheSlingServletsPostImplSlingPostServletInfo',
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
      OrgApacheSlingServletsPostImplSlingPostServletInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheSlingServletsPostImplSlingPostServletInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheSlingServletsPostImplSlingPostServletInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheSlingServletsPostImplSlingPostServletInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheSlingServletsPostImplSlingPostServletInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheSlingServletsPostImplSlingPostServletInfoObject
    },
    fromJSON = function(OrgApacheSlingServletsPostImplSlingPostServletInfoJson) {
      OrgApacheSlingServletsPostImplSlingPostServletInfoObject <- jsonlite::fromJSON(OrgApacheSlingServletsPostImplSlingPostServletInfoJson)
      if (!is.null(OrgApacheSlingServletsPostImplSlingPostServletInfoObject$`pid`)) {
        self$`pid` <- OrgApacheSlingServletsPostImplSlingPostServletInfoObject$`pid`
      }
      if (!is.null(OrgApacheSlingServletsPostImplSlingPostServletInfoObject$`title`)) {
        self$`title` <- OrgApacheSlingServletsPostImplSlingPostServletInfoObject$`title`
      }
      if (!is.null(OrgApacheSlingServletsPostImplSlingPostServletInfoObject$`description`)) {
        self$`description` <- OrgApacheSlingServletsPostImplSlingPostServletInfoObject$`description`
      }
      if (!is.null(OrgApacheSlingServletsPostImplSlingPostServletInfoObject$`properties`)) {
        propertiesObject <- OrgApacheSlingServletsPostImplSlingPostServletProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingServletsPostImplSlingPostServletInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheSlingServletsPostImplSlingPostServletInfoJson) {
      OrgApacheSlingServletsPostImplSlingPostServletInfoObject <- jsonlite::fromJSON(OrgApacheSlingServletsPostImplSlingPostServletInfoJson)
      self$`pid` <- OrgApacheSlingServletsPostImplSlingPostServletInfoObject$`pid`
      self$`title` <- OrgApacheSlingServletsPostImplSlingPostServletInfoObject$`title`
      self$`description` <- OrgApacheSlingServletsPostImplSlingPostServletInfoObject$`description`
      OrgApacheSlingServletsPostImplSlingPostServletPropertiesObject <- OrgApacheSlingServletsPostImplSlingPostServletProperties$new()
      self$`properties` <- OrgApacheSlingServletsPostImplSlingPostServletPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingServletsPostImplSlingPostServletInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
