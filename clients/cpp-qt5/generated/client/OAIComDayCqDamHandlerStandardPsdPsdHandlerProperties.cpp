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


#include "OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties::OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties::OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties() {
    init();
}

OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties::~OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties() {
    this->cleanup();
}

void
OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties::init() {
    large_file_threshold = new OAIConfigNodePropertyInteger();
    m_large_file_threshold_isSet = false;
}

void
OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties::cleanup() {
    if(large_file_threshold != nullptr) { 
        delete large_file_threshold;
    }
}

OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties*
OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&large_file_threshold, pJson["large_file_threshold"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
}

QString
OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties::asJsonObject() {
    QJsonObject obj;
    if((large_file_threshold != nullptr) && (large_file_threshold->isSet())){
        toJsonValue(QString("large_file_threshold"), large_file_threshold, obj, QString("OAIConfigNodePropertyInteger"));
    }

    return obj;
}

OAIConfigNodePropertyInteger*
OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties::getLargeFileThreshold() {
    return large_file_threshold;
}
void
OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties::setLargeFileThreshold(OAIConfigNodePropertyInteger* large_file_threshold) {
    this->large_file_threshold = large_file_threshold;
    this->m_large_file_threshold_isSet = true;
}


bool
OAIComDayCqDamHandlerStandardPsdPsdHandlerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(large_file_threshold != nullptr && large_file_threshold->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

