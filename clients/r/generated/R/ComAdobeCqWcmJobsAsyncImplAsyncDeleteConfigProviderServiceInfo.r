# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfo <- R6::R6Class(
  'ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfo',
  public = list(
    `pid` = NULL,
    `title` = NULL,
    `description` = NULL,
    `properties` = NULL,
    initialize = function(`pid`, `title`, `description`, `properties`){
      if (!missing(`pid`)) {
        stopifnot(is.character(`pid`), length(`pid`) == 1)
        self$`pid` <- `pid`
      }
      if (!missing(`title`)) {
        stopifnot(is.character(`title`), length(`title`) == 1)
        self$`title` <- `title`
      }
      if (!missing(`description`)) {
        stopifnot(is.character(`description`), length(`description`) == 1)
        self$`description` <- `description`
      }
      if (!missing(`properties`)) {
        stopifnot(R6::is.R6(`properties`))
        self$`properties` <- `properties`
      }
    },
    toJSON = function() {
      ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject
    },
    fromJSON = function(ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoJson) {
      ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject <- jsonlite::fromJSON(ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoJson)
      if (!is.null(ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject$`title`)) {
        self$`title` <- ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject$`title`
      }
      if (!is.null(ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject$`description`)) {
        self$`description` <- ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject$`description`
      }
      if (!is.null(ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject$properties, auto_unbox = TRUE))
        self$`properties` <- propertiesObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "pid": %s,
           "title": %s,
           "description": %s,
           "properties": %s
        }',
        self$`pid`,
        self$`title`,
        self$`description`,
        self$`properties`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoJson) {
      ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject <- jsonlite::fromJSON(ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoJson)
      self$`pid` <- ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject$`pid`
      self$`title` <- ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject$`title`
      self$`description` <- ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject$`description`
      ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServicePropertiesObject <- ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties$new()
      self$`properties` <- ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServicePropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceInfoObject$properties, auto_unbox = TRUE))
    }
  )
)