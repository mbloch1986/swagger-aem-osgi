# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties Class
#'
#' @field com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath 
#' @field com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency 
#' @field com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout 
#' @field com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients 
#' @field com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver 
#' @field com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport 
#' @field com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls 
#' @field com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username 
#' @field com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties <- R6::R6Class(
  'ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties',
  public = list(
    `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath` = NULL,
    `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency` = NULL,
    `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout` = NULL,
    `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients` = NULL,
    `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver` = NULL,
    `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport` = NULL,
    `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls` = NULL,
    `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username` = NULL,
    `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password` = NULL,
    initialize = function(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath`, `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency`, `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout`, `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients`, `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver`, `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport`, `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls`, `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username`, `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password`){
      if (!missing(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath`)) {
        stopifnot(R6::is.R6(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath`))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath` <- `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath`
      }
      if (!missing(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency`)) {
        stopifnot(R6::is.R6(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency`))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency` <- `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency`
      }
      if (!missing(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout`)) {
        stopifnot(R6::is.R6(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout`))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout` <- `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout`
      }
      if (!missing(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients`)) {
        stopifnot(R6::is.R6(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients`))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients` <- `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients`
      }
      if (!missing(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver`)) {
        stopifnot(R6::is.R6(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver`))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver` <- `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver`
      }
      if (!missing(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport`)) {
        stopifnot(R6::is.R6(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport`))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport` <- `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport`
      }
      if (!missing(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls`)) {
        stopifnot(R6::is.R6(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls`))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls` <- `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls`
      }
      if (!missing(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username`)) {
        stopifnot(R6::is.R6(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username`))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username` <- `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username`
      }
      if (!missing(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password`)) {
        stopifnot(R6::is.R6(`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password`))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password` <- `com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password`
      }
    },
    toJSON = function() {
      ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject <- list()
      if (!is.null(self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath`)) {
        ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject[['com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath']] <- self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath`$toJSON()
      }
      if (!is.null(self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency`)) {
        ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject[['com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency']] <- self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency`$toJSON()
      }
      if (!is.null(self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout`)) {
        ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject[['com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout']] <- self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout`$toJSON()
      }
      if (!is.null(self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients`)) {
        ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject[['com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients']] <- self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients`$toJSON()
      }
      if (!is.null(self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver`)) {
        ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject[['com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver']] <- self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver`$toJSON()
      }
      if (!is.null(self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport`)) {
        ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject[['com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport']] <- self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport`$toJSON()
      }
      if (!is.null(self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls`)) {
        ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject[['com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls']] <- self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls`$toJSON()
      }
      if (!is.null(self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username`)) {
        ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject[['com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username']] <- self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username`$toJSON()
      }
      if (!is.null(self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password`)) {
        ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject[['com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password']] <- self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password`$toJSON()
      }

      ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject
    },
    fromJSON = function(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesJson) {
      ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject <- jsonlite::fromJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesJson)
      if (!is.null(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath`)) {
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPathObject <- ConfigNodePropertyArray$new()
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPathObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath, auto_unbox = TRUE))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath` <- com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPathObject
      }
      if (!is.null(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency`)) {
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequencyObject <- ConfigNodePropertyString$new()
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequencyObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency, auto_unbox = TRUE))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency` <- com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequencyObject
      }
      if (!is.null(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout`)) {
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeoutObject <- ConfigNodePropertyInteger$new()
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeoutObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout, auto_unbox = TRUE))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout` <- com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeoutObject
      }
      if (!is.null(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients`)) {
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipientsObject <- ConfigNodePropertyString$new()
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipientsObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients, auto_unbox = TRUE))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients` <- com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipientsObject
      }
      if (!is.null(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver`)) {
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserverObject <- ConfigNodePropertyString$new()
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserverObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver, auto_unbox = TRUE))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver` <- com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserverObject
      }
      if (!is.null(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport`)) {
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpportObject <- ConfigNodePropertyInteger$new()
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpportObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport, auto_unbox = TRUE))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport` <- com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpportObject
      }
      if (!is.null(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls`)) {
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetlsObject <- ConfigNodePropertyBoolean$new()
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetlsObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls, auto_unbox = TRUE))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls` <- com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetlsObject
      }
      if (!is.null(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username`)) {
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usernameObject <- ConfigNodePropertyString$new()
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usernameObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username, auto_unbox = TRUE))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username` <- com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usernameObject
      }
      if (!is.null(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password`)) {
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.passwordObject <- ConfigNodePropertyString$new()
        com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.passwordObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password, auto_unbox = TRUE))
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password` <- com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.passwordObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath": %s,
           "com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency": %s,
           "com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout": %s,
           "com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients": %s,
           "com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver": %s,
           "com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport": %s,
           "com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls": %s,
           "com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username": %s,
           "com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password": %s
        }',
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath`$toJSON(),
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency`$toJSON(),
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout`$toJSON(),
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients`$toJSON(),
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver`$toJSON(),
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport`$toJSON(),
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls`$toJSON(),
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username`$toJSON(),
        self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesJson) {
      ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject <- jsonlite::fromJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPropertiesObject$com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password, auto_unbox = TRUE))
    }
  )
)