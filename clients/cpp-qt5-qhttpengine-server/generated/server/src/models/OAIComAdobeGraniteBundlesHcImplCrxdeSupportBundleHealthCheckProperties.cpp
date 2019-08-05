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


#include "OAIComAdobeGraniteBundlesHcImplCrxdeSupportBundleHealthCheckProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteBundlesHcImplCrxdeSupportBundleHealthCheckProperties::OAIComAdobeGraniteBundlesHcImplCrxdeSupportBundleHealthCheckProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteBundlesHcImplCrxdeSupportBundleHealthCheckProperties::OAIComAdobeGraniteBundlesHcImplCrxdeSupportBundleHealthCheckProperties() {
    this->init();
}

OAIComAdobeGraniteBundlesHcImplCrxdeSupportBundleHealthCheckProperties::~OAIComAdobeGraniteBundlesHcImplCrxdeSupportBundleHealthCheckProperties() {
    
}

void
OAIComAdobeGraniteBundlesHcImplCrxdeSupportBundleHealthCheckProperties::init() {
    m_hc_tags_isSet = false;
}

void
OAIComAdobeGraniteBundlesHcImplCrxdeSupportBundleHealthCheckProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteBundlesHcImplCrxdeSupportBundleHealthCheckProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(hc_tags, json[QString("hc.tags")]);
    
}

QString
OAIComAdobeGraniteBundlesHcImplCrxdeSupportBundleHealthCheckProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteBundlesHcImplCrxdeSupportBundleHealthCheckProperties::asJsonObject() const {
    QJsonObject obj;
	if(hc_tags.isSet()){
        obj.insert(QString("hc.tags"), ::OpenAPI::toJsonValue(hc_tags));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteBundlesHcImplCrxdeSupportBundleHealthCheckProperties::getHcTags() const {
    return hc_tags;
}
void
OAIComAdobeGraniteBundlesHcImplCrxdeSupportBundleHealthCheckProperties::setHcTags(const OAIConfigNodePropertyArray &hc_tags) {
    this->hc_tags = hc_tags;
    this->m_hc_tags_isSet = true;
}


bool
OAIComAdobeGraniteBundlesHcImplCrxdeSupportBundleHealthCheckProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(hc_tags.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
