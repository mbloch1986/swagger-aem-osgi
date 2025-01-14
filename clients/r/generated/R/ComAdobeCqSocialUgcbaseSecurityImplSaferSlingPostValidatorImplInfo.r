# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfo <- R6::R6Class(
  'ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfo',
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
      ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject
    },
    fromJSON = function(ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoJson) {
      ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoJson)
      if (!is.null(ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject$`title`)) {
        self$`title` <- ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject$`title`
      }
      if (!is.null(ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject$`description`)) {
        self$`description` <- ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject$`description`
      }
      if (!is.null(ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject$properties, auto_unbox = TRUE))
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
    fromJSONString = function(ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoJson) {
      ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject <- jsonlite::fromJSON(ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoJson)
      self$`pid` <- ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject$`pid`
      self$`title` <- ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject$`title`
      self$`description` <- ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject$`description`
      ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplPropertiesObject <- ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties$new()
      self$`properties` <- ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
