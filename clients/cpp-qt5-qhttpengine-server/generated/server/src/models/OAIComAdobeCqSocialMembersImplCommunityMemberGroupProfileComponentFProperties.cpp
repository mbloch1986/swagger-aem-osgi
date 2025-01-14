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


#include "OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties::OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties::OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties() {
    this->init();
}

OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties::~OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties() {
    
}

void
OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties::init() {
    m_everyone_limit_isSet = false;
    m_priority_isSet = false;
}

void
OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(everyone_limit, json[QString("everyoneLimit")]);
    
    ::OpenAPI::fromJsonValue(priority, json[QString("priority")]);
    
}

QString
OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties::asJsonObject() const {
    QJsonObject obj;
	if(everyone_limit.isSet()){
        obj.insert(QString("everyoneLimit"), ::OpenAPI::toJsonValue(everyone_limit));
    }
	if(priority.isSet()){
        obj.insert(QString("priority"), ::OpenAPI::toJsonValue(priority));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties::getEveryoneLimit() const {
    return everyone_limit;
}
void
OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties::setEveryoneLimit(const OAIConfigNodePropertyInteger &everyone_limit) {
    this->everyone_limit = everyone_limit;
    this->m_everyone_limit_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties::getPriority() const {
    return priority;
}
void
OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties::setPriority(const OAIConfigNodePropertyInteger &priority) {
    this->priority = priority;
    this->m_priority_isSet = true;
}


bool
OAIComAdobeCqSocialMembersImplCommunityMemberGroupProfileComponentFProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(everyone_limit.isSet()){ isObjectUpdated = true; break;}
    
        if(priority.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

