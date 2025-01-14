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

#ifndef OAIComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties_H_
#define OAIComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties: public OAIObject {
public:
    OAIComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties();
    OAIComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties(QString json);
    ~OAIComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean* getGroupListingPaginationEnable();
    void setGroupListingPaginationEnable(OAIConfigNodePropertyBoolean* group_listing_pagination_enable);

    OAIConfigNodePropertyBoolean* getGroupListingLazyloadingEnable();
    void setGroupListingLazyloadingEnable(OAIConfigNodePropertyBoolean* group_listing_lazyloading_enable);

    OAIConfigNodePropertyInteger* getPageSize();
    void setPageSize(OAIConfigNodePropertyInteger* page_size);

    OAIConfigNodePropertyInteger* getPriority();
    void setPriority(OAIConfigNodePropertyInteger* priority);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyBoolean* group_listing_pagination_enable;
    bool m_group_listing_pagination_enable_isSet;

    OAIConfigNodePropertyBoolean* group_listing_lazyloading_enable;
    bool m_group_listing_lazyloading_enable_isSet;

    OAIConfigNodePropertyInteger* page_size;
    bool m_page_size_isSet;

    OAIConfigNodePropertyInteger* priority;
    bool m_priority_isSet;

};

}

#endif /* OAIComAdobeCqSocialGroupClientImplCommunityGroupCollectionComponenProperties_H_ */
