# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties Class
#'
#' @field length 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties <- R6::R6Class(
  'OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties',
  public = list(
    `length` = NULL,
    initialize = function(`length`){
      if (!missing(`length`)) {
        stopifnot(R6::is.R6(`length`))
        self$`length` <- `length`
      }
    },
    toJSON = function() {
      OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNamePropertiesObject <- list()
      if (!is.null(self$`length`)) {
        OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNamePropertiesObject[['length']] <- self$`length`$toJSON()
      }

      OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNamePropertiesObject
    },
    fromJSON = function(OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNamePropertiesJson) {
      OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNamePropertiesObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNamePropertiesJson)
      if (!is.null(OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNamePropertiesObject$`length`)) {
        lengthObject <- ConfigNodePropertyInteger$new()
        lengthObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNamePropertiesObject$length, auto_unbox = TRUE))
        self$`length` <- lengthObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "length": %s
        }',
        self$`length`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNamePropertiesJson) {
      OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNamePropertiesObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNamePropertiesJson)
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`length` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNamePropertiesObject$length, auto_unbox = TRUE))
    }
  )
)
