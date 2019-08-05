# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistProperties Class
#'
#' @field effectiveBundleListPath 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistProperties <- R6::R6Class(
  'ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistProperties',
  public = list(
    `effectiveBundleListPath` = NULL,
    initialize = function(`effectiveBundleListPath`){
      if (!missing(`effectiveBundleListPath`)) {
        stopifnot(R6::is.R6(`effectiveBundleListPath`))
        self$`effectiveBundleListPath` <- `effectiveBundleListPath`
      }
    },
    toJSON = function() {
      ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistPropertiesObject <- list()
      if (!is.null(self$`effectiveBundleListPath`)) {
        ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistPropertiesObject[['effectiveBundleListPath']] <- self$`effectiveBundleListPath`$toJSON()
      }

      ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistPropertiesObject
    },
    fromJSON = function(ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistPropertiesJson) {
      ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistPropertiesObject <- jsonlite::fromJSON(ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistPropertiesJson)
      if (!is.null(ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistPropertiesObject$`effectiveBundleListPath`)) {
        effectiveBundleListPathObject <- ConfigNodePropertyString$new()
        effectiveBundleListPathObject$fromJSON(jsonlite::toJSON(ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistPropertiesObject$effectiveBundleListPath, auto_unbox = TRUE))
        self$`effectiveBundleListPath` <- effectiveBundleListPathObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "effectiveBundleListPath": %s
        }',
        self$`effectiveBundleListPath`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistPropertiesJson) {
      ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistPropertiesObject <- jsonlite::fromJSON(ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`effectiveBundleListPath` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistPropertiesObject$effectiveBundleListPath, auto_unbox = TRUE))
    }
  )
)