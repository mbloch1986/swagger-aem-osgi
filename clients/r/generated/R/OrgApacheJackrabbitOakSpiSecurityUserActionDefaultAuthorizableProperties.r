# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties Class
#'
#' @field enabledActions 
#' @field userPrivilegeNames 
#' @field groupPrivilegeNames 
#' @field constraint 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties <- R6::R6Class(
  'OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizableProperties',
  public = list(
    `enabledActions` = NULL,
    `userPrivilegeNames` = NULL,
    `groupPrivilegeNames` = NULL,
    `constraint` = NULL,
    initialize = function(`enabledActions`, `userPrivilegeNames`, `groupPrivilegeNames`, `constraint`){
      if (!missing(`enabledActions`)) {
        stopifnot(R6::is.R6(`enabledActions`))
        self$`enabledActions` <- `enabledActions`
      }
      if (!missing(`userPrivilegeNames`)) {
        stopifnot(R6::is.R6(`userPrivilegeNames`))
        self$`userPrivilegeNames` <- `userPrivilegeNames`
      }
      if (!missing(`groupPrivilegeNames`)) {
        stopifnot(R6::is.R6(`groupPrivilegeNames`))
        self$`groupPrivilegeNames` <- `groupPrivilegeNames`
      }
      if (!missing(`constraint`)) {
        stopifnot(R6::is.R6(`constraint`))
        self$`constraint` <- `constraint`
      }
    },
    toJSON = function() {
      OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject <- list()
      if (!is.null(self$`enabledActions`)) {
        OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject[['enabledActions']] <- self$`enabledActions`$toJSON()
      }
      if (!is.null(self$`userPrivilegeNames`)) {
        OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject[['userPrivilegeNames']] <- self$`userPrivilegeNames`$toJSON()
      }
      if (!is.null(self$`groupPrivilegeNames`)) {
        OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject[['groupPrivilegeNames']] <- self$`groupPrivilegeNames`$toJSON()
      }
      if (!is.null(self$`constraint`)) {
        OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject[['constraint']] <- self$`constraint`$toJSON()
      }

      OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject
    },
    fromJSON = function(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesJson) {
      OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesJson)
      if (!is.null(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject$`enabledActions`)) {
        enabledActionsObject <- ConfigNodePropertyDropDown$new()
        enabledActionsObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject$enabledActions, auto_unbox = TRUE))
        self$`enabledActions` <- enabledActionsObject
      }
      if (!is.null(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject$`userPrivilegeNames`)) {
        userPrivilegeNamesObject <- ConfigNodePropertyArray$new()
        userPrivilegeNamesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject$userPrivilegeNames, auto_unbox = TRUE))
        self$`userPrivilegeNames` <- userPrivilegeNamesObject
      }
      if (!is.null(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject$`groupPrivilegeNames`)) {
        groupPrivilegeNamesObject <- ConfigNodePropertyArray$new()
        groupPrivilegeNamesObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject$groupPrivilegeNames, auto_unbox = TRUE))
        self$`groupPrivilegeNames` <- groupPrivilegeNamesObject
      }
      if (!is.null(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject$`constraint`)) {
        constraintObject <- ConfigNodePropertyString$new()
        constraintObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject$constraint, auto_unbox = TRUE))
        self$`constraint` <- constraintObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "enabledActions": %s,
           "userPrivilegeNames": %s,
           "groupPrivilegeNames": %s,
           "constraint": %s
        }',
        self$`enabledActions`$toJSON(),
        self$`userPrivilegeNames`$toJSON(),
        self$`groupPrivilegeNames`$toJSON(),
        self$`constraint`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesJson) {
      OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject <- jsonlite::fromJSON(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesJson)
      ConfigNodePropertyDropDownObject <- ConfigNodePropertyDropDown$new()
      self$`enabledActions` <- ConfigNodePropertyDropDownObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject$enabledActions, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`userPrivilegeNames` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject$userPrivilegeNames, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`groupPrivilegeNames` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject$groupPrivilegeNames, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`constraint` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheJackrabbitOakSpiSecurityUserActionDefaultAuthorizablePropertiesObject$constraint, auto_unbox = TRUE))
    }
  )
)
