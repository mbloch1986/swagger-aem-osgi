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


#include "OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties() {
    this->init();
}

OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::~OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties() {
    
}

void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::init() {
    m_disabled_isSet = false;
    m_debug_isSet = false;
    m_local_index_dir_isSet = false;
    m_enable_open_index_async_isSet = false;
    m_thread_pool_size_isSet = false;
    m_prefetch_index_files_isSet = false;
    m_extracted_text_cache_size_in_mb_isSet = false;
    m_extracted_text_cache_expiry_in_secs_isSet = false;
    m_always_use_pre_extracted_cache_isSet = false;
    m_boolean_clause_limit_isSet = false;
    m_enable_hybrid_indexing_isSet = false;
    m_hybrid_queue_size_isSet = false;
    m_disable_stored_index_definition_isSet = false;
    m_deleted_blobs_collection_enabled_isSet = false;
    m_prop_index_cleaner_interval_in_secs_isSet = false;
    m_enable_single_blob_index_files_isSet = false;
}

void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(disabled, json[QString("disabled")]);
    
    ::OpenAPI::fromJsonValue(debug, json[QString("debug")]);
    
    ::OpenAPI::fromJsonValue(local_index_dir, json[QString("localIndexDir")]);
    
    ::OpenAPI::fromJsonValue(enable_open_index_async, json[QString("enableOpenIndexAsync")]);
    
    ::OpenAPI::fromJsonValue(thread_pool_size, json[QString("threadPoolSize")]);
    
    ::OpenAPI::fromJsonValue(prefetch_index_files, json[QString("prefetchIndexFiles")]);
    
    ::OpenAPI::fromJsonValue(extracted_text_cache_size_in_mb, json[QString("extractedTextCacheSizeInMB")]);
    
    ::OpenAPI::fromJsonValue(extracted_text_cache_expiry_in_secs, json[QString("extractedTextCacheExpiryInSecs")]);
    
    ::OpenAPI::fromJsonValue(always_use_pre_extracted_cache, json[QString("alwaysUsePreExtractedCache")]);
    
    ::OpenAPI::fromJsonValue(boolean_clause_limit, json[QString("booleanClauseLimit")]);
    
    ::OpenAPI::fromJsonValue(enable_hybrid_indexing, json[QString("enableHybridIndexing")]);
    
    ::OpenAPI::fromJsonValue(hybrid_queue_size, json[QString("hybridQueueSize")]);
    
    ::OpenAPI::fromJsonValue(disable_stored_index_definition, json[QString("disableStoredIndexDefinition")]);
    
    ::OpenAPI::fromJsonValue(deleted_blobs_collection_enabled, json[QString("deletedBlobsCollectionEnabled")]);
    
    ::OpenAPI::fromJsonValue(prop_index_cleaner_interval_in_secs, json[QString("propIndexCleanerIntervalInSecs")]);
    
    ::OpenAPI::fromJsonValue(enable_single_blob_index_files, json[QString("enableSingleBlobIndexFiles")]);
    
}

QString
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::asJsonObject() const {
    QJsonObject obj;
	if(disabled.isSet()){
        obj.insert(QString("disabled"), ::OpenAPI::toJsonValue(disabled));
    }
	if(debug.isSet()){
        obj.insert(QString("debug"), ::OpenAPI::toJsonValue(debug));
    }
	if(local_index_dir.isSet()){
        obj.insert(QString("localIndexDir"), ::OpenAPI::toJsonValue(local_index_dir));
    }
	if(enable_open_index_async.isSet()){
        obj.insert(QString("enableOpenIndexAsync"), ::OpenAPI::toJsonValue(enable_open_index_async));
    }
	if(thread_pool_size.isSet()){
        obj.insert(QString("threadPoolSize"), ::OpenAPI::toJsonValue(thread_pool_size));
    }
	if(prefetch_index_files.isSet()){
        obj.insert(QString("prefetchIndexFiles"), ::OpenAPI::toJsonValue(prefetch_index_files));
    }
	if(extracted_text_cache_size_in_mb.isSet()){
        obj.insert(QString("extractedTextCacheSizeInMB"), ::OpenAPI::toJsonValue(extracted_text_cache_size_in_mb));
    }
	if(extracted_text_cache_expiry_in_secs.isSet()){
        obj.insert(QString("extractedTextCacheExpiryInSecs"), ::OpenAPI::toJsonValue(extracted_text_cache_expiry_in_secs));
    }
	if(always_use_pre_extracted_cache.isSet()){
        obj.insert(QString("alwaysUsePreExtractedCache"), ::OpenAPI::toJsonValue(always_use_pre_extracted_cache));
    }
	if(boolean_clause_limit.isSet()){
        obj.insert(QString("booleanClauseLimit"), ::OpenAPI::toJsonValue(boolean_clause_limit));
    }
	if(enable_hybrid_indexing.isSet()){
        obj.insert(QString("enableHybridIndexing"), ::OpenAPI::toJsonValue(enable_hybrid_indexing));
    }
	if(hybrid_queue_size.isSet()){
        obj.insert(QString("hybridQueueSize"), ::OpenAPI::toJsonValue(hybrid_queue_size));
    }
	if(disable_stored_index_definition.isSet()){
        obj.insert(QString("disableStoredIndexDefinition"), ::OpenAPI::toJsonValue(disable_stored_index_definition));
    }
	if(deleted_blobs_collection_enabled.isSet()){
        obj.insert(QString("deletedBlobsCollectionEnabled"), ::OpenAPI::toJsonValue(deleted_blobs_collection_enabled));
    }
	if(prop_index_cleaner_interval_in_secs.isSet()){
        obj.insert(QString("propIndexCleanerIntervalInSecs"), ::OpenAPI::toJsonValue(prop_index_cleaner_interval_in_secs));
    }
	if(enable_single_blob_index_files.isSet()){
        obj.insert(QString("enableSingleBlobIndexFiles"), ::OpenAPI::toJsonValue(enable_single_blob_index_files));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::getDisabled() const {
    return disabled;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::setDisabled(const OAIConfigNodePropertyBoolean &disabled) {
    this->disabled = disabled;
    this->m_disabled_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::getDebug() const {
    return debug;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::setDebug(const OAIConfigNodePropertyBoolean &debug) {
    this->debug = debug;
    this->m_debug_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::getLocalIndexDir() const {
    return local_index_dir;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::setLocalIndexDir(const OAIConfigNodePropertyString &local_index_dir) {
    this->local_index_dir = local_index_dir;
    this->m_local_index_dir_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::getEnableOpenIndexAsync() const {
    return enable_open_index_async;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::setEnableOpenIndexAsync(const OAIConfigNodePropertyBoolean &enable_open_index_async) {
    this->enable_open_index_async = enable_open_index_async;
    this->m_enable_open_index_async_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::getThreadPoolSize() const {
    return thread_pool_size;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::setThreadPoolSize(const OAIConfigNodePropertyInteger &thread_pool_size) {
    this->thread_pool_size = thread_pool_size;
    this->m_thread_pool_size_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::getPrefetchIndexFiles() const {
    return prefetch_index_files;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::setPrefetchIndexFiles(const OAIConfigNodePropertyBoolean &prefetch_index_files) {
    this->prefetch_index_files = prefetch_index_files;
    this->m_prefetch_index_files_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::getExtractedTextCacheSizeInMb() const {
    return extracted_text_cache_size_in_mb;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::setExtractedTextCacheSizeInMb(const OAIConfigNodePropertyInteger &extracted_text_cache_size_in_mb) {
    this->extracted_text_cache_size_in_mb = extracted_text_cache_size_in_mb;
    this->m_extracted_text_cache_size_in_mb_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::getExtractedTextCacheExpiryInSecs() const {
    return extracted_text_cache_expiry_in_secs;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::setExtractedTextCacheExpiryInSecs(const OAIConfigNodePropertyInteger &extracted_text_cache_expiry_in_secs) {
    this->extracted_text_cache_expiry_in_secs = extracted_text_cache_expiry_in_secs;
    this->m_extracted_text_cache_expiry_in_secs_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::getAlwaysUsePreExtractedCache() const {
    return always_use_pre_extracted_cache;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::setAlwaysUsePreExtractedCache(const OAIConfigNodePropertyBoolean &always_use_pre_extracted_cache) {
    this->always_use_pre_extracted_cache = always_use_pre_extracted_cache;
    this->m_always_use_pre_extracted_cache_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::getBooleanClauseLimit() const {
    return boolean_clause_limit;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::setBooleanClauseLimit(const OAIConfigNodePropertyInteger &boolean_clause_limit) {
    this->boolean_clause_limit = boolean_clause_limit;
    this->m_boolean_clause_limit_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::getEnableHybridIndexing() const {
    return enable_hybrid_indexing;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::setEnableHybridIndexing(const OAIConfigNodePropertyBoolean &enable_hybrid_indexing) {
    this->enable_hybrid_indexing = enable_hybrid_indexing;
    this->m_enable_hybrid_indexing_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::getHybridQueueSize() const {
    return hybrid_queue_size;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::setHybridQueueSize(const OAIConfigNodePropertyInteger &hybrid_queue_size) {
    this->hybrid_queue_size = hybrid_queue_size;
    this->m_hybrid_queue_size_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::getDisableStoredIndexDefinition() const {
    return disable_stored_index_definition;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::setDisableStoredIndexDefinition(const OAIConfigNodePropertyBoolean &disable_stored_index_definition) {
    this->disable_stored_index_definition = disable_stored_index_definition;
    this->m_disable_stored_index_definition_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::getDeletedBlobsCollectionEnabled() const {
    return deleted_blobs_collection_enabled;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::setDeletedBlobsCollectionEnabled(const OAIConfigNodePropertyBoolean &deleted_blobs_collection_enabled) {
    this->deleted_blobs_collection_enabled = deleted_blobs_collection_enabled;
    this->m_deleted_blobs_collection_enabled_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::getPropIndexCleanerIntervalInSecs() const {
    return prop_index_cleaner_interval_in_secs;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::setPropIndexCleanerIntervalInSecs(const OAIConfigNodePropertyInteger &prop_index_cleaner_interval_in_secs) {
    this->prop_index_cleaner_interval_in_secs = prop_index_cleaner_interval_in_secs;
    this->m_prop_index_cleaner_interval_in_secs_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::getEnableSingleBlobIndexFiles() const {
    return enable_single_blob_index_files;
}
void
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::setEnableSingleBlobIndexFiles(const OAIConfigNodePropertyBoolean &enable_single_blob_index_files) {
    this->enable_single_blob_index_files = enable_single_blob_index_files;
    this->m_enable_single_blob_index_files_isSet = true;
}


bool
OAIOrgApacheJackrabbitOakPluginsIndexLuceneLuceneIndexProviderServProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(disabled.isSet()){ isObjectUpdated = true; break;}
    
        if(debug.isSet()){ isObjectUpdated = true; break;}
    
        if(local_index_dir.isSet()){ isObjectUpdated = true; break;}
    
        if(enable_open_index_async.isSet()){ isObjectUpdated = true; break;}
    
        if(thread_pool_size.isSet()){ isObjectUpdated = true; break;}
    
        if(prefetch_index_files.isSet()){ isObjectUpdated = true; break;}
    
        if(extracted_text_cache_size_in_mb.isSet()){ isObjectUpdated = true; break;}
    
        if(extracted_text_cache_expiry_in_secs.isSet()){ isObjectUpdated = true; break;}
    
        if(always_use_pre_extracted_cache.isSet()){ isObjectUpdated = true; break;}
    
        if(boolean_clause_limit.isSet()){ isObjectUpdated = true; break;}
    
        if(enable_hybrid_indexing.isSet()){ isObjectUpdated = true; break;}
    
        if(hybrid_queue_size.isSet()){ isObjectUpdated = true; break;}
    
        if(disable_stored_index_definition.isSet()){ isObjectUpdated = true; break;}
    
        if(deleted_blobs_collection_enabled.isSet()){ isObjectUpdated = true; break;}
    
        if(prop_index_cleaner_interval_in_secs.isSet()){ isObjectUpdated = true; break;}
    
        if(enable_single_blob_index_files.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

