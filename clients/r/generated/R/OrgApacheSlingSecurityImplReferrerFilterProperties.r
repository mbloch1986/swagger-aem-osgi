# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingSecurityImplReferrerFilterProperties Class
#'
#' @field allow.empty 
#' @field allow.hosts 
#' @field allow.hosts.regexp 
#' @field filter.methods 
#' @field exclude.agents.regexp 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingSecurityImplReferrerFilterProperties <- R6::R6Class(
  'OrgApacheSlingSecurityImplReferrerFilterProperties',
  public = list(
    `allow.empty` = NULL,
    `allow.hosts` = NULL,
    `allow.hosts.regexp` = NULL,
    `filter.methods` = NULL,
    `exclude.agents.regexp` = NULL,
    initialize = function(`allow.empty`, `allow.hosts`, `allow.hosts.regexp`, `filter.methods`, `exclude.agents.regexp`){
      if (!missing(`allow.empty`)) {
        stopifnot(R6::is.R6(`allow.empty`))
        self$`allow.empty` <- `allow.empty`
      }
      if (!missing(`allow.hosts`)) {
        stopifnot(R6::is.R6(`allow.hosts`))
        self$`allow.hosts` <- `allow.hosts`
      }
      if (!missing(`allow.hosts.regexp`)) {
        stopifnot(R6::is.R6(`allow.hosts.regexp`))
        self$`allow.hosts.regexp` <- `allow.hosts.regexp`
      }
      if (!missing(`filter.methods`)) {
        stopifnot(R6::is.R6(`filter.methods`))
        self$`filter.methods` <- `filter.methods`
      }
      if (!missing(`exclude.agents.regexp`)) {
        stopifnot(R6::is.R6(`exclude.agents.regexp`))
        self$`exclude.agents.regexp` <- `exclude.agents.regexp`
      }
    },
    toJSON = function() {
      OrgApacheSlingSecurityImplReferrerFilterPropertiesObject <- list()
      if (!is.null(self$`allow.empty`)) {
        OrgApacheSlingSecurityImplReferrerFilterPropertiesObject[['allow.empty']] <- self$`allow.empty`$toJSON()
      }
      if (!is.null(self$`allow.hosts`)) {
        OrgApacheSlingSecurityImplReferrerFilterPropertiesObject[['allow.hosts']] <- self$`allow.hosts`$toJSON()
      }
      if (!is.null(self$`allow.hosts.regexp`)) {
        OrgApacheSlingSecurityImplReferrerFilterPropertiesObject[['allow.hosts.regexp']] <- self$`allow.hosts.regexp`$toJSON()
      }
      if (!is.null(self$`filter.methods`)) {
        OrgApacheSlingSecurityImplReferrerFilterPropertiesObject[['filter.methods']] <- self$`filter.methods`$toJSON()
      }
      if (!is.null(self$`exclude.agents.regexp`)) {
        OrgApacheSlingSecurityImplReferrerFilterPropertiesObject[['exclude.agents.regexp']] <- self$`exclude.agents.regexp`$toJSON()
      }

      OrgApacheSlingSecurityImplReferrerFilterPropertiesObject
    },
    fromJSON = function(OrgApacheSlingSecurityImplReferrerFilterPropertiesJson) {
      OrgApacheSlingSecurityImplReferrerFilterPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingSecurityImplReferrerFilterPropertiesJson)
      if (!is.null(OrgApacheSlingSecurityImplReferrerFilterPropertiesObject$`allow.empty`)) {
        allow.emptyObject <- ConfigNodePropertyBoolean$new()
        allow.emptyObject$fromJSON(jsonlite::toJSON(OrgApacheSlingSecurityImplReferrerFilterPropertiesObject$allow.empty, auto_unbox = TRUE))
        self$`allow.empty` <- allow.emptyObject
      }
      if (!is.null(OrgApacheSlingSecurityImplReferrerFilterPropertiesObject$`allow.hosts`)) {
        allow.hostsObject <- ConfigNodePropertyArray$new()
        allow.hostsObject$fromJSON(jsonlite::toJSON(OrgApacheSlingSecurityImplReferrerFilterPropertiesObject$allow.hosts, auto_unbox = TRUE))
        self$`allow.hosts` <- allow.hostsObject
      }
      if (!is.null(OrgApacheSlingSecurityImplReferrerFilterPropertiesObject$`allow.hosts.regexp`)) {
        allow.hosts.regexpObject <- ConfigNodePropertyArray$new()
        allow.hosts.regexpObject$fromJSON(jsonlite::toJSON(OrgApacheSlingSecurityImplReferrerFilterPropertiesObject$allow.hosts.regexp, auto_unbox = TRUE))
        self$`allow.hosts.regexp` <- allow.hosts.regexpObject
      }
      if (!is.null(OrgApacheSlingSecurityImplReferrerFilterPropertiesObject$`filter.methods`)) {
        filter.methodsObject <- ConfigNodePropertyArray$new()
        filter.methodsObject$fromJSON(jsonlite::toJSON(OrgApacheSlingSecurityImplReferrerFilterPropertiesObject$filter.methods, auto_unbox = TRUE))
        self$`filter.methods` <- filter.methodsObject
      }
      if (!is.null(OrgApacheSlingSecurityImplReferrerFilterPropertiesObject$`exclude.agents.regexp`)) {
        exclude.agents.regexpObject <- ConfigNodePropertyArray$new()
        exclude.agents.regexpObject$fromJSON(jsonlite::toJSON(OrgApacheSlingSecurityImplReferrerFilterPropertiesObject$exclude.agents.regexp, auto_unbox = TRUE))
        self$`exclude.agents.regexp` <- exclude.agents.regexpObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "allow.empty": %s,
           "allow.hosts": %s,
           "allow.hosts.regexp": %s,
           "filter.methods": %s,
           "exclude.agents.regexp": %s
        }',
        self$`allow.empty`$toJSON(),
        self$`allow.hosts`$toJSON(),
        self$`allow.hosts.regexp`$toJSON(),
        self$`filter.methods`$toJSON(),
        self$`exclude.agents.regexp`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheSlingSecurityImplReferrerFilterPropertiesJson) {
      OrgApacheSlingSecurityImplReferrerFilterPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingSecurityImplReferrerFilterPropertiesJson)
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`allow.empty` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheSlingSecurityImplReferrerFilterPropertiesObject$allow.empty, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`allow.hosts` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingSecurityImplReferrerFilterPropertiesObject$allow.hosts, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`allow.hosts.regexp` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingSecurityImplReferrerFilterPropertiesObject$allow.hosts.regexp, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`filter.methods` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingSecurityImplReferrerFilterPropertiesObject$filter.methods, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`exclude.agents.regexp` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingSecurityImplReferrerFilterPropertiesObject$exclude.agents.regexp, auto_unbox = TRUE))
    }
  )
)
