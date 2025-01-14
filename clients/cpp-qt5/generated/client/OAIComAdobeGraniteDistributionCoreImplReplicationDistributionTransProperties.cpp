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


#include "OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties() {
    init();
}

OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::~OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::init() {
    forward_requests = new OAIConfigNodePropertyBoolean();
    m_forward_requests_isSet = false;
}

void
OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::cleanup() {
    if(forward_requests != nullptr) { 
        delete forward_requests;
    }
}

OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties*
OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&forward_requests, pJson["forward.requests"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::asJsonObject() {
    QJsonObject obj;
    if((forward_requests != nullptr) && (forward_requests->isSet())){
        toJsonValue(QString("forward.requests"), forward_requests, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::getForwardRequests() {
    return forward_requests;
}
void
OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::setForwardRequests(OAIConfigNodePropertyBoolean* forward_requests) {
    this->forward_requests = forward_requests;
    this->m_forward_requests_isSet = true;
}


bool
OAIComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(forward_requests != nullptr && forward_requests->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

