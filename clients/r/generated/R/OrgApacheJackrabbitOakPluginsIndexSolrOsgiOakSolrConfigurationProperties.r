# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties Class
#'
#' @field path.desc.field 
#' @field path.child.field 
#' @field path.parent.field 
#' @field path.exact.field 
#' @field catch.all.field 
#' @field collapsed.path.field 
#' @field path.depth.field 
#' @field commit.policy 
#' @field rows 
#' @field path.restrictions 
#' @field property.restrictions 
#' @field primarytypes.restrictions 
#' @field ignored.properties 
#' @field used.properties 
#' @field type.mappings 
#' @field property.mappings 
#' @field collapse.jcrcontent.nodes 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties <- R6::R6Class(
  'OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties',
  public = list(
    `path.desc.field` = NULL,
    `path.child.field` = NULL,
    `path.parent.field` = NULL,
    `path.exact.field` = NULL,
    `catch.all.field` = NULL,
    `collapsed.path.field` = NULL,
    `path.depth.field` = NULL,
    `commit.policy` = NULL,
    `rows` = NULL,
    `path.restrictions` = NULL,
    `property.restrictions` = NULL,
    `primarytypes.restrictions` = NULL,
    `ignored.properties` = NULL,
    `used.properties` = NULL,
    `type.mappings` = NULL,
    `property.mappings` = NULL,
    `collapse.jcrcontent.nodes` = NULL,
    initialize = function(`path.desc.field`, `path.child.field`, `path.parent.field`, `path.exact.field`, `catch.all.field`, `collapsed.path.field`, `path.depth.field`, `commit.policy`, `rows`, `path.restrictions`, `property.restrictions`, `primarytypes.restrictions`, `ignored.properties`, `used.properties`, `type.mappings`, `property.mappings`, `collapse.jcrcontent.nodes`){
      if (!missing(`path.desc.field`)) {
        stopifnot(R6::is.R6(`path.desc.field`))
        self$`path.desc.field` <- `path.desc.field`
      }
      if (!missing(`path.child.field`)) {
        stopifnot(R6::is.R6(`path.child.field`))
        self$`path.child.field` <- `path.child.field`
      }
      if (!missing(`path.parent.field`)) {
        stopifnot(R6::is.R6(`path.parent.field`))
        self$`path.parent.field` <- `path.parent.field`
      }
      if (!missing(`path.exact.field`)) {
        stopifnot(R6::is.R6(`path.exact.field`))
        self$`path.exact.field` <- `path.exact.field`
      }
      if (!missing(`catch.all.field`)) {
        stopifnot(R6::is.R6(`catch.all.field`))
        self$`catch.all.field` <- `catch.all.field`
      }
      if (!missing(`collapsed.path.field`)) {
        stopifnot(R6::is.R6(`collapsed.path.field`))
        self$`collapsed.path.field` <- `collapsed.path.field`
      }
      if (!missing(`path.depth.field`)) {
        stopifnot(R6::is.R6(`path.depth.field`))
        self$`path.depth.field` <- `path.depth.field`
      }
      if (!missing(`commit.policy`)) {
        stopifnot(R6::is.R6(`commit.policy`))
        self$`commit.policy` <- `commit.policy`
      }
      if (!missing(`rows`)) {
        stopifnot(R6::is.R6(`rows`))
        self$`rows` <- `rows`
      }
      if (!missing(`path.restrictions`)) {
        stopifnot(R6::is.R6(`path.restrictions`))
        self$`path.restrictions` <- `path.restrictions`
      }
      if (!missing(`property.restrictions`)) {
        stopifnot(R6::is.R6(`property.restrictions`))
        self$`property.restrictions` <- `property.restrictions`
      }
      if (!missing(`primarytypes.restrictions`)) {
        stopifnot(R6::is.R6(`primarytypes.restrictions`))
        self$`primarytypes.restrictions` <- `primarytypes.restrictions`
      }
      if (!missing(`ignored.properties`)) {
        stopifnot(R6::is.R6(`ignored.properties`))
        self$`ignored.properties` <- `ignored.properties`
      }
      if (!missing(`used.properties`)) {
        stopifnot(R6::is.R6(`used.properties`))
        self$`used.properties` <- `used.properties`
      }
      if (!missing(`type.mappings`)) {
        stopifnot(R6::is.R6(`type.mappings`))
        self$`type.mappings` <- `type.mappings`
      }
      if (!missing(`property.mappings`)) {
        stopifnot(R6::is.R6(`property.mappings`))
        self$`property.mappings` <- `property.mappings`
      }
      if (!missing(`collapse.jcrcontent.nodes`)) {
        stopifnot(R6::is.R6(`collapse.jcrcontent.nodes`))
        self$`collapse.jcrcontent.nodes` <- `collapse.jcrcontent.nodes`
      }
    },
    toJSON = function() {
      OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject <- list()
      if (!is.null(self$`path.desc.field`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['path.desc.field']] <- self$`path.desc.field`$toJSON()
      }
      if (!is.null(self$`path.child.field`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['path.child.field']] <- self$`path.child.field`$toJSON()
      }
      if (!is.null(self$`path.parent.field`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['path.parent.field']] <- self$`path.parent.field`$toJSON()
      }
      if (!is.null(self$`path.exact.field`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['path.exact.field']] <- self$`path.exact.field`$toJSON()
      }
      if (!is.null(self$`catch.all.field`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['catch.all.field']] <- self$`catch.all.field`$toJSON()
      }
      if (!is.null(self$`collapsed.path.field`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['collapsed.path.field']] <- self$`collapsed.path.field`$toJSON()
      }
      if (!is.null(self$`path.depth.field`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['path.depth.field']] <- self$`path.depth.field`$toJSON()
      }
      if (!is.null(self$`commit.policy`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['commit.policy']] <- self$`commit.policy`$toJSON()
      }
      if (!is.null(self$`rows`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['rows']] <- self$`rows`$toJSON()
      }
      if (!is.null(self$`path.restrictions`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['path.restrictions']] <- self$`path.restrictions`$toJSON()
      }
      if (!is.null(self$`property.restrictions`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['property.restrictions']] <- self$`property.restrictions`$toJSON()
      }
      if (!is.null(self$`primarytypes.restrictions`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['primarytypes.restrictions']] <- self$`primarytypes.restrictions`$toJSON()
      }
      if (!is.null(self$`ignored.properties`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['ignored.properties']] <- self$`ignored.properties`$toJSON()
      }
      if (!is.null(self$`used.properties`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['used.properties']] <- self$`used.properties`$toJSON()
      }
      if (!is.null(self$`type.mappings`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['type.mappings']] <- self$`type.mappings`$toJSON()
      }
      if (!is.null(self$`property.mappings`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['property.mappings']] <- self$`property.mappings`$toJSON()
      }
      if (!is.null(self$`collapse.jcrcontent.nodes`)) {
        OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject[['collapse.jcrcontent.nodes']] <- self$`collapse.jcrcontent.nodes`$toJSON()
      }

      OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject
    },
    fromJSON = function(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesJson) {
      OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesJson)
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`path.desc.field`)) {
        path.desc.fieldObject <- ConfigNodePropertyString$new()
        path.desc.fieldObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$path.desc.field, auto_unbox = TRUE))
        self$`path.desc.field` <- path.desc.fieldObject
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`path.child.field`)) {
        path.child.fieldObject <- ConfigNodePropertyString$new()
        path.child.fieldObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$path.child.field, auto_unbox = TRUE))
        self$`path.child.field` <- path.child.fieldObject
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`path.parent.field`)) {
        path.parent.fieldObject <- ConfigNodePropertyString$new()
        path.parent.fieldObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$path.parent.field, auto_unbox = TRUE))
        self$`path.parent.field` <- path.parent.fieldObject
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`path.exact.field`)) {
        path.exact.fieldObject <- ConfigNodePropertyString$new()
        path.exact.fieldObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$path.exact.field, auto_unbox = TRUE))
        self$`path.exact.field` <- path.exact.fieldObject
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`catch.all.field`)) {
        catch.all.fieldObject <- ConfigNodePropertyString$new()
        catch.all.fieldObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$catch.all.field, auto_unbox = TRUE))
        self$`catch.all.field` <- catch.all.fieldObject
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`collapsed.path.field`)) {
        collapsed.path.fieldObject <- ConfigNodePropertyString$new()
        collapsed.path.fieldObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$collapsed.path.field, auto_unbox = TRUE))
        self$`collapsed.path.field` <- collapsed.path.fieldObject
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`path.depth.field`)) {
        path.depth.fieldObject <- ConfigNodePropertyString$new()
        path.depth.fieldObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$path.depth.field, auto_unbox = TRUE))
        self$`path.depth.field` <- path.depth.fieldObject
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`commit.policy`)) {
        commit.policyObject <- ConfigNodePropertyDropDown$new()
        commit.policyObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$commit.policy, auto_unbox = TRUE))
        self$`commit.policy` <- commit.policyObject
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`rows`)) {
        rowsObject <- ConfigNodePropertyInteger$new()
        rowsObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$rows, auto_unbox = TRUE))
        self$`rows` <- rowsObject
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`path.restrictions`)) {
        path.restrictionsObject <- ConfigNodePropertyBoolean$new()
        path.restrictionsObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$path.restrictions, auto_unbox = TRUE))
        self$`path.restrictions` <- path.restrictionsObject
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`property.restrictions`)) {
        property.restrictionsObject <- ConfigNodePropertyBoolean$new()
        property.restrictionsObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$property.restrictions, auto_unbox = TRUE))
        self$`property.restrictions` <- property.restrictionsObject
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`primarytypes.restrictions`)) {
        primarytypes.restrictionsObject <- ConfigNodePropertyBoolean$new()
        primarytypes.restrictionsObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$primarytypes.restrictions, auto_unbox = TRUE))
        self$`primarytypes.restrictions` <- primarytypes.restrictionsObject
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`ignored.properties`)) {
        ignored.propertiesObject <- ConfigNodePropertyArray$new()
        ignored.propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$ignored.properties, auto_unbox = TRUE))
        self$`ignored.properties` <- ignored.propertiesObject
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`used.properties`)) {
        used.propertiesObject <- ConfigNodePropertyArray$new()
        used.propertiesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$used.properties, auto_unbox = TRUE))
        self$`used.properties` <- used.propertiesObject
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`type.mappings`)) {
        type.mappingsObject <- ConfigNodePropertyArray$new()
        type.mappingsObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$type.mappings, auto_unbox = TRUE))
        self$`type.mappings` <- type.mappingsObject
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`property.mappings`)) {
        property.mappingsObject <- ConfigNodePropertyArray$new()
        property.mappingsObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$property.mappings, auto_unbox = TRUE))
        self$`property.mappings` <- property.mappingsObject
      }
      if (!is.null(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$`collapse.jcrcontent.nodes`)) {
        collapse.jcrcontent.nodesObject <- ConfigNodePropertyBoolean$new()
        collapse.jcrcontent.nodesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$collapse.jcrcontent.nodes, auto_unbox = TRUE))
        self$`collapse.jcrcontent.nodes` <- collapse.jcrcontent.nodesObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "path.desc.field": %s,
           "path.child.field": %s,
           "path.parent.field": %s,
           "path.exact.field": %s,
           "catch.all.field": %s,
           "collapsed.path.field": %s,
           "path.depth.field": %s,
           "commit.policy": %s,
           "rows": %s,
           "path.restrictions": %s,
           "property.restrictions": %s,
           "primarytypes.restrictions": %s,
           "ignored.properties": %s,
           "used.properties": %s,
           "type.mappings": %s,
           "property.mappings": %s,
           "collapse.jcrcontent.nodes": %s
        }',
        self$`path.desc.field`$toJSON(),
        self$`path.child.field`$toJSON(),
        self$`path.parent.field`$toJSON(),
        self$`path.exact.field`$toJSON(),
        self$`catch.all.field`$toJSON(),
        self$`collapsed.path.field`$toJSON(),
        self$`path.depth.field`$toJSON(),
        self$`commit.policy`$toJSON(),
        self$`rows`$toJSON(),
        self$`path.restrictions`$toJSON(),
        self$`property.restrictions`$toJSON(),
        self$`primarytypes.restrictions`$toJSON(),
        self$`ignored.properties`$toJSON(),
        self$`used.properties`$toJSON(),
        self$`type.mappings`$toJSON(),
        self$`property.mappings`$toJSON(),
        self$`collapse.jcrcontent.nodes`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesJson) {
      OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`path.desc.field` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$path.desc.field, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`path.child.field` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$path.child.field, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`path.parent.field` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$path.parent.field, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`path.exact.field` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$path.exact.field, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`catch.all.field` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$catch.all.field, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`collapsed.path.field` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$collapsed.path.field, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`path.depth.field` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$path.depth.field, auto_unbox = TRUE))
      ConfigNodePropertyDropDownObject <- ConfigNodePropertyDropDown$new()
      self$`commit.policy` <- ConfigNodePropertyDropDownObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$commit.policy, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`rows` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$rows, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`path.restrictions` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$path.restrictions, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`property.restrictions` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$property.restrictions, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`primarytypes.restrictions` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$primarytypes.restrictions, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`ignored.properties` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$ignored.properties, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`used.properties` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$used.properties, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`type.mappings` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$type.mappings, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`property.mappings` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$property.mappings, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`collapse.jcrcontent.nodes` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationPropertiesObject$collapse.jcrcontent.nodes, auto_unbox = TRUE))
    }
  )
)
