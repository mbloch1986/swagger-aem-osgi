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
 * OrgApacheSlingEventImplJobsJobConsumerManagerProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingEventImplJobsJobConsumerManagerProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingEventImplJobsJobConsumerManagerProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingEventImplJobsJobConsumerManagerProperties
    : public ModelBase
{
public:
    OrgApacheSlingEventImplJobsJobConsumerManagerProperties();
    virtual ~OrgApacheSlingEventImplJobsJobConsumerManagerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingEventImplJobsJobConsumerManagerProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheSlingInstallerConfigurationPersist() const;
    bool orgApacheSlingInstallerConfigurationPersistIsSet() const;
    void unsetOrg_apache_sling_installer_configuration_persist();
    void setOrgApacheSlingInstallerConfigurationPersist(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getJobConsumermanagerWhitelist() const;
    bool jobConsumermanagerWhitelistIsSet() const;
    void unsetJob_consumermanager_whitelist();
    void setJobConsumermanagerWhitelist(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getJobConsumermanagerBlacklist() const;
    bool jobConsumermanagerBlacklistIsSet() const;
    void unsetJob_consumermanager_blacklist();
    void setJobConsumermanagerBlacklist(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_sling_installer_configuration_persist;
    bool m_Org_apache_sling_installer_configuration_persistIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Job_consumermanager_whitelist;
    bool m_Job_consumermanager_whitelistIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Job_consumermanager_blacklist;
    bool m_Job_consumermanager_blacklistIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingEventImplJobsJobConsumerManagerProperties_H_ */
