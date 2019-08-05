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


#include "OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties() {
    init();
}

OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::~OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties() {
    this->cleanup();
}

void
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::init() {
    hc_tags = new OAIConfigNodePropertyArray();
    m_hc_tags_isSet = false;
}

void
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::cleanup() {
    if(hc_tags != nullptr) { 
        delete hc_tags;
    }
}

OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties*
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&hc_tags, pJson["hc.tags"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::asJsonObject() {
    QJsonObject obj;
    if((hc_tags != nullptr) && (hc_tags->isSet())){
        toJsonValue(QString("hc.tags"), hc_tags, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::getHcTags() {
    return hc_tags;
}
void
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::setHcTags(OAIConfigNodePropertyArray* hc_tags) {
    this->hc_tags = hc_tags;
    this->m_hc_tags_isSet = true;
}


bool
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(hc_tags != nullptr && hc_tags->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
