# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfo <- R6::R6Class(
  'OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfo',
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
      OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject <- list()
      if (!is.null(self$`pid`)) {
        OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject
    },
    fromJSON = function(OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoJson) {
      OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject <- jsonlite::fromJSON(OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoJson)
      if (!is.null(OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject$`pid`)) {
        self$`pid` <- OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject$`pid`
      }
      if (!is.null(OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject$`title`)) {
        self$`title` <- OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject$`title`
      }
      if (!is.null(OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject$`description`)) {
        self$`description` <- OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject$`description`
      }
      if (!is.null(OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject$`properties`)) {
        propertiesObject <- OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoJson) {
      OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject <- jsonlite::fromJSON(OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoJson)
      self$`pid` <- OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject$`pid`
      self$`title` <- OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject$`title`
      self$`description` <- OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject$`description`
      OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorPropertiesObject <- OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties$new()
      self$`properties` <- OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorPropertiesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
