# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialSrpImplSocialSolrConnectorProperties Class
#'
#' @field srp.type 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialSrpImplSocialSolrConnectorProperties <- R6::R6Class(
  'ComAdobeCqSocialSrpImplSocialSolrConnectorProperties',
  public = list(
    `srp.type` = NULL,
    initialize = function(`srp.type`){
      if (!missing(`srp.type`)) {
        stopifnot(R6::is.R6(`srp.type`))
        self$`srp.type` <- `srp.type`
      }
    },
    toJSON = function() {
      ComAdobeCqSocialSrpImplSocialSolrConnectorPropertiesObject <- list()
      if (!is.null(self$`srp.type`)) {
        ComAdobeCqSocialSrpImplSocialSolrConnectorPropertiesObject[['srp.type']] <- self$`srp.type`$toJSON()
      }

      ComAdobeCqSocialSrpImplSocialSolrConnectorPropertiesObject
    },
    fromJSON = function(ComAdobeCqSocialSrpImplSocialSolrConnectorPropertiesJson) {
      ComAdobeCqSocialSrpImplSocialSolrConnectorPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialSrpImplSocialSolrConnectorPropertiesJson)
      if (!is.null(ComAdobeCqSocialSrpImplSocialSolrConnectorPropertiesObject$`srp.type`)) {
        srp.typeObject <- ConfigNodePropertyString$new()
        srp.typeObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialSrpImplSocialSolrConnectorPropertiesObject$srp.type, auto_unbox = TRUE))
        self$`srp.type` <- srp.typeObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "srp.type": %s
        }',
        self$`srp.type`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeCqSocialSrpImplSocialSolrConnectorPropertiesJson) {
      ComAdobeCqSocialSrpImplSocialSolrConnectorPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialSrpImplSocialSolrConnectorPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`srp.type` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialSrpImplSocialSolrConnectorPropertiesObject$srp.type, auto_unbox = TRUE))
    }
  )
)
