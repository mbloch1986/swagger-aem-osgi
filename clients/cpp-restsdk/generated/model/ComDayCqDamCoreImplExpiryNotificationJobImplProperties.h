/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ComDayCqDamCoreImplExpiryNotificationJobImplProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqDamCoreImplExpiryNotificationJobImplProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqDamCoreImplExpiryNotificationJobImplProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamCoreImplExpiryNotificationJobImplProperties
    : public ModelBase
{
public:
    ComDayCqDamCoreImplExpiryNotificationJobImplProperties();
    virtual ~ComDayCqDamCoreImplExpiryNotificationJobImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqDamCoreImplExpiryNotificationJobImplProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getCqDamExpiryNotificationSchedulerIstimebased() const;
    bool cqDamExpiryNotificationSchedulerIstimebasedIsSet() const;
    void unsetCq_dam_expiry_notification_scheduler_istimebased();
    void setCqDamExpiryNotificationSchedulerIstimebased(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getCqDamExpiryNotificationSchedulerTimebasedRule() const;
    bool cqDamExpiryNotificationSchedulerTimebasedRuleIsSet() const;
    void unsetCq_dam_expiry_notification_scheduler_timebased_rule();
    void setCqDamExpiryNotificationSchedulerTimebasedRule(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getCqDamExpiryNotificationSchedulerPeriodRule() const;
    bool cqDamExpiryNotificationSchedulerPeriodRuleIsSet() const;
    void unsetCq_dam_expiry_notification_scheduler_period_rule();
    void setCqDamExpiryNotificationSchedulerPeriodRule(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getSendEmail() const;
    bool sendEmailIsSet() const;
    void unsetSend_email();
    void setSendEmail(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getAssetExpiredLimit() const;
    bool assetExpiredLimitIsSet() const;
    void unsetAsset_expired_limit();
    void setAssetExpiredLimit(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getPriorNotificationSeconds() const;
    bool priorNotificationSecondsIsSet() const;
    void unsetPrior_notification_seconds();
    void setPriorNotificationSeconds(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getCqDamExpiryNotificationUrlProtocol() const;
    bool cqDamExpiryNotificationUrlProtocolIsSet() const;
    void unsetCq_dam_expiry_notification_url_protocol();
    void setCqDamExpiryNotificationUrlProtocol(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Cq_dam_expiry_notification_scheduler_istimebased;
    bool m_Cq_dam_expiry_notification_scheduler_istimebasedIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Cq_dam_expiry_notification_scheduler_timebased_rule;
    bool m_Cq_dam_expiry_notification_scheduler_timebased_ruleIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Cq_dam_expiry_notification_scheduler_period_rule;
    bool m_Cq_dam_expiry_notification_scheduler_period_ruleIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Send_email;
    bool m_Send_emailIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Asset_expired_limit;
    bool m_Asset_expired_limitIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Prior_notification_seconds;
    bool m_Prior_notification_secondsIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Cq_dam_expiry_notification_url_protocol;
    bool m_Cq_dam_expiry_notification_url_protocolIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqDamCoreImplExpiryNotificationJobImplProperties_H_ */
