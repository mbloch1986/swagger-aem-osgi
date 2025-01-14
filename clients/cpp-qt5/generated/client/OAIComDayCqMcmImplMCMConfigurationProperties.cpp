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


#include "OAIComDayCqMcmImplMCMConfigurationProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqMcmImplMCMConfigurationProperties::OAIComDayCqMcmImplMCMConfigurationProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqMcmImplMCMConfigurationProperties::OAIComDayCqMcmImplMCMConfigurationProperties() {
    init();
}

OAIComDayCqMcmImplMCMConfigurationProperties::~OAIComDayCqMcmImplMCMConfigurationProperties() {
    this->cleanup();
}

void
OAIComDayCqMcmImplMCMConfigurationProperties::init() {
    experience_indirection = new OAIConfigNodePropertyArray();
    m_experience_indirection_isSet = false;
    touchpoint_indirection = new OAIConfigNodePropertyArray();
    m_touchpoint_indirection_isSet = false;
}

void
OAIComDayCqMcmImplMCMConfigurationProperties::cleanup() {
    if(experience_indirection != nullptr) { 
        delete experience_indirection;
    }
    if(touchpoint_indirection != nullptr) { 
        delete touchpoint_indirection;
    }
}

OAIComDayCqMcmImplMCMConfigurationProperties*
OAIComDayCqMcmImplMCMConfigurationProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqMcmImplMCMConfigurationProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&experience_indirection, pJson["experience.indirection"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&touchpoint_indirection, pJson["touchpoint.indirection"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComDayCqMcmImplMCMConfigurationProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqMcmImplMCMConfigurationProperties::asJsonObject() {
    QJsonObject obj;
    if((experience_indirection != nullptr) && (experience_indirection->isSet())){
        toJsonValue(QString("experience.indirection"), experience_indirection, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((touchpoint_indirection != nullptr) && (touchpoint_indirection->isSet())){
        toJsonValue(QString("touchpoint.indirection"), touchpoint_indirection, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComDayCqMcmImplMCMConfigurationProperties::getExperienceIndirection() {
    return experience_indirection;
}
void
OAIComDayCqMcmImplMCMConfigurationProperties::setExperienceIndirection(OAIConfigNodePropertyArray* experience_indirection) {
    this->experience_indirection = experience_indirection;
    this->m_experience_indirection_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComDayCqMcmImplMCMConfigurationProperties::getTouchpointIndirection() {
    return touchpoint_indirection;
}
void
OAIComDayCqMcmImplMCMConfigurationProperties::setTouchpointIndirection(OAIConfigNodePropertyArray* touchpoint_indirection) {
    this->touchpoint_indirection = touchpoint_indirection;
    this->m_touchpoint_indirection_isSet = true;
}


bool
OAIComDayCqMcmImplMCMConfigurationProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(experience_indirection != nullptr && experience_indirection->isSet()){ isObjectUpdated = true; break;}
        if(touchpoint_indirection != nullptr && touchpoint_indirection->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

