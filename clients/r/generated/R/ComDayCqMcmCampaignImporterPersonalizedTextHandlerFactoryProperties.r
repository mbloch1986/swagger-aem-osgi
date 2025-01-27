# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties Class
#'
#' @field service.ranking 
#' @field tagpattern 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties <- R6::R6Class(
  'ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties',
  public = list(
    `service.ranking` = NULL,
    `tagpattern` = NULL,
    initialize = function(`service.ranking`, `tagpattern`){
      if (!missing(`service.ranking`)) {
        stopifnot(R6::is.R6(`service.ranking`))
        self$`service.ranking` <- `service.ranking`
      }
      if (!missing(`tagpattern`)) {
        stopifnot(R6::is.R6(`tagpattern`))
        self$`tagpattern` <- `tagpattern`
      }
    },
    toJSON = function() {
      ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryPropertiesObject <- list()
      if (!is.null(self$`service.ranking`)) {
        ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryPropertiesObject[['service.ranking']] <- self$`service.ranking`$toJSON()
      }
      if (!is.null(self$`tagpattern`)) {
        ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryPropertiesObject[['tagpattern']] <- self$`tagpattern`$toJSON()
      }

      ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryPropertiesObject
    },
    fromJSON = function(ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryPropertiesJson) {
      ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryPropertiesObject <- jsonlite::fromJSON(ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryPropertiesJson)
      if (!is.null(ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryPropertiesObject$`service.ranking`)) {
        service.rankingObject <- ConfigNodePropertyInteger$new()
        service.rankingObject$fromJSON(jsonlite::toJSON(ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryPropertiesObject$service.ranking, auto_unbox = TRUE))
        self$`service.ranking` <- service.rankingObject
      }
      if (!is.null(ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryPropertiesObject$`tagpattern`)) {
        tagpatternObject <- ConfigNodePropertyString$new()
        tagpatternObject$fromJSON(jsonlite::toJSON(ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryPropertiesObject$tagpattern, auto_unbox = TRUE))
        self$`tagpattern` <- tagpatternObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "service.ranking": %s,
           "tagpattern": %s
        }',
        self$`service.ranking`$toJSON(),
        self$`tagpattern`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryPropertiesJson) {
      ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryPropertiesObject <- jsonlite::fromJSON(ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryPropertiesJson)
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`service.ranking` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryPropertiesObject$service.ranking, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`tagpattern` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryPropertiesObject$tagpattern, auto_unbox = TRUE))
    }
  )
)
