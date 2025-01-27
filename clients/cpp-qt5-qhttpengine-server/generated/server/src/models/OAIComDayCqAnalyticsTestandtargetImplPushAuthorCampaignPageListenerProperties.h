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
 * OAIComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties.h
 *
 * 
 */

#ifndef OAIComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties_H
#define OAIComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties: public OAIObject {
public:
    OAIComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties();
    OAIComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties(QString json);
    ~OAIComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean getCqAnalyticsTestandtargetPushauthorcampaignpagelistenerEnabled() const;
    void setCqAnalyticsTestandtargetPushauthorcampaignpagelistenerEnabled(const OAIConfigNodePropertyBoolean &cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabled);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyBoolean cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabled;
    bool m_cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabled_isSet;

};

}

#endif // OAIComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties_H
