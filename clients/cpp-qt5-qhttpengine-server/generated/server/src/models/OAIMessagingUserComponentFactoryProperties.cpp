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


#include "OAIMessagingUserComponentFactoryProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIMessagingUserComponentFactoryProperties::OAIMessagingUserComponentFactoryProperties(QString json) {
    this->fromJson(json);
}

OAIMessagingUserComponentFactoryProperties::OAIMessagingUserComponentFactoryProperties() {
    this->init();
}

OAIMessagingUserComponentFactoryProperties::~OAIMessagingUserComponentFactoryProperties() {
    
}

void
OAIMessagingUserComponentFactoryProperties::init() {
    m_priority_isSet = false;
}

void
OAIMessagingUserComponentFactoryProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIMessagingUserComponentFactoryProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(priority, json[QString("priority")]);
    
}

QString
OAIMessagingUserComponentFactoryProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIMessagingUserComponentFactoryProperties::asJsonObject() const {
    QJsonObject obj;
	if(priority.isSet()){
        obj.insert(QString("priority"), ::OpenAPI::toJsonValue(priority));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIMessagingUserComponentFactoryProperties::getPriority() const {
    return priority;
}
void
OAIMessagingUserComponentFactoryProperties::setPriority(const OAIConfigNodePropertyInteger &priority) {
    this->priority = priority;
    this->m_priority_isSet = true;
}


bool
OAIMessagingUserComponentFactoryProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(priority.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
