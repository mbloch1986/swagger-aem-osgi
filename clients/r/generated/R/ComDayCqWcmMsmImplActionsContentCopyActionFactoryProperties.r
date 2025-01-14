# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties Class
#'
#' @field cq.wcm.msm.action.excludednodetypes 
#' @field cq.wcm.msm.action.excludedparagraphitems 
#' @field cq.wcm.msm.action.excludedprops 
#' @field contentcopyaction.order.style 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties <- R6::R6Class(
  'ComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties',
  public = list(
    `cq.wcm.msm.action.excludednodetypes` = NULL,
    `cq.wcm.msm.action.excludedparagraphitems` = NULL,
    `cq.wcm.msm.action.excludedprops` = NULL,
    `contentcopyaction.order.style` = NULL,
    initialize = function(`cq.wcm.msm.action.excludednodetypes`, `cq.wcm.msm.action.excludedparagraphitems`, `cq.wcm.msm.action.excludedprops`, `contentcopyaction.order.style`){
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
      if (!missing(`contentcopyaction.order.style`)) {
        stopifnot(R6::is.R6(`contentcopyaction.order.style`))
        self$`contentcopyaction.order.style` <- `contentcopyaction.order.style`
      }
    },
    toJSON = function() {
      ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject <- list()
      if (!is.null(self$`cq.wcm.msm.action.excludednodetypes`)) {
        ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject[['cq.wcm.msm.action.excludednodetypes']] <- self$`cq.wcm.msm.action.excludednodetypes`$toJSON()
      }
      if (!is.null(self$`cq.wcm.msm.action.excludedparagraphitems`)) {
        ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject[['cq.wcm.msm.action.excludedparagraphitems']] <- self$`cq.wcm.msm.action.excludedparagraphitems`$toJSON()
      }
      if (!is.null(self$`cq.wcm.msm.action.excludedprops`)) {
        ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject[['cq.wcm.msm.action.excludedprops']] <- self$`cq.wcm.msm.action.excludedprops`$toJSON()
      }
      if (!is.null(self$`contentcopyaction.order.style`)) {
        ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject[['contentcopyaction.order.style']] <- self$`contentcopyaction.order.style`$toJSON()
      }

      ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject
    },
    fromJSON = function(ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesJson) {
      ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesJson)
      if (!is.null(ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject$`cq.wcm.msm.action.excludednodetypes`)) {
        cq.wcm.msm.action.excludednodetypesObject <- ConfigNodePropertyArray$new()
        cq.wcm.msm.action.excludednodetypesObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject$cq.wcm.msm.action.excludednodetypes, auto_unbox = TRUE))
        self$`cq.wcm.msm.action.excludednodetypes` <- cq.wcm.msm.action.excludednodetypesObject
      }
      if (!is.null(ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject$`cq.wcm.msm.action.excludedparagraphitems`)) {
        cq.wcm.msm.action.excludedparagraphitemsObject <- ConfigNodePropertyArray$new()
        cq.wcm.msm.action.excludedparagraphitemsObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject$cq.wcm.msm.action.excludedparagraphitems, auto_unbox = TRUE))
        self$`cq.wcm.msm.action.excludedparagraphitems` <- cq.wcm.msm.action.excludedparagraphitemsObject
      }
      if (!is.null(ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject$`cq.wcm.msm.action.excludedprops`)) {
        cq.wcm.msm.action.excludedpropsObject <- ConfigNodePropertyArray$new()
        cq.wcm.msm.action.excludedpropsObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject$cq.wcm.msm.action.excludedprops, auto_unbox = TRUE))
        self$`cq.wcm.msm.action.excludedprops` <- cq.wcm.msm.action.excludedpropsObject
      }
      if (!is.null(ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject$`contentcopyaction.order.style`)) {
        contentcopyaction.order.styleObject <- ConfigNodePropertyDropDown$new()
        contentcopyaction.order.styleObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject$contentcopyaction.order.style, auto_unbox = TRUE))
        self$`contentcopyaction.order.style` <- contentcopyaction.order.styleObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "cq.wcm.msm.action.excludednodetypes": %s,
           "cq.wcm.msm.action.excludedparagraphitems": %s,
           "cq.wcm.msm.action.excludedprops": %s,
           "contentcopyaction.order.style": %s
        }',
        self$`cq.wcm.msm.action.excludednodetypes`$toJSON(),
        self$`cq.wcm.msm.action.excludedparagraphitems`$toJSON(),
        self$`cq.wcm.msm.action.excludedprops`$toJSON(),
        self$`contentcopyaction.order.style`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesJson) {
      ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject <- jsonlite::fromJSON(ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`cq.wcm.msm.action.excludednodetypes` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject$cq.wcm.msm.action.excludednodetypes, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`cq.wcm.msm.action.excludedparagraphitems` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject$cq.wcm.msm.action.excludedparagraphitems, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`cq.wcm.msm.action.excludedprops` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject$cq.wcm.msm.action.excludedprops, auto_unbox = TRUE))
      ConfigNodePropertyDropDownObject <- ConfigNodePropertyDropDown$new()
      self$`contentcopyaction.order.style` <- ConfigNodePropertyDropDownObject$fromJSON(jsonlite::toJSON(ComDayCqWcmMsmImplActionsContentCopyActionFactoryPropertiesObject$contentcopyaction.order.style, auto_unbox = TRUE))
    }
  )
)
