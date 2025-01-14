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


#include "OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties::OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties::OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties() {
    init();
}

OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties::~OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties() {
    this->cleanup();
}

void
OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties::init() {
    enabled = new OAIConfigNodePropertyBoolean();
    m_enabled_isSet = false;
    disabled_for_groups = new OAIConfigNodePropertyArray();
    m_disabled_for_groups_isSet = false;
}

void
OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties::cleanup() {
    if(enabled != nullptr) { 
        delete enabled;
    }
    if(disabled_for_groups != nullptr) { 
        delete disabled_for_groups;
    }
}

OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties*
OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&enabled, pJson["enabled"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&disabled_for_groups, pJson["disabledForGroups"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties::asJsonObject() {
    QJsonObject obj;
    if((enabled != nullptr) && (enabled->isSet())){
        toJsonValue(QString("enabled"), enabled, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((disabled_for_groups != nullptr) && (disabled_for_groups->isSet())){
        toJsonValue(QString("disabledForGroups"), disabled_for_groups, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties::getEnabled() {
    return enabled;
}
void
OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties::setEnabled(OAIConfigNodePropertyBoolean* enabled) {
    this->enabled = enabled;
    this->m_enabled_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties::getDisabledForGroups() {
    return disabled_for_groups;
}
void
OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties::setDisabledForGroups(OAIConfigNodePropertyArray* disabled_for_groups) {
    this->disabled_for_groups = disabled_for_groups;
    this->m_disabled_for_groups_isSet = true;
}


bool
OAIComAdobeCqExperiencelogImplExperienceLogConfigServletProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(enabled != nullptr && enabled->isSet()){ isObjectUpdated = true; break;}
        if(disabled_for_groups != nullptr && disabled_for_groups->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

