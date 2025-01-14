# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties Class
#'
#' @field solr.zk.timeout 
#' @field solr.commit 
#' @field cache.on 
#' @field concurrency.level 
#' @field cache.start.size 
#' @field cache.ttl 
#' @field cache.size 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties <- R6::R6Class(
  'ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties',
  public = list(
    `solr.zk.timeout` = NULL,
    `solr.commit` = NULL,
    `cache.on` = NULL,
    `concurrency.level` = NULL,
    `cache.start.size` = NULL,
    `cache.ttl` = NULL,
    `cache.size` = NULL,
    initialize = function(`solr.zk.timeout`, `solr.commit`, `cache.on`, `concurrency.level`, `cache.start.size`, `cache.ttl`, `cache.size`){
      if (!missing(`solr.zk.timeout`)) {
        stopifnot(R6::is.R6(`solr.zk.timeout`))
        self$`solr.zk.timeout` <- `solr.zk.timeout`
      }
      if (!missing(`solr.commit`)) {
        stopifnot(R6::is.R6(`solr.commit`))
        self$`solr.commit` <- `solr.commit`
      }
      if (!missing(`cache.on`)) {
        stopifnot(R6::is.R6(`cache.on`))
        self$`cache.on` <- `cache.on`
      }
      if (!missing(`concurrency.level`)) {
        stopifnot(R6::is.R6(`concurrency.level`))
        self$`concurrency.level` <- `concurrency.level`
      }
      if (!missing(`cache.start.size`)) {
        stopifnot(R6::is.R6(`cache.start.size`))
        self$`cache.start.size` <- `cache.start.size`
      }
      if (!missing(`cache.ttl`)) {
        stopifnot(R6::is.R6(`cache.ttl`))
        self$`cache.ttl` <- `cache.ttl`
      }
      if (!missing(`cache.size`)) {
        stopifnot(R6::is.R6(`cache.size`))
        self$`cache.size` <- `cache.size`
      }
    },
    toJSON = function() {
      ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject <- list()
      if (!is.null(self$`solr.zk.timeout`)) {
        ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject[['solr.zk.timeout']] <- self$`solr.zk.timeout`$toJSON()
      }
      if (!is.null(self$`solr.commit`)) {
        ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject[['solr.commit']] <- self$`solr.commit`$toJSON()
      }
      if (!is.null(self$`cache.on`)) {
        ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject[['cache.on']] <- self$`cache.on`$toJSON()
      }
      if (!is.null(self$`concurrency.level`)) {
        ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject[['concurrency.level']] <- self$`concurrency.level`$toJSON()
      }
      if (!is.null(self$`cache.start.size`)) {
        ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject[['cache.start.size']] <- self$`cache.start.size`$toJSON()
      }
      if (!is.null(self$`cache.ttl`)) {
        ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject[['cache.ttl']] <- self$`cache.ttl`$toJSON()
      }
      if (!is.null(self$`cache.size`)) {
        ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject[['cache.size']] <- self$`cache.size`$toJSON()
      }

      ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject
    },
    fromJSON = function(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesJson) {
      ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesJson)
      if (!is.null(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$`solr.zk.timeout`)) {
        solr.zk.timeoutObject <- ConfigNodePropertyString$new()
        solr.zk.timeoutObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$solr.zk.timeout, auto_unbox = TRUE))
        self$`solr.zk.timeout` <- solr.zk.timeoutObject
      }
      if (!is.null(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$`solr.commit`)) {
        solr.commitObject <- ConfigNodePropertyString$new()
        solr.commitObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$solr.commit, auto_unbox = TRUE))
        self$`solr.commit` <- solr.commitObject
      }
      if (!is.null(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$`cache.on`)) {
        cache.onObject <- ConfigNodePropertyBoolean$new()
        cache.onObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$cache.on, auto_unbox = TRUE))
        self$`cache.on` <- cache.onObject
      }
      if (!is.null(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$`concurrency.level`)) {
        concurrency.levelObject <- ConfigNodePropertyInteger$new()
        concurrency.levelObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$concurrency.level, auto_unbox = TRUE))
        self$`concurrency.level` <- concurrency.levelObject
      }
      if (!is.null(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$`cache.start.size`)) {
        cache.start.sizeObject <- ConfigNodePropertyInteger$new()
        cache.start.sizeObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$cache.start.size, auto_unbox = TRUE))
        self$`cache.start.size` <- cache.start.sizeObject
      }
      if (!is.null(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$`cache.ttl`)) {
        cache.ttlObject <- ConfigNodePropertyInteger$new()
        cache.ttlObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$cache.ttl, auto_unbox = TRUE))
        self$`cache.ttl` <- cache.ttlObject
      }
      if (!is.null(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$`cache.size`)) {
        cache.sizeObject <- ConfigNodePropertyInteger$new()
        cache.sizeObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$cache.size, auto_unbox = TRUE))
        self$`cache.size` <- cache.sizeObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "solr.zk.timeout": %s,
           "solr.commit": %s,
           "cache.on": %s,
           "concurrency.level": %s,
           "cache.start.size": %s,
           "cache.ttl": %s,
           "cache.size": %s
        }',
        self$`solr.zk.timeout`$toJSON(),
        self$`solr.commit`$toJSON(),
        self$`cache.on`$toJSON(),
        self$`concurrency.level`$toJSON(),
        self$`cache.start.size`$toJSON(),
        self$`cache.ttl`$toJSON(),
        self$`cache.size`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesJson) {
      ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`solr.zk.timeout` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$solr.zk.timeout, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`solr.commit` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$solr.commit, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`cache.on` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$cache.on, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`concurrency.level` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$concurrency.level, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`cache.start.size` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$cache.start.size, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`cache.ttl` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$cache.ttl, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`cache.size` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorPropertiesObject$cache.size, auto_unbox = TRUE))
    }
  )
)
