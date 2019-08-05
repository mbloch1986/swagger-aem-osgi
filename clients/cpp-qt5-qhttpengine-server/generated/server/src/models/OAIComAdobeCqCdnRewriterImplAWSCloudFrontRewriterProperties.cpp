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


#include "OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties() {
    this->init();
}

OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::~OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties() {
    
}

void
OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::init() {
    m_service_ranking_isSet = false;
    m_keypair_id_isSet = false;
    m_keypair_alias_isSet = false;
    m_cdnrewriter_attributes_isSet = false;
    m_cdn_rewriter_distribution_domain_isSet = false;
}

void
OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(service_ranking, json[QString("service.ranking")]);
    
    ::OpenAPI::fromJsonValue(keypair_id, json[QString("keypair.id")]);
    
    ::OpenAPI::fromJsonValue(keypair_alias, json[QString("keypair.alias")]);
    
    ::OpenAPI::fromJsonValue(cdnrewriter_attributes, json[QString("cdnrewriter.attributes")]);
    
    ::OpenAPI::fromJsonValue(cdn_rewriter_distribution_domain, json[QString("cdn.rewriter.distribution.domain")]);
    
}

QString
OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::asJsonObject() const {
    QJsonObject obj;
	if(service_ranking.isSet()){
        obj.insert(QString("service.ranking"), ::OpenAPI::toJsonValue(service_ranking));
    }
	if(keypair_id.isSet()){
        obj.insert(QString("keypair.id"), ::OpenAPI::toJsonValue(keypair_id));
    }
	if(keypair_alias.isSet()){
        obj.insert(QString("keypair.alias"), ::OpenAPI::toJsonValue(keypair_alias));
    }
	if(cdnrewriter_attributes.isSet()){
        obj.insert(QString("cdnrewriter.attributes"), ::OpenAPI::toJsonValue(cdnrewriter_attributes));
    }
	if(cdn_rewriter_distribution_domain.isSet()){
        obj.insert(QString("cdn.rewriter.distribution.domain"), ::OpenAPI::toJsonValue(cdn_rewriter_distribution_domain));
    }
    return obj;
}

OAIConfigNodePropertyInteger
OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::getServiceRanking() const {
    return service_ranking;
}
void
OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::setServiceRanking(const OAIConfigNodePropertyInteger &service_ranking) {
    this->service_ranking = service_ranking;
    this->m_service_ranking_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::getKeypairId() const {
    return keypair_id;
}
void
OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::setKeypairId(const OAIConfigNodePropertyString &keypair_id) {
    this->keypair_id = keypair_id;
    this->m_keypair_id_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::getKeypairAlias() const {
    return keypair_alias;
}
void
OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::setKeypairAlias(const OAIConfigNodePropertyString &keypair_alias) {
    this->keypair_alias = keypair_alias;
    this->m_keypair_alias_isSet = true;
}

OAIConfigNodePropertyArray
OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::getCdnrewriterAttributes() const {
    return cdnrewriter_attributes;
}
void
OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::setCdnrewriterAttributes(const OAIConfigNodePropertyArray &cdnrewriter_attributes) {
    this->cdnrewriter_attributes = cdnrewriter_attributes;
    this->m_cdnrewriter_attributes_isSet = true;
}

OAIConfigNodePropertyString
OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::getCdnRewriterDistributionDomain() const {
    return cdn_rewriter_distribution_domain;
}
void
OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::setCdnRewriterDistributionDomain(const OAIConfigNodePropertyString &cdn_rewriter_distribution_domain) {
    this->cdn_rewriter_distribution_domain = cdn_rewriter_distribution_domain;
    this->m_cdn_rewriter_distribution_domain_isSet = true;
}


bool
OAIComAdobeCqCdnRewriterImplAWSCloudFrontRewriterProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(service_ranking.isSet()){ isObjectUpdated = true; break;}
    
        if(keypair_id.isSet()){ isObjectUpdated = true; break;}
    
        if(keypair_alias.isSet()){ isObjectUpdated = true; break;}
    
        if(cdnrewriter_attributes.isSet()){ isObjectUpdated = true; break;}
    
        if(cdn_rewriter_distribution_domain.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
