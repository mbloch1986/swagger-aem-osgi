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


#include "OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties() {
    this->init();
}

OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::~OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties() {
    
}

void
OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::init() {
    m_com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths_isSet = false;
    m_com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions_isSet = false;
    m_com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms_isSet = false;
    m_com_adobe_cq_dam_mac_sync_damsyncservice_platform_isSet = false;
}

void
OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths, json[QString("com.adobe.cq.dam.mac.sync.damsyncservice.registered_paths")]);
    
    ::OpenAPI::fromJsonValue(com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions, json[QString("com.adobe.cq.dam.mac.sync.damsyncservice.sync.renditions")]);
    
    ::OpenAPI::fromJsonValue(com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms, json[QString("com.adobe.cq.dam.mac.sync.damsyncservice.replicate.thread.wait.ms")]);
    
    ::OpenAPI::fromJsonValue(com_adobe_cq_dam_mac_sync_damsyncservice_platform, json[QString("com.adobe.cq.dam.mac.sync.damsyncservice.platform")]);
    
}

QString
OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths.isSet()){
        obj.insert(QString("com.adobe.cq.dam.mac.sync.damsyncservice.registered_paths"), ::OpenAPI::toJsonValue(com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths));
    }
	if(com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions.isSet()){
        obj.insert(QString("com.adobe.cq.dam.mac.sync.damsyncservice.sync.renditions"), ::OpenAPI::toJsonValue(com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions));
    }
	if(com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms.isSet()){
        obj.insert(QString("com.adobe.cq.dam.mac.sync.damsyncservice.replicate.thread.wait.ms"), ::OpenAPI::toJsonValue(com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms));
    }
	if(com_adobe_cq_dam_mac_sync_damsyncservice_platform.isSet()){
        obj.insert(QString("com.adobe.cq.dam.mac.sync.damsyncservice.platform"), ::OpenAPI::toJsonValue(com_adobe_cq_dam_mac_sync_damsyncservice_platform));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::getComAdobeCqDamMacSyncDamsyncserviceRegisteredPaths() const {
    return com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths;
}
void
OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::setComAdobeCqDamMacSyncDamsyncserviceRegisteredPaths(const OAIConfigNodePropertyArray &com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths) {
    this->com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths = com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths;
    this->m_com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::getComAdobeCqDamMacSyncDamsyncserviceSyncRenditions() const {
    return com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions;
}
void
OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::setComAdobeCqDamMacSyncDamsyncserviceSyncRenditions(const OAIConfigNodePropertyBoolean &com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions) {
    this->com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions = com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions;
    this->m_com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::getComAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs() const {
    return com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms;
}
void
OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::setComAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs(const OAIConfigNodePropertyInteger &com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms) {
    this->com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms = com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms;
    this->m_com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms_isSet = true;
}

OAIConfigNodePropertyDropDown
OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::getComAdobeCqDamMacSyncDamsyncservicePlatform() const {
    return com_adobe_cq_dam_mac_sync_damsyncservice_platform;
}
void
OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::setComAdobeCqDamMacSyncDamsyncservicePlatform(const OAIConfigNodePropertyDropDown &com_adobe_cq_dam_mac_sync_damsyncservice_platform) {
    this->com_adobe_cq_dam_mac_sync_damsyncservice_platform = com_adobe_cq_dam_mac_sync_damsyncservice_platform;
    this->m_com_adobe_cq_dam_mac_sync_damsyncservice_platform_isSet = true;
}


bool
OAIComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths.isSet()){ isObjectUpdated = true; break;}
    
        if(com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions.isSet()){ isObjectUpdated = true; break;}
    
        if(com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms.isSet()){ isObjectUpdated = true; break;}
    
        if(com_adobe_cq_dam_mac_sync_damsyncservice_platform.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

