# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties Class
#'
#' @field name 
#' @field endpoints 
#' @field transportSecretProvider.target 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties <- R6::R6Class(
  'OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties',
  public = list(
    `name` = NULL,
    `endpoints` = NULL,
    `transportSecretProvider.target` = NULL,
    initialize = function(`name`, `endpoints`, `transportSecretProvider.target`){
      if (!missing(`name`)) {
        stopifnot(R6::is.R6(`name`))
        self$`name` <- `name`
      }
      if (!missing(`endpoints`)) {
        stopifnot(R6::is.R6(`endpoints`))
        self$`endpoints` <- `endpoints`
      }
      if (!missing(`transportSecretProvider.target`)) {
        stopifnot(R6::is.R6(`transportSecretProvider.target`))
        self$`transportSecretProvider.target` <- `transportSecretProvider.target`
      }
    },
    toJSON = function() {
      OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesObject <- list()
      if (!is.null(self$`name`)) {
        OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesObject[['name']] <- self$`name`$toJSON()
      }
      if (!is.null(self$`endpoints`)) {
        OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesObject[['endpoints']] <- self$`endpoints`$toJSON()
      }
      if (!is.null(self$`transportSecretProvider.target`)) {
        OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesObject[['transportSecretProvider.target']] <- self$`transportSecretProvider.target`$toJSON()
      }

      OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesObject
    },
    fromJSON = function(OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesJson) {
      OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesJson)
      if (!is.null(OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesObject$`name`)) {
        nameObject <- ConfigNodePropertyString$new()
        nameObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesObject$name, auto_unbox = TRUE))
        self$`name` <- nameObject
      }
      if (!is.null(OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesObject$`endpoints`)) {
        endpointsObject <- ConfigNodePropertyArray$new()
        endpointsObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesObject$endpoints, auto_unbox = TRUE))
        self$`endpoints` <- endpointsObject
      }
      if (!is.null(OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesObject$`transportSecretProvider.target`)) {
        transportSecretProvider.targetObject <- ConfigNodePropertyString$new()
        transportSecretProvider.targetObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesObject$transportSecretProvider.target, auto_unbox = TRUE))
        self$`transportSecretProvider.target` <- transportSecretProvider.targetObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "name": %s,
           "endpoints": %s,
           "transportSecretProvider.target": %s
        }',
        self$`name`$toJSON(),
        self$`endpoints`$toJSON(),
        self$`transportSecretProvider.target`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesJson) {
      OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`name` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesObject$name, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`endpoints` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesObject$endpoints, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`transportSecretProvider.target` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiPropertiesObject$transportSecretProvider.target, auto_unbox = TRUE))
    }
  )
)
