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


#include "OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties::OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties::OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties() {
    this->init();
}

OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties::~OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties() {
    
}

void
OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties::init() {
    m_cq_dam_webdav_version_linking_enable_isSet = false;
    m_cq_dam_webdav_version_linking_scheduler_period_isSet = false;
    m_cq_dam_webdav_version_linking_staging_timeout_isSet = false;
}

void
OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(cq_dam_webdav_version_linking_enable, json[QString("cq.dam.webdav.version.linking.enable")]);
    
    ::OpenAPI::fromJsonValue(cq_dam_webdav_version_linking_scheduler_period, json[QString("cq.dam.webdav.version.linking.scheduler.period")]);
    
    ::OpenAPI::fromJsonValue(cq_dam_webdav_version_linking_staging_timeout, json[QString("cq.dam.webdav.version.linking.staging.timeout")]);
    
}

QString
OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties::asJsonObject() const {
    QJsonObject obj;
	if(cq_dam_webdav_version_linking_enable.isSet()){
        obj.insert(QString("cq.dam.webdav.version.linking.enable"), ::OpenAPI::toJsonValue(cq_dam_webdav_version_linking_enable));
    }
	if(cq_dam_webdav_version_linking_scheduler_period.isSet()){
        obj.insert(QString("cq.dam.webdav.version.linking.scheduler.period"), ::OpenAPI::toJsonValue(cq_dam_webdav_version_linking_scheduler_period));
    }
	if(cq_dam_webdav_version_linking_staging_timeout.isSet()){
        obj.insert(QString("cq.dam.webdav.version.linking.staging.timeout"), ::OpenAPI::toJsonValue(cq_dam_webdav_version_linking_staging_timeout));
    }
    return obj;
}

OAIConfigNodePropertyBoolean
OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties::getCqDamWebdavVersionLinkingEnable() const {
    return cq_dam_webdav_version_linking_enable;
}
void
OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties::setCqDamWebdavVersionLinkingEnable(const OAIConfigNodePropertyBoolean &cq_dam_webdav_version_linking_enable) {
    this->cq_dam_webdav_version_linking_enable = cq_dam_webdav_version_linking_enable;
    this->m_cq_dam_webdav_version_linking_enable_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties::getCqDamWebdavVersionLinkingSchedulerPeriod() const {
    return cq_dam_webdav_version_linking_scheduler_period;
}
void
OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties::setCqDamWebdavVersionLinkingSchedulerPeriod(const OAIConfigNodePropertyInteger &cq_dam_webdav_version_linking_scheduler_period) {
    this->cq_dam_webdav_version_linking_scheduler_period = cq_dam_webdav_version_linking_scheduler_period;
    this->m_cq_dam_webdav_version_linking_scheduler_period_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties::getCqDamWebdavVersionLinkingStagingTimeout() const {
    return cq_dam_webdav_version_linking_staging_timeout;
}
void
OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties::setCqDamWebdavVersionLinkingStagingTimeout(const OAIConfigNodePropertyInteger &cq_dam_webdav_version_linking_staging_timeout) {
    this->cq_dam_webdav_version_linking_staging_timeout = cq_dam_webdav_version_linking_staging_timeout;
    this->m_cq_dam_webdav_version_linking_staging_timeout_isSet = true;
}


bool
OAIComAdobeCqDamWebdavImplIoDamWebdavVersionLinkingJobProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(cq_dam_webdav_version_linking_enable.isSet()){ isObjectUpdated = true; break;}
    
        if(cq_dam_webdav_version_linking_scheduler_period.isSet()){ isObjectUpdated = true; break;}
    
        if(cq_dam_webdav_version_linking_staging_timeout.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
