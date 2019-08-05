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
 * OAIComAdobeGraniteQueriesImplHcQueryLimitsHealthCheckProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteQueriesImplHcQueryLimitsHealthCheckProperties_H
#define OAIComAdobeGraniteQueriesImplHcQueryLimitsHealthCheckProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteQueriesImplHcQueryLimitsHealthCheckProperties: public OAIObject {
public:
    OAIComAdobeGraniteQueriesImplHcQueryLimitsHealthCheckProperties();
    OAIComAdobeGraniteQueriesImplHcQueryLimitsHealthCheckProperties(QString json);
    ~OAIComAdobeGraniteQueriesImplHcQueryLimitsHealthCheckProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getHcTags() const;
    void setHcTags(const OAIConfigNodePropertyArray &hc_tags);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray hc_tags;
    bool m_hc_tags_isSet;

};

}

#endif // OAIComAdobeGraniteQueriesImplHcQueryLimitsHealthCheckProperties_H