# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqMailerDefaultMailServiceProperties Class
#'
#' @field smtp.host 
#' @field smtp.port 
#' @field smtp.user 
#' @field smtp.password 
#' @field from.address 
#' @field smtp.ssl 
#' @field smtp.starttls 
#' @field debug.email 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqMailerDefaultMailServiceProperties <- R6::R6Class(
  'ComDayCqMailerDefaultMailServiceProperties',
  public = list(
    `smtp.host` = NULL,
    `smtp.port` = NULL,
    `smtp.user` = NULL,
    `smtp.password` = NULL,
    `from.address` = NULL,
    `smtp.ssl` = NULL,
    `smtp.starttls` = NULL,
    `debug.email` = NULL,
    initialize = function(`smtp.host`, `smtp.port`, `smtp.user`, `smtp.password`, `from.address`, `smtp.ssl`, `smtp.starttls`, `debug.email`){
      if (!missing(`smtp.host`)) {
        stopifnot(R6::is.R6(`smtp.host`))
        self$`smtp.host` <- `smtp.host`
      }
      if (!missing(`smtp.port`)) {
        stopifnot(R6::is.R6(`smtp.port`))
        self$`smtp.port` <- `smtp.port`
      }
      if (!missing(`smtp.user`)) {
        stopifnot(R6::is.R6(`smtp.user`))
        self$`smtp.user` <- `smtp.user`
      }
      if (!missing(`smtp.password`)) {
        stopifnot(R6::is.R6(`smtp.password`))
        self$`smtp.password` <- `smtp.password`
      }
      if (!missing(`from.address`)) {
        stopifnot(R6::is.R6(`from.address`))
        self$`from.address` <- `from.address`
      }
      if (!missing(`smtp.ssl`)) {
        stopifnot(R6::is.R6(`smtp.ssl`))
        self$`smtp.ssl` <- `smtp.ssl`
      }
      if (!missing(`smtp.starttls`)) {
        stopifnot(R6::is.R6(`smtp.starttls`))
        self$`smtp.starttls` <- `smtp.starttls`
      }
      if (!missing(`debug.email`)) {
        stopifnot(R6::is.R6(`debug.email`))
        self$`debug.email` <- `debug.email`
      }
    },
    toJSON = function() {
      ComDayCqMailerDefaultMailServicePropertiesObject <- list()
      if (!is.null(self$`smtp.host`)) {
        ComDayCqMailerDefaultMailServicePropertiesObject[['smtp.host']] <- self$`smtp.host`$toJSON()
      }
      if (!is.null(self$`smtp.port`)) {
        ComDayCqMailerDefaultMailServicePropertiesObject[['smtp.port']] <- self$`smtp.port`$toJSON()
      }
      if (!is.null(self$`smtp.user`)) {
        ComDayCqMailerDefaultMailServicePropertiesObject[['smtp.user']] <- self$`smtp.user`$toJSON()
      }
      if (!is.null(self$`smtp.password`)) {
        ComDayCqMailerDefaultMailServicePropertiesObject[['smtp.password']] <- self$`smtp.password`$toJSON()
      }
      if (!is.null(self$`from.address`)) {
        ComDayCqMailerDefaultMailServicePropertiesObject[['from.address']] <- self$`from.address`$toJSON()
      }
      if (!is.null(self$`smtp.ssl`)) {
        ComDayCqMailerDefaultMailServicePropertiesObject[['smtp.ssl']] <- self$`smtp.ssl`$toJSON()
      }
      if (!is.null(self$`smtp.starttls`)) {
        ComDayCqMailerDefaultMailServicePropertiesObject[['smtp.starttls']] <- self$`smtp.starttls`$toJSON()
      }
      if (!is.null(self$`debug.email`)) {
        ComDayCqMailerDefaultMailServicePropertiesObject[['debug.email']] <- self$`debug.email`$toJSON()
      }

      ComDayCqMailerDefaultMailServicePropertiesObject
    },
    fromJSON = function(ComDayCqMailerDefaultMailServicePropertiesJson) {
      ComDayCqMailerDefaultMailServicePropertiesObject <- jsonlite::fromJSON(ComDayCqMailerDefaultMailServicePropertiesJson)
      if (!is.null(ComDayCqMailerDefaultMailServicePropertiesObject$`smtp.host`)) {
        smtp.hostObject <- ConfigNodePropertyString$new()
        smtp.hostObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServicePropertiesObject$smtp.host, auto_unbox = TRUE))
        self$`smtp.host` <- smtp.hostObject
      }
      if (!is.null(ComDayCqMailerDefaultMailServicePropertiesObject$`smtp.port`)) {
        smtp.portObject <- ConfigNodePropertyInteger$new()
        smtp.portObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServicePropertiesObject$smtp.port, auto_unbox = TRUE))
        self$`smtp.port` <- smtp.portObject
      }
      if (!is.null(ComDayCqMailerDefaultMailServicePropertiesObject$`smtp.user`)) {
        smtp.userObject <- ConfigNodePropertyString$new()
        smtp.userObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServicePropertiesObject$smtp.user, auto_unbox = TRUE))
        self$`smtp.user` <- smtp.userObject
      }
      if (!is.null(ComDayCqMailerDefaultMailServicePropertiesObject$`smtp.password`)) {
        smtp.passwordObject <- ConfigNodePropertyString$new()
        smtp.passwordObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServicePropertiesObject$smtp.password, auto_unbox = TRUE))
        self$`smtp.password` <- smtp.passwordObject
      }
      if (!is.null(ComDayCqMailerDefaultMailServicePropertiesObject$`from.address`)) {
        from.addressObject <- ConfigNodePropertyString$new()
        from.addressObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServicePropertiesObject$from.address, auto_unbox = TRUE))
        self$`from.address` <- from.addressObject
      }
      if (!is.null(ComDayCqMailerDefaultMailServicePropertiesObject$`smtp.ssl`)) {
        smtp.sslObject <- ConfigNodePropertyBoolean$new()
        smtp.sslObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServicePropertiesObject$smtp.ssl, auto_unbox = TRUE))
        self$`smtp.ssl` <- smtp.sslObject
      }
      if (!is.null(ComDayCqMailerDefaultMailServicePropertiesObject$`smtp.starttls`)) {
        smtp.starttlsObject <- ConfigNodePropertyBoolean$new()
        smtp.starttlsObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServicePropertiesObject$smtp.starttls, auto_unbox = TRUE))
        self$`smtp.starttls` <- smtp.starttlsObject
      }
      if (!is.null(ComDayCqMailerDefaultMailServicePropertiesObject$`debug.email`)) {
        debug.emailObject <- ConfigNodePropertyBoolean$new()
        debug.emailObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServicePropertiesObject$debug.email, auto_unbox = TRUE))
        self$`debug.email` <- debug.emailObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "smtp.host": %s,
           "smtp.port": %s,
           "smtp.user": %s,
           "smtp.password": %s,
           "from.address": %s,
           "smtp.ssl": %s,
           "smtp.starttls": %s,
           "debug.email": %s
        }',
        self$`smtp.host`$toJSON(),
        self$`smtp.port`$toJSON(),
        self$`smtp.user`$toJSON(),
        self$`smtp.password`$toJSON(),
        self$`from.address`$toJSON(),
        self$`smtp.ssl`$toJSON(),
        self$`smtp.starttls`$toJSON(),
        self$`debug.email`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqMailerDefaultMailServicePropertiesJson) {
      ComDayCqMailerDefaultMailServicePropertiesObject <- jsonlite::fromJSON(ComDayCqMailerDefaultMailServicePropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`smtp.host` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServicePropertiesObject$smtp.host, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`smtp.port` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServicePropertiesObject$smtp.port, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`smtp.user` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServicePropertiesObject$smtp.user, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`smtp.password` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServicePropertiesObject$smtp.password, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`from.address` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServicePropertiesObject$from.address, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`smtp.ssl` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServicePropertiesObject$smtp.ssl, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`smtp.starttls` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServicePropertiesObject$smtp.starttls, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`debug.email` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComDayCqMailerDefaultMailServicePropertiesObject$debug.email, auto_unbox = TRUE))
    }
  )
)