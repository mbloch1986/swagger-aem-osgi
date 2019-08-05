# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties Class
#'
#' @field group.listing.pagination.enable 
#' @field group.listing.lazyloading.enable 
#' @field page.size 
#' @field priority 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties <- R6::R6Class(
  'ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties',
  public = list(
    `group.listing.pagination.enable` = NULL,
    `group.listing.lazyloading.enable` = NULL,
    `page.size` = NULL,
    `priority` = NULL,
    initialize = function(`group.listing.pagination.enable`, `group.listing.lazyloading.enable`, `page.size`, `priority`){
      if (!missing(`group.listing.pagination.enable`)) {
        stopifnot(R6::is.R6(`group.listing.pagination.enable`))
        self$`group.listing.pagination.enable` <- `group.listing.pagination.enable`
      }
      if (!missing(`group.listing.lazyloading.enable`)) {
        stopifnot(R6::is.R6(`group.listing.lazyloading.enable`))
        self$`group.listing.lazyloading.enable` <- `group.listing.lazyloading.enable`
      }
      if (!missing(`page.size`)) {
        stopifnot(R6::is.R6(`page.size`))
        self$`page.size` <- `page.size`
      }
      if (!missing(`priority`)) {
        stopifnot(R6::is.R6(`priority`))
        self$`priority` <- `priority`
      }
    },
    toJSON = function() {
      ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject <- list()
      if (!is.null(self$`group.listing.pagination.enable`)) {
        ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject[['group.listing.pagination.enable']] <- self$`group.listing.pagination.enable`$toJSON()
      }
      if (!is.null(self$`group.listing.lazyloading.enable`)) {
        ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject[['group.listing.lazyloading.enable']] <- self$`group.listing.lazyloading.enable`$toJSON()
      }
      if (!is.null(self$`page.size`)) {
        ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject[['page.size']] <- self$`page.size`$toJSON()
      }
      if (!is.null(self$`priority`)) {
        ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject[['priority']] <- self$`priority`$toJSON()
      }

      ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject
    },
    fromJSON = function(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesJson) {
      ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesJson)
      if (!is.null(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject$`group.listing.pagination.enable`)) {
        group.listing.pagination.enableObject <- ConfigNodePropertyBoolean$new()
        group.listing.pagination.enableObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject$group.listing.pagination.enable, auto_unbox = TRUE))
        self$`group.listing.pagination.enable` <- group.listing.pagination.enableObject
      }
      if (!is.null(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject$`group.listing.lazyloading.enable`)) {
        group.listing.lazyloading.enableObject <- ConfigNodePropertyBoolean$new()
        group.listing.lazyloading.enableObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject$group.listing.lazyloading.enable, auto_unbox = TRUE))
        self$`group.listing.lazyloading.enable` <- group.listing.lazyloading.enableObject
      }
      if (!is.null(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject$`page.size`)) {
        page.sizeObject <- ConfigNodePropertyInteger$new()
        page.sizeObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject$page.size, auto_unbox = TRUE))
        self$`page.size` <- page.sizeObject
      }
      if (!is.null(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject$`priority`)) {
        priorityObject <- ConfigNodePropertyInteger$new()
        priorityObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject$priority, auto_unbox = TRUE))
        self$`priority` <- priorityObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "group.listing.pagination.enable": %s,
           "group.listing.lazyloading.enable": %s,
           "page.size": %s,
           "priority": %s
        }',
        self$`group.listing.pagination.enable`$toJSON(),
        self$`group.listing.lazyloading.enable`$toJSON(),
        self$`page.size`$toJSON(),
        self$`priority`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesJson) {
      ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesJson)
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`group.listing.pagination.enable` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject$group.listing.pagination.enable, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`group.listing.lazyloading.enable` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject$group.listing.lazyloading.enable, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`page.size` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject$page.size, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`priority` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenPropertiesObject$priority, auto_unbox = TRUE))
    }
  )
)