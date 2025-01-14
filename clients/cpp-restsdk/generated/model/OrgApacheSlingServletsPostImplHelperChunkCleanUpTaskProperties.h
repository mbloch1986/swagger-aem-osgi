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
 * OrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties_H_


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
class  OrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties
    : public ModelBase
{
public:
    OrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties();
    virtual ~OrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSchedulerExpression() const;
    bool schedulerExpressionIsSet() const;
    void unsetScheduler_expression();
    void setSchedulerExpression(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getSchedulerConcurrent() const;
    bool schedulerConcurrentIsSet() const;
    void unsetScheduler_concurrent();
    void setSchedulerConcurrent(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getChunkCleanupAge() const;
    bool chunkCleanupAgeIsSet() const;
    void unsetChunk_cleanup_age();
    void setChunkCleanupAge(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Scheduler_expression;
    bool m_Scheduler_expressionIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Scheduler_concurrent;
    bool m_Scheduler_concurrentIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Chunk_cleanup_age;
    bool m_Chunk_cleanup_ageIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingServletsPostImplHelperChunkCleanUpTaskProperties_H_ */
