# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqMcmCampaignImplIntegrationConfigImplProperties Class
#'
#' @field aem.mcm.campaign.formConstraints 
#' @field aem.mcm.campaign.publicUrl 
#' @field aem.mcm.campaign.relaxedSSL 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqMcmCampaignImplIntegrationConfigImplProperties <- R6::R6Class(
  'ComDayCqMcmCampaignImplIntegrationConfigImplProperties',
  public = list(
    `aem.mcm.campaign.formConstraints` = NULL,
    `aem.mcm.campaign.publicUrl` = NULL,
    `aem.mcm.campaign.relaxedSSL` = NULL,
    initialize = function(`aem.mcm.campaign.formConstraints`, `aem.mcm.campaign.publicUrl`, `aem.mcm.campaign.relaxedSSL`){
      if (!missing(`aem.mcm.campaign.formConstraints`)) {
        stopifnot(R6::is.R6(`aem.mcm.campaign.formConstraints`))
        self$`aem.mcm.campaign.formConstraints` <- `aem.mcm.campaign.formConstraints`
      }
      if (!missing(`aem.mcm.campaign.publicUrl`)) {
        stopifnot(R6::is.R6(`aem.mcm.campaign.publicUrl`))
        self$`aem.mcm.campaign.publicUrl` <- `aem.mcm.campaign.publicUrl`
      }
      if (!missing(`aem.mcm.campaign.relaxedSSL`)) {
        stopifnot(R6::is.R6(`aem.mcm.campaign.relaxedSSL`))
        self$`aem.mcm.campaign.relaxedSSL` <- `aem.mcm.campaign.relaxedSSL`
      }
    },
    toJSON = function() {
      ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesObject <- list()
      if (!is.null(self$`aem.mcm.campaign.formConstraints`)) {
        ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesObject[['aem.mcm.campaign.formConstraints']] <- self$`aem.mcm.campaign.formConstraints`$toJSON()
      }
      if (!is.null(self$`aem.mcm.campaign.publicUrl`)) {
        ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesObject[['aem.mcm.campaign.publicUrl']] <- self$`aem.mcm.campaign.publicUrl`$toJSON()
      }
      if (!is.null(self$`aem.mcm.campaign.relaxedSSL`)) {
        ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesObject[['aem.mcm.campaign.relaxedSSL']] <- self$`aem.mcm.campaign.relaxedSSL`$toJSON()
      }

      ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesObject
    },
    fromJSON = function(ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesJson) {
      ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesObject <- jsonlite::fromJSON(ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesJson)
      if (!is.null(ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesObject$`aem.mcm.campaign.formConstraints`)) {
        aem.mcm.campaign.formConstraintsObject <- ConfigNodePropertyArray$new()
        aem.mcm.campaign.formConstraintsObject$fromJSON(jsonlite::toJSON(ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesObject$aem.mcm.campaign.formConstraints, auto_unbox = TRUE))
        self$`aem.mcm.campaign.formConstraints` <- aem.mcm.campaign.formConstraintsObject
      }
      if (!is.null(ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesObject$`aem.mcm.campaign.publicUrl`)) {
        aem.mcm.campaign.publicUrlObject <- ConfigNodePropertyString$new()
        aem.mcm.campaign.publicUrlObject$fromJSON(jsonlite::toJSON(ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesObject$aem.mcm.campaign.publicUrl, auto_unbox = TRUE))
        self$`aem.mcm.campaign.publicUrl` <- aem.mcm.campaign.publicUrlObject
      }
      if (!is.null(ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesObject$`aem.mcm.campaign.relaxedSSL`)) {
        aem.mcm.campaign.relaxedSSLObject <- ConfigNodePropertyBoolean$new()
        aem.mcm.campaign.relaxedSSLObject$fromJSON(jsonlite::toJSON(ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesObject$aem.mcm.campaign.relaxedSSL, auto_unbox = TRUE))
        self$`aem.mcm.campaign.relaxedSSL` <- aem.mcm.campaign.relaxedSSLObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "aem.mcm.campaign.formConstraints": %s,
           "aem.mcm.campaign.publicUrl": %s,
           "aem.mcm.campaign.relaxedSSL": %s
        }',
        self$`aem.mcm.campaign.formConstraints`$toJSON(),
        self$`aem.mcm.campaign.publicUrl`$toJSON(),
        self$`aem.mcm.campaign.relaxedSSL`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesJson) {
      ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesObject <- jsonlite::fromJSON(ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`aem.mcm.campaign.formConstraints` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesObject$aem.mcm.campaign.formConstraints, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`aem.mcm.campaign.publicUrl` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesObject$aem.mcm.campaign.publicUrl, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`aem.mcm.campaign.relaxedSSL` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesObject$aem.mcm.campaign.relaxedSSL, auto_unbox = TRUE))
    }
  )
)
