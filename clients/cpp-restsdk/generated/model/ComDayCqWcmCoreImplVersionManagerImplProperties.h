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
 * ComDayCqWcmCoreImplVersionManagerImplProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmCoreImplVersionManagerImplProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmCoreImplVersionManagerImplProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmCoreImplVersionManagerImplProperties
    : public ModelBase
{
public:
    ComDayCqWcmCoreImplVersionManagerImplProperties();
    virtual ~ComDayCqWcmCoreImplVersionManagerImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmCoreImplVersionManagerImplProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getVersionmanagerCreateVersionOnActivation() const;
    bool versionmanagerCreateVersionOnActivationIsSet() const;
    void unsetVersionmanager_createVersionOnActivation();
    void setVersionmanagerCreateVersionOnActivation(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getVersionmanagerPurgingEnabled() const;
    bool versionmanagerPurgingEnabledIsSet() const;
    void unsetVersionmanager_purgingEnabled();
    void setVersionmanagerPurgingEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getVersionmanagerPurgePaths() const;
    bool versionmanagerPurgePathsIsSet() const;
    void unsetVersionmanager_purgePaths();
    void setVersionmanagerPurgePaths(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getVersionmanagerIvPaths() const;
    bool versionmanagerIvPathsIsSet() const;
    void unsetVersionmanager_ivPaths();
    void setVersionmanagerIvPaths(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getVersionmanagerMaxAgeDays() const;
    bool versionmanagerMaxAgeDaysIsSet() const;
    void unsetVersionmanager_maxAgeDays();
    void setVersionmanagerMaxAgeDays(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getVersionmanagerMaxNumberVersions() const;
    bool versionmanagerMaxNumberVersionsIsSet() const;
    void unsetVersionmanager_maxNumberVersions();
    void setVersionmanagerMaxNumberVersions(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getVersionmanagerMinNumberVersions() const;
    bool versionmanagerMinNumberVersionsIsSet() const;
    void unsetVersionmanager_minNumberVersions();
    void setVersionmanagerMinNumberVersions(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Versionmanager_createVersionOnActivation;
    bool m_Versionmanager_createVersionOnActivationIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Versionmanager_purgingEnabled;
    bool m_Versionmanager_purgingEnabledIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Versionmanager_purgePaths;
    bool m_Versionmanager_purgePathsIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Versionmanager_ivPaths;
    bool m_Versionmanager_ivPathsIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Versionmanager_maxAgeDays;
    bool m_Versionmanager_maxAgeDaysIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Versionmanager_maxNumberVersions;
    bool m_Versionmanager_maxNumberVersionsIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Versionmanager_minNumberVersions;
    bool m_Versionmanager_minNumberVersionsIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmCoreImplVersionManagerImplProperties_H_ */
