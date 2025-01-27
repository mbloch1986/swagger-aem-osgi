# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties Class
#'
#' @field pattern.time 
#' @field pattern.newline 
#' @field pattern.dayOfMonth 
#' @field pattern.month 
#' @field pattern.year 
#' @field pattern.date 
#' @field pattern.dateTime 
#' @field pattern.email 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties <- R6::R6Class(
  'ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpProperties',
  public = list(
    `pattern.time` = NULL,
    `pattern.newline` = NULL,
    `pattern.dayOfMonth` = NULL,
    `pattern.month` = NULL,
    `pattern.year` = NULL,
    `pattern.date` = NULL,
    `pattern.dateTime` = NULL,
    `pattern.email` = NULL,
    initialize = function(`pattern.time`, `pattern.newline`, `pattern.dayOfMonth`, `pattern.month`, `pattern.year`, `pattern.date`, `pattern.dateTime`, `pattern.email`){
      if (!missing(`pattern.time`)) {
        stopifnot(R6::is.R6(`pattern.time`))
        self$`pattern.time` <- `pattern.time`
      }
      if (!missing(`pattern.newline`)) {
        stopifnot(R6::is.R6(`pattern.newline`))
        self$`pattern.newline` <- `pattern.newline`
      }
      if (!missing(`pattern.dayOfMonth`)) {
        stopifnot(R6::is.R6(`pattern.dayOfMonth`))
        self$`pattern.dayOfMonth` <- `pattern.dayOfMonth`
      }
      if (!missing(`pattern.month`)) {
        stopifnot(R6::is.R6(`pattern.month`))
        self$`pattern.month` <- `pattern.month`
      }
      if (!missing(`pattern.year`)) {
        stopifnot(R6::is.R6(`pattern.year`))
        self$`pattern.year` <- `pattern.year`
      }
      if (!missing(`pattern.date`)) {
        stopifnot(R6::is.R6(`pattern.date`))
        self$`pattern.date` <- `pattern.date`
      }
      if (!missing(`pattern.dateTime`)) {
        stopifnot(R6::is.R6(`pattern.dateTime`))
        self$`pattern.dateTime` <- `pattern.dateTime`
      }
      if (!missing(`pattern.email`)) {
        stopifnot(R6::is.R6(`pattern.email`))
        self$`pattern.email` <- `pattern.email`
      }
    },
    toJSON = function() {
      ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject <- list()
      if (!is.null(self$`pattern.time`)) {
        ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject[['pattern.time']] <- self$`pattern.time`$toJSON()
      }
      if (!is.null(self$`pattern.newline`)) {
        ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject[['pattern.newline']] <- self$`pattern.newline`$toJSON()
      }
      if (!is.null(self$`pattern.dayOfMonth`)) {
        ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject[['pattern.dayOfMonth']] <- self$`pattern.dayOfMonth`$toJSON()
      }
      if (!is.null(self$`pattern.month`)) {
        ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject[['pattern.month']] <- self$`pattern.month`$toJSON()
      }
      if (!is.null(self$`pattern.year`)) {
        ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject[['pattern.year']] <- self$`pattern.year`$toJSON()
      }
      if (!is.null(self$`pattern.date`)) {
        ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject[['pattern.date']] <- self$`pattern.date`$toJSON()
      }
      if (!is.null(self$`pattern.dateTime`)) {
        ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject[['pattern.dateTime']] <- self$`pattern.dateTime`$toJSON()
      }
      if (!is.null(self$`pattern.email`)) {
        ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject[['pattern.email']] <- self$`pattern.email`$toJSON()
      }

      ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject
    },
    fromJSON = function(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesJson) {
      ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesJson)
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$`pattern.time`)) {
        pattern.timeObject <- ConfigNodePropertyString$new()
        pattern.timeObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$pattern.time, auto_unbox = TRUE))
        self$`pattern.time` <- pattern.timeObject
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$`pattern.newline`)) {
        pattern.newlineObject <- ConfigNodePropertyString$new()
        pattern.newlineObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$pattern.newline, auto_unbox = TRUE))
        self$`pattern.newline` <- pattern.newlineObject
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$`pattern.dayOfMonth`)) {
        pattern.dayOfMonthObject <- ConfigNodePropertyString$new()
        pattern.dayOfMonthObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$pattern.dayOfMonth, auto_unbox = TRUE))
        self$`pattern.dayOfMonth` <- pattern.dayOfMonthObject
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$`pattern.month`)) {
        pattern.monthObject <- ConfigNodePropertyString$new()
        pattern.monthObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$pattern.month, auto_unbox = TRUE))
        self$`pattern.month` <- pattern.monthObject
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$`pattern.year`)) {
        pattern.yearObject <- ConfigNodePropertyString$new()
        pattern.yearObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$pattern.year, auto_unbox = TRUE))
        self$`pattern.year` <- pattern.yearObject
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$`pattern.date`)) {
        pattern.dateObject <- ConfigNodePropertyString$new()
        pattern.dateObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$pattern.date, auto_unbox = TRUE))
        self$`pattern.date` <- pattern.dateObject
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$`pattern.dateTime`)) {
        pattern.dateTimeObject <- ConfigNodePropertyString$new()
        pattern.dateTimeObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$pattern.dateTime, auto_unbox = TRUE))
        self$`pattern.dateTime` <- pattern.dateTimeObject
      }
      if (!is.null(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$`pattern.email`)) {
        pattern.emailObject <- ConfigNodePropertyString$new()
        pattern.emailObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$pattern.email, auto_unbox = TRUE))
        self$`pattern.email` <- pattern.emailObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "pattern.time": %s,
           "pattern.newline": %s,
           "pattern.dayOfMonth": %s,
           "pattern.month": %s,
           "pattern.year": %s,
           "pattern.date": %s,
           "pattern.dateTime": %s,
           "pattern.email": %s
        }',
        self$`pattern.time`$toJSON(),
        self$`pattern.newline`$toJSON(),
        self$`pattern.dayOfMonth`$toJSON(),
        self$`pattern.month`$toJSON(),
        self$`pattern.year`$toJSON(),
        self$`pattern.date`$toJSON(),
        self$`pattern.dateTime`$toJSON(),
        self$`pattern.email`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesJson) {
      ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`pattern.time` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$pattern.time, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`pattern.newline` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$pattern.newline, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`pattern.dayOfMonth` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$pattern.dayOfMonth, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`pattern.month` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$pattern.month, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`pattern.year` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$pattern.year, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`pattern.date` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$pattern.date, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`pattern.dateTime` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$pattern.dateTime, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`pattern.email` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialCommonsEmailreplyImplEmailQuotedTextPatternsImpPropertiesObject$pattern.email, auto_unbox = TRUE))
    }
  )
)
