# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties Class
#'
#' @field message.properties 
#' @field messageBoxSizeLimit 
#' @field messageCountLimit 
#' @field notifyFailure 
#' @field failureMessageFrom 
#' @field failureTemplatePath 
#' @field maxRetries 
#' @field minWaitBetweenRetries 
#' @field countUpdatePoolSize 
#' @field inbox.path 
#' @field sentitems.path 
#' @field supportAttachments 
#' @field supportGroupMessaging 
#' @field maxTotalRecipients 
#' @field batchSize 
#' @field maxTotalAttachmentSize 
#' @field attachmentTypeBlacklist 
#' @field allowedAttachmentTypes 
#' @field serviceSelector 
#' @field fieldWhitelist 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties <- R6::R6Class(
  'ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties',
  public = list(
    `message.properties` = NULL,
    `messageBoxSizeLimit` = NULL,
    `messageCountLimit` = NULL,
    `notifyFailure` = NULL,
    `failureMessageFrom` = NULL,
    `failureTemplatePath` = NULL,
    `maxRetries` = NULL,
    `minWaitBetweenRetries` = NULL,
    `countUpdatePoolSize` = NULL,
    `inbox.path` = NULL,
    `sentitems.path` = NULL,
    `supportAttachments` = NULL,
    `supportGroupMessaging` = NULL,
    `maxTotalRecipients` = NULL,
    `batchSize` = NULL,
    `maxTotalAttachmentSize` = NULL,
    `attachmentTypeBlacklist` = NULL,
    `allowedAttachmentTypes` = NULL,
    `serviceSelector` = NULL,
    `fieldWhitelist` = NULL,
    initialize = function(`message.properties`, `messageBoxSizeLimit`, `messageCountLimit`, `notifyFailure`, `failureMessageFrom`, `failureTemplatePath`, `maxRetries`, `minWaitBetweenRetries`, `countUpdatePoolSize`, `inbox.path`, `sentitems.path`, `supportAttachments`, `supportGroupMessaging`, `maxTotalRecipients`, `batchSize`, `maxTotalAttachmentSize`, `attachmentTypeBlacklist`, `allowedAttachmentTypes`, `serviceSelector`, `fieldWhitelist`){
      if (!missing(`message.properties`)) {
        stopifnot(R6::is.R6(`message.properties`))
        self$`message.properties` <- `message.properties`
      }
      if (!missing(`messageBoxSizeLimit`)) {
        stopifnot(R6::is.R6(`messageBoxSizeLimit`))
        self$`messageBoxSizeLimit` <- `messageBoxSizeLimit`
      }
      if (!missing(`messageCountLimit`)) {
        stopifnot(R6::is.R6(`messageCountLimit`))
        self$`messageCountLimit` <- `messageCountLimit`
      }
      if (!missing(`notifyFailure`)) {
        stopifnot(R6::is.R6(`notifyFailure`))
        self$`notifyFailure` <- `notifyFailure`
      }
      if (!missing(`failureMessageFrom`)) {
        stopifnot(R6::is.R6(`failureMessageFrom`))
        self$`failureMessageFrom` <- `failureMessageFrom`
      }
      if (!missing(`failureTemplatePath`)) {
        stopifnot(R6::is.R6(`failureTemplatePath`))
        self$`failureTemplatePath` <- `failureTemplatePath`
      }
      if (!missing(`maxRetries`)) {
        stopifnot(R6::is.R6(`maxRetries`))
        self$`maxRetries` <- `maxRetries`
      }
      if (!missing(`minWaitBetweenRetries`)) {
        stopifnot(R6::is.R6(`minWaitBetweenRetries`))
        self$`minWaitBetweenRetries` <- `minWaitBetweenRetries`
      }
      if (!missing(`countUpdatePoolSize`)) {
        stopifnot(R6::is.R6(`countUpdatePoolSize`))
        self$`countUpdatePoolSize` <- `countUpdatePoolSize`
      }
      if (!missing(`inbox.path`)) {
        stopifnot(R6::is.R6(`inbox.path`))
        self$`inbox.path` <- `inbox.path`
      }
      if (!missing(`sentitems.path`)) {
        stopifnot(R6::is.R6(`sentitems.path`))
        self$`sentitems.path` <- `sentitems.path`
      }
      if (!missing(`supportAttachments`)) {
        stopifnot(R6::is.R6(`supportAttachments`))
        self$`supportAttachments` <- `supportAttachments`
      }
      if (!missing(`supportGroupMessaging`)) {
        stopifnot(R6::is.R6(`supportGroupMessaging`))
        self$`supportGroupMessaging` <- `supportGroupMessaging`
      }
      if (!missing(`maxTotalRecipients`)) {
        stopifnot(R6::is.R6(`maxTotalRecipients`))
        self$`maxTotalRecipients` <- `maxTotalRecipients`
      }
      if (!missing(`batchSize`)) {
        stopifnot(R6::is.R6(`batchSize`))
        self$`batchSize` <- `batchSize`
      }
      if (!missing(`maxTotalAttachmentSize`)) {
        stopifnot(R6::is.R6(`maxTotalAttachmentSize`))
        self$`maxTotalAttachmentSize` <- `maxTotalAttachmentSize`
      }
      if (!missing(`attachmentTypeBlacklist`)) {
        stopifnot(R6::is.R6(`attachmentTypeBlacklist`))
        self$`attachmentTypeBlacklist` <- `attachmentTypeBlacklist`
      }
      if (!missing(`allowedAttachmentTypes`)) {
        stopifnot(R6::is.R6(`allowedAttachmentTypes`))
        self$`allowedAttachmentTypes` <- `allowedAttachmentTypes`
      }
      if (!missing(`serviceSelector`)) {
        stopifnot(R6::is.R6(`serviceSelector`))
        self$`serviceSelector` <- `serviceSelector`
      }
      if (!missing(`fieldWhitelist`)) {
        stopifnot(R6::is.R6(`fieldWhitelist`))
        self$`fieldWhitelist` <- `fieldWhitelist`
      }
    },
    toJSON = function() {
      ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject <- list()
      if (!is.null(self$`message.properties`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['message.properties']] <- self$`message.properties`$toJSON()
      }
      if (!is.null(self$`messageBoxSizeLimit`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['messageBoxSizeLimit']] <- self$`messageBoxSizeLimit`$toJSON()
      }
      if (!is.null(self$`messageCountLimit`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['messageCountLimit']] <- self$`messageCountLimit`$toJSON()
      }
      if (!is.null(self$`notifyFailure`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['notifyFailure']] <- self$`notifyFailure`$toJSON()
      }
      if (!is.null(self$`failureMessageFrom`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['failureMessageFrom']] <- self$`failureMessageFrom`$toJSON()
      }
      if (!is.null(self$`failureTemplatePath`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['failureTemplatePath']] <- self$`failureTemplatePath`$toJSON()
      }
      if (!is.null(self$`maxRetries`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['maxRetries']] <- self$`maxRetries`$toJSON()
      }
      if (!is.null(self$`minWaitBetweenRetries`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['minWaitBetweenRetries']] <- self$`minWaitBetweenRetries`$toJSON()
      }
      if (!is.null(self$`countUpdatePoolSize`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['countUpdatePoolSize']] <- self$`countUpdatePoolSize`$toJSON()
      }
      if (!is.null(self$`inbox.path`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['inbox.path']] <- self$`inbox.path`$toJSON()
      }
      if (!is.null(self$`sentitems.path`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['sentitems.path']] <- self$`sentitems.path`$toJSON()
      }
      if (!is.null(self$`supportAttachments`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['supportAttachments']] <- self$`supportAttachments`$toJSON()
      }
      if (!is.null(self$`supportGroupMessaging`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['supportGroupMessaging']] <- self$`supportGroupMessaging`$toJSON()
      }
      if (!is.null(self$`maxTotalRecipients`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['maxTotalRecipients']] <- self$`maxTotalRecipients`$toJSON()
      }
      if (!is.null(self$`batchSize`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['batchSize']] <- self$`batchSize`$toJSON()
      }
      if (!is.null(self$`maxTotalAttachmentSize`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['maxTotalAttachmentSize']] <- self$`maxTotalAttachmentSize`$toJSON()
      }
      if (!is.null(self$`attachmentTypeBlacklist`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['attachmentTypeBlacklist']] <- self$`attachmentTypeBlacklist`$toJSON()
      }
      if (!is.null(self$`allowedAttachmentTypes`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['allowedAttachmentTypes']] <- self$`allowedAttachmentTypes`$toJSON()
      }
      if (!is.null(self$`serviceSelector`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['serviceSelector']] <- self$`serviceSelector`$toJSON()
      }
      if (!is.null(self$`fieldWhitelist`)) {
        ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject[['fieldWhitelist']] <- self$`fieldWhitelist`$toJSON()
      }

      ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject
    },
    fromJSON = function(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesJson) {
      ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesJson)
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`message.properties`)) {
        message.propertiesObject <- ConfigNodePropertyArray$new()
        message.propertiesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$message.properties, auto_unbox = TRUE))
        self$`message.properties` <- message.propertiesObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`messageBoxSizeLimit`)) {
        messageBoxSizeLimitObject <- ConfigNodePropertyInteger$new()
        messageBoxSizeLimitObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$messageBoxSizeLimit, auto_unbox = TRUE))
        self$`messageBoxSizeLimit` <- messageBoxSizeLimitObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`messageCountLimit`)) {
        messageCountLimitObject <- ConfigNodePropertyInteger$new()
        messageCountLimitObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$messageCountLimit, auto_unbox = TRUE))
        self$`messageCountLimit` <- messageCountLimitObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`notifyFailure`)) {
        notifyFailureObject <- ConfigNodePropertyBoolean$new()
        notifyFailureObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$notifyFailure, auto_unbox = TRUE))
        self$`notifyFailure` <- notifyFailureObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`failureMessageFrom`)) {
        failureMessageFromObject <- ConfigNodePropertyString$new()
        failureMessageFromObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$failureMessageFrom, auto_unbox = TRUE))
        self$`failureMessageFrom` <- failureMessageFromObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`failureTemplatePath`)) {
        failureTemplatePathObject <- ConfigNodePropertyString$new()
        failureTemplatePathObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$failureTemplatePath, auto_unbox = TRUE))
        self$`failureTemplatePath` <- failureTemplatePathObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`maxRetries`)) {
        maxRetriesObject <- ConfigNodePropertyInteger$new()
        maxRetriesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$maxRetries, auto_unbox = TRUE))
        self$`maxRetries` <- maxRetriesObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`minWaitBetweenRetries`)) {
        minWaitBetweenRetriesObject <- ConfigNodePropertyInteger$new()
        minWaitBetweenRetriesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$minWaitBetweenRetries, auto_unbox = TRUE))
        self$`minWaitBetweenRetries` <- minWaitBetweenRetriesObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`countUpdatePoolSize`)) {
        countUpdatePoolSizeObject <- ConfigNodePropertyInteger$new()
        countUpdatePoolSizeObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$countUpdatePoolSize, auto_unbox = TRUE))
        self$`countUpdatePoolSize` <- countUpdatePoolSizeObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`inbox.path`)) {
        inbox.pathObject <- ConfigNodePropertyString$new()
        inbox.pathObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$inbox.path, auto_unbox = TRUE))
        self$`inbox.path` <- inbox.pathObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`sentitems.path`)) {
        sentitems.pathObject <- ConfigNodePropertyString$new()
        sentitems.pathObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$sentitems.path, auto_unbox = TRUE))
        self$`sentitems.path` <- sentitems.pathObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`supportAttachments`)) {
        supportAttachmentsObject <- ConfigNodePropertyBoolean$new()
        supportAttachmentsObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$supportAttachments, auto_unbox = TRUE))
        self$`supportAttachments` <- supportAttachmentsObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`supportGroupMessaging`)) {
        supportGroupMessagingObject <- ConfigNodePropertyBoolean$new()
        supportGroupMessagingObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$supportGroupMessaging, auto_unbox = TRUE))
        self$`supportGroupMessaging` <- supportGroupMessagingObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`maxTotalRecipients`)) {
        maxTotalRecipientsObject <- ConfigNodePropertyInteger$new()
        maxTotalRecipientsObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$maxTotalRecipients, auto_unbox = TRUE))
        self$`maxTotalRecipients` <- maxTotalRecipientsObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`batchSize`)) {
        batchSizeObject <- ConfigNodePropertyInteger$new()
        batchSizeObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$batchSize, auto_unbox = TRUE))
        self$`batchSize` <- batchSizeObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`maxTotalAttachmentSize`)) {
        maxTotalAttachmentSizeObject <- ConfigNodePropertyInteger$new()
        maxTotalAttachmentSizeObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$maxTotalAttachmentSize, auto_unbox = TRUE))
        self$`maxTotalAttachmentSize` <- maxTotalAttachmentSizeObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`attachmentTypeBlacklist`)) {
        attachmentTypeBlacklistObject <- ConfigNodePropertyArray$new()
        attachmentTypeBlacklistObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$attachmentTypeBlacklist, auto_unbox = TRUE))
        self$`attachmentTypeBlacklist` <- attachmentTypeBlacklistObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`allowedAttachmentTypes`)) {
        allowedAttachmentTypesObject <- ConfigNodePropertyArray$new()
        allowedAttachmentTypesObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$allowedAttachmentTypes, auto_unbox = TRUE))
        self$`allowedAttachmentTypes` <- allowedAttachmentTypesObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`serviceSelector`)) {
        serviceSelectorObject <- ConfigNodePropertyString$new()
        serviceSelectorObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$serviceSelector, auto_unbox = TRUE))
        self$`serviceSelector` <- serviceSelectorObject
      }
      if (!is.null(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$`fieldWhitelist`)) {
        fieldWhitelistObject <- ConfigNodePropertyArray$new()
        fieldWhitelistObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$fieldWhitelist, auto_unbox = TRUE))
        self$`fieldWhitelist` <- fieldWhitelistObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "message.properties": %s,
           "messageBoxSizeLimit": %s,
           "messageCountLimit": %s,
           "notifyFailure": %s,
           "failureMessageFrom": %s,
           "failureTemplatePath": %s,
           "maxRetries": %s,
           "minWaitBetweenRetries": %s,
           "countUpdatePoolSize": %s,
           "inbox.path": %s,
           "sentitems.path": %s,
           "supportAttachments": %s,
           "supportGroupMessaging": %s,
           "maxTotalRecipients": %s,
           "batchSize": %s,
           "maxTotalAttachmentSize": %s,
           "attachmentTypeBlacklist": %s,
           "allowedAttachmentTypes": %s,
           "serviceSelector": %s,
           "fieldWhitelist": %s
        }',
        self$`message.properties`$toJSON(),
        self$`messageBoxSizeLimit`$toJSON(),
        self$`messageCountLimit`$toJSON(),
        self$`notifyFailure`$toJSON(),
        self$`failureMessageFrom`$toJSON(),
        self$`failureTemplatePath`$toJSON(),
        self$`maxRetries`$toJSON(),
        self$`minWaitBetweenRetries`$toJSON(),
        self$`countUpdatePoolSize`$toJSON(),
        self$`inbox.path`$toJSON(),
        self$`sentitems.path`$toJSON(),
        self$`supportAttachments`$toJSON(),
        self$`supportGroupMessaging`$toJSON(),
        self$`maxTotalRecipients`$toJSON(),
        self$`batchSize`$toJSON(),
        self$`maxTotalAttachmentSize`$toJSON(),
        self$`attachmentTypeBlacklist`$toJSON(),
        self$`allowedAttachmentTypes`$toJSON(),
        self$`serviceSelector`$toJSON(),
        self$`fieldWhitelist`$toJSON()
      )
    },
    fromJSONString = function(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesJson) {
      ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject <- jsonlite::fromJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesJson)
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`message.properties` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$message.properties, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`messageBoxSizeLimit` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$messageBoxSizeLimit, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`messageCountLimit` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$messageCountLimit, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`notifyFailure` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$notifyFailure, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`failureMessageFrom` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$failureMessageFrom, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`failureTemplatePath` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$failureTemplatePath, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`maxRetries` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$maxRetries, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`minWaitBetweenRetries` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$minWaitBetweenRetries, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`countUpdatePoolSize` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$countUpdatePoolSize, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`inbox.path` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$inbox.path, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`sentitems.path` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$sentitems.path, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`supportAttachments` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$supportAttachments, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`supportGroupMessaging` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$supportGroupMessaging, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`maxTotalRecipients` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$maxTotalRecipients, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`batchSize` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$batchSize, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`maxTotalAttachmentSize` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$maxTotalAttachmentSize, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`attachmentTypeBlacklist` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$attachmentTypeBlacklist, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`allowedAttachmentTypes` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$allowedAttachmentTypes, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`serviceSelector` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$serviceSelector, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`fieldWhitelist` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesObject$fieldWhitelist, auto_unbox = TRUE))
    }
  )
)
