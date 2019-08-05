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


#include "OAIComAdobeCqAddressImplLocationLocationListServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqAddressImplLocationLocationListServletProperties::OAIComAdobeCqAddressImplLocationLocationListServletProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqAddressImplLocationLocationListServletProperties::OAIComAdobeCqAddressImplLocationLocationListServletProperties() {
    this->init();
}

OAIComAdobeCqAddressImplLocationLocationListServletProperties::~OAIComAdobeCqAddressImplLocationLocationListServletProperties() {
    
}

void
OAIComAdobeCqAddressImplLocationLocationListServletProperties::init() {
    m_cq_address_location_default_max_results_isSet = false;
}

void
OAIComAdobeCqAddressImplLocationLocationListServletProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqAddressImplLocationLocationListServletProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(cq_address_location_default_max_results, json[QString("cq.address.location.default.maxResults")]);
    
}

QString
OAIComAdobeCqAddressImplLocationLocationListServletProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqAddressImplLocationLocationListServletProperties::asJsonObject() const {
    QJsonObject obj;
	if(cq_address_location_default_max_results.isSet()){
        obj.insert(QString("cq.address.location.default.maxResults"), ::OpenAPI::toJsonValue(cq_address_location_default_max_results));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqAddressImplLocationLocationListServletProperties::getCqAddressLocationDefaultMaxResults() const {
    return cq_address_location_default_max_results;
}
void
OAIComAdobeCqAddressImplLocationLocationListServletProperties::setCqAddressLocationDefaultMaxResults(const OAIConfigNodePropertyInteger &cq_address_location_default_max_results) {
    this->cq_address_location_default_max_results = cq_address_location_default_max_results;
    this->m_cq_address_location_default_max_results_isSet = true;
}


bool
OAIComAdobeCqAddressImplLocationLocationListServletProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(cq_address_location_default_max_results.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
