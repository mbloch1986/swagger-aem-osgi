# Adobe Experience Manager OSGI config (AEM) API
#
# Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
#
# OpenAPI spec version: 1.0.0-pre.0
# Contact: opensource@shinesolutions.com
# Generated by: https://openapi-generator.tech


#' OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties Class
#'
#' @field name 
#' @field type 
#' @field importMode 
#' @field aclHandling 
#' @field package.roots 
#' @field package.filters 
#' @field property.filters 
#' @field tempFsFolder 
#' @field useBinaryReferences 
#' @field autoSaveThreshold 
#' @field cleanupDelay 
#' @field fileThreshold 
#' @field MEGA_BYTES 
#' @field useOffHeapMemory 
#' @field digestAlgorithm 
#' @field monitoringQueueSize 
#' @field pathsMapping 
#' @field strictImport 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties <- R6::R6Class(
  'OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties',
  public = list(
    `name` = NULL,
    `type` = NULL,
    `importMode` = NULL,
    `aclHandling` = NULL,
    `package.roots` = NULL,
    `package.filters` = NULL,
    `property.filters` = NULL,
    `tempFsFolder` = NULL,
    `useBinaryReferences` = NULL,
    `autoSaveThreshold` = NULL,
    `cleanupDelay` = NULL,
    `fileThreshold` = NULL,
    `MEGA_BYTES` = NULL,
    `useOffHeapMemory` = NULL,
    `digestAlgorithm` = NULL,
    `monitoringQueueSize` = NULL,
    `pathsMapping` = NULL,
    `strictImport` = NULL,
    initialize = function(`name`, `type`, `importMode`, `aclHandling`, `package.roots`, `package.filters`, `property.filters`, `tempFsFolder`, `useBinaryReferences`, `autoSaveThreshold`, `cleanupDelay`, `fileThreshold`, `MEGA_BYTES`, `useOffHeapMemory`, `digestAlgorithm`, `monitoringQueueSize`, `pathsMapping`, `strictImport`){
      if (!missing(`name`)) {
        stopifnot(R6::is.R6(`name`))
        self$`name` <- `name`
      }
      if (!missing(`type`)) {
        stopifnot(R6::is.R6(`type`))
        self$`type` <- `type`
      }
      if (!missing(`importMode`)) {
        stopifnot(R6::is.R6(`importMode`))
        self$`importMode` <- `importMode`
      }
      if (!missing(`aclHandling`)) {
        stopifnot(R6::is.R6(`aclHandling`))
        self$`aclHandling` <- `aclHandling`
      }
      if (!missing(`package.roots`)) {
        stopifnot(R6::is.R6(`package.roots`))
        self$`package.roots` <- `package.roots`
      }
      if (!missing(`package.filters`)) {
        stopifnot(R6::is.R6(`package.filters`))
        self$`package.filters` <- `package.filters`
      }
      if (!missing(`property.filters`)) {
        stopifnot(R6::is.R6(`property.filters`))
        self$`property.filters` <- `property.filters`
      }
      if (!missing(`tempFsFolder`)) {
        stopifnot(R6::is.R6(`tempFsFolder`))
        self$`tempFsFolder` <- `tempFsFolder`
      }
      if (!missing(`useBinaryReferences`)) {
        stopifnot(R6::is.R6(`useBinaryReferences`))
        self$`useBinaryReferences` <- `useBinaryReferences`
      }
      if (!missing(`autoSaveThreshold`)) {
        stopifnot(R6::is.R6(`autoSaveThreshold`))
        self$`autoSaveThreshold` <- `autoSaveThreshold`
      }
      if (!missing(`cleanupDelay`)) {
        stopifnot(R6::is.R6(`cleanupDelay`))
        self$`cleanupDelay` <- `cleanupDelay`
      }
      if (!missing(`fileThreshold`)) {
        stopifnot(R6::is.R6(`fileThreshold`))
        self$`fileThreshold` <- `fileThreshold`
      }
      if (!missing(`MEGA_BYTES`)) {
        stopifnot(R6::is.R6(`MEGA_BYTES`))
        self$`MEGA_BYTES` <- `MEGA_BYTES`
      }
      if (!missing(`useOffHeapMemory`)) {
        stopifnot(R6::is.R6(`useOffHeapMemory`))
        self$`useOffHeapMemory` <- `useOffHeapMemory`
      }
      if (!missing(`digestAlgorithm`)) {
        stopifnot(R6::is.R6(`digestAlgorithm`))
        self$`digestAlgorithm` <- `digestAlgorithm`
      }
      if (!missing(`monitoringQueueSize`)) {
        stopifnot(R6::is.R6(`monitoringQueueSize`))
        self$`monitoringQueueSize` <- `monitoringQueueSize`
      }
      if (!missing(`pathsMapping`)) {
        stopifnot(R6::is.R6(`pathsMapping`))
        self$`pathsMapping` <- `pathsMapping`
      }
      if (!missing(`strictImport`)) {
        stopifnot(R6::is.R6(`strictImport`))
        self$`strictImport` <- `strictImport`
      }
    },
    toJSON = function() {
      OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject <- list()
      if (!is.null(self$`name`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['name']] <- self$`name`$toJSON()
      }
      if (!is.null(self$`type`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['type']] <- self$`type`$toJSON()
      }
      if (!is.null(self$`importMode`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['importMode']] <- self$`importMode`$toJSON()
      }
      if (!is.null(self$`aclHandling`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['aclHandling']] <- self$`aclHandling`$toJSON()
      }
      if (!is.null(self$`package.roots`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['package.roots']] <- self$`package.roots`$toJSON()
      }
      if (!is.null(self$`package.filters`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['package.filters']] <- self$`package.filters`$toJSON()
      }
      if (!is.null(self$`property.filters`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['property.filters']] <- self$`property.filters`$toJSON()
      }
      if (!is.null(self$`tempFsFolder`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['tempFsFolder']] <- self$`tempFsFolder`$toJSON()
      }
      if (!is.null(self$`useBinaryReferences`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['useBinaryReferences']] <- self$`useBinaryReferences`$toJSON()
      }
      if (!is.null(self$`autoSaveThreshold`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['autoSaveThreshold']] <- self$`autoSaveThreshold`$toJSON()
      }
      if (!is.null(self$`cleanupDelay`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['cleanupDelay']] <- self$`cleanupDelay`$toJSON()
      }
      if (!is.null(self$`fileThreshold`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['fileThreshold']] <- self$`fileThreshold`$toJSON()
      }
      if (!is.null(self$`MEGA_BYTES`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['MEGA_BYTES']] <- self$`MEGA_BYTES`$toJSON()
      }
      if (!is.null(self$`useOffHeapMemory`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['useOffHeapMemory']] <- self$`useOffHeapMemory`$toJSON()
      }
      if (!is.null(self$`digestAlgorithm`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['digestAlgorithm']] <- self$`digestAlgorithm`$toJSON()
      }
      if (!is.null(self$`monitoringQueueSize`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['monitoringQueueSize']] <- self$`monitoringQueueSize`$toJSON()
      }
      if (!is.null(self$`pathsMapping`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['pathsMapping']] <- self$`pathsMapping`$toJSON()
      }
      if (!is.null(self$`strictImport`)) {
        OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject[['strictImport']] <- self$`strictImport`$toJSON()
      }

      OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject
    },
    fromJSON = function(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesJson) {
      OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesJson)
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`name`)) {
        nameObject <- ConfigNodePropertyString$new()
        nameObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$name, auto_unbox = TRUE))
        self$`name` <- nameObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`type`)) {
        typeObject <- ConfigNodePropertyDropDown$new()
        typeObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$type, auto_unbox = TRUE))
        self$`type` <- typeObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`importMode`)) {
        importModeObject <- ConfigNodePropertyString$new()
        importModeObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$importMode, auto_unbox = TRUE))
        self$`importMode` <- importModeObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`aclHandling`)) {
        aclHandlingObject <- ConfigNodePropertyString$new()
        aclHandlingObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$aclHandling, auto_unbox = TRUE))
        self$`aclHandling` <- aclHandlingObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`package.roots`)) {
        package.rootsObject <- ConfigNodePropertyString$new()
        package.rootsObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$package.roots, auto_unbox = TRUE))
        self$`package.roots` <- package.rootsObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`package.filters`)) {
        package.filtersObject <- ConfigNodePropertyArray$new()
        package.filtersObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$package.filters, auto_unbox = TRUE))
        self$`package.filters` <- package.filtersObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`property.filters`)) {
        property.filtersObject <- ConfigNodePropertyArray$new()
        property.filtersObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$property.filters, auto_unbox = TRUE))
        self$`property.filters` <- property.filtersObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`tempFsFolder`)) {
        tempFsFolderObject <- ConfigNodePropertyString$new()
        tempFsFolderObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$tempFsFolder, auto_unbox = TRUE))
        self$`tempFsFolder` <- tempFsFolderObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`useBinaryReferences`)) {
        useBinaryReferencesObject <- ConfigNodePropertyBoolean$new()
        useBinaryReferencesObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$useBinaryReferences, auto_unbox = TRUE))
        self$`useBinaryReferences` <- useBinaryReferencesObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`autoSaveThreshold`)) {
        autoSaveThresholdObject <- ConfigNodePropertyInteger$new()
        autoSaveThresholdObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$autoSaveThreshold, auto_unbox = TRUE))
        self$`autoSaveThreshold` <- autoSaveThresholdObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`cleanupDelay`)) {
        cleanupDelayObject <- ConfigNodePropertyInteger$new()
        cleanupDelayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$cleanupDelay, auto_unbox = TRUE))
        self$`cleanupDelay` <- cleanupDelayObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`fileThreshold`)) {
        fileThresholdObject <- ConfigNodePropertyInteger$new()
        fileThresholdObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$fileThreshold, auto_unbox = TRUE))
        self$`fileThreshold` <- fileThresholdObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`MEGA_BYTES`)) {
        MEGA_BYTESObject <- ConfigNodePropertyDropDown$new()
        MEGA_BYTESObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$MEGA_BYTES, auto_unbox = TRUE))
        self$`MEGA_BYTES` <- MEGA_BYTESObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`useOffHeapMemory`)) {
        useOffHeapMemoryObject <- ConfigNodePropertyBoolean$new()
        useOffHeapMemoryObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$useOffHeapMemory, auto_unbox = TRUE))
        self$`useOffHeapMemory` <- useOffHeapMemoryObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`digestAlgorithm`)) {
        digestAlgorithmObject <- ConfigNodePropertyDropDown$new()
        digestAlgorithmObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$digestAlgorithm, auto_unbox = TRUE))
        self$`digestAlgorithm` <- digestAlgorithmObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`monitoringQueueSize`)) {
        monitoringQueueSizeObject <- ConfigNodePropertyInteger$new()
        monitoringQueueSizeObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$monitoringQueueSize, auto_unbox = TRUE))
        self$`monitoringQueueSize` <- monitoringQueueSizeObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`pathsMapping`)) {
        pathsMappingObject <- ConfigNodePropertyArray$new()
        pathsMappingObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$pathsMapping, auto_unbox = TRUE))
        self$`pathsMapping` <- pathsMappingObject
      }
      if (!is.null(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$`strictImport`)) {
        strictImportObject <- ConfigNodePropertyBoolean$new()
        strictImportObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$strictImport, auto_unbox = TRUE))
        self$`strictImport` <- strictImportObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "name": %s,
           "type": %s,
           "importMode": %s,
           "aclHandling": %s,
           "package.roots": %s,
           "package.filters": %s,
           "property.filters": %s,
           "tempFsFolder": %s,
           "useBinaryReferences": %s,
           "autoSaveThreshold": %s,
           "cleanupDelay": %s,
           "fileThreshold": %s,
           "MEGA_BYTES": %s,
           "useOffHeapMemory": %s,
           "digestAlgorithm": %s,
           "monitoringQueueSize": %s,
           "pathsMapping": %s,
           "strictImport": %s
        }',
        self$`name`$toJSON(),
        self$`type`$toJSON(),
        self$`importMode`$toJSON(),
        self$`aclHandling`$toJSON(),
        self$`package.roots`$toJSON(),
        self$`package.filters`$toJSON(),
        self$`property.filters`$toJSON(),
        self$`tempFsFolder`$toJSON(),
        self$`useBinaryReferences`$toJSON(),
        self$`autoSaveThreshold`$toJSON(),
        self$`cleanupDelay`$toJSON(),
        self$`fileThreshold`$toJSON(),
        self$`MEGA_BYTES`$toJSON(),
        self$`useOffHeapMemory`$toJSON(),
        self$`digestAlgorithm`$toJSON(),
        self$`monitoringQueueSize`$toJSON(),
        self$`pathsMapping`$toJSON(),
        self$`strictImport`$toJSON()
      )
    },
    fromJSONString = function(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesJson) {
      OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject <- jsonlite::fromJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesJson)
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`name` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$name, auto_unbox = TRUE))
      ConfigNodePropertyDropDownObject <- ConfigNodePropertyDropDown$new()
      self$`type` <- ConfigNodePropertyDropDownObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$type, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`importMode` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$importMode, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`aclHandling` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$aclHandling, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`package.roots` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$package.roots, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`package.filters` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$package.filters, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`property.filters` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$property.filters, auto_unbox = TRUE))
      ConfigNodePropertyStringObject <- ConfigNodePropertyString$new()
      self$`tempFsFolder` <- ConfigNodePropertyStringObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$tempFsFolder, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`useBinaryReferences` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$useBinaryReferences, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`autoSaveThreshold` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$autoSaveThreshold, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`cleanupDelay` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$cleanupDelay, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`fileThreshold` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$fileThreshold, auto_unbox = TRUE))
      ConfigNodePropertyDropDownObject <- ConfigNodePropertyDropDown$new()
      self$`MEGA_BYTES` <- ConfigNodePropertyDropDownObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$MEGA_BYTES, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`useOffHeapMemory` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$useOffHeapMemory, auto_unbox = TRUE))
      ConfigNodePropertyDropDownObject <- ConfigNodePropertyDropDown$new()
      self$`digestAlgorithm` <- ConfigNodePropertyDropDownObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$digestAlgorithm, auto_unbox = TRUE))
      ConfigNodePropertyIntegerObject <- ConfigNodePropertyInteger$new()
      self$`monitoringQueueSize` <- ConfigNodePropertyIntegerObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$monitoringQueueSize, auto_unbox = TRUE))
      ConfigNodePropertyArrayObject <- ConfigNodePropertyArray$new()
      self$`pathsMapping` <- ConfigNodePropertyArrayObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$pathsMapping, auto_unbox = TRUE))
      ConfigNodePropertyBooleanObject <- ConfigNodePropertyBoolean$new()
      self$`strictImport` <- ConfigNodePropertyBooleanObject$fromJSON(jsonlite::toJSON(OrgApacheSlingDistributionSerializationImplVltVaultDistributionPropertiesObject$strictImport, auto_unbox = TRUE))
    }
  )
)
