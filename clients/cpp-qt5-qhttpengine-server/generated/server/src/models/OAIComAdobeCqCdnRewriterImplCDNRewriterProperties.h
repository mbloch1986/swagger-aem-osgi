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

/*
 * OAIComAdobeCqCdnRewriterImplCDNRewriterProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqCdnRewriterImplCDNRewriterProperties_H
#define OAIComAdobeCqCdnRewriterImplCDNRewriterProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyInteger.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqCdnRewriterImplCDNRewriterProperties: public OAIObject {
public:
    OAIComAdobeCqCdnRewriterImplCDNRewriterProperties();
    OAIComAdobeCqCdnRewriterImplCDNRewriterProperties(QString json);
    ~OAIComAdobeCqCdnRewriterImplCDNRewriterProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger getServiceRanking() const;
    void setServiceRanking(const OAIConfigNodePropertyInteger &service_ranking);

    OAIConfigNodePropertyArray getCdnrewriterAttributes() const;
    void setCdnrewriterAttributes(const OAIConfigNodePropertyArray &cdnrewriter_attributes);

    OAIConfigNodePropertyString getCdnRewriterDistributionDomain() const;
    void setCdnRewriterDistributionDomain(const OAIConfigNodePropertyString &cdn_rewriter_distribution_domain);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyInteger service_ranking;
    bool m_service_ranking_isSet;

    OAIConfigNodePropertyArray cdnrewriter_attributes;
    bool m_cdnrewriter_attributes_isSet;

    OAIConfigNodePropertyString cdn_rewriter_distribution_domain;
    bool m_cdn_rewriter_distribution_domain_isSet;

};

}

#endif // OAIComAdobeCqCdnRewriterImplCDNRewriterProperties_H
