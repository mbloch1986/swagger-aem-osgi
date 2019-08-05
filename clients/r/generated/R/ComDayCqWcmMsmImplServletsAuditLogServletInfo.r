# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmMsmImplServletsAuditLogServletInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmMsmImplServletsAuditLogServletInfo <- R6::R6Class(
  'ComDayCqWcmMsmImplServletsAuditLogServletInfo',
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
      ComDayCqWcmMsmImplServletsAuditLogServletInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqWcmMsmImplServletsAuditLogServletInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqWcmMsmImplServletsAuditLogServletInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqWcmMsmImplServletsAuditLogServletInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqWcmMsmImplServletsAuditLogServletInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqWcmMsmImplServletsAuditLogServletInfoObject
    },
    fromJSON = function(ComDayCqWcmMsmImplServletsAuditLogServletInfoJson) {
      ComDayCqWcmMsmImplServletsAuditLogServletInfoObject <- jsonlite::fromJSON(ComDayCqWcmMsmImplServletsAuditLogServletInfoJson)
      if (!is.null(ComDayCqWcmMsmImplServletsAuditLogServletInfoObject$`pid`)) {
        self$`pid` <- ComDayCqWcmMsmImplServletsAuditLogServletInfoObject$`pid`
      }
      if (!is.null(ComDayCqWcmMsmImplServletsAuditLogServletInfoObject$`title`)) {
        self$`title` <- ComDayCqWcmMsmImplServletsAuditLogServletInfoObject$`title`
      }
      if (!is.null(ComDayCqWcmMsmImplServletsAuditLogServletInfoObject$`description`)) {
        self$`description` <- ComDayCqWcmMsmImplServletsAuditLogServletInfoObject$`description`
      }
      if (!is.null(ComDayCqWcmMsmImplServletsAuditLogServletInfoObject$`properties`)) {
        propertiesObject <- ComDayCqWcmMsmImplServletsAuditLogServletProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMsmImplServletsAuditLogServletInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqWcmMsmImplServletsAuditLogServletInfoJson) {
      ComDayCqWcmMsmImplServletsAuditLogServletInfoObject <- jsonlite::fromJSON(ComDayCqWcmMsmImplServletsAuditLogServletInfoJson)
      self$`pid` <- ComDayCqWcmMsmImplServletsAuditLogServletInfoObject$`pid`
      self$`title` <- ComDayCqWcmMsmImplServletsAuditLogServletInfoObject$`title`
      self$`description` <- ComDayCqWcmMsmImplServletsAuditLogServletInfoObject$`description`
      ComDayCqWcmMsmImplServletsAuditLogServletPropertiesObject <- ComDayCqWcmMsmImplServletsAuditLogServletProperties$new()
      self$`properties` <- ComDayCqWcmMsmImplServletsAuditLogServletPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMsmImplServletsAuditLogServletInfoObject$properties, auto_unbox = TRUE))
    }
  )
)