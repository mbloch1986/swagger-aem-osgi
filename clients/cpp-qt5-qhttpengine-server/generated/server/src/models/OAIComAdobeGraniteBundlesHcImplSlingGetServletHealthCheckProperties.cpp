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
    this->fromJson(json);
}

OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties() {
    this->init();
}

OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::~OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties() {
    
}

void
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::init() {
    m_hc_tags_isSet = false;
}

void
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(hc_tags, json[QString("hc.tags")]);
    
}

QString
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::asJsonObject() const {
    QJsonObject obj;
	if(hc_tags.isSet()){
        obj.insert(QString("hc.tags"), ::OpenAPI::toJsonValue(hc_tags));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::getHcTags() const {
    return hc_tags;
}
void
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::setHcTags(const OAIConfigNodePropertyArray &hc_tags) {
    this->hc_tags = hc_tags;
    this->m_hc_tags_isSet = true;
}


bool
OAIComAdobeGraniteBundlesHcImplSlingGetServletHealthCheckProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(hc_tags.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

