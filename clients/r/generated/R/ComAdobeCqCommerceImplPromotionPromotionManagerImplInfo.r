# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqCommerceImplPromotionPromotionManagerImplInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqCommerceImplPromotionPromotionManagerImplInfo <- R6::R6Class(
  'ComAdobeCqCommerceImplPromotionPromotionManagerImplInfo',
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
      ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject
    },
    fromJSON = function(ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoJson) {
      ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject <- jsonlite::fromJSON(ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoJson)
      if (!is.null(ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject$`title`)) {
        self$`title` <- ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject$`title`
      }
      if (!is.null(ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject$`description`)) {
        self$`description` <- ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject$`description`
      }
      if (!is.null(ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoJson) {
      ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject <- jsonlite::fromJSON(ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoJson)
      self$`pid` <- ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject$`pid`
      self$`title` <- ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject$`title`
      self$`description` <- ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject$`description`
      ComAdobeCqCommerceImplPromotionPromotionManagerImplPropertiesObject <- ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties$new()
      self$`properties` <- ComAdobeCqCommerceImplPromotionPromotionManagerImplPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqCommerceImplPromotionPromotionManagerImplInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
