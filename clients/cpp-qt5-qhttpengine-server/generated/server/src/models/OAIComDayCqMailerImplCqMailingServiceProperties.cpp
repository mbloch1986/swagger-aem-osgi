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


#include "OAIComDayCqMailerImplCqMailingServiceProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqMailerImplCqMailingServiceProperties::OAIComDayCqMailerImplCqMailingServiceProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqMailerImplCqMailingServiceProperties::OAIComDayCqMailerImplCqMailingServiceProperties() {
    this->init();
}

OAIComDayCqMailerImplCqMailingServiceProperties::~OAIComDayCqMailerImplCqMailingServiceProperties() {
    
}

void
OAIComDayCqMailerImplCqMailingServiceProperties::init() {
    m_max_recipient_count_isSet = false;
}

void
OAIComDayCqMailerImplCqMailingServiceProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqMailerImplCqMailingServiceProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(max_recipient_count, json[QString("max.recipient.count")]);
    
}

QString
OAIComDayCqMailerImplCqMailingServiceProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqMailerImplCqMailingServiceProperties::asJsonObject() const {
    QJsonObject obj;
	if(max_recipient_count.isSet()){
        obj.insert(QString("max.recipient.count"), ::OpenAPI::toJsonValue(max_recipient_count));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComDayCqMailerImplCqMailingServiceProperties::getMaxRecipientCount() const {
    return max_recipient_count;
}
void
OAIComDayCqMailerImplCqMailingServiceProperties::setMaxRecipientCount(const OAIConfigNodePropertyString &max_recipient_count) {
    this->max_recipient_count = max_recipient_count;
    this->m_max_recipient_count_isSet = true;
}


bool
OAIComDayCqMailerImplCqMailingServiceProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(max_recipient_count.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

