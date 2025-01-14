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


#include "OAIComDayCqWcmCoreImplVersionManagerImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqWcmCoreImplVersionManagerImplProperties::OAIComDayCqWcmCoreImplVersionManagerImplProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqWcmCoreImplVersionManagerImplProperties::OAIComDayCqWcmCoreImplVersionManagerImplProperties() {
    this->init();
}

OAIComDayCqWcmCoreImplVersionManagerImplProperties::~OAIComDayCqWcmCoreImplVersionManagerImplProperties() {
    
}

void
OAIComDayCqWcmCoreImplVersionManagerImplProperties::init() {
    m_versionmanager_create_version_on_activation_isSet = false;
    m_versionmanager_purging_enabled_isSet = false;
    m_versionmanager_purge_paths_isSet = false;
    m_versionmanager_iv_paths_isSet = false;
    m_versionmanager_max_age_days_isSet = false;
    m_versionmanager_max_number_versions_isSet = false;
    m_versionmanager_min_number_versions_isSet = false;
}

void
OAIComDayCqWcmCoreImplVersionManagerImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqWcmCoreImplVersionManagerImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(versionmanager_create_version_on_activation, json[QString("versionmanager.createVersionOnActivation")]);
    
    ::OpenAPI::fromJsonValue(versionmanager_purging_enabled, json[QString("versionmanager.purgingEnabled")]);
    
    ::OpenAPI::fromJsonValue(versionmanager_purge_paths, json[QString("versionmanager.purgePaths")]);
    
    ::OpenAPI::fromJsonValue(versionmanager_iv_paths, json[QString("versionmanager.ivPaths")]);
    
    ::OpenAPI::fromJsonValue(versionmanager_max_age_days, json[QString("versionmanager.maxAgeDays")]);
    
    ::OpenAPI::fromJsonValue(versionmanager_max_number_versions, json[QString("versionmanager.maxNumberVersions")]);
    
    ::OpenAPI::fromJsonValue(versionmanager_min_number_versions, json[QString("versionmanager.minNumberVersions")]);
    
}

QString
OAIComDayCqWcmCoreImplVersionManagerImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWcmCoreImplVersionManagerImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(versionmanager_create_version_on_activation.isSet()){
        obj.insert(QString("versionmanager.createVersionOnActivation"), ::OpenAPI::toJsonValue(versionmanager_create_version_on_activation));
    }
	if(versionmanager_purging_enabled.isSet()){
        obj.insert(QString("versionmanager.purgingEnabled"), ::OpenAPI::toJsonValue(versionmanager_purging_enabled));
    }
	if(versionmanager_purge_paths.isSet()){
        obj.insert(QString("versionmanager.purgePaths"), ::OpenAPI::toJsonValue(versionmanager_purge_paths));
    }
	if(versionmanager_iv_paths.isSet()){
        obj.insert(QString("versionmanager.ivPaths"), ::OpenAPI::toJsonValue(versionmanager_iv_paths));
    }
	if(versionmanager_max_age_days.isSet()){
        obj.insert(QString("versionmanager.maxAgeDays"), ::OpenAPI::toJsonValue(versionmanager_max_age_days));
    }
	if(versionmanager_max_number_versions.isSet()){
        obj.insert(QString("versionmanager.maxNumberVersions"), ::OpenAPI::toJsonValue(versionmanager_max_number_versions));
    }
	if(versionmanager_min_number_versions.isSet()){
        obj.insert(QString("versionmanager.minNumberVersions"), ::OpenAPI::toJsonValue(versionmanager_min_number_versions));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComDayCqWcmCoreImplVersionManagerImplProperties::getVersionmanagerCreateVersionOnActivation() const {
    return versionmanager_create_version_on_activation;
}
void
OAIComDayCqWcmCoreImplVersionManagerImplProperties::setVersionmanagerCreateVersionOnActivation(const OAIConfigNodePropertyBoolean &versionmanager_create_version_on_activation) {
    this->versionmanager_create_version_on_activation = versionmanager_create_version_on_activation;
    this->m_versionmanager_create_version_on_activation_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqWcmCoreImplVersionManagerImplProperties::getVersionmanagerPurgingEnabled() const {
    return versionmanager_purging_enabled;
}
void
OAIComDayCqWcmCoreImplVersionManagerImplProperties::setVersionmanagerPurgingEnabled(const OAIConfigNodePropertyBoolean &versionmanager_purging_enabled) {
    this->versionmanager_purging_enabled = versionmanager_purging_enabled;
    this->m_versionmanager_purging_enabled_isSet = true;
}

OAIConfigNodePropertyArray
OAIComDayCqWcmCoreImplVersionManagerImplProperties::getVersionmanagerPurgePaths() const {
    return versionmanager_purge_paths;
}
void
OAIComDayCqWcmCoreImplVersionManagerImplProperties::setVersionmanagerPurgePaths(const OAIConfigNodePropertyArray &versionmanager_purge_paths) {
    this->versionmanager_purge_paths = versionmanager_purge_paths;
    this->m_versionmanager_purge_paths_isSet = true;
}

OAIConfigNodePropertyArray
OAIComDayCqWcmCoreImplVersionManagerImplProperties::getVersionmanagerIvPaths() const {
    return versionmanager_iv_paths;
}
void
OAIComDayCqWcmCoreImplVersionManagerImplProperties::setVersionmanagerIvPaths(const OAIConfigNodePropertyArray &versionmanager_iv_paths) {
    this->versionmanager_iv_paths = versionmanager_iv_paths;
    this->m_versionmanager_iv_paths_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComDayCqWcmCoreImplVersionManagerImplProperties::getVersionmanagerMaxAgeDays() const {
    return versionmanager_max_age_days;
}
void
OAIComDayCqWcmCoreImplVersionManagerImplProperties::setVersionmanagerMaxAgeDays(const OAIConfigNodePropertyInteger &versionmanager_max_age_days) {
    this->versionmanager_max_age_days = versionmanager_max_age_days;
    this->m_versionmanager_max_age_days_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComDayCqWcmCoreImplVersionManagerImplProperties::getVersionmanagerMaxNumberVersions() const {
    return versionmanager_max_number_versions;
}
void
OAIComDayCqWcmCoreImplVersionManagerImplProperties::setVersionmanagerMaxNumberVersions(const OAIConfigNodePropertyInteger &versionmanager_max_number_versions) {
    this->versionmanager_max_number_versions = versionmanager_max_number_versions;
    this->m_versionmanager_max_number_versions_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComDayCqWcmCoreImplVersionManagerImplProperties::getVersionmanagerMinNumberVersions() const {
    return versionmanager_min_number_versions;
}
void
OAIComDayCqWcmCoreImplVersionManagerImplProperties::setVersionmanagerMinNumberVersions(const OAIConfigNodePropertyInteger &versionmanager_min_number_versions) {
    this->versionmanager_min_number_versions = versionmanager_min_number_versions;
    this->m_versionmanager_min_number_versions_isSet = true;
}


bool
OAIComDayCqWcmCoreImplVersionManagerImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(versionmanager_create_version_on_activation.isSet()){ isObjectUpdated = true; break;}
    
        if(versionmanager_purging_enabled.isSet()){ isObjectUpdated = true; break;}
    
        if(versionmanager_purge_paths.isSet()){ isObjectUpdated = true; break;}
    
        if(versionmanager_iv_paths.isSet()){ isObjectUpdated = true; break;}
    
        if(versionmanager_max_age_days.isSet()){ isObjectUpdated = true; break;}
    
        if(versionmanager_max_number_versions.isSet()){ isObjectUpdated = true; break;}
    
        if(versionmanager_min_number_versions.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

