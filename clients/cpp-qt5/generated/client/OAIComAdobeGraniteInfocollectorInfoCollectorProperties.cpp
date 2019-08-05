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


#include "OAIComAdobeGraniteInfocollectorInfoCollectorProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteInfocollectorInfoCollectorProperties::OAIComAdobeGraniteInfocollectorInfoCollectorProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteInfocollectorInfoCollectorProperties::OAIComAdobeGraniteInfocollectorInfoCollectorProperties() {
    init();
}

OAIComAdobeGraniteInfocollectorInfoCollectorProperties::~OAIComAdobeGraniteInfocollectorInfoCollectorProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::init() {
    granite_infocollector_include_thread_dumps = new OAIConfigNodePropertyBoolean();
    m_granite_infocollector_include_thread_dumps_isSet = false;
    granite_infocollector_include_heap_dump = new OAIConfigNodePropertyBoolean();
    m_granite_infocollector_include_heap_dump_isSet = false;
}

void
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::cleanup() {
    if(granite_infocollector_include_thread_dumps != nullptr) { 
        delete granite_infocollector_include_thread_dumps;
    }
    if(granite_infocollector_include_heap_dump != nullptr) { 
        delete granite_infocollector_include_heap_dump;
    }
}

OAIComAdobeGraniteInfocollectorInfoCollectorProperties*
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&granite_infocollector_include_thread_dumps, pJson["granite.infocollector.includeThreadDumps"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&granite_infocollector_include_heap_dump, pJson["granite.infocollector.includeHeapDump"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::asJsonObject() {
    QJsonObject obj;
    if((granite_infocollector_include_thread_dumps != nullptr) && (granite_infocollector_include_thread_dumps->isSet())){
        toJsonValue(QString("granite.infocollector.includeThreadDumps"), granite_infocollector_include_thread_dumps, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((granite_infocollector_include_heap_dump != nullptr) && (granite_infocollector_include_heap_dump->isSet())){
        toJsonValue(QString("granite.infocollector.includeHeapDump"), granite_infocollector_include_heap_dump, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::getGraniteInfocollectorIncludeThreadDumps() {
    return granite_infocollector_include_thread_dumps;
}
void
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::setGraniteInfocollectorIncludeThreadDumps(OAIConfigNodePropertyBoolean* granite_infocollector_include_thread_dumps) {
    this->granite_infocollector_include_thread_dumps = granite_infocollector_include_thread_dumps;
    this->m_granite_infocollector_include_thread_dumps_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::getGraniteInfocollectorIncludeHeapDump() {
    return granite_infocollector_include_heap_dump;
}
void
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::setGraniteInfocollectorIncludeHeapDump(OAIConfigNodePropertyBoolean* granite_infocollector_include_heap_dump) {
    this->granite_infocollector_include_heap_dump = granite_infocollector_include_heap_dump;
    this->m_granite_infocollector_include_heap_dump_isSet = true;
}


bool
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(granite_infocollector_include_thread_dumps != nullptr && granite_infocollector_include_thread_dumps->isSet()){ isObjectUpdated = true; break;}
        if(granite_infocollector_include_heap_dump != nullptr && granite_infocollector_include_heap_dump->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
