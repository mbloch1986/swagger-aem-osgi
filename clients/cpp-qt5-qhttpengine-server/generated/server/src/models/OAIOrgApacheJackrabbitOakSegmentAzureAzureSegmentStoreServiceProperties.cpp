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


#include "OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties() {
    this->init();
}

OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::~OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties() {
    
}

void
OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::init() {
    m_account_name_isSet = false;
    m_container_name_isSet = false;
    m_access_key_isSet = false;
    m_root_path_isSet = false;
    m_connection_url_isSet = false;
}

void
OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(account_name, json[QString("accountName")]);
    
    ::OpenAPI::fromJsonValue(container_name, json[QString("containerName")]);
    
    ::OpenAPI::fromJsonValue(access_key, json[QString("accessKey")]);
    
    ::OpenAPI::fromJsonValue(root_path, json[QString("rootPath")]);
    
    ::OpenAPI::fromJsonValue(connection_url, json[QString("connectionURL")]);
    
}

QString
OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::asJsonObject() const {
    QJsonObject obj;
	if(account_name.isSet()){
        obj.insert(QString("accountName"), ::OpenAPI::toJsonValue(account_name));
    }
	if(container_name.isSet()){
        obj.insert(QString("containerName"), ::OpenAPI::toJsonValue(container_name));
    }
	if(access_key.isSet()){
        obj.insert(QString("accessKey"), ::OpenAPI::toJsonValue(access_key));
    }
	if(root_path.isSet()){
        obj.insert(QString("rootPath"), ::OpenAPI::toJsonValue(root_path));
    }
	if(connection_url.isSet()){
        obj.insert(QString("connectionURL"), ::OpenAPI::toJsonValue(connection_url));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::getAccountName() const {
    return account_name;
}
void
OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::setAccountName(const OAIConfigNodePropertyString &account_name) {
    this->account_name = account_name;
    this->m_account_name_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::getContainerName() const {
    return container_name;
}
void
OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::setContainerName(const OAIConfigNodePropertyString &container_name) {
    this->container_name = container_name;
    this->m_container_name_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::getAccessKey() const {
    return access_key;
}
void
OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::setAccessKey(const OAIConfigNodePropertyString &access_key) {
    this->access_key = access_key;
    this->m_access_key_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::getRootPath() const {
    return root_path;
}
void
OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::setRootPath(const OAIConfigNodePropertyString &root_path) {
    this->root_path = root_path;
    this->m_root_path_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::getConnectionUrl() const {
    return connection_url;
}
void
OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::setConnectionUrl(const OAIConfigNodePropertyString &connection_url) {
    this->connection_url = connection_url;
    this->m_connection_url_isSet = true;
}


bool
OAIOrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(account_name.isSet()){ isObjectUpdated = true; break;}
    
        if(container_name.isSet()){ isObjectUpdated = true; break;}
    
        if(access_key.isSet()){ isObjectUpdated = true; break;}
    
        if(root_path.isSet()){ isObjectUpdated = true; break;}
    
        if(connection_url.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

