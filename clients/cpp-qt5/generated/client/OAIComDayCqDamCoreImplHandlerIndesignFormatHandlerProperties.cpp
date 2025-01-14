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


#include "OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties::OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties::OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties() {
    init();
}

OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties::~OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties() {
    this->cleanup();
}

void
OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties::init() {
    mimetype = new OAIConfigNodePropertyArray();
    m_mimetype_isSet = false;
}

void
OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties::cleanup() {
    if(mimetype != nullptr) { 
        delete mimetype;
    }
}

OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties*
OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&mimetype, pJson["mimetype"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties::asJsonObject() {
    QJsonObject obj;
    if((mimetype != nullptr) && (mimetype->isSet())){
        toJsonValue(QString("mimetype"), mimetype, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties::getMimetype() {
    return mimetype;
}
void
OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties::setMimetype(OAIConfigNodePropertyArray* mimetype) {
    this->mimetype = mimetype;
    this->m_mimetype_isSet = true;
}


bool
OAIComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(mimetype != nullptr && mimetype->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

