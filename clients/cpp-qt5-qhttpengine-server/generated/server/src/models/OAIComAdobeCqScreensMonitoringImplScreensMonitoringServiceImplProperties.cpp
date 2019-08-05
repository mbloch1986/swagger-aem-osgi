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


#include "OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties() {
    this->init();
}

OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::~OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties() {
    
}

void
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::init() {
    m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_project_path_isSet = false;
    m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_schedule_frequency_isSet = false;
    m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_ping_timeout_isSet = false;
    m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_recipients_isSet = false;
    m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpserver_isSet = false;
    m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpport_isSet = false;
    m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_usetls_isSet = false;
    m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_username_isSet = false;
    m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_password_isSet = false;
}

void
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_project_path, json[QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath")]);
    
    ::OpenAPI::fromJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_schedule_frequency, json[QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency")]);
    
    ::OpenAPI::fromJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_ping_timeout, json[QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout")]);
    
    ::OpenAPI::fromJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_recipients, json[QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients")]);
    
    ::OpenAPI::fromJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpserver, json[QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver")]);
    
    ::OpenAPI::fromJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpport, json[QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport")]);
    
    ::OpenAPI::fromJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_usetls, json[QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls")]);
    
    ::OpenAPI::fromJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_username, json[QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username")]);
    
    ::OpenAPI::fromJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_password, json[QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password")]);
    
}

QString
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::asJsonObject() const {
    QJsonObject obj;
	if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_project_path.isSet()){
        obj.insert(QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath"), ::OpenAPI::toJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_project_path));
    }
	if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_schedule_frequency.isSet()){
        obj.insert(QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency"), ::OpenAPI::toJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_schedule_frequency));
    }
	if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_ping_timeout.isSet()){
        obj.insert(QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout"), ::OpenAPI::toJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_ping_timeout));
    }
	if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_recipients.isSet()){
        obj.insert(QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients"), ::OpenAPI::toJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_recipients));
    }
	if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpserver.isSet()){
        obj.insert(QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver"), ::OpenAPI::toJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpserver));
    }
	if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpport.isSet()){
        obj.insert(QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport"), ::OpenAPI::toJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpport));
    }
	if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_usetls.isSet()){
        obj.insert(QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls"), ::OpenAPI::toJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_usetls));
    }
	if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_username.isSet()){
        obj.insert(QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username"), ::OpenAPI::toJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_username));
    }
	if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_password.isSet()){
        obj.insert(QString("com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password"), ::OpenAPI::toJsonValue(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_password));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::getComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProjectPath() const {
    return com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_project_path;
}
void
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::setComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProjectPath(const OAIConfigNodePropertyArray &com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_project_path) {
    this->com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_project_path = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_project_path;
    this->m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_project_path_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::getComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplScheduleFrequency() const {
    return com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_schedule_frequency;
}
void
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::setComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplScheduleFrequency(const OAIConfigNodePropertyString &com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_schedule_frequency) {
    this->com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_schedule_frequency = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_schedule_frequency;
    this->m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_schedule_frequency_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::getComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPingTimeout() const {
    return com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_ping_timeout;
}
void
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::setComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPingTimeout(const OAIConfigNodePropertyInteger &com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_ping_timeout) {
    this->com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_ping_timeout = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_ping_timeout;
    this->m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_ping_timeout_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::getComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplRecipients() const {
    return com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_recipients;
}
void
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::setComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplRecipients(const OAIConfigNodePropertyString &com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_recipients) {
    this->com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_recipients = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_recipients;
    this->m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_recipients_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::getComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplSmtpserver() const {
    return com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpserver;
}
void
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::setComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplSmtpserver(const OAIConfigNodePropertyString &com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpserver) {
    this->com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpserver = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpserver;
    this->m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpserver_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::getComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplSmtpport() const {
    return com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpport;
}
void
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::setComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplSmtpport(const OAIConfigNodePropertyInteger &com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpport) {
    this->com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpport = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpport;
    this->m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpport_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::getComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplUsetls() const {
    return com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_usetls;
}
void
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::setComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplUsetls(const OAIConfigNodePropertyBoolean &com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_usetls) {
    this->com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_usetls = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_usetls;
    this->m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_usetls_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::getComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplUsername() const {
    return com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_username;
}
void
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::setComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplUsername(const OAIConfigNodePropertyString &com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_username) {
    this->com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_username = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_username;
    this->m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_username_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::getComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPassword() const {
    return com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_password;
}
void
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::setComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplPassword(const OAIConfigNodePropertyString &com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_password) {
    this->com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_password = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_password;
    this->m_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_password_isSet = true;
}


bool
OAIComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_project_path.isSet()){ isObjectUpdated = true; break;}
    
        if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_schedule_frequency.isSet()){ isObjectUpdated = true; break;}
    
        if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_ping_timeout.isSet()){ isObjectUpdated = true; break;}
    
        if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_recipients.isSet()){ isObjectUpdated = true; break;}
    
        if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpserver.isSet()){ isObjectUpdated = true; break;}
    
        if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpport.isSet()){ isObjectUpdated = true; break;}
    
        if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_usetls.isSet()){ isObjectUpdated = true; break;}
    
        if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_username.isSet()){ isObjectUpdated = true; break;}
    
        if(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_password.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
