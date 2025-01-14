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


#include "OAIComDayCqWcmCoreImplLanguageManagerImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqWcmCoreImplLanguageManagerImplProperties::OAIComDayCqWcmCoreImplLanguageManagerImplProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqWcmCoreImplLanguageManagerImplProperties::OAIComDayCqWcmCoreImplLanguageManagerImplProperties() {
    init();
}

OAIComDayCqWcmCoreImplLanguageManagerImplProperties::~OAIComDayCqWcmCoreImplLanguageManagerImplProperties() {
    this->cleanup();
}

void
OAIComDayCqWcmCoreImplLanguageManagerImplProperties::init() {
    langmgr_list_path = new OAIConfigNodePropertyString();
    m_langmgr_list_path_isSet = false;
    langmgr_country_default = new OAIConfigNodePropertyArray();
    m_langmgr_country_default_isSet = false;
}

void
OAIComDayCqWcmCoreImplLanguageManagerImplProperties::cleanup() {
    if(langmgr_list_path != nullptr) { 
        delete langmgr_list_path;
    }
    if(langmgr_country_default != nullptr) { 
        delete langmgr_country_default;
    }
}

OAIComDayCqWcmCoreImplLanguageManagerImplProperties*
OAIComDayCqWcmCoreImplLanguageManagerImplProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqWcmCoreImplLanguageManagerImplProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&langmgr_list_path, pJson["langmgr.list.path"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&langmgr_country_default, pJson["langmgr.country.default"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComDayCqWcmCoreImplLanguageManagerImplProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWcmCoreImplLanguageManagerImplProperties::asJsonObject() {
    QJsonObject obj;
    if((langmgr_list_path != nullptr) && (langmgr_list_path->isSet())){
        toJsonValue(QString("langmgr.list.path"), langmgr_list_path, obj, QString("OAIConfigNodePropertyString"));
    }
    if((langmgr_country_default != nullptr) && (langmgr_country_default->isSet())){
        toJsonValue(QString("langmgr.country.default"), langmgr_country_default, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComDayCqWcmCoreImplLanguageManagerImplProperties::getLangmgrListPath() {
    return langmgr_list_path;
}
void
OAIComDayCqWcmCoreImplLanguageManagerImplProperties::setLangmgrListPath(OAIConfigNodePropertyString* langmgr_list_path) {
    this->langmgr_list_path = langmgr_list_path;
    this->m_langmgr_list_path_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComDayCqWcmCoreImplLanguageManagerImplProperties::getLangmgrCountryDefault() {
    return langmgr_country_default;
}
void
OAIComDayCqWcmCoreImplLanguageManagerImplProperties::setLangmgrCountryDefault(OAIConfigNodePropertyArray* langmgr_country_default) {
    this->langmgr_country_default = langmgr_country_default;
    this->m_langmgr_country_default_isSet = true;
}


bool
OAIComDayCqWcmCoreImplLanguageManagerImplProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(langmgr_list_path != nullptr && langmgr_list_path->isSet()){ isObjectUpdated = true; break;}
        if(langmgr_country_default != nullptr && langmgr_country_default->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

