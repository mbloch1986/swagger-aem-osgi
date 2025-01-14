# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties Class
#'
#' @field sling.servlet.selectors 
#' @field ecmaSuport 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties <- R6::R6Class(
  'OrgApacheSlingServletsGetImplVersionVersionInfoServletProperties',
  public = list(
    `sling.servlet.selectors` = NULL,
    `ecmaSuport` = NULL,
    initialize = function(`sling.servlet.selectors`, `ecmaSuport`){
      if (!missing(`sling.servlet.selectors`)) {
        stopifnot(R6::is.R6(`sling.servlet.selectors`))
        self$`sling.servlet.selectors` <- `sling.servlet.selectors`
      }
      if (!missing(`ecmaSuport`)) {
        stopifnot(R6::is.R6(`ecmaSuport`))
        self$`ecmaSuport` <- `ecmaSuport`
      }
    },
    toJSON = function() {
      OrgApacheSlingServletsGetImplVersionVersionInfoServletPropertiesObject <- list()
      if (!is.null(self$`sling.servlet.selectors`)) {
        OrgApacheSlingServletsGetImplVersionVersionInfoServletPropertiesObject[['sling.servlet.selectors']] <- self$`sling.servlet.selectors`$toJSON()
      }
      if (!is.null(self$`ecmaSuport`)) {
        OrgApacheSlingServletsGetImplVersionVersionInfoServletPropertiesObject[['ecmaSuport']] <- self$`ecmaSuport`$toJSON()
      }

      OrgApacheSlingServletsGetImplVersionVersionInfoServletPropertiesObject
    },
    fromJSON = function(OrgApacheSlingServletsGetImplVersionVersionInfoServletPropertiesJson) {
      OrgApacheSlingServletsGetImplVersionVersionInfoServletPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingServletsGetImplVersionVersionInfoServletPropertiesJson)
      if (!is.null(OrgApacheSlingServletsGetImplVersionVersionInfoServletPropertiesObject$`sling.servlet.selectors`)) {
        sling.servlet.selectorsObject <- ConfigNodePropertyArray$new()
        sling.servlet.selectorsObject$fromJSON(jsonlite::toJSON(OrgApacheSlingServletsGetImplVersionVersionInfoServletPropertiesObject$sling.servlet.selectors, auto_unbox = TRUE))
        self$`sling.servlet.selectors` <- sling.servlet.selectorsObject
      }
      if (!is.null(OrgApacheSlingServletsGetImplVersionVersionInfoServletPropertiesObject$`ecmaSuport`)) {
        ecmaSuportObject <- ConfigNodePropertyBoolean$new()
        ecmaSuportObject$fromJSON(jsonlite::toJSON(OrgApacheSlingServletsGetImplVersionVersionInfoServletPropertiesObject$ecmaSuport, auto_unbox = TRUE))
        self$`ecmaSuport` <- ecmaSuportObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "sling.servlet.selectors": %s,
           "ecmaSuport": %s
        }',
        self$`sling.servlet.selectors`$toJSON(),
        self$`ecmaSuport`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheSlingServletsGetImplVersionVersionInfoServletPropertiesJson) {
      OrgApacheSlingServletsGetImplVersionVersionInfoServletPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingServletsGetImplVersionVersionInfoServletPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`sling.servlet.selectors` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingServletsGetImplVersionVersionInfoServletPropertiesObject$sling.servlet.selectors, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`ecmaSuport` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheSlingServletsGetImplVersionVersionInfoServletPropertiesObject$ecmaSuport, auto_unbox = TRUE))
    }
  )
)
