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
 * OAIComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties_H
#define OAIComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties: public OAIObject {
public:
    OAIComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties();
    OAIComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties(QString json);
    ~OAIComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean getGroupListingPaginationEnable() const;
    void setGroupListingPaginationEnable(const OAIConfigNodePropertyBoolean &group_listing_pagination_enable);

    OAIConfigNodePropertyBoolean getGroupListingLazyloadingEnable() const;
    void setGroupListingLazyloadingEnable(const OAIConfigNodePropertyBoolean &group_listing_lazyloading_enable);

    OAIConfigNodePropertyInteger getPageSize() const;
    void setPageSize(const OAIConfigNodePropertyInteger &page_size);

    OAIConfigNodePropertyInteger getPriority() const;
    void setPriority(const OAIConfigNodePropertyInteger &priority);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyBoolean group_listing_pagination_enable;
    bool m_group_listing_pagination_enable_isSet;

    OAIConfigNodePropertyBoolean group_listing_lazyloading_enable;
    bool m_group_listing_lazyloading_enable_isSet;

    OAIConfigNodePropertyInteger page_size;
    bool m_page_size_isSet;

    OAIConfigNodePropertyInteger priority;
    bool m_priority_isSet;

};

}

#endif // OAIComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties_H