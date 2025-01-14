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
    this->fromJson(json);
}

OAIComAdobeGraniteInfocollectorInfoCollectorProperties::OAIComAdobeGraniteInfocollectorInfoCollectorProperties() {
    this->init();
}

OAIComAdobeGraniteInfocollectorInfoCollectorProperties::~OAIComAdobeGraniteInfocollectorInfoCollectorProperties() {
    
}

void
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::init() {
    m_granite_infocollector_include_thread_dumps_isSet = false;
    m_granite_infocollector_include_heap_dump_isSet = false;
}

void
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(granite_infocollector_include_thread_dumps, json[QString("granite.infocollector.includeThreadDumps")]);
    
    ::OpenAPI::fromJsonValue(granite_infocollector_include_heap_dump, json[QString("granite.infocollector.includeHeapDump")]);
    
}

QString
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::asJsonObject() const {
    QJsonObject obj;
	if(granite_infocollector_include_thread_dumps.isSet()){
        obj.insert(QString("granite.infocollector.includeThreadDumps"), ::OpenAPI::toJsonValue(granite_infocollector_include_thread_dumps));
    }
	if(granite_infocollector_include_heap_dump.isSet()){
        obj.insert(QString("granite.infocollector.includeHeapDump"), ::OpenAPI::toJsonValue(granite_infocollector_include_heap_dump));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::getGraniteInfocollectorIncludeThreadDumps() const {
    return granite_infocollector_include_thread_dumps;
}
void
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::setGraniteInfocollectorIncludeThreadDumps(const OAIConfigNodePropertyBoolean &granite_infocollector_include_thread_dumps) {
    this->granite_infocollector_include_thread_dumps = granite_infocollector_include_thread_dumps;
    this->m_granite_infocollector_include_thread_dumps_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::getGraniteInfocollectorIncludeHeapDump() const {
    return granite_infocollector_include_heap_dump;
}
void
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::setGraniteInfocollectorIncludeHeapDump(const OAIConfigNodePropertyBoolean &granite_infocollector_include_heap_dump) {
    this->granite_infocollector_include_heap_dump = granite_infocollector_include_heap_dump;
    this->m_granite_infocollector_include_heap_dump_isSet = true;
}


bool
OAIComAdobeGraniteInfocollectorInfoCollectorProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(granite_infocollector_include_thread_dumps.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_infocollector_include_heap_dump.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

