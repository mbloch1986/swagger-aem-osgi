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


#include "OAIApacheSlingHealthCheckResultHTMLSerializerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIApacheSlingHealthCheckResultHTMLSerializerProperties::OAIApacheSlingHealthCheckResultHTMLSerializerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIApacheSlingHealthCheckResultHTMLSerializerProperties::OAIApacheSlingHealthCheckResultHTMLSerializerProperties() {
    init();
}

OAIApacheSlingHealthCheckResultHTMLSerializerProperties::~OAIApacheSlingHealthCheckResultHTMLSerializerProperties() {
    this->cleanup();
}

void
OAIApacheSlingHealthCheckResultHTMLSerializerProperties::init() {
    style_string = new OAIConfigNodePropertyString();
    m_style_string_isSet = false;
}

void
OAIApacheSlingHealthCheckResultHTMLSerializerProperties::cleanup() {
    if(style_string != nullptr) { 
        delete style_string;
    }
}

OAIApacheSlingHealthCheckResultHTMLSerializerProperties*
OAIApacheSlingHealthCheckResultHTMLSerializerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIApacheSlingHealthCheckResultHTMLSerializerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&style_string, pJson["styleString"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIApacheSlingHealthCheckResultHTMLSerializerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIApacheSlingHealthCheckResultHTMLSerializerProperties::asJsonObject() {
    QJsonObject obj;
    if((style_string != nullptr) && (style_string->isSet())){
        toJsonValue(QString("styleString"), style_string, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIApacheSlingHealthCheckResultHTMLSerializerProperties::getStyleString() {
    return style_string;
}
void
OAIApacheSlingHealthCheckResultHTMLSerializerProperties::setStyleString(OAIConfigNodePropertyString* style_string) {
    this->style_string = style_string;
    this->m_style_string_isSet = true;
}


bool
OAIApacheSlingHealthCheckResultHTMLSerializerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(style_string != nullptr && style_string->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
