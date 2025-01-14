# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties Class
#'
#' @field communities.integration.livefyre.sling.event.filter 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties <- R6::R6Class(
  'ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties',
  public = list(
    `communities.integration.livefyre.sling.event.filter` = NULL,
    initialize = function(`communities.integration.livefyre.sling.event.filter`){
      if (!missing(`communities.integration.livefyre.sling.event.filter`)) {
        stopifnot(R6::is.R6(`communities.integration.livefyre.sling.event.filter`))
        self$`communities.integration.livefyre.sling.event.filter` <- `communities.integration.livefyre.sling.event.filter`
      }
    },
    toJSON = function() {
      ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSPropertiesObject <- list()
      if (!is.null(self$`communities.integration.livefyre.sling.event.filter`)) {
        ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSPropertiesObject[['communities.integration.livefyre.sling.event.filter']] <- self$`communities.integration.livefyre.sling.event.filter`$toJSON()
      }

      ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSPropertiesObject
    },
    fromJSON = function(ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSPropertiesJson) {
      ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSPropertiesObject <- jsonlite::fromJSON(ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSPropertiesJson)
      if (!is.null(ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSPropertiesObject$`communities.integration.livefyre.sling.event.filter`)) {
        communities.integration.livefyre.sling.event.filterObject <- ConfigNodePropertyString$new()
        communities.integration.livefyre.sling.event.filterObject$fromJSON(jsonlite::toJSON(ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSPropertiesObject$communities.integration.livefyre.sling.event.filter, auto_unbox = TRUE))
        self$`communities.integration.livefyre.sling.event.filter` <- communities.integration.livefyre.sling.event.filterObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "communities.integration.livefyre.sling.event.filter": %s
        }',
        self$`communities.integration.livefyre.sling.event.filter`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSPropertiesJson) {
      ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSPropertiesObject <- jsonlite::fromJSON(ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`communities.integration.livefyre.sling.event.filter` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSPropertiesObject$communities.integration.livefyre.sling.event.filter, auto_unbox = TRUE))
    }
  )
)
