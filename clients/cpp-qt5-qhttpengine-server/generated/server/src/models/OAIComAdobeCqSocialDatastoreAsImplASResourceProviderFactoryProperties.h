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
 * OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties_H
#define OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyInteger.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties: public OAIObject {
public:
    OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties();
    OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties(QString json);
    ~OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getVersionId() const;
    void setVersionId(const OAIConfigNodePropertyString &version_id);

    OAIConfigNodePropertyBoolean getCacheOn() const;
    void setCacheOn(const OAIConfigNodePropertyBoolean &cache_on);

    OAIConfigNodePropertyInteger getConcurrencyLevel() const;
    void setConcurrencyLevel(const OAIConfigNodePropertyInteger &concurrency_level);

    OAIConfigNodePropertyInteger getCacheStartSize() const;
    void setCacheStartSize(const OAIConfigNodePropertyInteger &cache_start_size);

    OAIConfigNodePropertyInteger getCacheTtl() const;
    void setCacheTtl(const OAIConfigNodePropertyInteger &cache_ttl);

    OAIConfigNodePropertyInteger getCacheSize() const;
    void setCacheSize(const OAIConfigNodePropertyInteger &cache_size);

    OAIConfigNodePropertyInteger getTimeLimit() const;
    void setTimeLimit(const OAIConfigNodePropertyInteger &time_limit);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString version_id;
    bool m_version_id_isSet;

    OAIConfigNodePropertyBoolean cache_on;
    bool m_cache_on_isSet;

    OAIConfigNodePropertyInteger concurrency_level;
    bool m_concurrency_level_isSet;

    OAIConfigNodePropertyInteger cache_start_size;
    bool m_cache_start_size_isSet;

    OAIConfigNodePropertyInteger cache_ttl;
    bool m_cache_ttl_isSet;

    OAIConfigNodePropertyInteger cache_size;
    bool m_cache_size_isSet;

    OAIConfigNodePropertyInteger time_limit;
    bool m_time_limit_isSet;

};

}

#endif // OAIComAdobeCqSocialDatastoreAsImplASResourceProviderFactoryProperties_H
