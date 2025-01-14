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


#include "OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties(QString json) {
    this->fromJson(json);
}

OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties() {
    this->init();
}

OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::~OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties() {
    
}

void
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::init() {
    m_allow_only_system_user_isSet = false;
}

void
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(allow_only_system_user, json[QString("allow.only.system.user")]);
    
}

QString
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::asJsonObject() const {
    QJsonObject obj;
	if(allow_only_system_user.isSet()){
        obj.insert(QString("allow.only.system.user"), ::OpenAPI::toJsonValue(allow_only_system_user));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::getAllowOnlySystemUser() const {
    return allow_only_system_user;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::setAllowOnlySystemUser(const OAIConfigNodePropertyBoolean &allow_only_system_user) {
    this->allow_only_system_user = allow_only_system_user;
    this->m_allow_only_system_user_isSet = true;
}


bool
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(allow_only_system_user.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

