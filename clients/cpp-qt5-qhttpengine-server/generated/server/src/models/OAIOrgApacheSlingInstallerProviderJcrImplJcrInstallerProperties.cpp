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


#include "OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties() {
    this->init();
}

OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::~OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties() {
    
}

void
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::init() {
    m_handler_schemes_isSet = false;
    m_sling_jcrinstall_folder_name_regexp_isSet = false;
    m_sling_jcrinstall_folder_max_depth_isSet = false;
    m_sling_jcrinstall_search_path_isSet = false;
    m_sling_jcrinstall_new_config_path_isSet = false;
    m_sling_jcrinstall_signal_path_isSet = false;
    m_sling_jcrinstall_enable_writeback_isSet = false;
}

void
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(handler_schemes, json[QString("handler.schemes")]);
    
    ::OpenAPI::fromJsonValue(sling_jcrinstall_folder_name_regexp, json[QString("sling.jcrinstall.folder.name.regexp")]);
    
    ::OpenAPI::fromJsonValue(sling_jcrinstall_folder_max_depth, json[QString("sling.jcrinstall.folder.max.depth")]);
    
    ::OpenAPI::fromJsonValue(sling_jcrinstall_search_path, json[QString("sling.jcrinstall.search.path")]);
    
    ::OpenAPI::fromJsonValue(sling_jcrinstall_new_config_path, json[QString("sling.jcrinstall.new.config.path")]);
    
    ::OpenAPI::fromJsonValue(sling_jcrinstall_signal_path, json[QString("sling.jcrinstall.signal.path")]);
    
    ::OpenAPI::fromJsonValue(sling_jcrinstall_enable_writeback, json[QString("sling.jcrinstall.enable.writeback")]);
    
}

QString
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::asJsonObject() const {
    QJsonObject obj;
	if(handler_schemes.isSet()){
        obj.insert(QString("handler.schemes"), ::OpenAPI::toJsonValue(handler_schemes));
    }
	if(sling_jcrinstall_folder_name_regexp.isSet()){
        obj.insert(QString("sling.jcrinstall.folder.name.regexp"), ::OpenAPI::toJsonValue(sling_jcrinstall_folder_name_regexp));
    }
	if(sling_jcrinstall_folder_max_depth.isSet()){
        obj.insert(QString("sling.jcrinstall.folder.max.depth"), ::OpenAPI::toJsonValue(sling_jcrinstall_folder_max_depth));
    }
	if(sling_jcrinstall_search_path.isSet()){
        obj.insert(QString("sling.jcrinstall.search.path"), ::OpenAPI::toJsonValue(sling_jcrinstall_search_path));
    }
	if(sling_jcrinstall_new_config_path.isSet()){
        obj.insert(QString("sling.jcrinstall.new.config.path"), ::OpenAPI::toJsonValue(sling_jcrinstall_new_config_path));
    }
	if(sling_jcrinstall_signal_path.isSet()){
        obj.insert(QString("sling.jcrinstall.signal.path"), ::OpenAPI::toJsonValue(sling_jcrinstall_signal_path));
    }
	if(sling_jcrinstall_enable_writeback.isSet()){
        obj.insert(QString("sling.jcrinstall.enable.writeback"), ::OpenAPI::toJsonValue(sling_jcrinstall_enable_writeback));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::getHandlerSchemes() const {
    return handler_schemes;
}
void
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::setHandlerSchemes(const OAIConfigNodePropertyArray &handler_schemes) {
    this->handler_schemes = handler_schemes;
    this->m_handler_schemes_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::getSlingJcrinstallFolderNameRegexp() const {
    return sling_jcrinstall_folder_name_regexp;
}
void
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::setSlingJcrinstallFolderNameRegexp(const OAIConfigNodePropertyString &sling_jcrinstall_folder_name_regexp) {
    this->sling_jcrinstall_folder_name_regexp = sling_jcrinstall_folder_name_regexp;
    this->m_sling_jcrinstall_folder_name_regexp_isSet = true;
}

OAIConfigNodePropertyInteger
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::getSlingJcrinstallFolderMaxDepth() const {
    return sling_jcrinstall_folder_max_depth;
}
void
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::setSlingJcrinstallFolderMaxDepth(const OAIConfigNodePropertyInteger &sling_jcrinstall_folder_max_depth) {
    this->sling_jcrinstall_folder_max_depth = sling_jcrinstall_folder_max_depth;
    this->m_sling_jcrinstall_folder_max_depth_isSet = true;
}

OAIConfigNodePropertyArray
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::getSlingJcrinstallSearchPath() const {
    return sling_jcrinstall_search_path;
}
void
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::setSlingJcrinstallSearchPath(const OAIConfigNodePropertyArray &sling_jcrinstall_search_path) {
    this->sling_jcrinstall_search_path = sling_jcrinstall_search_path;
    this->m_sling_jcrinstall_search_path_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::getSlingJcrinstallNewConfigPath() const {
    return sling_jcrinstall_new_config_path;
}
void
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::setSlingJcrinstallNewConfigPath(const OAIConfigNodePropertyString &sling_jcrinstall_new_config_path) {
    this->sling_jcrinstall_new_config_path = sling_jcrinstall_new_config_path;
    this->m_sling_jcrinstall_new_config_path_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::getSlingJcrinstallSignalPath() const {
    return sling_jcrinstall_signal_path;
}
void
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::setSlingJcrinstallSignalPath(const OAIConfigNodePropertyString &sling_jcrinstall_signal_path) {
    this->sling_jcrinstall_signal_path = sling_jcrinstall_signal_path;
    this->m_sling_jcrinstall_signal_path_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::getSlingJcrinstallEnableWriteback() const {
    return sling_jcrinstall_enable_writeback;
}
void
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::setSlingJcrinstallEnableWriteback(const OAIConfigNodePropertyBoolean &sling_jcrinstall_enable_writeback) {
    this->sling_jcrinstall_enable_writeback = sling_jcrinstall_enable_writeback;
    this->m_sling_jcrinstall_enable_writeback_isSet = true;
}


bool
OAIOrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(handler_schemes.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_jcrinstall_folder_name_regexp.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_jcrinstall_folder_max_depth.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_jcrinstall_search_path.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_jcrinstall_new_config_path.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_jcrinstall_signal_path.isSet()){ isObjectUpdated = true; break;}
    
        if(sling_jcrinstall_enable_writeback.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

