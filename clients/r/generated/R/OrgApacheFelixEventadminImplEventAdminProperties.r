# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheFelixEventadminImplEventAdminProperties Class
#'
#' @field org.apache.felix.eventadmin.ThreadPoolSize 
#' @field org.apache.felix.eventadmin.AsyncToSyncThreadRatio 
#' @field org.apache.felix.eventadmin.Timeout 
#' @field org.apache.felix.eventadmin.RequireTopic 
#' @field org.apache.felix.eventadmin.IgnoreTimeout 
#' @field org.apache.felix.eventadmin.IgnoreTopic 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheFelixEventadminImplEventAdminProperties <- R6::R6Class(
  'OrgApacheFelixEventadminImplEventAdminProperties',
  public = list(
    `org.apache.felix.eventadmin.ThreadPoolSize` = NULL,
    `org.apache.felix.eventadmin.AsyncToSyncThreadRatio` = NULL,
    `org.apache.felix.eventadmin.Timeout` = NULL,
    `org.apache.felix.eventadmin.RequireTopic` = NULL,
    `org.apache.felix.eventadmin.IgnoreTimeout` = NULL,
    `org.apache.felix.eventadmin.IgnoreTopic` = NULL,
    initialize = function(`org.apache.felix.eventadmin.ThreadPoolSize`, `org.apache.felix.eventadmin.AsyncToSyncThreadRatio`, `org.apache.felix.eventadmin.Timeout`, `org.apache.felix.eventadmin.RequireTopic`, `org.apache.felix.eventadmin.IgnoreTimeout`, `org.apache.felix.eventadmin.IgnoreTopic`){
      if (!missing(`org.apache.felix.eventadmin.ThreadPoolSize`)) {
        stopifnot(R6::is.R6(`org.apache.felix.eventadmin.ThreadPoolSize`))
        self$`org.apache.felix.eventadmin.ThreadPoolSize` <- `org.apache.felix.eventadmin.ThreadPoolSize`
      }
      if (!missing(`org.apache.felix.eventadmin.AsyncToSyncThreadRatio`)) {
        stopifnot(R6::is.R6(`org.apache.felix.eventadmin.AsyncToSyncThreadRatio`))
        self$`org.apache.felix.eventadmin.AsyncToSyncThreadRatio` <- `org.apache.felix.eventadmin.AsyncToSyncThreadRatio`
      }
      if (!missing(`org.apache.felix.eventadmin.Timeout`)) {
        stopifnot(R6::is.R6(`org.apache.felix.eventadmin.Timeout`))
        self$`org.apache.felix.eventadmin.Timeout` <- `org.apache.felix.eventadmin.Timeout`
      }
      if (!missing(`org.apache.felix.eventadmin.RequireTopic`)) {
        stopifnot(R6::is.R6(`org.apache.felix.eventadmin.RequireTopic`))
        self$`org.apache.felix.eventadmin.RequireTopic` <- `org.apache.felix.eventadmin.RequireTopic`
      }
      if (!missing(`org.apache.felix.eventadmin.IgnoreTimeout`)) {
        stopifnot(R6::is.R6(`org.apache.felix.eventadmin.IgnoreTimeout`))
        self$`org.apache.felix.eventadmin.IgnoreTimeout` <- `org.apache.felix.eventadmin.IgnoreTimeout`
      }
      if (!missing(`org.apache.felix.eventadmin.IgnoreTopic`)) {
        stopifnot(R6::is.R6(`org.apache.felix.eventadmin.IgnoreTopic`))
        self$`org.apache.felix.eventadmin.IgnoreTopic` <- `org.apache.felix.eventadmin.IgnoreTopic`
      }
    },
    toJSON = function() {
      OrgApacheFelixEventadminImplEventAdminPropertiesObject <- list()
      if (!is.null(self$`org.apache.felix.eventadmin.ThreadPoolSize`)) {
        OrgApacheFelixEventadminImplEventAdminPropertiesObject[['org.apache.felix.eventadmin.ThreadPoolSize']] <- self$`org.apache.felix.eventadmin.ThreadPoolSize`$toJSON()
      }
      if (!is.null(self$`org.apache.felix.eventadmin.AsyncToSyncThreadRatio`)) {
        OrgApacheFelixEventadminImplEventAdminPropertiesObject[['org.apache.felix.eventadmin.AsyncToSyncThreadRatio']] <- self$`org.apache.felix.eventadmin.AsyncToSyncThreadRatio`$toJSON()
      }
      if (!is.null(self$`org.apache.felix.eventadmin.Timeout`)) {
        OrgApacheFelixEventadminImplEventAdminPropertiesObject[['org.apache.felix.eventadmin.Timeout']] <- self$`org.apache.felix.eventadmin.Timeout`$toJSON()
      }
      if (!is.null(self$`org.apache.felix.eventadmin.RequireTopic`)) {
        OrgApacheFelixEventadminImplEventAdminPropertiesObject[['org.apache.felix.eventadmin.RequireTopic']] <- self$`org.apache.felix.eventadmin.RequireTopic`$toJSON()
      }
      if (!is.null(self$`org.apache.felix.eventadmin.IgnoreTimeout`)) {
        OrgApacheFelixEventadminImplEventAdminPropertiesObject[['org.apache.felix.eventadmin.IgnoreTimeout']] <- self$`org.apache.felix.eventadmin.IgnoreTimeout`$toJSON()
      }
      if (!is.null(self$`org.apache.felix.eventadmin.IgnoreTopic`)) {
        OrgApacheFelixEventadminImplEventAdminPropertiesObject[['org.apache.felix.eventadmin.IgnoreTopic']] <- self$`org.apache.felix.eventadmin.IgnoreTopic`$toJSON()
      }

      OrgApacheFelixEventadminImplEventAdminPropertiesObject
    },
    fromJSON = function(OrgApacheFelixEventadminImplEventAdminPropertiesJson) {
      OrgApacheFelixEventadminImplEventAdminPropertiesObject <- jsonlite::fromJSON(OrgApacheFelixEventadminImplEventAdminPropertiesJson)
      if (!is.null(OrgApacheFelixEventadminImplEventAdminPropertiesObject$`org.apache.felix.eventadmin.ThreadPoolSize`)) {
        org.apache.felix.eventadmin.ThreadPoolSizeObject <- ConfigNodePropertyInteger$new()
        org.apache.felix.eventadmin.ThreadPoolSizeObject$fromJSON(jsonlite::toJSON(OrgApacheFelixEventadminImplEventAdminPropertiesObject$org.apache.felix.eventadmin.ThreadPoolSize, auto_unbox = TRUE))
        self$`org.apache.felix.eventadmin.ThreadPoolSize` <- org.apache.felix.eventadmin.ThreadPoolSizeObject
      }
      if (!is.null(OrgApacheFelixEventadminImplEventAdminPropertiesObject$`org.apache.felix.eventadmin.AsyncToSyncThreadRatio`)) {
        org.apache.felix.eventadmin.AsyncToSyncThreadRatioObject <- ConfigNodePropertyFloat$new()
        org.apache.felix.eventadmin.AsyncToSyncThreadRatioObject$fromJSON(jsonlite::toJSON(OrgApacheFelixEventadminImplEventAdminPropertiesObject$org.apache.felix.eventadmin.AsyncToSyncThreadRatio, auto_unbox = TRUE))
        self$`org.apache.felix.eventadmin.AsyncToSyncThreadRatio` <- org.apache.felix.eventadmin.AsyncToSyncThreadRatioObject
      }
      if (!is.null(OrgApacheFelixEventadminImplEventAdminPropertiesObject$`org.apache.felix.eventadmin.Timeout`)) {
        org.apache.felix.eventadmin.TimeoutObject <- ConfigNodePropertyInteger$new()
        org.apache.felix.eventadmin.TimeoutObject$fromJSON(jsonlite::toJSON(OrgApacheFelixEventadminImplEventAdminPropertiesObject$org.apache.felix.eventadmin.Timeout, auto_unbox = TRUE))
        self$`org.apache.felix.eventadmin.Timeout` <- org.apache.felix.eventadmin.TimeoutObject
      }
      if (!is.null(OrgApacheFelixEventadminImplEventAdminPropertiesObject$`org.apache.felix.eventadmin.RequireTopic`)) {
        org.apache.felix.eventadmin.RequireTopicObject <- ConfigNodePropertyBoolean$new()
        org.apache.felix.eventadmin.RequireTopicObject$fromJSON(jsonlite::toJSON(OrgApacheFelixEventadminImplEventAdminPropertiesObject$org.apache.felix.eventadmin.RequireTopic, auto_unbox = TRUE))
        self$`org.apache.felix.eventadmin.RequireTopic` <- org.apache.felix.eventadmin.RequireTopicObject
      }
      if (!is.null(OrgApacheFelixEventadminImplEventAdminPropertiesObject$`org.apache.felix.eventadmin.IgnoreTimeout`)) {
        org.apache.felix.eventadmin.IgnoreTimeoutObject <- ConfigNodePropertyArray$new()
        org.apache.felix.eventadmin.IgnoreTimeoutObject$fromJSON(jsonlite::toJSON(OrgApacheFelixEventadminImplEventAdminPropertiesObject$org.apache.felix.eventadmin.IgnoreTimeout, auto_unbox = TRUE))
        self$`org.apache.felix.eventadmin.IgnoreTimeout` <- org.apache.felix.eventadmin.IgnoreTimeoutObject
      }
      if (!is.null(OrgApacheFelixEventadminImplEventAdminPropertiesObject$`org.apache.felix.eventadmin.IgnoreTopic`)) {
        org.apache.felix.eventadmin.IgnoreTopicObject <- ConfigNodePropertyArray$new()
        org.apache.felix.eventadmin.IgnoreTopicObject$fromJSON(jsonlite::toJSON(OrgApacheFelixEventadminImplEventAdminPropertiesObject$org.apache.felix.eventadmin.IgnoreTopic, auto_unbox = TRUE))
        self$`org.apache.felix.eventadmin.IgnoreTopic` <- org.apache.felix.eventadmin.IgnoreTopicObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "org.apache.felix.eventadmin.ThreadPoolSize": %s,
           "org.apache.felix.eventadmin.AsyncToSyncThreadRatio": %s,
           "org.apache.felix.eventadmin.Timeout": %s,
           "org.apache.felix.eventadmin.RequireTopic": %s,
           "org.apache.felix.eventadmin.IgnoreTimeout": %s,
           "org.apache.felix.eventadmin.IgnoreTopic": %s
        }',
        self$`org.apache.felix.eventadmin.ThreadPoolSize`$toJSON(),
        self$`org.apache.felix.eventadmin.AsyncToSyncThreadRatio`$toJSON(),
        self$`org.apache.felix.eventadmin.Timeout`$toJSON(),
        self$`org.apache.felix.eventadmin.RequireTopic`$toJSON(),
        self$`org.apache.felix.eventadmin.IgnoreTimeout`$toJSON(),
        self$`org.apache.felix.eventadmin.IgnoreTopic`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheFelixEventadminImplEventAdminPropertiesJson) {
      OrgApacheFelixEventadminImplEventAdminPropertiesObject <- jsonlite::fromJSON(OrgApacheFelixEventadminImplEventAdminPropertiesJson)
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`org.apache.felix.eventadmin.ThreadPoolSize` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheFelixEventadminImplEventAdminPropertiesObject$org.apache.felix.eventadmin.ThreadPoolSize, auto_unbox = TRUE))
      ConfigNodePropertyFloatObject <- ConfigNodePropertyFloat$new()
      self$`org.apache.felix.eventadmin.AsyncToSyncThreadRatio` <- ConfigNodePropertyFloatObject$fromJSON(jsonlite::toJSON(OrgApacheFelixEventadminImplEventAdminPropertiesObject$org.apache.felix.eventadmin.AsyncToSyncThreadRatio, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`org.apache.felix.eventadmin.Timeout` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheFelixEventadminImplEventAdminPropertiesObject$org.apache.felix.eventadmin.Timeout, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`org.apache.felix.eventadmin.RequireTopic` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheFelixEventadminImplEventAdminPropertiesObject$org.apache.felix.eventadmin.RequireTopic, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`org.apache.felix.eventadmin.IgnoreTimeout` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheFelixEventadminImplEventAdminPropertiesObject$org.apache.felix.eventadmin.IgnoreTimeout, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`org.apache.felix.eventadmin.IgnoreTopic` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheFelixEventadminImplEventAdminPropertiesObject$org.apache.felix.eventadmin.IgnoreTopic, auto_unbox = TRUE))
    }
  )
)
