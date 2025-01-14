# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqDamCfmImplComponentComponentConfigImplProperties Class
#'
#' @field dam.cfm.component.resourceType 
#' @field dam.cfm.component.fileReferenceProp 
#' @field dam.cfm.component.elementsProp 
#' @field dam.cfm.component.variationProp 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqDamCfmImplComponentComponentConfigImplProperties <- R6::R6Class(
  'ComAdobeCqDamCfmImplComponentComponentConfigImplProperties',
  public = list(
    `dam.cfm.component.resourceType` = NULL,
    `dam.cfm.component.fileReferenceProp` = NULL,
    `dam.cfm.component.elementsProp` = NULL,
    `dam.cfm.component.variationProp` = NULL,
    initialize = function(`dam.cfm.component.resourceType`, `dam.cfm.component.fileReferenceProp`, `dam.cfm.component.elementsProp`, `dam.cfm.component.variationProp`){
      if (!missing(`dam.cfm.component.resourceType`)) {
        stopifnot(R6::is.R6(`dam.cfm.component.resourceType`))
        self$`dam.cfm.component.resourceType` <- `dam.cfm.component.resourceType`
      }
      if (!missing(`dam.cfm.component.fileReferenceProp`)) {
        stopifnot(R6::is.R6(`dam.cfm.component.fileReferenceProp`))
        self$`dam.cfm.component.fileReferenceProp` <- `dam.cfm.component.fileReferenceProp`
      }
      if (!missing(`dam.cfm.component.elementsProp`)) {
        stopifnot(R6::is.R6(`dam.cfm.component.elementsProp`))
        self$`dam.cfm.component.elementsProp` <- `dam.cfm.component.elementsProp`
      }
      if (!missing(`dam.cfm.component.variationProp`)) {
        stopifnot(R6::is.R6(`dam.cfm.component.variationProp`))
        self$`dam.cfm.component.variationProp` <- `dam.cfm.component.variationProp`
      }
    },
    toJSON = function() {
      ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject <- list()
      if (!is.null(self$`dam.cfm.component.resourceType`)) {
        ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject[['dam.cfm.component.resourceType']] <- self$`dam.cfm.component.resourceType`$toJSON()
      }
      if (!is.null(self$`dam.cfm.component.fileReferenceProp`)) {
        ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject[['dam.cfm.component.fileReferenceProp']] <- self$`dam.cfm.component.fileReferenceProp`$toJSON()
      }
      if (!is.null(self$`dam.cfm.component.elementsProp`)) {
        ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject[['dam.cfm.component.elementsProp']] <- self$`dam.cfm.component.elementsProp`$toJSON()
      }
      if (!is.null(self$`dam.cfm.component.variationProp`)) {
        ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject[['dam.cfm.component.variationProp']] <- self$`dam.cfm.component.variationProp`$toJSON()
      }

      ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject
    },
    fromJSON = function(ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesJson) {
      ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject <- jsonlite::fromJSON(ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesJson)
      if (!is.null(ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject$`dam.cfm.component.resourceType`)) {
        dam.cfm.component.resourceTypeObject <- ConfigNodePropertyString$new()
        dam.cfm.component.resourceTypeObject$fromJSON(jsonlite::toJSON(ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject$dam.cfm.component.resourceType, auto_unbox = TRUE))
        self$`dam.cfm.component.resourceType` <- dam.cfm.component.resourceTypeObject
      }
      if (!is.null(ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject$`dam.cfm.component.fileReferenceProp`)) {
        dam.cfm.component.fileReferencePropObject <- ConfigNodePropertyString$new()
        dam.cfm.component.fileReferencePropObject$fromJSON(jsonlite::toJSON(ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject$dam.cfm.component.fileReferenceProp, auto_unbox = TRUE))
        self$`dam.cfm.component.fileReferenceProp` <- dam.cfm.component.fileReferencePropObject
      }
      if (!is.null(ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject$`dam.cfm.component.elementsProp`)) {
        dam.cfm.component.elementsPropObject <- ConfigNodePropertyString$new()
        dam.cfm.component.elementsPropObject$fromJSON(jsonlite::toJSON(ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject$dam.cfm.component.elementsProp, auto_unbox = TRUE))
        self$`dam.cfm.component.elementsProp` <- dam.cfm.component.elementsPropObject
      }
      if (!is.null(ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject$`dam.cfm.component.variationProp`)) {
        dam.cfm.component.variationPropObject <- ConfigNodePropertyString$new()
        dam.cfm.component.variationPropObject$fromJSON(jsonlite::toJSON(ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject$dam.cfm.component.variationProp, auto_unbox = TRUE))
        self$`dam.cfm.component.variationProp` <- dam.cfm.component.variationPropObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "dam.cfm.component.resourceType": %s,
           "dam.cfm.component.fileReferenceProp": %s,
           "dam.cfm.component.elementsProp": %s,
           "dam.cfm.component.variationProp": %s
        }',
        self$`dam.cfm.component.resourceType`$toJSON(),
        self$`dam.cfm.component.fileReferenceProp`$toJSON(),
        self$`dam.cfm.component.elementsProp`$toJSON(),
        self$`dam.cfm.component.variationProp`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesJson) {
      ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject <- jsonlite::fromJSON(ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`dam.cfm.component.resourceType` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject$dam.cfm.component.resourceType, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`dam.cfm.component.fileReferenceProp` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject$dam.cfm.component.fileReferenceProp, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`dam.cfm.component.elementsProp` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject$dam.cfm.component.elementsProp, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`dam.cfm.component.variationProp` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqDamCfmImplComponentComponentConfigImplPropertiesObject$dam.cfm.component.variationProp, auto_unbox = TRUE))
    }
  )
)
