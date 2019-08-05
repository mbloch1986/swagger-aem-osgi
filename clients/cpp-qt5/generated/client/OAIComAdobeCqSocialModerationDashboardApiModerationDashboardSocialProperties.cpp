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


#include "OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties::OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties::OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties() {
    init();
}

OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties::~OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties() {
    this->cleanup();
}

void
OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties::init() {
    priority = new OAIConfigNodePropertyInteger();
    m_priority_isSet = false;
}

void
OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties::cleanup() {
    if(priority != nullptr) { 
        delete priority;
    }
}

OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties*
OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&priority, pJson["priority"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties::asJsonObject() {
    QJsonObject obj;
    if((priority != nullptr) && (priority->isSet())){
        toJsonValue(QString("priority"), priority, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties::getPriority() {
    return priority;
}
void
OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties::setPriority(OAIConfigNodePropertyInteger* priority) {
    this->priority = priority;
    this->m_priority_isSet = true;
}


bool
OAIComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(priority != nullptr && priority->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
