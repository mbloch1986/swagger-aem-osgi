# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties Class
#'
#' @field service.ranking 
#' @field type.collections 
#' @field type.noncollections 
#' @field type.content 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties <- R6::R6Class(
  'OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties',
  public = list(
    `service.ranking` = NULL,
    `type.collections` = NULL,
    `type.noncollections` = NULL,
    `type.content` = NULL,
    initialize = function(`service.ranking`, `type.collections`, `type.noncollections`, `type.content`){
      if (!missing(`service.ranking`)) {
        stopifnot(R6::is.R6(`service.ranking`))
        self$`service.ranking` <- `service.ranking`
      }
      if (!missing(`type.collections`)) {
        stopifnot(R6::is.R6(`type.collections`))
        self$`type.collections` <- `type.collections`
      }
      if (!missing(`type.noncollections`)) {
        stopifnot(R6::is.R6(`type.noncollections`))
        self$`type.noncollections` <- `type.noncollections`
      }
      if (!missing(`type.content`)) {
        stopifnot(R6::is.R6(`type.content`))
        self$`type.content` <- `type.content`
      }
    },
    toJSON = function() {
      OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject <- list()
      if (!is.null(self$`service.ranking`)) {
        OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject[['service.ranking']] <- self$`service.ranking`$toJSON()
      }
      if (!is.null(self$`type.collections`)) {
        OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject[['type.collections']] <- self$`type.collections`$toJSON()
      }
      if (!is.null(self$`type.noncollections`)) {
        OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject[['type.noncollections']] <- self$`type.noncollections`$toJSON()
      }
      if (!is.null(self$`type.content`)) {
        OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject[['type.content']] <- self$`type.content`$toJSON()
      }

      OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject
    },
    fromJSON = function(OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesJson) {
      OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject <- jsonlite::fromJSON(OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesJson)
      if (!is.null(OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject$`service.ranking`)) {
        service.rankingObject <- ConfigNodePropertyInteger$new()
        service.rankingObject$fromJSON(jsonlite::toJSON(OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject$service.ranking, auto_unbox = TRUE))
        self$`service.ranking` <- service.rankingObject
      }
      if (!is.null(OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject$`type.collections`)) {
        type.collectionsObject <- ConfigNodePropertyString$new()
        type.collectionsObject$fromJSON(jsonlite::toJSON(OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject$type.collections, auto_unbox = TRUE))
        self$`type.collections` <- type.collectionsObject
      }
      if (!is.null(OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject$`type.noncollections`)) {
        type.noncollectionsObject <- ConfigNodePropertyString$new()
        type.noncollectionsObject$fromJSON(jsonlite::toJSON(OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject$type.noncollections, auto_unbox = TRUE))
        self$`type.noncollections` <- type.noncollectionsObject
      }
      if (!is.null(OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject$`type.content`)) {
        type.contentObject <- ConfigNodePropertyString$new()
        type.contentObject$fromJSON(jsonlite::toJSON(OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject$type.content, auto_unbox = TRUE))
        self$`type.content` <- type.contentObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "service.ranking": %s,
           "type.collections": %s,
           "type.noncollections": %s,
           "type.content": %s
        }',
        self$`service.ranking`$toJSON(),
        self$`type.collections`$toJSON(),
        self$`type.noncollections`$toJSON(),
        self$`type.content`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesJson) {
      OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject <- jsonlite::fromJSON(OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesJson)
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`service.ranking` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject$service.ranking, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`type.collections` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject$type.collections, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`type.noncollections` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject$type.noncollections, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`type.content` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServicePropertiesObject$type.content, auto_unbox = TRUE))
    }
  )
)
