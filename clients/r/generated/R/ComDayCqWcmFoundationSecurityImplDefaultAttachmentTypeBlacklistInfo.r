# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo <- R6::R6Class(
  'ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfo',
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
      ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject
    },
    fromJSON = function(ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoJson) {
      ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject <- jsonlite::fromJSON(ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoJson)
      if (!is.null(ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject$`pid`)) {
        self$`pid` <- ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject$`pid`
      }
      if (!is.null(ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject$`title`)) {
        self$`title` <- ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject$`title`
      }
      if (!is.null(ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject$`description`)) {
        self$`description` <- ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject$`description`
      }
      if (!is.null(ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject$`properties`)) {
        propertiesObject <- ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoJson) {
      ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject <- jsonlite::fromJSON(ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoJson)
      self$`pid` <- ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject$`pid`
      self$`title` <- ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject$`title`
      self$`description` <- ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject$`description`
      ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistPropertiesObject <- ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties$new()
      self$`properties` <- ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
