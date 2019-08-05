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


#include "OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties::OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties::OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties() {
    this->init();
}

OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties::~OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties() {
    
}

void
OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties::init() {
    m_paths_isSet = false;
    m_excluded_paths_isSet = false;
}

void
OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(paths, json[QString("paths")]);
    
    ::OpenAPI::fromJsonValue(excluded_paths, json[QString("excludedPaths")]);
    
}

QString
OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties::asJsonObject() const {
    QJsonObject obj;
	if(paths.isSet()){
        obj.insert(QString("paths"), ::OpenAPI::toJsonValue(paths));
    }
	if(excluded_paths.isSet()){
        obj.insert(QString("excludedPaths"), ::OpenAPI::toJsonValue(excluded_paths));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties::getPaths() const {
    return paths;
}
void
OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties::setPaths(const OAIConfigNodePropertyArray &paths) {
    this->paths = paths;
    this->m_paths_isSet = true;
}

OAIConfigNodePropertyArray
OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties::getExcludedPaths() const {
    return excluded_paths;
}
void
OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties::setExcludedPaths(const OAIConfigNodePropertyArray &excluded_paths) {
    this->excluded_paths = excluded_paths;
    this->m_excluded_paths_isSet = true;
}


bool
OAIComDayCqWcmCoreImplEventRepositoryChangeEventListenerProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(paths.isSet()){ isObjectUpdated = true; break;}
    
        if(excluded_paths.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
