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


#include "OAIOrgApacheFelixHttpSslfilterSslFilterProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheFelixHttpSslfilterSslFilterProperties::OAIOrgApacheFelixHttpSslfilterSslFilterProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheFelixHttpSslfilterSslFilterProperties::OAIOrgApacheFelixHttpSslfilterSslFilterProperties() {
    init();
}

OAIOrgApacheFelixHttpSslfilterSslFilterProperties::~OAIOrgApacheFelixHttpSslfilterSslFilterProperties() {
    this->cleanup();
}

void
OAIOrgApacheFelixHttpSslfilterSslFilterProperties::init() {
    ssl_forward_header = new OAIConfigNodePropertyString();
    m_ssl_forward_header_isSet = false;
    ssl_forward_value = new OAIConfigNodePropertyString();
    m_ssl_forward_value_isSet = false;
    ssl_forward_cert_header = new OAIConfigNodePropertyString();
    m_ssl_forward_cert_header_isSet = false;
    rewrite_absolute_urls = new OAIConfigNodePropertyBoolean();
    m_rewrite_absolute_urls_isSet = false;
}

void
OAIOrgApacheFelixHttpSslfilterSslFilterProperties::cleanup() {
    if(ssl_forward_header != nullptr) { 
        delete ssl_forward_header;
    }
    if(ssl_forward_value != nullptr) { 
        delete ssl_forward_value;
    }
    if(ssl_forward_cert_header != nullptr) { 
        delete ssl_forward_cert_header;
    }
    if(rewrite_absolute_urls != nullptr) { 
        delete rewrite_absolute_urls;
    }
}

OAIOrgApacheFelixHttpSslfilterSslFilterProperties*
OAIOrgApacheFelixHttpSslfilterSslFilterProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheFelixHttpSslfilterSslFilterProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&ssl_forward_header, pJson["ssl-forward.header"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&ssl_forward_value, pJson["ssl-forward.value"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&ssl_forward_cert_header, pJson["ssl-forward-cert.header"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&rewrite_absolute_urls, pJson["rewrite.absolute.urls"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIOrgApacheFelixHttpSslfilterSslFilterProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheFelixHttpSslfilterSslFilterProperties::asJsonObject() {
    QJsonObject obj;
    if((ssl_forward_header != nullptr) && (ssl_forward_header->isSet())){
        toJsonValue(QString("ssl-forward.header"), ssl_forward_header, obj, QString("OAIConfigNodePropertyString"));
    }
    if((ssl_forward_value != nullptr) && (ssl_forward_value->isSet())){
        toJsonValue(QString("ssl-forward.value"), ssl_forward_value, obj, QString("OAIConfigNodePropertyString"));
    }
    if((ssl_forward_cert_header != nullptr) && (ssl_forward_cert_header->isSet())){
        toJsonValue(QString("ssl-forward-cert.header"), ssl_forward_cert_header, obj, QString("OAIConfigNodePropertyString"));
    }
    if((rewrite_absolute_urls != nullptr) && (rewrite_absolute_urls->isSet())){
        toJsonValue(QString("rewrite.absolute.urls"), rewrite_absolute_urls, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIOrgApacheFelixHttpSslfilterSslFilterProperties::getSslForwardHeader() {
    return ssl_forward_header;
}
void
OAIOrgApacheFelixHttpSslfilterSslFilterProperties::setSslForwardHeader(OAIConfigNodePropertyString* ssl_forward_header) {
    this->ssl_forward_header = ssl_forward_header;
    this->m_ssl_forward_header_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheFelixHttpSslfilterSslFilterProperties::getSslForwardValue() {
    return ssl_forward_value;
}
void
OAIOrgApacheFelixHttpSslfilterSslFilterProperties::setSslForwardValue(OAIConfigNodePropertyString* ssl_forward_value) {
    this->ssl_forward_value = ssl_forward_value;
    this->m_ssl_forward_value_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheFelixHttpSslfilterSslFilterProperties::getSslForwardCertHeader() {
    return ssl_forward_cert_header;
}
void
OAIOrgApacheFelixHttpSslfilterSslFilterProperties::setSslForwardCertHeader(OAIConfigNodePropertyString* ssl_forward_cert_header) {
    this->ssl_forward_cert_header = ssl_forward_cert_header;
    this->m_ssl_forward_cert_header_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheFelixHttpSslfilterSslFilterProperties::getRewriteAbsoluteUrls() {
    return rewrite_absolute_urls;
}
void
OAIOrgApacheFelixHttpSslfilterSslFilterProperties::setRewriteAbsoluteUrls(OAIConfigNodePropertyBoolean* rewrite_absolute_urls) {
    this->rewrite_absolute_urls = rewrite_absolute_urls;
    this->m_rewrite_absolute_urls_isSet = true;
}


bool
OAIOrgApacheFelixHttpSslfilterSslFilterProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(ssl_forward_header != nullptr && ssl_forward_header->isSet()){ isObjectUpdated = true; break;}
        if(ssl_forward_value != nullptr && ssl_forward_value->isSet()){ isObjectUpdated = true; break;}
        if(ssl_forward_cert_header != nullptr && ssl_forward_cert_header->isSet()){ isObjectUpdated = true; break;}
        if(rewrite_absolute_urls != nullptr && rewrite_absolute_urls->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

