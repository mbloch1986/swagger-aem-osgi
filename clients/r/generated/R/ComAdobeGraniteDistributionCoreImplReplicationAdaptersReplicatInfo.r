# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfo <- R6::R6Class(
  'ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfo',
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
      ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject
    },
    fromJSON = function(ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoJson) {
      ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject <- jsonlite::fromJSON(ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoJson)
      if (!is.null(ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoJson) {
      ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject <- jsonlite::fromJSON(ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoJson)
      self$`pid` <- ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject$`pid`
      self$`title` <- ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject$`title`
      self$`description` <- ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject$`description`
      ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatPropertiesObject <- ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatProperties$new()
      self$`properties` <- ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteDistributionCoreImplReplicationAdaptersReplicatInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
