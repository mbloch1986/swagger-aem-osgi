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
 * OAIComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties_H_
#define OAIComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties: public OAIObject {
public:
    OAIComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties();
    OAIComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties(QString json);
    ~OAIComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getDiffPath();
    void setDiffPath(OAIConfigNodePropertyString* diff_path);

    OAIConfigNodePropertyString* getServiceName();
    void setServiceName(OAIConfigNodePropertyString* service_name);

    OAIConfigNodePropertyString* getServiceUserTarget();
    void setServiceUserTarget(OAIConfigNodePropertyString* service_user_target);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* diff_path;
    bool m_diff_path_isSet;

    OAIConfigNodePropertyString* service_name;
    bool m_service_name_isSet;

    OAIConfigNodePropertyString* service_user_target;
    bool m_service_user_target_isSet;

};

}

#endif /* OAIComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties_H_ */
