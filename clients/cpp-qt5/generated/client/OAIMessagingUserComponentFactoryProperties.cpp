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
    init();
    this->fromJson(json);
}

OAIMessagingUserComponentFactoryProperties::OAIMessagingUserComponentFactoryProperties() {
    init();
}

OAIMessagingUserComponentFactoryProperties::~OAIMessagingUserComponentFactoryProperties() {
    this->cleanup();
}

void
OAIMessagingUserComponentFactoryProperties::init() {
    priority = new OAIConfigNodePropertyInteger();
    m_priority_isSet = false;
}

void
OAIMessagingUserComponentFactoryProperties::cleanup() {
    if(priority != nullptr) { 
        delete priority;
    }
}

OAIMessagingUserComponentFactoryProperties*
OAIMessagingUserComponentFactoryProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIMessagingUserComponentFactoryProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&priority, pJson["priority"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIMessagingUserComponentFactoryProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIMessagingUserComponentFactoryProperties::asJsonObject() {
    QJsonObject obj;
    if((priority != nullptr) && (priority->isSet())){
        toJsonValue(QString("priority"), priority, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIMessagingUserComponentFactoryProperties::getPriority() {
    return priority;
}
void
OAIMessagingUserComponentFactoryProperties::setPriority(OAIConfigNodePropertyInteger* priority) {
    this->priority = priority;
    this->m_priority_isSet = true;
}


bool
OAIMessagingUserComponentFactoryProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(priority != nullptr && priority->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

