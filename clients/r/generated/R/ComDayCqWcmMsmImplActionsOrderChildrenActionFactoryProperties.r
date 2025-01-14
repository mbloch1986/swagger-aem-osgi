# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryProperties Class
#'
#' @field cq.wcm.msm.action.excludednodetypes 
#' @field cq.wcm.msm.action.excludedparagraphitems 
#' @field cq.wcm.msm.action.excludedprops 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryProperties <- R6::R6Class(
  'ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryProperties',
  public = list(
    `cq.wcm.msm.action.excludednodetypes` = NULL,
    `cq.wcm.msm.action.excludedparagraphitems` = NULL,
    `cq.wcm.msm.action.excludedprops` = NULL,
    initialize = function(`cq.wcm.msm.action.excludednodetypes`, `cq.wcm.msm.action.excludedparagraphitems`, `cq.wcm.msm.action.excludedprops`){
      if (!missing(`cq.wcm.msm.action.excludednodetypes`)) {
        stopifnot(R6::is.R6(`cq.wcm.msm.action.excludednodetypes`))
        self$`cq.wcm.msm.action.excludednodetypes` <- `cq.wcm.msm.action.excludednodetypes`
      }
      if (!missing(`cq.wcm.msm.action.excludedparagraphitems`)) {
        stopifnot(R6::is.R6(`cq.wcm.msm.action.excludedparagraphitems`))
        self$`cq.wcm.msm.action.excludedparagraphitems` <- `cq.wcm.msm.action.excludedparagraphitems`
      }
      if (!missing(`cq.wcm.msm.action.excludedprops`)) {
        stopifnot(R6::is.R6(`cq.wcm.msm.action.excludedprops`))
        self$`cq.wcm.msm.action.excludedprops` <- `cq.wcm.msm.action.excludedprops`
      }
    },
    toJSON = function() {
      ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesObject <- list()
      if (!is.null(self$`cq.wcm.msm.action.excludednodetypes`)) {
        ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesObject[['cq.wcm.msm.action.excludednodetypes']] <- self$`cq.wcm.msm.action.excludednodetypes`$toJSON()
      }
      if (!is.null(self$`cq.wcm.msm.action.excludedparagraphitems`)) {
        ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesObject[['cq.wcm.msm.action.excludedparagraphitems']] <- self$`cq.wcm.msm.action.excludedparagraphitems`$toJSON()
      }
      if (!is.null(self$`cq.wcm.msm.action.excludedprops`)) {
        ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesObject[['cq.wcm.msm.action.excludedprops']] <- self$`cq.wcm.msm.action.excludedprops`$toJSON()
      }

      ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesObject
    },
    fromJSON = function(ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesJson) {
      ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesJson)
      if (!is.null(ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesObject$`cq.wcm.msm.action.excludednodetypes`)) {
        cq.wcm.msm.action.excludednodetypesObject <- ConfigNodePropertyArray$new()
        cq.wcm.msm.action.excludednodetypesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesObject$cq.wcm.msm.action.excludednodetypes, auto_unbox = TRUE))
        self$`cq.wcm.msm.action.excludednodetypes` <- cq.wcm.msm.action.excludednodetypesObject
      }
      if (!is.null(ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesObject$`cq.wcm.msm.action.excludedparagraphitems`)) {
        cq.wcm.msm.action.excludedparagraphitemsObject <- ConfigNodePropertyArray$new()
        cq.wcm.msm.action.excludedparagraphitemsObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesObject$cq.wcm.msm.action.excludedparagraphitems, auto_unbox = TRUE))
        self$`cq.wcm.msm.action.excludedparagraphitems` <- cq.wcm.msm.action.excludedparagraphitemsObject
      }
      if (!is.null(ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesObject$`cq.wcm.msm.action.excludedprops`)) {
        cq.wcm.msm.action.excludedpropsObject <- ConfigNodePropertyArray$new()
        cq.wcm.msm.action.excludedpropsObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesObject$cq.wcm.msm.action.excludedprops, auto_unbox = TRUE))
        self$`cq.wcm.msm.action.excludedprops` <- cq.wcm.msm.action.excludedpropsObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "cq.wcm.msm.action.excludednodetypes": %s,
           "cq.wcm.msm.action.excludedparagraphitems": %s,
           "cq.wcm.msm.action.excludedprops": %s
        }',
        self$`cq.wcm.msm.action.excludednodetypes`$toJSON(),
        self$`cq.wcm.msm.action.excludedparagraphitems`$toJSON(),
        self$`cq.wcm.msm.action.excludedprops`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesJson) {
      ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`cq.wcm.msm.action.excludednodetypes` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesObject$cq.wcm.msm.action.excludednodetypes, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`cq.wcm.msm.action.excludedparagraphitems` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesObject$cq.wcm.msm.action.excludedparagraphitems, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`cq.wcm.msm.action.excludedprops` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMsmImplActionsOrderChildrenActionFactoryPropertiesObject$cq.wcm.msm.action.excludedprops, auto_unbox = TRUE))
    }
  )
)
