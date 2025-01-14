# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties Class
#'
#' @field oauth.configmanager.ims.configid 
#' @field ims.owningEntity 
#' @field aem.instanceId 
#' @field ims.serviceCode 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties <- R6::R6Class(
  'ComAdobeGraniteAuthImsImplImsConfigProviderImplProperties',
  public = list(
    `oauth.configmanager.ims.configid` = NULL,
    `ims.owningEntity` = NULL,
    `aem.instanceId` = NULL,
    `ims.serviceCode` = NULL,
    initialize = function(`oauth.configmanager.ims.configid`, `ims.owningEntity`, `aem.instanceId`, `ims.serviceCode`){
      if (!missing(`oauth.configmanager.ims.configid`)) {
        stopifnot(R6::is.R6(`oauth.configmanager.ims.configid`))
        self$`oauth.configmanager.ims.configid` <- `oauth.configmanager.ims.configid`
      }
      if (!missing(`ims.owningEntity`)) {
        stopifnot(R6::is.R6(`ims.owningEntity`))
        self$`ims.owningEntity` <- `ims.owningEntity`
      }
      if (!missing(`aem.instanceId`)) {
        stopifnot(R6::is.R6(`aem.instanceId`))
        self$`aem.instanceId` <- `aem.instanceId`
      }
      if (!missing(`ims.serviceCode`)) {
        stopifnot(R6::is.R6(`ims.serviceCode`))
        self$`ims.serviceCode` <- `ims.serviceCode`
      }
    },
    toJSON = function() {
      ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject <- list()
      if (!is.null(self$`oauth.configmanager.ims.configid`)) {
        ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject[['oauth.configmanager.ims.configid']] <- self$`oauth.configmanager.ims.configid`$toJSON()
      }
      if (!is.null(self$`ims.owningEntity`)) {
        ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject[['ims.owningEntity']] <- self$`ims.owningEntity`$toJSON()
      }
      if (!is.null(self$`aem.instanceId`)) {
        ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject[['aem.instanceId']] <- self$`aem.instanceId`$toJSON()
      }
      if (!is.null(self$`ims.serviceCode`)) {
        ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject[['ims.serviceCode']] <- self$`ims.serviceCode`$toJSON()
      }

      ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesJson) {
      ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesJson)
      if (!is.null(ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject$`oauth.configmanager.ims.configid`)) {
        oauth.configmanager.ims.configidObject <- ConfigNodePropertyString$new()
        oauth.configmanager.ims.configidObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject$oauth.configmanager.ims.configid, auto_unbox = TRUE))
        self$`oauth.configmanager.ims.configid` <- oauth.configmanager.ims.configidObject
      }
      if (!is.null(ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject$`ims.owningEntity`)) {
        ims.owningEntityObject <- ConfigNodePropertyString$new()
        ims.owningEntityObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject$ims.owningEntity, auto_unbox = TRUE))
        self$`ims.owningEntity` <- ims.owningEntityObject
      }
      if (!is.null(ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject$`aem.instanceId`)) {
        aem.instanceIdObject <- ConfigNodePropertyString$new()
        aem.instanceIdObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject$aem.instanceId, auto_unbox = TRUE))
        self$`aem.instanceId` <- aem.instanceIdObject
      }
      if (!is.null(ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject$`ims.serviceCode`)) {
        ims.serviceCodeObject <- ConfigNodePropertyString$new()
        ims.serviceCodeObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject$ims.serviceCode, auto_unbox = TRUE))
        self$`ims.serviceCode` <- ims.serviceCodeObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "oauth.configmanager.ims.configid": %s,
           "ims.owningEntity": %s,
           "aem.instanceId": %s,
           "ims.serviceCode": %s
        }',
        self$`oauth.configmanager.ims.configid`$toJSON(),
        self$`ims.owningEntity`$toJSON(),
        self$`aem.instanceId`$toJSON(),
        self$`ims.serviceCode`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesJson) {
      ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`oauth.configmanager.ims.configid` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject$oauth.configmanager.ims.configid, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`ims.owningEntity` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject$ims.owningEntity, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`aem.instanceId` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject$aem.instanceId, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`ims.serviceCode` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteAuthImsImplImsConfigProviderImplPropertiesObject$ims.serviceCode, auto_unbox = TRUE))
    }
  )
)
