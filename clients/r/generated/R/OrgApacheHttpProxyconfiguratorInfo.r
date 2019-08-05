# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheHttpProxyconfiguratorInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheHttpProxyconfiguratorInfo <- R6::R6Class(
  'OrgApacheHttpProxyconfiguratorInfo',
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
      OrgApacheHttpProxyconfiguratorInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheHttpProxyconfiguratorInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheHttpProxyconfiguratorInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheHttpProxyconfiguratorInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheHttpProxyconfiguratorInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheHttpProxyconfiguratorInfoObject
    },
    fromJSON = function(OrgApacheHttpProxyconfiguratorInfoJson) {
      OrgApacheHttpProxyconfiguratorInfoObject <- jsonlite::fromJSON(OrgApacheHttpProxyconfiguratorInfoJson)
      if (!is.null(OrgApacheHttpProxyconfiguratorInfoObject$`pid`)) {
        self$`pid` <- OrgApacheHttpProxyconfiguratorInfoObject$`pid`
      }
      if (!is.null(OrgApacheHttpProxyconfiguratorInfoObject$`title`)) {
        self$`title` <- OrgApacheHttpProxyconfiguratorInfoObject$`title`
      }
      if (!is.null(OrgApacheHttpProxyconfiguratorInfoObject$`description`)) {
        self$`description` <- OrgApacheHttpProxyconfiguratorInfoObject$`description`
      }
      if (!is.null(OrgApacheHttpProxyconfiguratorInfoObject$`properties`)) {
        propertiesObject <- OrgApacheHttpProxyconfiguratorProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheHttpProxyconfiguratorInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheHttpProxyconfiguratorInfoJson) {
      OrgApacheHttpProxyconfiguratorInfoObject <- jsonlite::fromJSON(OrgApacheHttpProxyconfiguratorInfoJson)
      self$`pid` <- OrgApacheHttpProxyconfiguratorInfoObject$`pid`
      self$`title` <- OrgApacheHttpProxyconfiguratorInfoObject$`title`
      self$`description` <- OrgApacheHttpProxyconfiguratorInfoObject$`description`
      OrgApacheHttpProxyconfiguratorPropertiesObject <- OrgApacheHttpProxyconfiguratorProperties$new()
      self$`properties` <- OrgApacheHttpProxyconfiguratorPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheHttpProxyconfiguratorInfoObject$properties, auto_unbox = TRUE))
    }
  )
)