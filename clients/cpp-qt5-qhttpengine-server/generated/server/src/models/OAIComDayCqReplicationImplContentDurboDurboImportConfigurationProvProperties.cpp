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


#include "OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties() {
    this->init();
}

OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::~OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties() {
    
}

void
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::init() {
    m_preserve_hierarchy_nodes_isSet = false;
    m_ignore_versioning_isSet = false;
    m_import_acl_isSet = false;
    m_save_threshold_isSet = false;
    m_preserve_user_paths_isSet = false;
    m_preserve_uuid_isSet = false;
    m_preserve_uuid_nodetypes_isSet = false;
    m_preserve_uuid_subtrees_isSet = false;
    m_auto_commit_isSet = false;
}

void
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(preserve_hierarchy_nodes, json[QString("preserve.hierarchy.nodes")]);
    
    ::OpenAPI::fromJsonValue(ignore_versioning, json[QString("ignore.versioning")]);
    
    ::OpenAPI::fromJsonValue(import_acl, json[QString("import.acl")]);
    
    ::OpenAPI::fromJsonValue(save_threshold, json[QString("save.threshold")]);
    
    ::OpenAPI::fromJsonValue(preserve_user_paths, json[QString("preserve.user.paths")]);
    
    ::OpenAPI::fromJsonValue(preserve_uuid, json[QString("preserve.uuid")]);
    
    ::OpenAPI::fromJsonValue(preserve_uuid_nodetypes, json[QString("preserve.uuid.nodetypes")]);
    
    ::OpenAPI::fromJsonValue(preserve_uuid_subtrees, json[QString("preserve.uuid.subtrees")]);
    
    ::OpenAPI::fromJsonValue(auto_commit, json[QString("auto.commit")]);
    
}

QString
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::asJsonObject() const {
    QJsonObject obj;
	if(preserve_hierarchy_nodes.isSet()){
        obj.insert(QString("preserve.hierarchy.nodes"), ::OpenAPI::toJsonValue(preserve_hierarchy_nodes));
    }
	if(ignore_versioning.isSet()){
        obj.insert(QString("ignore.versioning"), ::OpenAPI::toJsonValue(ignore_versioning));
    }
	if(import_acl.isSet()){
        obj.insert(QString("import.acl"), ::OpenAPI::toJsonValue(import_acl));
    }
	if(save_threshold.isSet()){
        obj.insert(QString("save.threshold"), ::OpenAPI::toJsonValue(save_threshold));
    }
	if(preserve_user_paths.isSet()){
        obj.insert(QString("preserve.user.paths"), ::OpenAPI::toJsonValue(preserve_user_paths));
    }
	if(preserve_uuid.isSet()){
        obj.insert(QString("preserve.uuid"), ::OpenAPI::toJsonValue(preserve_uuid));
    }
	if(preserve_uuid_nodetypes.isSet()){
        obj.insert(QString("preserve.uuid.nodetypes"), ::OpenAPI::toJsonValue(preserve_uuid_nodetypes));
    }
	if(preserve_uuid_subtrees.isSet()){
        obj.insert(QString("preserve.uuid.subtrees"), ::OpenAPI::toJsonValue(preserve_uuid_subtrees));
    }
	if(auto_commit.isSet()){
        obj.insert(QString("auto.commit"), ::OpenAPI::toJsonValue(auto_commit));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::getPreserveHierarchyNodes() const {
    return preserve_hierarchy_nodes;
}
void
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::setPreserveHierarchyNodes(const OAIConfigNodePropertyBoolean &preserve_hierarchy_nodes) {
    this->preserve_hierarchy_nodes = preserve_hierarchy_nodes;
    this->m_preserve_hierarchy_nodes_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::getIgnoreVersioning() const {
    return ignore_versioning;
}
void
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::setIgnoreVersioning(const OAIConfigNodePropertyBoolean &ignore_versioning) {
    this->ignore_versioning = ignore_versioning;
    this->m_ignore_versioning_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::getImportAcl() const {
    return import_acl;
}
void
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::setImportAcl(const OAIConfigNodePropertyBoolean &import_acl) {
    this->import_acl = import_acl;
    this->m_import_acl_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::getSaveThreshold() const {
    return save_threshold;
}
void
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::setSaveThreshold(const OAIConfigNodePropertyInteger &save_threshold) {
    this->save_threshold = save_threshold;
    this->m_save_threshold_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::getPreserveUserPaths() const {
    return preserve_user_paths;
}
void
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::setPreserveUserPaths(const OAIConfigNodePropertyBoolean &preserve_user_paths) {
    this->preserve_user_paths = preserve_user_paths;
    this->m_preserve_user_paths_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::getPreserveUuid() const {
    return preserve_uuid;
}
void
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::setPreserveUuid(const OAIConfigNodePropertyBoolean &preserve_uuid) {
    this->preserve_uuid = preserve_uuid;
    this->m_preserve_uuid_isSet = true;
}

OAIConfigNodePropertyArray
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::getPreserveUuidNodetypes() const {
    return preserve_uuid_nodetypes;
}
void
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::setPreserveUuidNodetypes(const OAIConfigNodePropertyArray &preserve_uuid_nodetypes) {
    this->preserve_uuid_nodetypes = preserve_uuid_nodetypes;
    this->m_preserve_uuid_nodetypes_isSet = true;
}

OAIConfigNodePropertyArray
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::getPreserveUuidSubtrees() const {
    return preserve_uuid_subtrees;
}
void
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::setPreserveUuidSubtrees(const OAIConfigNodePropertyArray &preserve_uuid_subtrees) {
    this->preserve_uuid_subtrees = preserve_uuid_subtrees;
    this->m_preserve_uuid_subtrees_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::getAutoCommit() const {
    return auto_commit;
}
void
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::setAutoCommit(const OAIConfigNodePropertyBoolean &auto_commit) {
    this->auto_commit = auto_commit;
    this->m_auto_commit_isSet = true;
}


bool
OAIComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(preserve_hierarchy_nodes.isSet()){ isObjectUpdated = true; break;}
    
        if(ignore_versioning.isSet()){ isObjectUpdated = true; break;}
    
        if(import_acl.isSet()){ isObjectUpdated = true; break;}
    
        if(save_threshold.isSet()){ isObjectUpdated = true; break;}
    
        if(preserve_user_paths.isSet()){ isObjectUpdated = true; break;}
    
        if(preserve_uuid.isSet()){ isObjectUpdated = true; break;}
    
        if(preserve_uuid_nodetypes.isSet()){ isObjectUpdated = true; break;}
    
        if(preserve_uuid_subtrees.isSet()){ isObjectUpdated = true; break;}
    
        if(auto_commit.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
