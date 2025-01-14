# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties Class
#'
#' @field ignorePropertyNameRegex 
#' @field configCollectionPropertiesResourceNames 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties <- R6::R6Class(
  'OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties',
  public = list(
    `ignorePropertyNameRegex` = NULL,
    `configCollectionPropertiesResourceNames` = NULL,
    initialize = function(`ignorePropertyNameRegex`, `configCollectionPropertiesResourceNames`){
      if (!missing(`ignorePropertyNameRegex`)) {
        stopifnot(R6::is.R6(`ignorePropertyNameRegex`))
        self$`ignorePropertyNameRegex` <- `ignorePropertyNameRegex`
      }
      if (!missing(`configCollectionPropertiesResourceNames`)) {
        stopifnot(R6::is.R6(`configCollectionPropertiesResourceNames`))
        self$`configCollectionPropertiesResourceNames` <- `configCollectionPropertiesResourceNames`
      }
    },
    toJSON = function() {
      OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesObject <- list()
      if (!is.null(self$`ignorePropertyNameRegex`)) {
        OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesObject[['ignorePropertyNameRegex']] <- self$`ignorePropertyNameRegex`$toJSON()
      }
      if (!is.null(self$`configCollectionPropertiesResourceNames`)) {
        OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesObject[['configCollectionPropertiesResourceNames']] <- self$`configCollectionPropertiesResourceNames`$toJSON()
      }

      OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesObject
    },
    fromJSON = function(OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesJson) {
      OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesJson)
      if (!is.null(OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesObject$`ignorePropertyNameRegex`)) {
        ignorePropertyNameRegexObject <- ConfigNodePropertyArray$new()
        ignorePropertyNameRegexObject$fromJSON(jsonlite::toJSON(OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesObject$ignorePropertyNameRegex, auto_unbox = TRUE))
        self$`ignorePropertyNameRegex` <- ignorePropertyNameRegexObject
      }
      if (!is.null(OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesObject$`configCollectionPropertiesResourceNames`)) {
        configCollectionPropertiesResourceNamesObject <- ConfigNodePropertyArray$new()
        configCollectionPropertiesResourceNamesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesObject$configCollectionPropertiesResourceNames, auto_unbox = TRUE))
        self$`configCollectionPropertiesResourceNames` <- configCollectionPropertiesResourceNamesObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "ignorePropertyNameRegex": %s,
           "configCollectionPropertiesResourceNames": %s
        }',
        self$`ignorePropertyNameRegex`$toJSON(),
        self$`configCollectionPropertiesResourceNames`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesJson) {
      OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`ignorePropertyNameRegex` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesObject$ignorePropertyNameRegex, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`configCollectionPropertiesResourceNames` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiPropertiesObject$configCollectionPropertiesResourceNames, auto_unbox = TRUE))
    }
  )
)
