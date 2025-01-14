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


#include "OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties::OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties::OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties() {
    this->init();
}

OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties::~OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties() {
    
}

void
OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties::init() {
    m_cq_mime_type_blacklist_isSet = false;
    m_cq_dam_empty_mime_isSet = false;
}

void
OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(cq_mime_type_blacklist, json[QString("cq.mime.type.blacklist")]);
    
    ::OpenAPI::fromJsonValue(cq_dam_empty_mime, json[QString("cq.dam.empty.mime")]);
    
}

QString
OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties::asJsonObject() const {
    QJsonObject obj;
	if(cq_mime_type_blacklist.isSet()){
        obj.insert(QString("cq.mime.type.blacklist"), ::OpenAPI::toJsonValue(cq_mime_type_blacklist));
    }
	if(cq_dam_empty_mime.isSet()){
        obj.insert(QString("cq.dam.empty.mime"), ::OpenAPI::toJsonValue(cq_dam_empty_mime));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties::getCqMimeTypeBlacklist() const {
    return cq_mime_type_blacklist;
}
void
OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties::setCqMimeTypeBlacklist(const OAIConfigNodePropertyArray &cq_mime_type_blacklist) {
    this->cq_mime_type_blacklist = cq_mime_type_blacklist;
    this->m_cq_mime_type_blacklist_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties::getCqDamEmptyMime() const {
    return cq_dam_empty_mime;
}
void
OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties::setCqDamEmptyMime(const OAIConfigNodePropertyBoolean &cq_dam_empty_mime) {
    this->cq_dam_empty_mime = cq_dam_empty_mime;
    this->m_cq_dam_empty_mime_isSet = true;
}


bool
OAIComDayCqDamCoreImplServletDamContentDispositionFilterProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(cq_mime_type_blacklist.isSet()){ isObjectUpdated = true; break;}
    
        if(cq_dam_empty_mime.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

