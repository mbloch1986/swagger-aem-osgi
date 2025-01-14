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


#include "OAIComDayCqMailerDefaultMailServiceProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqMailerDefaultMailServiceProperties::OAIComDayCqMailerDefaultMailServiceProperties(QString json) {
    this->fromJson(json);
}

OAIComDayCqMailerDefaultMailServiceProperties::OAIComDayCqMailerDefaultMailServiceProperties() {
    this->init();
}

OAIComDayCqMailerDefaultMailServiceProperties::~OAIComDayCqMailerDefaultMailServiceProperties() {
    
}

void
OAIComDayCqMailerDefaultMailServiceProperties::init() {
    m_smtp_host_isSet = false;
    m_smtp_port_isSet = false;
    m_smtp_user_isSet = false;
    m_smtp_password_isSet = false;
    m_from_address_isSet = false;
    m_smtp_ssl_isSet = false;
    m_smtp_starttls_isSet = false;
    m_debug_email_isSet = false;
}

void
OAIComDayCqMailerDefaultMailServiceProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComDayCqMailerDefaultMailServiceProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(smtp_host, json[QString("smtp.host")]);
    
    ::OpenAPI::fromJsonValue(smtp_port, json[QString("smtp.port")]);
    
    ::OpenAPI::fromJsonValue(smtp_user, json[QString("smtp.user")]);
    
    ::OpenAPI::fromJsonValue(smtp_password, json[QString("smtp.password")]);
    
    ::OpenAPI::fromJsonValue(from_address, json[QString("from.address")]);
    
    ::OpenAPI::fromJsonValue(smtp_ssl, json[QString("smtp.ssl")]);
    
    ::OpenAPI::fromJsonValue(smtp_starttls, json[QString("smtp.starttls")]);
    
    ::OpenAPI::fromJsonValue(debug_email, json[QString("debug.email")]);
    
}

QString
OAIComDayCqMailerDefaultMailServiceProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqMailerDefaultMailServiceProperties::asJsonObject() const {
    QJsonObject obj;
	if(smtp_host.isSet()){
        obj.insert(QString("smtp.host"), ::OpenAPI::toJsonValue(smtp_host));
    }
	if(smtp_port.isSet()){
        obj.insert(QString("smtp.port"), ::OpenAPI::toJsonValue(smtp_port));
    }
	if(smtp_user.isSet()){
        obj.insert(QString("smtp.user"), ::OpenAPI::toJsonValue(smtp_user));
    }
	if(smtp_password.isSet()){
        obj.insert(QString("smtp.password"), ::OpenAPI::toJsonValue(smtp_password));
    }
	if(from_address.isSet()){
        obj.insert(QString("from.address"), ::OpenAPI::toJsonValue(from_address));
    }
	if(smtp_ssl.isSet()){
        obj.insert(QString("smtp.ssl"), ::OpenAPI::toJsonValue(smtp_ssl));
    }
	if(smtp_starttls.isSet()){
        obj.insert(QString("smtp.starttls"), ::OpenAPI::toJsonValue(smtp_starttls));
    }
	if(debug_email.isSet()){
        obj.insert(QString("debug.email"), ::OpenAPI::toJsonValue(debug_email));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComDayCqMailerDefaultMailServiceProperties::getSmtpHost() const {
    return smtp_host;
}
void
OAIComDayCqMailerDefaultMailServiceProperties::setSmtpHost(const OAIConfigNodePropertyString &smtp_host) {
    this->smtp_host = smtp_host;
    this->m_smtp_host_isSet = true;
}

OAIConfigNodePropertyInteger
OAIComDayCqMailerDefaultMailServiceProperties::getSmtpPort() const {
    return smtp_port;
}
void
OAIComDayCqMailerDefaultMailServiceProperties::setSmtpPort(const OAIConfigNodePropertyInteger &smtp_port) {
    this->smtp_port = smtp_port;
    this->m_smtp_port_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqMailerDefaultMailServiceProperties::getSmtpUser() const {
    return smtp_user;
}
void
OAIComDayCqMailerDefaultMailServiceProperties::setSmtpUser(const OAIConfigNodePropertyString &smtp_user) {
    this->smtp_user = smtp_user;
    this->m_smtp_user_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqMailerDefaultMailServiceProperties::getSmtpPassword() const {
    return smtp_password;
}
void
OAIComDayCqMailerDefaultMailServiceProperties::setSmtpPassword(const OAIConfigNodePropertyString &smtp_password) {
    this->smtp_password = smtp_password;
    this->m_smtp_password_isSet = true;
}

OAIConfigNodePropertyString
OAIComDayCqMailerDefaultMailServiceProperties::getFromAddress() const {
    return from_address;
}
void
OAIComDayCqMailerDefaultMailServiceProperties::setFromAddress(const OAIConfigNodePropertyString &from_address) {
    this->from_address = from_address;
    this->m_from_address_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqMailerDefaultMailServiceProperties::getSmtpSsl() const {
    return smtp_ssl;
}
void
OAIComDayCqMailerDefaultMailServiceProperties::setSmtpSsl(const OAIConfigNodePropertyBoolean &smtp_ssl) {
    this->smtp_ssl = smtp_ssl;
    this->m_smtp_ssl_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqMailerDefaultMailServiceProperties::getSmtpStarttls() const {
    return smtp_starttls;
}
void
OAIComDayCqMailerDefaultMailServiceProperties::setSmtpStarttls(const OAIConfigNodePropertyBoolean &smtp_starttls) {
    this->smtp_starttls = smtp_starttls;
    this->m_smtp_starttls_isSet = true;
}

OAIConfigNodePropertyBoolean
OAIComDayCqMailerDefaultMailServiceProperties::getDebugEmail() const {
    return debug_email;
}
void
OAIComDayCqMailerDefaultMailServiceProperties::setDebugEmail(const OAIConfigNodePropertyBoolean &debug_email) {
    this->debug_email = debug_email;
    this->m_debug_email_isSet = true;
}


bool
OAIComDayCqMailerDefaultMailServiceProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(smtp_host.isSet()){ isObjectUpdated = true; break;}
    
        if(smtp_port.isSet()){ isObjectUpdated = true; break;}
    
        if(smtp_user.isSet()){ isObjectUpdated = true; break;}
    
        if(smtp_password.isSet()){ isObjectUpdated = true; break;}
    
        if(from_address.isSet()){ isObjectUpdated = true; break;}
    
        if(smtp_ssl.isSet()){ isObjectUpdated = true; break;}
    
        if(smtp_starttls.isSet()){ isObjectUpdated = true; break;}
    
        if(debug_email.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

