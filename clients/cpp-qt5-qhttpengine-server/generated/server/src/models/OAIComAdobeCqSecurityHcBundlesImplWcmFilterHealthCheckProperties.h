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
 * OAIComAdobeCqSecurityHcBundlesImplWcmFilterHealthCheckProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSecurityHcBundlesImplWcmFilterHealthCheckProperties_H
#define OAIComAdobeCqSecurityHcBundlesImplWcmFilterHealthCheckProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSecurityHcBundlesImplWcmFilterHealthCheckProperties: public OAIObject {
public:
    OAIComAdobeCqSecurityHcBundlesImplWcmFilterHealthCheckProperties();
    OAIComAdobeCqSecurityHcBundlesImplWcmFilterHealthCheckProperties(QString json);
    ~OAIComAdobeCqSecurityHcBundlesImplWcmFilterHealthCheckProperties() override;
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

#endif // OAIComAdobeCqSecurityHcBundlesImplWcmFilterHealthCheckProperties_H
