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
 * OAIComAdobeCqSocialSiteImplSiteConfiguratorImplProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialSiteImplSiteConfiguratorImplProperties_H_
#define OAIComAdobeCqSocialSiteImplSiteConfiguratorImplProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialSiteImplSiteConfiguratorImplProperties: public OAIObject {
public:
    OAIComAdobeCqSocialSiteImplSiteConfiguratorImplProperties();
    OAIComAdobeCqSocialSiteImplSiteConfiguratorImplProperties(QString json);
    ~OAIComAdobeCqSocialSiteImplSiteConfiguratorImplProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialSiteImplSiteConfiguratorImplProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getComponentsUsingTags();
    void setComponentsUsingTags(OAIConfigNodePropertyArray* components_using_tags);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* components_using_tags;
    bool m_components_using_tags_isSet;

};

}

#endif /* OAIComAdobeCqSocialSiteImplSiteConfiguratorImplProperties_H_ */