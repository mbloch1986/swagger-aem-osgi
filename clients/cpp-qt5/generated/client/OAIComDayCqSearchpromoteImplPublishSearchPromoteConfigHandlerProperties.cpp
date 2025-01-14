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


#include "OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties::OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties::OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties() {
    init();
}

OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties::~OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties() {
    this->cleanup();
}

void
OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties::init() {
    cq_searchpromote_confighandler_enabled = new OAIConfigNodePropertyBoolean();
    m_cq_searchpromote_confighandler_enabled_isSet = false;
}

void
OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties::cleanup() {
    if(cq_searchpromote_confighandler_enabled != nullptr) { 
        delete cq_searchpromote_confighandler_enabled;
    }
}

OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties*
OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&cq_searchpromote_confighandler_enabled, pJson["cq.searchpromote.confighandler.enabled"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties::asJsonObject() {
    QJsonObject obj;
    if((cq_searchpromote_confighandler_enabled != nullptr) && (cq_searchpromote_confighandler_enabled->isSet())){
        toJsonValue(QString("cq.searchpromote.confighandler.enabled"), cq_searchpromote_confighandler_enabled, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyBoolean*
OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties::getCqSearchpromoteConfighandlerEnabled() {
    return cq_searchpromote_confighandler_enabled;
}
void
OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties::setCqSearchpromoteConfighandlerEnabled(OAIConfigNodePropertyBoolean* cq_searchpromote_confighandler_enabled) {
    this->cq_searchpromote_confighandler_enabled = cq_searchpromote_confighandler_enabled;
    this->m_cq_searchpromote_confighandler_enabled_isSet = true;
}


bool
OAIComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(cq_searchpromote_confighandler_enabled != nullptr && cq_searchpromote_confighandler_enabled->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

