# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingSettingsImplSlingSettingsServiceImplProperties Class
#'
#' @field sling.name 
#' @field sling.description 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingSettingsImplSlingSettingsServiceImplProperties <- R6::R6Class(
  'OrgApacheSlingSettingsImplSlingSettingsServiceImplProperties',
  public = list(
    `sling.name` = NULL,
    `sling.description` = NULL,
    initialize = function(`sling.name`, `sling.description`){
      if (!missing(`sling.name`)) {
        stopifnot(R6::is.R6(`sling.name`))
        self$`sling.name` <- `sling.name`
      }
      if (!missing(`sling.description`)) {
        stopifnot(R6::is.R6(`sling.description`))
        self$`sling.description` <- `sling.description`
      }
    },
    toJSON = function() {
      OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesObject <- list()
      if (!is.null(self$`sling.name`)) {
        OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesObject[['sling.name']] <- self$`sling.name`$toJSON()
      }
      if (!is.null(self$`sling.description`)) {
        OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesObject[['sling.description']] <- self$`sling.description`$toJSON()
      }

      OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesObject
    },
    fromJSON = function(OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesJson) {
      OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesJson)
      if (!is.null(OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesObject$`sling.name`)) {
        sling.nameObject <- ConfigNodePropertyString$new()
        sling.nameObject$fromJSON(jsonlite::toJSON(OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesObject$sling.name, auto_unbox = TRUE))
        self$`sling.name` <- sling.nameObject
      }
      if (!is.null(OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesObject$`sling.description`)) {
        sling.descriptionObject <- ConfigNodePropertyString$new()
        sling.descriptionObject$fromJSON(jsonlite::toJSON(OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesObject$sling.description, auto_unbox = TRUE))
        self$`sling.description` <- sling.descriptionObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "sling.name": %s,
           "sling.description": %s
        }',
        self$`sling.name`$toJSON(),
        self$`sling.description`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesJson) {
      OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`sling.name` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesObject$sling.name, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`sling.description` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingSettingsImplSlingSettingsServiceImplPropertiesObject$sling.description, auto_unbox = TRUE))
    }
  )
)