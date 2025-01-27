# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeGraniteCsrfImplCSRFServletProperties Class
#'
#' @field csrf.token.expires.in 
#' @field sling.auth.requirements 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeGraniteCsrfImplCSRFServletProperties <- R6::R6Class(
  'ComAdobeGraniteCsrfImplCSRFServletProperties',
  public = list(
    `csrf.token.expires.in` = NULL,
    `sling.auth.requirements` = NULL,
    initialize = function(`csrf.token.expires.in`, `sling.auth.requirements`){
      if (!missing(`csrf.token.expires.in`)) {
        stopifnot(R6::is.R6(`csrf.token.expires.in`))
        self$`csrf.token.expires.in` <- `csrf.token.expires.in`
      }
      if (!missing(`sling.auth.requirements`)) {
        stopifnot(R6::is.R6(`sling.auth.requirements`))
        self$`sling.auth.requirements` <- `sling.auth.requirements`
      }
    },
    toJSON = function() {
      ComAdobeGraniteCsrfImplCSRFServletPropertiesObject <- list()
      if (!is.null(self$`csrf.token.expires.in`)) {
        ComAdobeGraniteCsrfImplCSRFServletPropertiesObject[['csrf.token.expires.in']] <- self$`csrf.token.expires.in`$toJSON()
      }
      if (!is.null(self$`sling.auth.requirements`)) {
        ComAdobeGraniteCsrfImplCSRFServletPropertiesObject[['sling.auth.requirements']] <- self$`sling.auth.requirements`$toJSON()
      }

      ComAdobeGraniteCsrfImplCSRFServletPropertiesObject
    },
    fromJSON = function(ComAdobeGraniteCsrfImplCSRFServletPropertiesJson) {
      ComAdobeGraniteCsrfImplCSRFServletPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteCsrfImplCSRFServletPropertiesJson)
      if (!is.null(ComAdobeGraniteCsrfImplCSRFServletPropertiesObject$`csrf.token.expires.in`)) {
        csrf.token.expires.inObject <- ConfigNodePropertyInteger$new()
        csrf.token.expires.inObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteCsrfImplCSRFServletPropertiesObject$csrf.token.expires.in, auto_unbox = TRUE))
        self$`csrf.token.expires.in` <- csrf.token.expires.inObject
      }
      if (!is.null(ComAdobeGraniteCsrfImplCSRFServletPropertiesObject$`sling.auth.requirements`)) {
        sling.auth.requirementsObject <- ConfigNodePropertyString$new()
        sling.auth.requirementsObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteCsrfImplCSRFServletPropertiesObject$sling.auth.requirements, auto_unbox = TRUE))
        self$`sling.auth.requirements` <- sling.auth.requirementsObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "csrf.token.expires.in": %s,
           "sling.auth.requirements": %s
        }',
        self$`csrf.token.expires.in`$toJSON(),
        self$`sling.auth.requirements`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeGraniteCsrfImplCSRFServletPropertiesJson) {
      ComAdobeGraniteCsrfImplCSRFServletPropertiesObject <- jsonlite::fromJSON(ComAdobeGraniteCsrfImplCSRFServletPropertiesJson)
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`csrf.token.expires.in` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteCsrfImplCSRFServletPropertiesObject$csrf.token.expires.in, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`sling.auth.requirements` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeGraniteCsrfImplCSRFServletPropertiesObject$sling.auth.requirements, auto_unbox = TRUE))
    }
  )
)
