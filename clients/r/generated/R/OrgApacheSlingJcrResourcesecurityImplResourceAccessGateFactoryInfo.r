# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfo <- R6::R6Class(
  'OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfo',
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
      OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject
    },
    fromJSON = function(OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoJson) {
      OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject <- jsonlite::fromJSON(OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoJson)
      if (!is.null(OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject$`pid`)) {
        self$`pid` <- OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject$`pid`
      }
      if (!is.null(OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject$`title`)) {
        self$`title` <- OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject$`title`
      }
      if (!is.null(OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject$`description`)) {
        self$`description` <- OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject$`description`
      }
      if (!is.null(OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject$`properties`)) {
        propertiesObject <- OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoJson) {
      OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject <- jsonlite::fromJSON(OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoJson)
      self$`pid` <- OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject$`pid`
      self$`title` <- OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject$`title`
      self$`description` <- OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject$`description`
      OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryPropertiesObject <- OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryProperties$new()
      self$`properties` <- OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
