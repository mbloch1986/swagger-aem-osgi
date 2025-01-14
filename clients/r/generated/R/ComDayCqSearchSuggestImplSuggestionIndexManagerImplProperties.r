# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties Class
#'
#' @field pathBuilder.target 
#' @field suggest.basepath 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties <- R6::R6Class(
  'ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties',
  public = list(
    `pathBuilder.target` = NULL,
    `suggest.basepath` = NULL,
    initialize = function(`pathBuilder.target`, `suggest.basepath`){
      if (!missing(`pathBuilder.target`)) {
        stopifnot(R6::is.R6(`pathBuilder.target`))
        self$`pathBuilder.target` <- `pathBuilder.target`
      }
      if (!missing(`suggest.basepath`)) {
        stopifnot(R6::is.R6(`suggest.basepath`))
        self$`suggest.basepath` <- `suggest.basepath`
      }
    },
    toJSON = function() {
      ComDayCqSearchSuggestImplSuggestionIndexManagerImplPropertiesObject <- list()
      if (!is.null(self$`pathBuilder.target`)) {
        ComDayCqSearchSuggestImplSuggestionIndexManagerImplPropertiesObject[['pathBuilder.target']] <- self$`pathBuilder.target`$toJSON()
      }
      if (!is.null(self$`suggest.basepath`)) {
        ComDayCqSearchSuggestImplSuggestionIndexManagerImplPropertiesObject[['suggest.basepath']] <- self$`suggest.basepath`$toJSON()
      }

      ComDayCqSearchSuggestImplSuggestionIndexManagerImplPropertiesObject
    },
    fromJSON = function(ComDayCqSearchSuggestImplSuggestionIndexManagerImplPropertiesJson) {
      ComDayCqSearchSuggestImplSuggestionIndexManagerImplPropertiesObject <- jsonlite::fromJSON(ComDayCqSearchSuggestImplSuggestionIndexManagerImplPropertiesJson)
      if (!is.null(ComDayCqSearchSuggestImplSuggestionIndexManagerImplPropertiesObject$`pathBuilder.target`)) {
        pathBuilder.targetObject <- ConfigNodePropertyString$new()
        pathBuilder.targetObject$fromJSON(jsonlite::toJSON(ComDayCqSearchSuggestImplSuggestionIndexManagerImplPropertiesObject$pathBuilder.target, auto_unbox = TRUE))
        self$`pathBuilder.target` <- pathBuilder.targetObject
      }
      if (!is.null(ComDayCqSearchSuggestImplSuggestionIndexManagerImplPropertiesObject$`suggest.basepath`)) {
        suggest.basepathObject <- ConfigNodePropertyString$new()
        suggest.basepathObject$fromJSON(jsonlite::toJSON(ComDayCqSearchSuggestImplSuggestionIndexManagerImplPropertiesObject$suggest.basepath, auto_unbox = TRUE))
        self$`suggest.basepath` <- suggest.basepathObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "pathBuilder.target": %s,
           "suggest.basepath": %s
        }',
        self$`pathBuilder.target`$toJSON(),
        self$`suggest.basepath`$toJSON()
      )
    },
    fromJSONString = function(ComDayCqSearchSuggestImplSuggestionIndexManagerImplPropertiesJson) {
      ComDayCqSearchSuggestImplSuggestionIndexManagerImplPropertiesObject <- jsonlite::fromJSON(ComDayCqSearchSuggestImplSuggestionIndexManagerImplPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`pathBuilder.target` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqSearchSuggestImplSuggestionIndexManagerImplPropertiesObject$pathBuilder.target, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`suggest.basepath` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(ComDayCqSearchSuggestImplSuggestionIndexManagerImplPropertiesObject$suggest.basepath, auto_unbox = TRUE))
    }
  )
)
