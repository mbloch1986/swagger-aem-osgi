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

#ifndef OAIComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties_H_
#define OAIComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties: public OAIObject {
public:
    OAIComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties();
    OAIComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties(QString json);
    ~OAIComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean* getCqAnalyticsTestandtargetPushauthorcampaignpagelistenerEnabled();
    void setCqAnalyticsTestandtargetPushauthorcampaignpagelistenerEnabled(OAIConfigNodePropertyBoolean* cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabled);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyBoolean* cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabled;
    bool m_cq_analytics_testandtarget_pushauthorcampaignpagelistener_enabled_isSet;

};

}

#endif /* OAIComDayCqAnalyticsTestandtargetImplPushAuthorCampaignPageListenerProperties_H_ */
