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
 * OrgApacheSlingEventJobsQueueConfigurationProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingEventJobsQueueConfigurationProperties_H_
#define OrgApacheSlingEventJobsQueueConfigurationProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyFloat.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingEventJobsQueueConfigurationProperties
    : public ModelBase
{
public:
    OrgApacheSlingEventJobsQueueConfigurationProperties();
    virtual ~OrgApacheSlingEventJobsQueueConfigurationProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingEventJobsQueueConfigurationProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getQueueName() const;
    void setQueueName(ConfigNodePropertyString const& value);
    bool queueNameIsSet() const;
    void unsetQueue_name();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getQueueTopics() const;
    void setQueueTopics(ConfigNodePropertyArray const& value);
    bool queueTopicsIsSet() const;
    void unsetQueue_topics();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyDropDown getQueueType() const;
    void setQueueType(ConfigNodePropertyDropDown const& value);
    bool queueTypeIsSet() const;
    void unsetQueue_type();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyDropDown getQueuePriority() const;
    void setQueuePriority(ConfigNodePropertyDropDown const& value);
    bool queuePriorityIsSet() const;
    void unsetQueue_priority();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getQueueRetries() const;
    void setQueueRetries(ConfigNodePropertyInteger const& value);
    bool queueRetriesIsSet() const;
    void unsetQueue_retries();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getQueueRetrydelay() const;
    void setQueueRetrydelay(ConfigNodePropertyInteger const& value);
    bool queueRetrydelayIsSet() const;
    void unsetQueue_retrydelay();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyFloat getQueueMaxparallel() const;
    void setQueueMaxparallel(ConfigNodePropertyFloat const& value);
    bool queueMaxparallelIsSet() const;
    void unsetQueue_maxparallel();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getQueueKeepJobs() const;
    void setQueueKeepJobs(ConfigNodePropertyBoolean const& value);
    bool queueKeepJobsIsSet() const;
    void unsetQueue_keepJobs();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getQueuePreferRunOnCreationInstance() const;
    void setQueuePreferRunOnCreationInstance(ConfigNodePropertyBoolean const& value);
    bool queuePreferRunOnCreationInstanceIsSet() const;
    void unsetQueue_preferRunOnCreationInstance();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getQueueThreadPoolSize() const;
    void setQueueThreadPoolSize(ConfigNodePropertyInteger const& value);
    bool queueThreadPoolSizeIsSet() const;
    void unsetQueue_threadPoolSize();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getServiceRanking() const;
    void setServiceRanking(ConfigNodePropertyInteger const& value);
    bool serviceRankingIsSet() const;
    void unsetService_ranking();

protected:
    ConfigNodePropertyString m_Queue_name;
    bool m_Queue_nameIsSet;
    ConfigNodePropertyArray m_Queue_topics;
    bool m_Queue_topicsIsSet;
    ConfigNodePropertyDropDown m_Queue_type;
    bool m_Queue_typeIsSet;
    ConfigNodePropertyDropDown m_Queue_priority;
    bool m_Queue_priorityIsSet;
    ConfigNodePropertyInteger m_Queue_retries;
    bool m_Queue_retriesIsSet;
    ConfigNodePropertyInteger m_Queue_retrydelay;
    bool m_Queue_retrydelayIsSet;
    ConfigNodePropertyFloat m_Queue_maxparallel;
    bool m_Queue_maxparallelIsSet;
    ConfigNodePropertyBoolean m_Queue_keepJobs;
    bool m_Queue_keepJobsIsSet;
    ConfigNodePropertyBoolean m_Queue_preferRunOnCreationInstance;
    bool m_Queue_preferRunOnCreationInstanceIsSet;
    ConfigNodePropertyInteger m_Queue_threadPoolSize;
    bool m_Queue_threadPoolSizeIsSet;
    ConfigNodePropertyInteger m_Service_ranking;
    bool m_Service_rankingIsSet;
};

}
}
}
}

#endif /* OrgApacheSlingEventJobsQueueConfigurationProperties_H_ */
