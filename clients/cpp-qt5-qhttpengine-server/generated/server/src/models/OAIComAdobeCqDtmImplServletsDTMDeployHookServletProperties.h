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
 * OAIComAdobeCqDtmImplServletsDTMDeployHookServletProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqDtmImplServletsDTMDeployHookServletProperties_H
#define OAIComAdobeCqDtmImplServletsDTMDeployHookServletProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqDtmImplServletsDTMDeployHookServletProperties: public OAIObject {
public:
    OAIComAdobeCqDtmImplServletsDTMDeployHookServletProperties();
    OAIComAdobeCqDtmImplServletsDTMDeployHookServletProperties(QString json);
    ~OAIComAdobeCqDtmImplServletsDTMDeployHookServletProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getDtmStagingIpWhitelist() const;
    void setDtmStagingIpWhitelist(const OAIConfigNodePropertyArray &dtm_staging_ip_whitelist);

    OAIConfigNodePropertyArray getDtmProductionIpWhitelist() const;
    void setDtmProductionIpWhitelist(const OAIConfigNodePropertyArray &dtm_production_ip_whitelist);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray dtm_staging_ip_whitelist;
    bool m_dtm_staging_ip_whitelist_isSet;

    OAIConfigNodePropertyArray dtm_production_ip_whitelist;
    bool m_dtm_production_ip_whitelist_isSet;

};

}

#endif // OAIComAdobeCqDtmImplServletsDTMDeployHookServletProperties_H