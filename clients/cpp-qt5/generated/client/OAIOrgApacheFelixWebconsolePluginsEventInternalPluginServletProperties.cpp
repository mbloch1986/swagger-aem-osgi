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


#include "OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties::OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties::OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties() {
    init();
}

OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties::~OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties() {
    this->cleanup();
}

void
OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties::init() {
    max_size = new OAIConfigNodePropertyInteger();
    m_max_size_isSet = false;
}

void
OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties::cleanup() {
    if(max_size != nullptr) { 
        delete max_size;
    }
}

OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties*
OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&max_size, pJson["max.size"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties::asJsonObject() {
    QJsonObject obj;
    if((max_size != nullptr) && (max_size->isSet())){
        toJsonValue(QString("max.size"), max_size, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties::getMaxSize() {
    return max_size;
}
void
OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties::setMaxSize(OAIConfigNodePropertyInteger* max_size) {
    this->max_size = max_size;
    this->m_max_size_isSet = true;
}


bool
OAIOrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(max_size != nullptr && max_size->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

