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


#include "OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties::OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties::OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties() {
    this->init();
}

OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties::~OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties() {
    
}

void
OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties::init() {
    m_active_by_default_isSet = false;
    m_default_message_isSet = false;
}

void
OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(active_by_default, json[QString("active.by.default")]);
    
    ::OpenAPI::fromJsonValue(default_message, json[QString("default.message")]);
    
}

QString
OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(active_by_default.isSet()){
        obj.insert(QString("active.by.default"), ::OpenAPI::toJsonValue(active_by_default));
    }
	if(default_message.isSet()){
        obj.insert(QString("default.message"), ::OpenAPI::toJsonValue(default_message));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties::getActiveByDefault() const {
    return active_by_default;
}
void
OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties::setActiveByDefault(const OAIConfigNodePropertyBoolean &active_by_default) {
    this->active_by_default = active_by_default;
    this->m_active_by_default_isSet = true;
}

OAIConfigNodePropertyString
OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties::getDefaultMessage() const {
    return default_message;
}
void
OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties::setDefaultMessage(const OAIConfigNodePropertyString &default_message) {
    this->default_message = default_message;
    this->m_default_message_isSet = true;
}


bool
OAIOrgApacheSlingStartupfilterImplStartupFilterImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(active_by_default.isSet()){ isObjectUpdated = true; break;}
    
        if(default_message.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

