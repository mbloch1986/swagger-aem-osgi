# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingStartupfilterImplStartupFilterImplProperties Class
#'
#' @field active.by.default 
#' @field default.message 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingStartupfilterImplStartupFilterImplProperties <- R6::R6Class(
  'OrgApacheSlingStartupfilterImplStartupFilterImplProperties',
  public = list(
    `active.by.default` = NULL,
    `default.message` = NULL,
    initialize = function(`active.by.default`, `default.message`){
      if (!missing(`active.by.default`)) {
        stopifnot(R6::is.R6(`active.by.default`))
        self$`active.by.default` <- `active.by.default`
      }
      if (!missing(`default.message`)) {
        stopifnot(R6::is.R6(`default.message`))
        self$`default.message` <- `default.message`
      }
    },
    toJSON = function() {
      OrgApacheSlingStartupfilterImplStartupFilterImplPropertiesObject <- list()
      if (!is.null(self$`active.by.default`)) {
        OrgApacheSlingStartupfilterImplStartupFilterImplPropertiesObject[['active.by.default']] <- self$`active.by.default`$toJSON()
      }
      if (!is.null(self$`default.message`)) {
        OrgApacheSlingStartupfilterImplStartupFilterImplPropertiesObject[['default.message']] <- self$`default.message`$toJSON()
      }

      OrgApacheSlingStartupfilterImplStartupFilterImplPropertiesObject
    },
    fromJSON = function(OrgApacheSlingStartupfilterImplStartupFilterImplPropertiesJson) {
      OrgApacheSlingStartupfilterImplStartupFilterImplPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingStartupfilterImplStartupFilterImplPropertiesJson)
      if (!is.null(OrgApacheSlingStartupfilterImplStartupFilterImplPropertiesObject$`active.by.default`)) {
        active.by.defaultObject <- ConfigNodePropertyBoolean$new()
        active.by.defaultObject$fromJSON(jsonlite::toJSON(OrgApacheSlingStartupfilterImplStartupFilterImplPropertiesObject$active.by.default, auto_unbox = TRUE))
        self$`active.by.default` <- active.by.defaultObject
      }
      if (!is.null(OrgApacheSlingStartupfilterImplStartupFilterImplPropertiesObject$`default.message`)) {
        default.messageObject <- ConfigNodePropertyString$new()
        default.messageObject$fromJSON(jsonlite::toJSON(OrgApacheSlingStartupfilterImplStartupFilterImplPropertiesObject$default.message, auto_unbox = TRUE))
        self$`default.message` <- default.messageObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "active.by.default": %s,
           "default.message": %s
        }',
        self$`active.by.default`$toJSON(),
        self$`default.message`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheSlingStartupfilterImplStartupFilterImplPropertiesJson) {
      OrgApacheSlingStartupfilterImplStartupFilterImplPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingStartupfilterImplStartupFilterImplPropertiesJson)
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`active.by.default` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheSlingStartupfilterImplStartupFilterImplPropertiesObject$active.by.default, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`default.message` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingStartupfilterImplStartupFilterImplPropertiesObject$default.message, auto_unbox = TRUE))
    }
  )
)
