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


#include "OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties() {
    this->init();
}

OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::~OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties() {
    
}

void
OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::init() {
    m_name_isSet = false;
    m_username_isSet = false;
    m_password_isSet = false;
}

void
OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    
    ::OpenAPI::fromJsonValue(username, json[QString("username")]);
    
    ::OpenAPI::fromJsonValue(password, json[QString("password")]);
    
}

QString
OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::asJsonObject() const {
    QJsonObject obj;
	if(name.isSet()){
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
	if(username.isSet()){
        obj.insert(QString("username"), ::OpenAPI::toJsonValue(username));
    }
	if(password.isSet()){
        obj.insert(QString("password"), ::OpenAPI::toJsonValue(password));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::getName() const {
    return name;
}
void
OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::setName(const OAIConfigNodePropertyString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::getUsername() const {
    return username;
}
void
OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::setUsername(const OAIConfigNodePropertyString &username) {
    this->username = username;
    this->m_username_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::getPassword() const {
    return password;
}
void
OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::setPassword(const OAIConfigNodePropertyString &password) {
    this->password = password;
    this->m_password_isSet = true;
}


bool
OAIOrgApacheSlingDistributionTransportImplUserCredentialsDistributiProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(name.isSet()){ isObjectUpdated = true; break;}
    
        if(username.isSet()){ isObjectUpdated = true; break;}
    
        if(password.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

