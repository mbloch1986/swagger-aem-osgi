# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo Class
#'
#' @field pid 
#' @field title 
#' @field description 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo <- R6::R6Class(
  'ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfo',
  public = list(
    `pid` = NULL,
    `title` = NULL,
    `description` = NULL,
    `properties` = NULL,
    initialize = function(`pid`, `title`, `description`, `properties`){
      if (!missing(`pid`)) {
        stopifnot(is.character(`pid`), length(`pid`) == 1)
        self$`pid` <- `pid`
      }
      if (!missing(`title`)) {
        stopifnot(is.character(`title`), length(`title`) == 1)
        self$`title` <- `title`
      }
      if (!missing(`description`)) {
        stopifnot(is.character(`description`), length(`description`) == 1)
        self$`description` <- `description`
      }
      if (!missing(`properties`)) {
        stopifnot(R6::is.R6(`properties`))
        self$`properties` <- `properties`
      }
    },
    toJSON = function() {
      ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject <- list()
      if (!is.null(self$`pid`)) {
        ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject[['pid']] <- self$`pid`
      }
      if (!is.null(self$`title`)) {
        ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject[['title']] <- self$`title`
      }
      if (!is.null(self$`description`)) {
        ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject[['description']] <- self$`description`
      }
      if (!is.null(self$`properties`)) {
        ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject[['properties']] <- self$`properties`$toJSON()
      }

      ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject
    },
    fromJSON = function(ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoJson) {
      ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject <- jsonlite::fromJSON(ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoJson)
      if (!is.null(ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject$`pid`)) {
        self$`pid` <- ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject$`pid`
      }
      if (!is.null(ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject$`title`)) {
        self$`title` <- ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject$`title`
      }
      if (!is.null(ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject$`description`)) {
        self$`description` <- ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject$`description`
      }
      if (!is.null(ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject$`properties`)) {
        propertiesObject <- ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties$new()
        propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject$properties, auto_unbox = TRUE))
        self$`properties` <- propertiesObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "pid": %s,
           "title": %s,
           "description": %s,
           "properties": %s
        }',
        self$`pid`,
        self$`title`,
        self$`description`,
        self$`properties`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoJson) {
      ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject <- jsonlite::fromJSON(ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoJson)
      self$`pid` <- ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject$`pid`
      self$`title` <- ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject$`title`
      self$`description` <- ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject$`description`
      ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupPropertiesObject <- ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupProperties$new()
      self$`properties` <- ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupPropertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqUpgradesCleanupImplUpgradeInstallFolderCleanupInfoObject$properties, auto_unbox = TRUE))
    }
  )
)
