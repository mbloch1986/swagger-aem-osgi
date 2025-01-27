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


#include "OAIOrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties::OAIOrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties::OAIOrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties() {
    this->init();
}

OAIOrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties::~OAIOrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties() {
    
}

void
OAIOrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties::init() {
    m_dir_isSet = false;
}

void
OAIOrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(dir, json[QString("dir")]);
    
}

QString
OAIOrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties::asJsonObject() const {
    QJsonObject obj;
	if(dir.isSet()){
        obj.insert(QString("dir"), ::OpenAPI::toJsonValue(dir));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIOrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties::getDir() const {
    return dir;
}
void
OAIOrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties::setDir(const OAIConfigNodePropertyString &dir) {
    this->dir = dir;
    this->m_dir_isSet = true;
}


bool
OAIOrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(dir.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

