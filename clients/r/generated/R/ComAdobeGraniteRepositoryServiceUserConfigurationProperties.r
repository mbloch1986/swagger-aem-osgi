# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteRepositoryServiceUserConfigurationProperties Class
#'
#' @field service.ranking 
#' @field serviceusers.simpleSubjectPopulation 
#' @field serviceusers.list 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteRepositoryServiceUserConfigurationProperties <- R6::R6Class(
  'ComAdobeGraniteRepositoryServiceUserConfigurationProperties',
  public = list(
    `service.ranking` = NULL,
    `serviceusers.simpleSubjectPopulation` = NULL,
    `serviceusers.list` = NULL,
    initialize = function(`service.ranking`, `serviceusers.simpleSubjectPopulation`, `serviceusers.list`){
      if (!missing(`service.ranking`)) {
        stopifnot(R6::is.R6(`service.ranking`))
        self$`service.ranking` <- `service.ranking`
      }
      if (!missing(`serviceusers.simpleSubjectPopulation`)) {
        stopifnot(R6::is.R6(`serviceusers.simpleSubjectPopulation`))
        self$`serviceusers.simpleSubjectPopulation` <- `serviceusers.simpleSubjectPopulation`
      }
      if (!missing(`serviceusers.list`)) {
        stopifnot(R6::is.R6(`serviceusers.list`))
        self$`serviceusers.list` <- `serviceusers.list`
      }
    },
    toJSON = function() {
      ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject <- list()
      if (!is.null(self$`service.ranking`)) {
        ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject[['service.ranking']] <- self$`service.ranking`$toJSON()
      }
      if (!is.null(self$`serviceusers.simpleSubjectPopulation`)) {
        ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject[['serviceusers.simpleSubjectPopulation']] <- self$`serviceusers.simpleSubjectPopulation`$toJSON()
      }
      if (!is.null(self$`serviceusers.list`)) {
        ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject[['serviceusers.list']] <- self$`serviceusers.list`$toJSON()
      }

      ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesJson) {
      ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesJson)
      if (!is.null(ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject$`service.ranking`)) {
        service.rankingObject <- ConfigNodePropertyInteger$new()
        service.rankingObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject$service.ranking, auto_unbox = TRUE))
        self$`service.ranking` <- service.rankingObject
      }
      if (!is.null(ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject$`serviceusers.simpleSubjectPopulation`)) {
        serviceusers.simpleSubjectPopulationObject <- ConfigNodePropertyBoolean$new()
        serviceusers.simpleSubjectPopulationObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject$serviceusers.simpleSubjectPopulation, auto_unbox = TRUE))
        self$`serviceusers.simpleSubjectPopulation` <- serviceusers.simpleSubjectPopulationObject
      }
      if (!is.null(ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject$`serviceusers.list`)) {
        serviceusers.listObject <- ConfigNodePropertyArray$new()
        serviceusers.listObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject$serviceusers.list, auto_unbox = TRUE))
        self$`serviceusers.list` <- serviceusers.listObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "service.ranking": %s,
           "serviceusers.simpleSubjectPopulation": %s,
           "serviceusers.list": %s
        }',
        self$`service.ranking`$toJSON(),
        self$`serviceusers.simpleSubjectPopulation`$toJSON(),
        self$`serviceusers.list`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesJson) {
      ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesJson)
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`service.ranking` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject$service.ranking, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`serviceusers.simpleSubjectPopulation` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject$serviceusers.simpleSubjectPopulation, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`serviceusers.list` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryServiceUserConfigurationPropertiesObject$serviceusers.list, auto_unbox = TRUE))
    }
  )
)