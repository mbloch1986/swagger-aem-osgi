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


#include "OAIComDayCqWcmNotificationImplNotificationManagerImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqWcmNotificationImplNotificationManagerImplProperties::OAIComDayCqWcmNotificationImplNotificationManagerImplProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqWcmNotificationImplNotificationManagerImplProperties::OAIComDayCqWcmNotificationImplNotificationManagerImplProperties() {
    this->init();
}

OAIComDayCqWcmNotificationImplNotificationManagerImplProperties::~OAIComDayCqWcmNotificationImplNotificationManagerImplProperties() {
    
}

void
OAIComDayCqWcmNotificationImplNotificationManagerImplProperties::init() {
    m_event_topics_isSet = false;
}

void
OAIComDayCqWcmNotificationImplNotificationManagerImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqWcmNotificationImplNotificationManagerImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(event_topics, json[QString("event.topics")]);
    
}

QString
OAIComDayCqWcmNotificationImplNotificationManagerImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWcmNotificationImplNotificationManagerImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(event_topics.isSet()){
        obj.insert(QString("event.topics"), ::OpenAPI::toJsonValue(event_topics));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComDayCqWcmNotificationImplNotificationManagerImplProperties::getEventTopics() const {
    return event_topics;
}
void
OAIComDayCqWcmNotificationImplNotificationManagerImplProperties::setEventTopics(const OAIConfigNodePropertyArray &event_topics) {
    this->event_topics = event_topics;
    this->m_event_topics_isSet = true;
}


bool
OAIComDayCqWcmNotificationImplNotificationManagerImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(event_topics.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

