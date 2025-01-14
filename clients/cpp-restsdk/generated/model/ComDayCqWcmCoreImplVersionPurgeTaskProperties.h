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
 * ComDayCqWcmCoreImplVersionPurgeTaskProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmCoreImplVersionPurgeTaskProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmCoreImplVersionPurgeTaskProperties_H_


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
class  ComDayCqWcmCoreImplVersionPurgeTaskProperties
    : public ModelBase
{
public:
    ComDayCqWcmCoreImplVersionPurgeTaskProperties();
    virtual ~ComDayCqWcmCoreImplVersionPurgeTaskProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmCoreImplVersionPurgeTaskProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getVersionpurgePaths() const;
    bool versionpurgePathsIsSet() const;
    void unsetVersionpurge_paths();
    void setVersionpurgePaths(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getVersionpurgeRecursive() const;
    bool versionpurgeRecursiveIsSet() const;
    void unsetVersionpurge_recursive();
    void setVersionpurgeRecursive(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getVersionpurgeMaxVersions() const;
    bool versionpurgeMaxVersionsIsSet() const;
    void unsetVersionpurge_maxVersions();
    void setVersionpurgeMaxVersions(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getVersionpurgeMinVersions() const;
    bool versionpurgeMinVersionsIsSet() const;
    void unsetVersionpurge_minVersions();
    void setVersionpurgeMinVersions(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getVersionpurgeMaxAgeDays() const;
    bool versionpurgeMaxAgeDaysIsSet() const;
    void unsetVersionpurge_maxAgeDays();
    void setVersionpurgeMaxAgeDays(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Versionpurge_paths;
    bool m_Versionpurge_pathsIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Versionpurge_recursive;
    bool m_Versionpurge_recursiveIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Versionpurge_maxVersions;
    bool m_Versionpurge_maxVersionsIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Versionpurge_minVersions;
    bool m_Versionpurge_minVersionsIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Versionpurge_maxAgeDays;
    bool m_Versionpurge_maxAgeDaysIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmCoreImplVersionPurgeTaskProperties_H_ */
