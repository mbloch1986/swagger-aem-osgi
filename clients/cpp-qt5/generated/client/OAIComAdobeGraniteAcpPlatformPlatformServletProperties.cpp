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


#include "OAIComAdobeGraniteAcpPlatformPlatformServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteAcpPlatformPlatformServletProperties::OAIComAdobeGraniteAcpPlatformPlatformServletProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteAcpPlatformPlatformServletProperties::OAIComAdobeGraniteAcpPlatformPlatformServletProperties() {
    init();
}

OAIComAdobeGraniteAcpPlatformPlatformServletProperties::~OAIComAdobeGraniteAcpPlatformPlatformServletProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteAcpPlatformPlatformServletProperties::init() {
    query_limit = new OAIConfigNodePropertyInteger();
    m_query_limit_isSet = false;
    file_type_extension_map = new OAIConfigNodePropertyArray();
    m_file_type_extension_map_isSet = false;
}

void
OAIComAdobeGraniteAcpPlatformPlatformServletProperties::cleanup() {
    if(query_limit != nullptr) { 
        delete query_limit;
    }
    if(file_type_extension_map != nullptr) { 
        delete file_type_extension_map;
    }
}

OAIComAdobeGraniteAcpPlatformPlatformServletProperties*
OAIComAdobeGraniteAcpPlatformPlatformServletProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteAcpPlatformPlatformServletProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&query_limit, pJson["query.limit"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&file_type_extension_map, pJson["file.type.extension.map"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComAdobeGraniteAcpPlatformPlatformServletProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteAcpPlatformPlatformServletProperties::asJsonObject() {
    QJsonObject obj;
    if((query_limit != nullptr) && (query_limit->isSet())){
        toJsonValue(QString("query.limit"), query_limit, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((file_type_extension_map != nullptr) && (file_type_extension_map->isSet())){
        toJsonValue(QString("file.type.extension.map"), file_type_extension_map, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIComAdobeGraniteAcpPlatformPlatformServletProperties::getQueryLimit() {
    return query_limit;
}
void
OAIComAdobeGraniteAcpPlatformPlatformServletProperties::setQueryLimit(OAIConfigNodePropertyInteger* query_limit) {
    this->query_limit = query_limit;
    this->m_query_limit_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComAdobeGraniteAcpPlatformPlatformServletProperties::getFileTypeExtensionMap() {
    return file_type_extension_map;
}
void
OAIComAdobeGraniteAcpPlatformPlatformServletProperties::setFileTypeExtensionMap(OAIConfigNodePropertyArray* file_type_extension_map) {
    this->file_type_extension_map = file_type_extension_map;
    this->m_file_type_extension_map_isSet = true;
}


bool
OAIComAdobeGraniteAcpPlatformPlatformServletProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(query_limit != nullptr && query_limit->isSet()){ isObjectUpdated = true; break;}
        if(file_type_extension_map != nullptr && file_type_extension_map->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

