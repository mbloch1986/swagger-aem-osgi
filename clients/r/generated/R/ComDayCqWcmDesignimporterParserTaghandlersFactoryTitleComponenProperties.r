# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenProperties Class
#'
#' @field service.ranking 
#' @field tagpattern 
#' @field component.resourceType 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenProperties <- R6::R6Class(
  'ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenProperties',
  public = list(
    `service.ranking` = NULL,
    `tagpattern` = NULL,
    `component.resourceType` = NULL,
    initialize = function(`service.ranking`, `tagpattern`, `component.resourceType`){
      if (!missing(`service.ranking`)) {
        stopifnot(R6::is.R6(`service.ranking`))
        self$`service.ranking` <- `service.ranking`
      }
      if (!missing(`tagpattern`)) {
        stopifnot(R6::is.R6(`tagpattern`))
        self$`tagpattern` <- `tagpattern`
      }
      if (!missing(`component.resourceType`)) {
        stopifnot(R6::is.R6(`component.resourceType`))
        self$`component.resourceType` <- `component.resourceType`
      }
    },
    toJSON = function() {
      ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesObject <- list()
      if (!is.null(self$`service.ranking`)) {
        ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesObject[['service.ranking']] <- self$`service.ranking`$toJSON()
      }
      if (!is.null(self$`tagpattern`)) {
        ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesObject[['tagpattern']] <- self$`tagpattern`$toJSON()
      }
      if (!is.null(self$`component.resourceType`)) {
        ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesObject[['component.resourceType']] <- self$`component.resourceType`$toJSON()
      }

      ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesObject
    },
    fromJSON = function(ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesJson) {
      ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesJson)
      if (!is.null(ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesObject$`service.ranking`)) {
        service.rankingObject <- ConfigNodePropertyInteger$new()
        service.rankingObject$fromJSON(jsonlite::toJSON(ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesObject$service.ranking, auto_unbox = TRUE))
        self$`service.ranking` <- service.rankingObject
      }
      if (!is.null(ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesObject$`tagpattern`)) {
        tagpatternObject <- ConfigNodePropertyString$new()
        tagpatternObject$fromJSON(jsonlite::toJSON(ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesObject$tagpattern, auto_unbox = TRUE))
        self$`tagpattern` <- tagpatternObject
      }
      if (!is.null(ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesObject$`component.resourceType`)) {
        component.resourceTypeObject <- ConfigNodePropertyString$new()
        component.resourceTypeObject$fromJSON(jsonlite::toJSON(ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesObject$component.resourceType, auto_unbox = TRUE))
        self$`component.resourceType` <- component.resourceTypeObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "service.ranking": %s,
           "tagpattern": %s,
           "component.resourceType": %s
        }',
        self$`service.ranking`$toJSON(),
        self$`tagpattern`$toJSON(),
        self$`component.resourceType`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesJson) {
      ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesJson)
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`service.ranking` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesObject$service.ranking, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`tagpattern` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesObject$tagpattern, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`component.resourceType` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqWcmDesignimporterParserTaghandlersFactoryTitleComponenPropertiesObject$component.resourceType, auto_unbox = TRUE))
    }
  )
)