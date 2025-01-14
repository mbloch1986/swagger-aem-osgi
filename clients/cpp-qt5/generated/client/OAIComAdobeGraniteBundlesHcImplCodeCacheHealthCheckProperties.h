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
 * OAIComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties_H_
#define OAIComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties: public OAIObject {
public:
    OAIComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties();
    OAIComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties(QString json);
    ~OAIComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getHcTags();
    void setHcTags(OAIConfigNodePropertyArray* hc_tags);

    OAIConfigNodePropertyInteger* getMinimumCodeCacheSize();
    void setMinimumCodeCacheSize(OAIConfigNodePropertyInteger* minimum_code_cache_size);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* hc_tags;
    bool m_hc_tags_isSet;

    OAIConfigNodePropertyInteger* minimum_code_cache_size;
    bool m_minimum_code_cache_size_isSet;

};

}

#endif /* OAIComAdobeGraniteBundlesHcImplCodeCacheHealthCheckProperties_H_ */
