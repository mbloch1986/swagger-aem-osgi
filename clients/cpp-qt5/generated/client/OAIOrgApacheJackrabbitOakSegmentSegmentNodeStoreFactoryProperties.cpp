/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties() {
    init();
}

OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::~OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties() {
    this->cleanup();
}

void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::init() {
    repository_home = new OAIConfigNodePropertyString();
    m_repository_home_isSet = false;
    tarmk_mode = new OAIConfigNodePropertyString();
    m_tarmk_mode_isSet = false;
    tarmk_size = new OAIConfigNodePropertyInteger();
    m_tarmk_size_isSet = false;
    segment_cache_size = new OAIConfigNodePropertyInteger();
    m_segment_cache_size_isSet = false;
    string_cache_size = new OAIConfigNodePropertyInteger();
    m_string_cache_size_isSet = false;
    template_cache_size = new OAIConfigNodePropertyInteger();
    m_template_cache_size_isSet = false;
    string_deduplication_cache_size = new OAIConfigNodePropertyInteger();
    m_string_deduplication_cache_size_isSet = false;
    template_deduplication_cache_size = new OAIConfigNodePropertyInteger();
    m_template_deduplication_cache_size_isSet = false;
    node_deduplication_cache_size = new OAIConfigNodePropertyInteger();
    m_node_deduplication_cache_size_isSet = false;
    pause_compaction = new OAIConfigNodePropertyBoolean();
    m_pause_compaction_isSet = false;
    compaction_retry_count = new OAIConfigNodePropertyInteger();
    m_compaction_retry_count_isSet = false;
    compaction_force_timeout = new OAIConfigNodePropertyInteger();
    m_compaction_force_timeout_isSet = false;
    compaction_size_delta_estimation = new OAIConfigNodePropertyInteger();
    m_compaction_size_delta_estimation_isSet = false;
    compaction_disable_estimation = new OAIConfigNodePropertyBoolean();
    m_compaction_disable_estimation_isSet = false;
    compaction_retained_generations = new OAIConfigNodePropertyInteger();
    m_compaction_retained_generations_isSet = false;
    compaction_memory_threshold = new OAIConfigNodePropertyInteger();
    m_compaction_memory_threshold_isSet = false;
    compaction_progress_log = new OAIConfigNodePropertyInteger();
    m_compaction_progress_log_isSet = false;
    standby = new OAIConfigNodePropertyBoolean();
    m_standby_isSet = false;
    custom_blob_store = new OAIConfigNodePropertyBoolean();
    m_custom_blob_store_isSet = false;
    custom_segment_store = new OAIConfigNodePropertyBoolean();
    m_custom_segment_store_isSet = false;
    split_persistence = new OAIConfigNodePropertyBoolean();
    m_split_persistence_isSet = false;
    repository_backup_dir = new OAIConfigNodePropertyString();
    m_repository_backup_dir_isSet = false;
    blob_gc_max_age_in_secs = new OAIConfigNodePropertyInteger();
    m_blob_gc_max_age_in_secs_isSet = false;
    blob_track_snapshot_interval_in_secs = new OAIConfigNodePropertyInteger();
    m_blob_track_snapshot_interval_in_secs_isSet = false;
    role = new OAIConfigNodePropertyString();
    m_role_isSet = false;
    register_descriptors = new OAIConfigNodePropertyBoolean();
    m_register_descriptors_isSet = false;
    dispatch_changes = new OAIConfigNodePropertyBoolean();
    m_dispatch_changes_isSet = false;
}

void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::cleanup() {
    if(repository_home != nullptr) { 
        delete repository_home;
    }
    if(tarmk_mode != nullptr) { 
        delete tarmk_mode;
    }
    if(tarmk_size != nullptr) { 
        delete tarmk_size;
    }
    if(segment_cache_size != nullptr) { 
        delete segment_cache_size;
    }
    if(string_cache_size != nullptr) { 
        delete string_cache_size;
    }
    if(template_cache_size != nullptr) { 
        delete template_cache_size;
    }
    if(string_deduplication_cache_size != nullptr) { 
        delete string_deduplication_cache_size;
    }
    if(template_deduplication_cache_size != nullptr) { 
        delete template_deduplication_cache_size;
    }
    if(node_deduplication_cache_size != nullptr) { 
        delete node_deduplication_cache_size;
    }
    if(pause_compaction != nullptr) { 
        delete pause_compaction;
    }
    if(compaction_retry_count != nullptr) { 
        delete compaction_retry_count;
    }
    if(compaction_force_timeout != nullptr) { 
        delete compaction_force_timeout;
    }
    if(compaction_size_delta_estimation != nullptr) { 
        delete compaction_size_delta_estimation;
    }
    if(compaction_disable_estimation != nullptr) { 
        delete compaction_disable_estimation;
    }
    if(compaction_retained_generations != nullptr) { 
        delete compaction_retained_generations;
    }
    if(compaction_memory_threshold != nullptr) { 
        delete compaction_memory_threshold;
    }
    if(compaction_progress_log != nullptr) { 
        delete compaction_progress_log;
    }
    if(standby != nullptr) { 
        delete standby;
    }
    if(custom_blob_store != nullptr) { 
        delete custom_blob_store;
    }
    if(custom_segment_store != nullptr) { 
        delete custom_segment_store;
    }
    if(split_persistence != nullptr) { 
        delete split_persistence;
    }
    if(repository_backup_dir != nullptr) { 
        delete repository_backup_dir;
    }
    if(blob_gc_max_age_in_secs != nullptr) { 
        delete blob_gc_max_age_in_secs;
    }
    if(blob_track_snapshot_interval_in_secs != nullptr) { 
        delete blob_track_snapshot_interval_in_secs;
    }
    if(role != nullptr) { 
        delete role;
    }
    if(register_descriptors != nullptr) { 
        delete register_descriptors;
    }
    if(dispatch_changes != nullptr) { 
        delete dispatch_changes;
    }
}

OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&repository_home, pJson["repository.home"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&tarmk_mode, pJson["tarmk.mode"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&tarmk_size, pJson["tarmk.size"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&segment_cache_size, pJson["segmentCache.size"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&string_cache_size, pJson["stringCache.size"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&template_cache_size, pJson["templateCache.size"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&string_deduplication_cache_size, pJson["stringDeduplicationCache.size"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&template_deduplication_cache_size, pJson["templateDeduplicationCache.size"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&node_deduplication_cache_size, pJson["nodeDeduplicationCache.size"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&pause_compaction, pJson["pauseCompaction"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&compaction_retry_count, pJson["compaction.retryCount"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&compaction_force_timeout, pJson["compaction.force.timeout"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&compaction_size_delta_estimation, pJson["compaction.sizeDeltaEstimation"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&compaction_disable_estimation, pJson["compaction.disableEstimation"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&compaction_retained_generations, pJson["compaction.retainedGenerations"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&compaction_memory_threshold, pJson["compaction.memoryThreshold"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&compaction_progress_log, pJson["compaction.progressLog"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&standby, pJson["standby"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&custom_blob_store, pJson["customBlobStore"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&custom_segment_store, pJson["customSegmentStore"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&split_persistence, pJson["splitPersistence"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&repository_backup_dir, pJson["repository.backup.dir"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&blob_gc_max_age_in_secs, pJson["blobGcMaxAgeInSecs"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&blob_track_snapshot_interval_in_secs, pJson["blobTrackSnapshotIntervalInSecs"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&role, pJson["role"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&register_descriptors, pJson["registerDescriptors"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&dispatch_changes, pJson["dispatchChanges"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::asJsonObject() {
    QJsonObject obj;
    if((repository_home != nullptr) && (repository_home->isSet())){
        toJsonValue(QString("repository.home"), repository_home, obj, QString("OAIConfigNodePropertyString"));
    }
    if((tarmk_mode != nullptr) && (tarmk_mode->isSet())){
        toJsonValue(QString("tarmk.mode"), tarmk_mode, obj, QString("OAIConfigNodePropertyString"));
    }
    if((tarmk_size != nullptr) && (tarmk_size->isSet())){
        toJsonValue(QString("tarmk.size"), tarmk_size, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((segment_cache_size != nullptr) && (segment_cache_size->isSet())){
        toJsonValue(QString("segmentCache.size"), segment_cache_size, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((string_cache_size != nullptr) && (string_cache_size->isSet())){
        toJsonValue(QString("stringCache.size"), string_cache_size, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((template_cache_size != nullptr) && (template_cache_size->isSet())){
        toJsonValue(QString("templateCache.size"), template_cache_size, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((string_deduplication_cache_size != nullptr) && (string_deduplication_cache_size->isSet())){
        toJsonValue(QString("stringDeduplicationCache.size"), string_deduplication_cache_size, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((template_deduplication_cache_size != nullptr) && (template_deduplication_cache_size->isSet())){
        toJsonValue(QString("templateDeduplicationCache.size"), template_deduplication_cache_size, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((node_deduplication_cache_size != nullptr) && (node_deduplication_cache_size->isSet())){
        toJsonValue(QString("nodeDeduplicationCache.size"), node_deduplication_cache_size, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((pause_compaction != nullptr) && (pause_compaction->isSet())){
        toJsonValue(QString("pauseCompaction"), pause_compaction, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((compaction_retry_count != nullptr) && (compaction_retry_count->isSet())){
        toJsonValue(QString("compaction.retryCount"), compaction_retry_count, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((compaction_force_timeout != nullptr) && (compaction_force_timeout->isSet())){
        toJsonValue(QString("compaction.force.timeout"), compaction_force_timeout, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((compaction_size_delta_estimation != nullptr) && (compaction_size_delta_estimation->isSet())){
        toJsonValue(QString("compaction.sizeDeltaEstimation"), compaction_size_delta_estimation, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((compaction_disable_estimation != nullptr) && (compaction_disable_estimation->isSet())){
        toJsonValue(QString("compaction.disableEstimation"), compaction_disable_estimation, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((compaction_retained_generations != nullptr) && (compaction_retained_generations->isSet())){
        toJsonValue(QString("compaction.retainedGenerations"), compaction_retained_generations, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((compaction_memory_threshold != nullptr) && (compaction_memory_threshold->isSet())){
        toJsonValue(QString("compaction.memoryThreshold"), compaction_memory_threshold, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((compaction_progress_log != nullptr) && (compaction_progress_log->isSet())){
        toJsonValue(QString("compaction.progressLog"), compaction_progress_log, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((standby != nullptr) && (standby->isSet())){
        toJsonValue(QString("standby"), standby, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((custom_blob_store != nullptr) && (custom_blob_store->isSet())){
        toJsonValue(QString("customBlobStore"), custom_blob_store, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((custom_segment_store != nullptr) && (custom_segment_store->isSet())){
        toJsonValue(QString("customSegmentStore"), custom_segment_store, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((split_persistence != nullptr) && (split_persistence->isSet())){
        toJsonValue(QString("splitPersistence"), split_persistence, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((repository_backup_dir != nullptr) && (repository_backup_dir->isSet())){
        toJsonValue(QString("repository.backup.dir"), repository_backup_dir, obj, QString("OAIConfigNodePropertyString"));
    }
    if((blob_gc_max_age_in_secs != nullptr) && (blob_gc_max_age_in_secs->isSet())){
        toJsonValue(QString("blobGcMaxAgeInSecs"), blob_gc_max_age_in_secs, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((blob_track_snapshot_interval_in_secs != nullptr) && (blob_track_snapshot_interval_in_secs->isSet())){
        toJsonValue(QString("blobTrackSnapshotIntervalInSecs"), blob_track_snapshot_interval_in_secs, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((role != nullptr) && (role->isSet())){
        toJsonValue(QString("role"), role, obj, QString("OAIConfigNodePropertyString"));
    }
    if((register_descriptors != nullptr) && (register_descriptors->isSet())){
        toJsonValue(QString("registerDescriptors"), register_descriptors, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((dispatch_changes != nullptr) && (dispatch_changes->isSet())){
        toJsonValue(QString("dispatchChanges"), dispatch_changes, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getRepositoryHome() {
    return repository_home;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setRepositoryHome(OAIConfigNodePropertyString* repository_home) {
    this->repository_home = repository_home;
    this->m_repository_home_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getTarmkMode() {
    return tarmk_mode;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setTarmkMode(OAIConfigNodePropertyString* tarmk_mode) {
    this->tarmk_mode = tarmk_mode;
    this->m_tarmk_mode_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getTarmkSize() {
    return tarmk_size;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setTarmkSize(OAIConfigNodePropertyInteger* tarmk_size) {
    this->tarmk_size = tarmk_size;
    this->m_tarmk_size_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getSegmentCacheSize() {
    return segment_cache_size;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setSegmentCacheSize(OAIConfigNodePropertyInteger* segment_cache_size) {
    this->segment_cache_size = segment_cache_size;
    this->m_segment_cache_size_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getStringCacheSize() {
    return string_cache_size;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setStringCacheSize(OAIConfigNodePropertyInteger* string_cache_size) {
    this->string_cache_size = string_cache_size;
    this->m_string_cache_size_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getTemplateCacheSize() {
    return template_cache_size;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setTemplateCacheSize(OAIConfigNodePropertyInteger* template_cache_size) {
    this->template_cache_size = template_cache_size;
    this->m_template_cache_size_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getStringDeduplicationCacheSize() {
    return string_deduplication_cache_size;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setStringDeduplicationCacheSize(OAIConfigNodePropertyInteger* string_deduplication_cache_size) {
    this->string_deduplication_cache_size = string_deduplication_cache_size;
    this->m_string_deduplication_cache_size_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getTemplateDeduplicationCacheSize() {
    return template_deduplication_cache_size;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setTemplateDeduplicationCacheSize(OAIConfigNodePropertyInteger* template_deduplication_cache_size) {
    this->template_deduplication_cache_size = template_deduplication_cache_size;
    this->m_template_deduplication_cache_size_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getNodeDeduplicationCacheSize() {
    return node_deduplication_cache_size;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setNodeDeduplicationCacheSize(OAIConfigNodePropertyInteger* node_deduplication_cache_size) {
    this->node_deduplication_cache_size = node_deduplication_cache_size;
    this->m_node_deduplication_cache_size_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getPauseCompaction() {
    return pause_compaction;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setPauseCompaction(OAIConfigNodePropertyBoolean* pause_compaction) {
    this->pause_compaction = pause_compaction;
    this->m_pause_compaction_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getCompactionRetryCount() {
    return compaction_retry_count;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setCompactionRetryCount(OAIConfigNodePropertyInteger* compaction_retry_count) {
    this->compaction_retry_count = compaction_retry_count;
    this->m_compaction_retry_count_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getCompactionForceTimeout() {
    return compaction_force_timeout;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setCompactionForceTimeout(OAIConfigNodePropertyInteger* compaction_force_timeout) {
    this->compaction_force_timeout = compaction_force_timeout;
    this->m_compaction_force_timeout_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getCompactionSizeDeltaEstimation() {
    return compaction_size_delta_estimation;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setCompactionSizeDeltaEstimation(OAIConfigNodePropertyInteger* compaction_size_delta_estimation) {
    this->compaction_size_delta_estimation = compaction_size_delta_estimation;
    this->m_compaction_size_delta_estimation_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getCompactionDisableEstimation() {
    return compaction_disable_estimation;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setCompactionDisableEstimation(OAIConfigNodePropertyBoolean* compaction_disable_estimation) {
    this->compaction_disable_estimation = compaction_disable_estimation;
    this->m_compaction_disable_estimation_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getCompactionRetainedGenerations() {
    return compaction_retained_generations;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setCompactionRetainedGenerations(OAIConfigNodePropertyInteger* compaction_retained_generations) {
    this->compaction_retained_generations = compaction_retained_generations;
    this->m_compaction_retained_generations_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getCompactionMemoryThreshold() {
    return compaction_memory_threshold;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setCompactionMemoryThreshold(OAIConfigNodePropertyInteger* compaction_memory_threshold) {
    this->compaction_memory_threshold = compaction_memory_threshold;
    this->m_compaction_memory_threshold_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getCompactionProgressLog() {
    return compaction_progress_log;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setCompactionProgressLog(OAIConfigNodePropertyInteger* compaction_progress_log) {
    this->compaction_progress_log = compaction_progress_log;
    this->m_compaction_progress_log_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getStandby() {
    return standby;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setStandby(OAIConfigNodePropertyBoolean* standby) {
    this->standby = standby;
    this->m_standby_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getCustomBlobStore() {
    return custom_blob_store;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setCustomBlobStore(OAIConfigNodePropertyBoolean* custom_blob_store) {
    this->custom_blob_store = custom_blob_store;
    this->m_custom_blob_store_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getCustomSegmentStore() {
    return custom_segment_store;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setCustomSegmentStore(OAIConfigNodePropertyBoolean* custom_segment_store) {
    this->custom_segment_store = custom_segment_store;
    this->m_custom_segment_store_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getSplitPersistence() {
    return split_persistence;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setSplitPersistence(OAIConfigNodePropertyBoolean* split_persistence) {
    this->split_persistence = split_persistence;
    this->m_split_persistence_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getRepositoryBackupDir() {
    return repository_backup_dir;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setRepositoryBackupDir(OAIConfigNodePropertyString* repository_backup_dir) {
    this->repository_backup_dir = repository_backup_dir;
    this->m_repository_backup_dir_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getBlobGcMaxAgeInSecs() {
    return blob_gc_max_age_in_secs;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setBlobGcMaxAgeInSecs(OAIConfigNodePropertyInteger* blob_gc_max_age_in_secs) {
    this->blob_gc_max_age_in_secs = blob_gc_max_age_in_secs;
    this->m_blob_gc_max_age_in_secs_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getBlobTrackSnapshotIntervalInSecs() {
    return blob_track_snapshot_interval_in_secs;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setBlobTrackSnapshotIntervalInSecs(OAIConfigNodePropertyInteger* blob_track_snapshot_interval_in_secs) {
    this->blob_track_snapshot_interval_in_secs = blob_track_snapshot_interval_in_secs;
    this->m_blob_track_snapshot_interval_in_secs_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getRole() {
    return role;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setRole(OAIConfigNodePropertyString* role) {
    this->role = role;
    this->m_role_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getRegisterDescriptors() {
    return register_descriptors;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setRegisterDescriptors(OAIConfigNodePropertyBoolean* register_descriptors) {
    this->register_descriptors = register_descriptors;
    this->m_register_descriptors_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::getDispatchChanges() {
    return dispatch_changes;
}
void
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::setDispatchChanges(OAIConfigNodePropertyBoolean* dispatch_changes) {
    this->dispatch_changes = dispatch_changes;
    this->m_dispatch_changes_isSet = true;
}


bool
OAIOrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(repository_home != nullptr && repository_home->isSet()){ isObjectUpdated = true; break;}
        if(tarmk_mode != nullptr && tarmk_mode->isSet()){ isObjectUpdated = true; break;}
        if(tarmk_size != nullptr && tarmk_size->isSet()){ isObjectUpdated = true; break;}
        if(segment_cache_size != nullptr && segment_cache_size->isSet()){ isObjectUpdated = true; break;}
        if(string_cache_size != nullptr && string_cache_size->isSet()){ isObjectUpdated = true; break;}
        if(template_cache_size != nullptr && template_cache_size->isSet()){ isObjectUpdated = true; break;}
        if(string_deduplication_cache_size != nullptr && string_deduplication_cache_size->isSet()){ isObjectUpdated = true; break;}
        if(template_deduplication_cache_size != nullptr && template_deduplication_cache_size->isSet()){ isObjectUpdated = true; break;}
        if(node_deduplication_cache_size != nullptr && node_deduplication_cache_size->isSet()){ isObjectUpdated = true; break;}
        if(pause_compaction != nullptr && pause_compaction->isSet()){ isObjectUpdated = true; break;}
        if(compaction_retry_count != nullptr && compaction_retry_count->isSet()){ isObjectUpdated = true; break;}
        if(compaction_force_timeout != nullptr && compaction_force_timeout->isSet()){ isObjectUpdated = true; break;}
        if(compaction_size_delta_estimation != nullptr && compaction_size_delta_estimation->isSet()){ isObjectUpdated = true; break;}
        if(compaction_disable_estimation != nullptr && compaction_disable_estimation->isSet()){ isObjectUpdated = true; break;}
        if(compaction_retained_generations != nullptr && compaction_retained_generations->isSet()){ isObjectUpdated = true; break;}
        if(compaction_memory_threshold != nullptr && compaction_memory_threshold->isSet()){ isObjectUpdated = true; break;}
        if(compaction_progress_log != nullptr && compaction_progress_log->isSet()){ isObjectUpdated = true; break;}
        if(standby != nullptr && standby->isSet()){ isObjectUpdated = true; break;}
        if(custom_blob_store != nullptr && custom_blob_store->isSet()){ isObjectUpdated = true; break;}
        if(custom_segment_store != nullptr && custom_segment_store->isSet()){ isObjectUpdated = true; break;}
        if(split_persistence != nullptr && split_persistence->isSet()){ isObjectUpdated = true; break;}
        if(repository_backup_dir != nullptr && repository_backup_dir->isSet()){ isObjectUpdated = true; break;}
        if(blob_gc_max_age_in_secs != nullptr && blob_gc_max_age_in_secs->isSet()){ isObjectUpdated = true; break;}
        if(blob_track_snapshot_interval_in_secs != nullptr && blob_track_snapshot_interval_in_secs->isSet()){ isObjectUpdated = true; break;}
        if(role != nullptr && role->isSet()){ isObjectUpdated = true; break;}
        if(register_descriptors != nullptr && register_descriptors->isSet()){ isObjectUpdated = true; break;}
        if(dispatch_changes != nullptr && dispatch_changes->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

