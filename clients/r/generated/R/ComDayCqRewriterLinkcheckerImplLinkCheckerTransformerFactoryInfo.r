# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfo <- R6::R6Class(
  'ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfo',
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
      ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject
    },
    fromJSON = function(ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoJson) {
      ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject <- jsonlite::fromJSON(ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoJson)
      if (!is.null(ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject$`pid`)) {
        self$`pid` <- ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject$`pid`
      }
      if (!is.null(ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject$`title`)) {
        self$`title` <- ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject$`title`
      }
      if (!is.null(ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject$`description`)) {
        self$`description` <- ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject$`description`
      }
      if (!is.null(ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject$`properties`)) {
        propertiesObject <- ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoJson) {
      ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject <- jsonlite::fromJSON(ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoJson)
      self$`pid` <- ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject$`pid`
      self$`title` <- ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject$`title`
      self$`description` <- ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject$`description`
      ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryPropertiesObject <- ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties$new()
      self$`properties` <- ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryPropertiesObject$fromJSON(jsonlite::toJSON(ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
