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

#ifndef OAIComAdobeCqSocialSiteImplSiteConfiguratorImplProperties_H
#define OAIComAdobeCqSocialSiteImplSiteConfiguratorImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialSiteImplSiteConfiguratorImplProperties: public OAIObject {
public:
    OAIComAdobeCqSocialSiteImplSiteConfiguratorImplProperties();
    OAIComAdobeCqSocialSiteImplSiteConfiguratorImplProperties(QString json);
    ~OAIComAdobeCqSocialSiteImplSiteConfiguratorImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getComponentsUsingTags() const;
    void setComponentsUsingTags(const OAIConfigNodePropertyArray &components_using_tags);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray components_using_tags;
    bool m_components_using_tags_isSet;

};

}

#endif // OAIComAdobeCqSocialSiteImplSiteConfiguratorImplProperties_H