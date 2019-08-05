# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties Class
#'
#' @field resourceType.filters 
#' @field priority 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties <- R6::R6Class(
  'ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties',
  public = list(
    `resourceType.filters` = NULL,
    `priority` = NULL,
    initialize = function(`resourceType.filters`, `priority`){
      if (!missing(`resourceType.filters`)) {
        stopifnot(R6::is.R6(`resourceType.filters`))
        self$`resourceType.filters` <- `resourceType.filters`
      }
      if (!missing(`priority`)) {
        stopifnot(R6::is.R6(`priority`))
        self$`priority` <- `priority`
      }
    },
    toJSON = function() {
      ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociPropertiesObject <- list()
      if (!is.null(self$`resourceType.filters`)) {
        ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociPropertiesObject[['resourceType.filters']] <- self$`resourceType.filters`$toJSON()
      }
      if (!is.null(self$`priority`)) {
        ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociPropertiesObject[['priority']] <- self$`priority`$toJSON()
      }

      ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociPropertiesObject
    },
    fromJSON = function(ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociPropertiesJson) {
      ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociPropertiesJson)
      if (!is.null(ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociPropertiesObject$`resourceType.filters`)) {
        resourceType.filtersObject <- ConfigNodePropertyArray$new()
        resourceType.filtersObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociPropertiesObject$resourceType.filters, auto_unbox = TRUE))
        self$`resourceType.filters` <- resourceType.filtersObject
      }
      if (!is.null(ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociPropertiesObject$`priority`)) {
        priorityObject <- ConfigNodePropertyInteger$new()
        priorityObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociPropertiesObject$priority, auto_unbox = TRUE))
        self$`priority` <- priorityObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "resourceType.filters": %s,
           "priority": %s
        }',
        self$`resourceType.filters`$toJSON(),
        self$`priority`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociPropertiesJson) {
      ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`resourceType.filters` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociPropertiesObject$resourceType.filters, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`priority` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociPropertiesObject$priority, auto_unbox = TRUE))
    }
  )
)