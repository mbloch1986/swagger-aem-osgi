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
    init();
    this->fromJson(json);
}

OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties() {
    init();
}

OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::~OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties() {
    this->cleanup();
}

void
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::init() {
    allow_only_system_user = new OAIConfigNodePropertyBoolean();
    m_allow_only_system_user_isSet = false;
}

void
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::cleanup() {
    if(allow_only_system_user != nullptr) { 
        delete allow_only_system_user;
    }
}

OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties*
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&allow_only_system_user, pJson["allow.only.system.user"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::asJsonObject() {
    QJsonObject obj;
    if((allow_only_system_user != nullptr) && (allow_only_system_user->isSet())){
        toJsonValue(QString("allow.only.system.user"), allow_only_system_user, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::getAllowOnlySystemUser() {
    return allow_only_system_user;
}
void
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::setAllowOnlySystemUser(OAIConfigNodePropertyBoolean* allow_only_system_user) {
    this->allow_only_system_user = allow_only_system_user;
    this->m_allow_only_system_user_isSet = true;
}


bool
OAIOrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(allow_only_system_user != nullptr && allow_only_system_user->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

