# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfo <- R6::R6Class(
  'ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfo',
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
      ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject
    },
    fromJSON = function(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoJson) {
      ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject <- jsonlite::fromJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoJson)
      if (!is.null(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject$`pid`)) {
        self$`pid` <- ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject$`pid`
      }
      if (!is.null(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject$`title`)) {
        self$`title` <- ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject$`title`
      }
      if (!is.null(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject$`description`)) {
        self$`description` <- ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject$`description`
      }
      if (!is.null(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject$`properties`)) {
        propertiesObject <- ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoJson) {
      ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject <- jsonlite::fromJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoJson)
      self$`pid` <- ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject$`pid`
      self$`title` <- ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject$`title`
      self$`description` <- ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject$`description`
      ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject <- ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties$new()
      self$`properties` <- ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
