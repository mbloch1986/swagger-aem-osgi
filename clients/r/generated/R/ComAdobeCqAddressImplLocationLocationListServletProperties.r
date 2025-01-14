# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqAddressImplLocationLocationListServletProperties Class
#'
#' @field cq.address.location.default.maxResults 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqAddressImplLocationLocationListServletProperties <- R6::R6Class(
  'ComAdobeCqAddressImplLocationLocationListServletProperties',
  public = list(
    `cq.address.location.default.maxResults` = NULL,
    initialize = function(`cq.address.location.default.maxResults`){
      if (!missing(`cq.address.location.default.maxResults`)) {
        stopifnot(R6::is.R6(`cq.address.location.default.maxResults`))
        self$`cq.address.location.default.maxResults` <- `cq.address.location.default.maxResults`
      }
    },
    toJSON = function() {
      ComAdobeCqAddressImplLocationLocationListServletPropertiesObject <- list()
      if (!is.null(self$`cq.address.location.default.maxResults`)) {
        ComAdobeCqAddressImplLocationLocationListServletPropertiesObject[['cq.address.location.default.maxResults']] <- self$`cq.address.location.default.maxResults`$toJSON()
      }

      ComAdobeCqAddressImplLocationLocationListServletPropertiesObject
    },
    fromJSON = function(ComAdobeCqAddressImplLocationLocationListServletPropertiesJson) {
      ComAdobeCqAddressImplLocationLocationListServletPropertiesObject <- jsonlite::fromJSON(ComAdobeCqAddressImplLocationLocationListServletPropertiesJson)
      if (!is.null(ComAdobeCqAddressImplLocationLocationListServletPropertiesObject$`cq.address.location.default.maxResults`)) {
        cq.address.location.default.maxResultsObject <- ConfigNodePropertyInteger$new()
        cq.address.location.default.maxResultsObject$fromJSON(jsonlite::toJSON(ComAdobeCqAddressImplLocationLocationListServletPropertiesObject$cq.address.location.default.maxResults, auto_unbox = TRUE))
        self$`cq.address.location.default.maxResults` <- cq.address.location.default.maxResultsObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "cq.address.location.default.maxResults": %s
        }',
        self$`cq.address.location.default.maxResults`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeCqAddressImplLocationLocationListServletPropertiesJson) {
      ComAdobeCqAddressImplLocationLocationListServletPropertiesObject <- jsonlite::fromJSON(ComAdobeCqAddressImplLocationLocationListServletPropertiesJson)
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`cq.address.location.default.maxResults` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqAddressImplLocationLocationListServletPropertiesObject$cq.address.location.default.maxResults, auto_unbox = TRUE))
    }
  )
)
