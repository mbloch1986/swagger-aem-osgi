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


#include "OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties::OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties::OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties() {
    this->init();
}

OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties::~OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties() {
    
}

void
OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties::init() {
    m_skip_bufferedcache_isSet = false;
}

void
OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(skip_bufferedcache, json[QString("skip.bufferedcache")]);
    
}

QString
OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties::asJsonObject() const {
    QJsonObject obj;
	if(skip_bufferedcache.isSet()){
        obj.insert(QString("skip.bufferedcache"), ::OpenAPI::toJsonValue(skip_bufferedcache));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties::getSkipBufferedcache() const {
    return skip_bufferedcache;
}
void
OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties::setSkipBufferedcache(const OAIConfigNodePropertyBoolean &skip_bufferedcache) {
    this->skip_bufferedcache = skip_bufferedcache;
    this->m_skip_bufferedcache_isSet = true;
}


bool
OAIComDayCqDamCoreImplGfxCommonsGfxRendererProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(skip_bufferedcache.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
