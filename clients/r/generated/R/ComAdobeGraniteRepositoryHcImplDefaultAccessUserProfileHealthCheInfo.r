# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfo <- R6::R6Class(
  'ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfo',
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
      ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject
    },
    fromJSON = function(ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoJson) {
      ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject <- jsonlite::fromJSON(ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoJson)
      if (!is.null(ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject$`pid`)) {
        self$`pid` <- ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject$`pid`
      }
      if (!is.null(ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject$`title`)) {
        self$`title` <- ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject$`title`
      }
      if (!is.null(ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject$`description`)) {
        self$`description` <- ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject$`description`
      }
      if (!is.null(ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject$`properties`)) {
        propertiesObject <- ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoJson) {
      ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject <- jsonlite::fromJSON(ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoJson)
      self$`pid` <- ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject$`pid`
      self$`title` <- ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject$`title`
      self$`description` <- ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject$`description`
      ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthChePropertiesObject <- ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheProperties$new()
      self$`properties` <- ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthChePropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteRepositoryHcImplDefaultAccessUserProfileHealthCheInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
