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


#include "OAIComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties::OAIComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties::OAIComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties() {
    this->init();
}

OAIComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties::~OAIComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties() {
    
}

void
OAIComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties::init() {
    m_brightedge_url_isSet = false;
}

void
OAIComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(brightedge_url, json[QString("brightedge.url")]);
    
}

QString
OAIComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties::asJsonObject() const {
    QJsonObject obj;
	if(brightedge_url.isSet()){
        obj.insert(QString("brightedge.url"), ::OpenAPI::toJsonValue(brightedge_url));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties::getBrightedgeUrl() const {
    return brightedge_url;
}
void
OAIComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties::setBrightedgeUrl(const OAIConfigNodePropertyString &brightedge_url) {
    this->brightedge_url = brightedge_url;
    this->m_brightedge_url_isSet = true;
}


bool
OAIComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(brightedge_url.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

