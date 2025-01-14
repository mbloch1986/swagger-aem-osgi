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


#include "OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties::OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties::OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties() {
    this->init();
}

OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties::~OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties() {
    
}

void
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties::init() {
    m_hc_tags_isSet = false;
    m_disk_space_warn_threshold_isSet = false;
    m_disk_space_error_threshold_isSet = false;
}

void
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(hc_tags, json[QString("hc.tags")]);
    
    ::OpenAPI::fromJsonValue(disk_space_warn_threshold, json[QString("disk.space.warn.threshold")]);
    
    ::OpenAPI::fromJsonValue(disk_space_error_threshold, json[QString("disk.space.error.threshold")]);
    
}

QString
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties::asJsonObject() const {
    QJsonObject obj;
	if(hc_tags.isSet()){
        obj.insert(QString("hc.tags"), ::OpenAPI::toJsonValue(hc_tags));
    }
	if(disk_space_warn_threshold.isSet()){
        obj.insert(QString("disk.space.warn.threshold"), ::OpenAPI::toJsonValue(disk_space_warn_threshold));
    }
	if(disk_space_error_threshold.isSet()){
        obj.insert(QString("disk.space.error.threshold"), ::OpenAPI::toJsonValue(disk_space_error_threshold));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties::getHcTags() const {
    return hc_tags;
}
void
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties::setHcTags(const OAIConfigNodePropertyArray &hc_tags) {
    this->hc_tags = hc_tags;
    this->m_hc_tags_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties::getDiskSpaceWarnThreshold() const {
    return disk_space_warn_threshold;
}
void
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties::setDiskSpaceWarnThreshold(const OAIConfigNodePropertyInteger &disk_space_warn_threshold) {
    this->disk_space_warn_threshold = disk_space_warn_threshold;
    this->m_disk_space_warn_threshold_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties::getDiskSpaceErrorThreshold() const {
    return disk_space_error_threshold;
}
void
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties::setDiskSpaceErrorThreshold(const OAIConfigNodePropertyInteger &disk_space_error_threshold) {
    this->disk_space_error_threshold = disk_space_error_threshold;
    this->m_disk_space_error_threshold_isSet = true;
}


bool
OAIComAdobeGraniteRepositoryHcImplDiskSpaceHealthCheckProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(hc_tags.isSet()){ isObjectUpdated = true; break;}
    
        if(disk_space_warn_threshold.isSet()){ isObjectUpdated = true; break;}
    
        if(disk_space_error_threshold.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

