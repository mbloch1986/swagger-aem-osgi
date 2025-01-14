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


#include "OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties() {
    init();
}

OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::~OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties() {
    this->cleanup();
}

void
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::init() {
    cdn_config_distribution_domain = new OAIConfigNodePropertyString();
    m_cdn_config_distribution_domain_isSet = false;
    cdn_config_enable_rewriting = new OAIConfigNodePropertyBoolean();
    m_cdn_config_enable_rewriting_isSet = false;
    cdn_config_path_prefixes = new OAIConfigNodePropertyArray();
    m_cdn_config_path_prefixes_isSet = false;
    cdn_config_cdnttl = new OAIConfigNodePropertyInteger();
    m_cdn_config_cdnttl_isSet = false;
    cdn_config_application_protocol = new OAIConfigNodePropertyString();
    m_cdn_config_application_protocol_isSet = false;
}

void
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::cleanup() {
    if(cdn_config_distribution_domain != nullptr) { 
        delete cdn_config_distribution_domain;
    }
    if(cdn_config_enable_rewriting != nullptr) { 
        delete cdn_config_enable_rewriting;
    }
    if(cdn_config_path_prefixes != nullptr) { 
        delete cdn_config_path_prefixes;
    }
    if(cdn_config_cdnttl != nullptr) { 
        delete cdn_config_cdnttl;
    }
    if(cdn_config_application_protocol != nullptr) { 
        delete cdn_config_application_protocol;
    }
}

OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties*
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&cdn_config_distribution_domain, pJson["cdn.config.distribution.domain"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&cdn_config_enable_rewriting, pJson["cdn.config.enable.rewriting"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&cdn_config_path_prefixes, pJson["cdn.config.path.prefixes"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&cdn_config_cdnttl, pJson["cdn.config.cdnttl"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&cdn_config_application_protocol, pJson["cdn.config.application.protocol"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::asJsonObject() {
    QJsonObject obj;
    if((cdn_config_distribution_domain != nullptr) && (cdn_config_distribution_domain->isSet())){
        toJsonValue(QString("cdn.config.distribution.domain"), cdn_config_distribution_domain, obj, QString("OAIConfigNodePropertyString"));
    }
    if((cdn_config_enable_rewriting != nullptr) && (cdn_config_enable_rewriting->isSet())){
        toJsonValue(QString("cdn.config.enable.rewriting"), cdn_config_enable_rewriting, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((cdn_config_path_prefixes != nullptr) && (cdn_config_path_prefixes->isSet())){
        toJsonValue(QString("cdn.config.path.prefixes"), cdn_config_path_prefixes, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((cdn_config_cdnttl != nullptr) && (cdn_config_cdnttl->isSet())){
        toJsonValue(QString("cdn.config.cdnttl"), cdn_config_cdnttl, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((cdn_config_application_protocol != nullptr) && (cdn_config_application_protocol->isSet())){
        toJsonValue(QString("cdn.config.application.protocol"), cdn_config_application_protocol, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::getCdnConfigDistributionDomain() {
    return cdn_config_distribution_domain;
}
void
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::setCdnConfigDistributionDomain(OAIConfigNodePropertyString* cdn_config_distribution_domain) {
    this->cdn_config_distribution_domain = cdn_config_distribution_domain;
    this->m_cdn_config_distribution_domain_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::getCdnConfigEnableRewriting() {
    return cdn_config_enable_rewriting;
}
void
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::setCdnConfigEnableRewriting(OAIConfigNodePropertyBoolean* cdn_config_enable_rewriting) {
    this->cdn_config_enable_rewriting = cdn_config_enable_rewriting;
    this->m_cdn_config_enable_rewriting_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::getCdnConfigPathPrefixes() {
    return cdn_config_path_prefixes;
}
void
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::setCdnConfigPathPrefixes(OAIConfigNodePropertyArray* cdn_config_path_prefixes) {
    this->cdn_config_path_prefixes = cdn_config_path_prefixes;
    this->m_cdn_config_path_prefixes_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::getCdnConfigCdnttl() {
    return cdn_config_cdnttl;
}
void
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::setCdnConfigCdnttl(OAIConfigNodePropertyInteger* cdn_config_cdnttl) {
    this->cdn_config_cdnttl = cdn_config_cdnttl;
    this->m_cdn_config_cdnttl_isSet = true;
}

OAIConfigNodePropertyString*
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::getCdnConfigApplicationProtocol() {
    return cdn_config_application_protocol;
}
void
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::setCdnConfigApplicationProtocol(OAIConfigNodePropertyString* cdn_config_application_protocol) {
    this->cdn_config_application_protocol = cdn_config_application_protocol;
    this->m_cdn_config_application_protocol_isSet = true;
}


bool
OAIComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(cdn_config_distribution_domain != nullptr && cdn_config_distribution_domain->isSet()){ isObjectUpdated = true; break;}
        if(cdn_config_enable_rewriting != nullptr && cdn_config_enable_rewriting->isSet()){ isObjectUpdated = true; break;}
        if(cdn_config_path_prefixes != nullptr && cdn_config_path_prefixes->isSet()){ isObjectUpdated = true; break;}
        if(cdn_config_cdnttl != nullptr && cdn_config_cdnttl->isSet()){ isObjectUpdated = true; break;}
        if(cdn_config_application_protocol != nullptr && cdn_config_application_protocol->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

