# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingAuthCoreImplLogoutServletProperties Class
#'
#' @field sling.servlet.methods 
#' @field sling.servlet.paths 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingAuthCoreImplLogoutServletProperties <- R6::R6Class(
  'OrgApacheSlingAuthCoreImplLogoutServletProperties',
  public = list(
    `sling.servlet.methods` = NULL,
    `sling.servlet.paths` = NULL,
    initialize = function(`sling.servlet.methods`, `sling.servlet.paths`){
      if (!missing(`sling.servlet.methods`)) {
        stopifnot(R6::is.R6(`sling.servlet.methods`))
        self$`sling.servlet.methods` <- `sling.servlet.methods`
      }
      if (!missing(`sling.servlet.paths`)) {
        stopifnot(R6::is.R6(`sling.servlet.paths`))
        self$`sling.servlet.paths` <- `sling.servlet.paths`
      }
    },
    toJSON = function() {
      OrgApacheSlingAuthCoreImplLogoutServletPropertiesObject <- list()
      if (!is.null(self$`sling.servlet.methods`)) {
        OrgApacheSlingAuthCoreImplLogoutServletPropertiesObject[['sling.servlet.methods']] <- self$`sling.servlet.methods`$toJSON()
      }
      if (!is.null(self$`sling.servlet.paths`)) {
        OrgApacheSlingAuthCoreImplLogoutServletPropertiesObject[['sling.servlet.paths']] <- self$`sling.servlet.paths`$toJSON()
      }

      OrgApacheSlingAuthCoreImplLogoutServletPropertiesObject
    },
    fromJSON = function(OrgApacheSlingAuthCoreImplLogoutServletPropertiesJson) {
      OrgApacheSlingAuthCoreImplLogoutServletPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingAuthCoreImplLogoutServletPropertiesJson)
      if (!is.null(OrgApacheSlingAuthCoreImplLogoutServletPropertiesObject$`sling.servlet.methods`)) {
        sling.servlet.methodsObject <- ConfigNodePropertyArray$new()
        sling.servlet.methodsObject$fromJSON(jsonlite::toJSON(OrgApacheSlingAuthCoreImplLogoutServletPropertiesObject$sling.servlet.methods, auto_unbox = TRUE))
        self$`sling.servlet.methods` <- sling.servlet.methodsObject
      }
      if (!is.null(OrgApacheSlingAuthCoreImplLogoutServletPropertiesObject$`sling.servlet.paths`)) {
        sling.servlet.pathsObject <- ConfigNodePropertyString$new()
        sling.servlet.pathsObject$fromJSON(jsonlite::toJSON(OrgApacheSlingAuthCoreImplLogoutServletPropertiesObject$sling.servlet.paths, auto_unbox = TRUE))
        self$`sling.servlet.paths` <- sling.servlet.pathsObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "sling.servlet.methods": %s,
           "sling.servlet.paths": %s
        }',
        self$`sling.servlet.methods`$toJSON(),
        self$`sling.servlet.paths`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheSlingAuthCoreImplLogoutServletPropertiesJson) {
      OrgApacheSlingAuthCoreImplLogoutServletPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingAuthCoreImplLogoutServletPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`sling.servlet.methods` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingAuthCoreImplLogoutServletPropertiesObject$sling.servlet.methods, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`sling.servlet.paths` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingAuthCoreImplLogoutServletPropertiesObject$sling.servlet.paths, auto_unbox = TRUE))
    }
  )
)
