# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties Class
#'
#' @field requiredServicePids 
#' @field authorizationCompositionType 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties <- R6::R6Class(
  'OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties',
  public = list(
    `requiredServicePids` = NULL,
    `authorizationCompositionType` = NULL,
    initialize = function(`requiredServicePids`, `authorizationCompositionType`){
      if (!missing(`requiredServicePids`)) {
        stopifnot(R6::is.R6(`requiredServicePids`))
        self$`requiredServicePids` <- `requiredServicePids`
      }
      if (!missing(`authorizationCompositionType`)) {
        stopifnot(R6::is.R6(`authorizationCompositionType`))
        self$`authorizationCompositionType` <- `authorizationCompositionType`
      }
    },
    toJSON = function() {
      OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiPropertiesObject <- list()
      if (!is.null(self$`requiredServicePids`)) {
        OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiPropertiesObject[['requiredServicePids']] <- self$`requiredServicePids`$toJSON()
      }
      if (!is.null(self$`authorizationCompositionType`)) {
        OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiPropertiesObject[['authorizationCompositionType']] <- self$`authorizationCompositionType`$toJSON()
      }

      OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiPropertiesObject
    },
    fromJSON = function(OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiPropertiesJson) {
      OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiPropertiesObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiPropertiesJson)
      if (!is.null(OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiPropertiesObject$`requiredServicePids`)) {
        requiredServicePidsObject <- ConfigNodePropertyArray$new()
        requiredServicePidsObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiPropertiesObject$requiredServicePids, auto_unbox = TRUE))
        self$`requiredServicePids` <- requiredServicePidsObject
      }
      if (!is.null(OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiPropertiesObject$`authorizationCompositionType`)) {
        authorizationCompositionTypeObject <- ConfigNodePropertyDropDown$new()
        authorizationCompositionTypeObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiPropertiesObject$authorizationCompositionType, auto_unbox = TRUE))
        self$`authorizationCompositionType` <- authorizationCompositionTypeObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "requiredServicePids": %s,
           "authorizationCompositionType": %s
        }',
        self$`requiredServicePids`$toJSON(),
        self$`authorizationCompositionType`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiPropertiesJson) {
      OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiPropertiesObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`requiredServicePids` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiPropertiesObject$requiredServicePids, auto_unbox = TRUE))
      ConfigNodePropertyDropDownObject <- ConfigNodePropertyDropDown$new()
      self$`authorizationCompositionType` <- ConfigNodePropertyDropDownObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiPropertiesObject$authorizationCompositionType, auto_unbox = TRUE))
    }
  )
)
