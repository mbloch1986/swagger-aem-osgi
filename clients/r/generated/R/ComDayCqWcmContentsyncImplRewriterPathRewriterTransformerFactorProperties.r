# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties Class
#'
#' @field cq.contentsync.pathrewritertransformer.mapping.links 
#' @field cq.contentsync.pathrewritertransformer.mapping.clientlibs 
#' @field cq.contentsync.pathrewritertransformer.mapping.images 
#' @field cq.contentsync.pathrewritertransformer.attribute.pattern 
#' @field cq.contentsync.pathrewritertransformer.clientlibrary.pattern 
#' @field cq.contentsync.pathrewritertransformer.clientlibrary.replace 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties <- R6::R6Class(
  'ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorProperties',
  public = list(
    `cq.contentsync.pathrewritertransformer.mapping.links` = NULL,
    `cq.contentsync.pathrewritertransformer.mapping.clientlibs` = NULL,
    `cq.contentsync.pathrewritertransformer.mapping.images` = NULL,
    `cq.contentsync.pathrewritertransformer.attribute.pattern` = NULL,
    `cq.contentsync.pathrewritertransformer.clientlibrary.pattern` = NULL,
    `cq.contentsync.pathrewritertransformer.clientlibrary.replace` = NULL,
    initialize = function(`cq.contentsync.pathrewritertransformer.mapping.links`, `cq.contentsync.pathrewritertransformer.mapping.clientlibs`, `cq.contentsync.pathrewritertransformer.mapping.images`, `cq.contentsync.pathrewritertransformer.attribute.pattern`, `cq.contentsync.pathrewritertransformer.clientlibrary.pattern`, `cq.contentsync.pathrewritertransformer.clientlibrary.replace`){
      if (!missing(`cq.contentsync.pathrewritertransformer.mapping.links`)) {
        stopifnot(R6::is.R6(`cq.contentsync.pathrewritertransformer.mapping.links`))
        self$`cq.contentsync.pathrewritertransformer.mapping.links` <- `cq.contentsync.pathrewritertransformer.mapping.links`
      }
      if (!missing(`cq.contentsync.pathrewritertransformer.mapping.clientlibs`)) {
        stopifnot(R6::is.R6(`cq.contentsync.pathrewritertransformer.mapping.clientlibs`))
        self$`cq.contentsync.pathrewritertransformer.mapping.clientlibs` <- `cq.contentsync.pathrewritertransformer.mapping.clientlibs`
      }
      if (!missing(`cq.contentsync.pathrewritertransformer.mapping.images`)) {
        stopifnot(R6::is.R6(`cq.contentsync.pathrewritertransformer.mapping.images`))
        self$`cq.contentsync.pathrewritertransformer.mapping.images` <- `cq.contentsync.pathrewritertransformer.mapping.images`
      }
      if (!missing(`cq.contentsync.pathrewritertransformer.attribute.pattern`)) {
        stopifnot(R6::is.R6(`cq.contentsync.pathrewritertransformer.attribute.pattern`))
        self$`cq.contentsync.pathrewritertransformer.attribute.pattern` <- `cq.contentsync.pathrewritertransformer.attribute.pattern`
      }
      if (!missing(`cq.contentsync.pathrewritertransformer.clientlibrary.pattern`)) {
        stopifnot(R6::is.R6(`cq.contentsync.pathrewritertransformer.clientlibrary.pattern`))
        self$`cq.contentsync.pathrewritertransformer.clientlibrary.pattern` <- `cq.contentsync.pathrewritertransformer.clientlibrary.pattern`
      }
      if (!missing(`cq.contentsync.pathrewritertransformer.clientlibrary.replace`)) {
        stopifnot(R6::is.R6(`cq.contentsync.pathrewritertransformer.clientlibrary.replace`))
        self$`cq.contentsync.pathrewritertransformer.clientlibrary.replace` <- `cq.contentsync.pathrewritertransformer.clientlibrary.replace`
      }
    },
    toJSON = function() {
      ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject <- list()
      if (!is.null(self$`cq.contentsync.pathrewritertransformer.mapping.links`)) {
        ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject[['cq.contentsync.pathrewritertransformer.mapping.links']] <- self$`cq.contentsync.pathrewritertransformer.mapping.links`$toJSON()
      }
      if (!is.null(self$`cq.contentsync.pathrewritertransformer.mapping.clientlibs`)) {
        ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject[['cq.contentsync.pathrewritertransformer.mapping.clientlibs']] <- self$`cq.contentsync.pathrewritertransformer.mapping.clientlibs`$toJSON()
      }
      if (!is.null(self$`cq.contentsync.pathrewritertransformer.mapping.images`)) {
        ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject[['cq.contentsync.pathrewritertransformer.mapping.images']] <- self$`cq.contentsync.pathrewritertransformer.mapping.images`$toJSON()
      }
      if (!is.null(self$`cq.contentsync.pathrewritertransformer.attribute.pattern`)) {
        ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject[['cq.contentsync.pathrewritertransformer.attribute.pattern']] <- self$`cq.contentsync.pathrewritertransformer.attribute.pattern`$toJSON()
      }
      if (!is.null(self$`cq.contentsync.pathrewritertransformer.clientlibrary.pattern`)) {
        ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject[['cq.contentsync.pathrewritertransformer.clientlibrary.pattern']] <- self$`cq.contentsync.pathrewritertransformer.clientlibrary.pattern`$toJSON()
      }
      if (!is.null(self$`cq.contentsync.pathrewritertransformer.clientlibrary.replace`)) {
        ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject[['cq.contentsync.pathrewritertransformer.clientlibrary.replace']] <- self$`cq.contentsync.pathrewritertransformer.clientlibrary.replace`$toJSON()
      }

      ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject
    },
    fromJSON = function(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesJson) {
      ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesJson)
      if (!is.null(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$`cq.contentsync.pathrewritertransformer.mapping.links`)) {
        cq.contentsync.pathrewritertransformer.mapping.linksObject <- ConfigNodePropertyArray$new()
        cq.contentsync.pathrewritertransformer.mapping.linksObject$fromJSON(jsonlite::toJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$cq.contentsync.pathrewritertransformer.mapping.links, auto_unbox = TRUE))
        self$`cq.contentsync.pathrewritertransformer.mapping.links` <- cq.contentsync.pathrewritertransformer.mapping.linksObject
      }
      if (!is.null(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$`cq.contentsync.pathrewritertransformer.mapping.clientlibs`)) {
        cq.contentsync.pathrewritertransformer.mapping.clientlibsObject <- ConfigNodePropertyArray$new()
        cq.contentsync.pathrewritertransformer.mapping.clientlibsObject$fromJSON(jsonlite::toJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$cq.contentsync.pathrewritertransformer.mapping.clientlibs, auto_unbox = TRUE))
        self$`cq.contentsync.pathrewritertransformer.mapping.clientlibs` <- cq.contentsync.pathrewritertransformer.mapping.clientlibsObject
      }
      if (!is.null(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$`cq.contentsync.pathrewritertransformer.mapping.images`)) {
        cq.contentsync.pathrewritertransformer.mapping.imagesObject <- ConfigNodePropertyArray$new()
        cq.contentsync.pathrewritertransformer.mapping.imagesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$cq.contentsync.pathrewritertransformer.mapping.images, auto_unbox = TRUE))
        self$`cq.contentsync.pathrewritertransformer.mapping.images` <- cq.contentsync.pathrewritertransformer.mapping.imagesObject
      }
      if (!is.null(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$`cq.contentsync.pathrewritertransformer.attribute.pattern`)) {
        cq.contentsync.pathrewritertransformer.attribute.patternObject <- ConfigNodePropertyString$new()
        cq.contentsync.pathrewritertransformer.attribute.patternObject$fromJSON(jsonlite::toJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$cq.contentsync.pathrewritertransformer.attribute.pattern, auto_unbox = TRUE))
        self$`cq.contentsync.pathrewritertransformer.attribute.pattern` <- cq.contentsync.pathrewritertransformer.attribute.patternObject
      }
      if (!is.null(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$`cq.contentsync.pathrewritertransformer.clientlibrary.pattern`)) {
        cq.contentsync.pathrewritertransformer.clientlibrary.patternObject <- ConfigNodePropertyString$new()
        cq.contentsync.pathrewritertransformer.clientlibrary.patternObject$fromJSON(jsonlite::toJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$cq.contentsync.pathrewritertransformer.clientlibrary.pattern, auto_unbox = TRUE))
        self$`cq.contentsync.pathrewritertransformer.clientlibrary.pattern` <- cq.contentsync.pathrewritertransformer.clientlibrary.patternObject
      }
      if (!is.null(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$`cq.contentsync.pathrewritertransformer.clientlibrary.replace`)) {
        cq.contentsync.pathrewritertransformer.clientlibrary.replaceObject <- ConfigNodePropertyString$new()
        cq.contentsync.pathrewritertransformer.clientlibrary.replaceObject$fromJSON(jsonlite::toJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$cq.contentsync.pathrewritertransformer.clientlibrary.replace, auto_unbox = TRUE))
        self$`cq.contentsync.pathrewritertransformer.clientlibrary.replace` <- cq.contentsync.pathrewritertransformer.clientlibrary.replaceObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "cq.contentsync.pathrewritertransformer.mapping.links": %s,
           "cq.contentsync.pathrewritertransformer.mapping.clientlibs": %s,
           "cq.contentsync.pathrewritertransformer.mapping.images": %s,
           "cq.contentsync.pathrewritertransformer.attribute.pattern": %s,
           "cq.contentsync.pathrewritertransformer.clientlibrary.pattern": %s,
           "cq.contentsync.pathrewritertransformer.clientlibrary.replace": %s
        }',
        self$`cq.contentsync.pathrewritertransformer.mapping.links`$toJSON(),
        self$`cq.contentsync.pathrewritertransformer.mapping.clientlibs`$toJSON(),
        self$`cq.contentsync.pathrewritertransformer.mapping.images`$toJSON(),
        self$`cq.contentsync.pathrewritertransformer.attribute.pattern`$toJSON(),
        self$`cq.contentsync.pathrewritertransformer.clientlibrary.pattern`$toJSON(),
        self$`cq.contentsync.pathrewritertransformer.clientlibrary.replace`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesJson) {
      ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`cq.contentsync.pathrewritertransformer.mapping.links` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$cq.contentsync.pathrewritertransformer.mapping.links, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`cq.contentsync.pathrewritertransformer.mapping.clientlibs` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$cq.contentsync.pathrewritertransformer.mapping.clientlibs, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`cq.contentsync.pathrewritertransformer.mapping.images` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$cq.contentsync.pathrewritertransformer.mapping.images, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`cq.contentsync.pathrewritertransformer.attribute.pattern` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$cq.contentsync.pathrewritertransformer.attribute.pattern, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`cq.contentsync.pathrewritertransformer.clientlibrary.pattern` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$cq.contentsync.pathrewritertransformer.clientlibrary.pattern, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`cq.contentsync.pathrewritertransformer.clientlibrary.replace` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqWcmContentsyncImplRewriterPathRewriterTransformerFactorPropertiesObject$cq.contentsync.pathrewritertransformer.clientlibrary.replace, auto_unbox = TRUE))
    }
  )
)
