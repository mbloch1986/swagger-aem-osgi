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


#include "OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties() {
    init();
}

OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::~OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::init() {
    group = new OAIConfigNodePropertyString();
    m_group_isSet = false;
    ids = new OAIConfigNodePropertyArray();
    m_ids_isSet = false;
}

void
OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::cleanup() {
    if(group != nullptr) { 
        delete group;
    }
    if(ids != nullptr) { 
        delete ids;
    }
}

OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties*
OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&group, pJson["group"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&ids, pJson["ids"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::asJsonObject() {
    QJsonObject obj;
    if((group != nullptr) && (group->isSet())){
        toJsonValue(QString("group"), group, obj, QString("OAIConfigNodePropertyString"));
    }
    if((ids != nullptr) && (ids->isSet())){
        toJsonValue(QString("ids"), ids, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::getGroup() {
    return group;
}
void
OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::setGroup(OAIConfigNodePropertyString* group) {
    this->group = group;
    this->m_group_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::getIds() {
    return ids;
}
void
OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::setIds(OAIConfigNodePropertyArray* ids) {
    this->ids = ids;
    this->m_ids_isSet = true;
}


bool
OAIComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(group != nullptr && group->isSet()){ isObjectUpdated = true; break;}
        if(ids != nullptr && ids->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

