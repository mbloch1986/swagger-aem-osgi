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
 * ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties_H_


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
class  ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties
    : public ModelBase
{
public:
    ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties();
    virtual ~ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getPreserveHierarchyNodes() const;
    bool preserveHierarchyNodesIsSet() const;
    void unsetPreserve_hierarchy_nodes();
    void setPreserveHierarchyNodes(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getIgnoreVersioning() const;
    bool ignoreVersioningIsSet() const;
    void unsetIgnore_versioning();
    void setIgnoreVersioning(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getImportAcl() const;
    bool importAclIsSet() const;
    void unsetImport_acl();
    void setImportAcl(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getSaveThreshold() const;
    bool saveThresholdIsSet() const;
    void unsetSave_threshold();
    void setSaveThreshold(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getPreserveUserPaths() const;
    bool preserveUserPathsIsSet() const;
    void unsetPreserve_user_paths();
    void setPreserveUserPaths(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getPreserveUuid() const;
    bool preserveUuidIsSet() const;
    void unsetPreserve_uuid();
    void setPreserveUuid(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getPreserveUuidNodetypes() const;
    bool preserveUuidNodetypesIsSet() const;
    void unsetPreserve_uuid_nodetypes();
    void setPreserveUuidNodetypes(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getPreserveUuidSubtrees() const;
    bool preserveUuidSubtreesIsSet() const;
    void unsetPreserve_uuid_subtrees();
    void setPreserveUuidSubtrees(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getAutoCommit() const;
    bool autoCommitIsSet() const;
    void unsetAuto_commit();
    void setAutoCommit(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Preserve_hierarchy_nodes;
    bool m_Preserve_hierarchy_nodesIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Ignore_versioning;
    bool m_Ignore_versioningIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Import_acl;
    bool m_Import_aclIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Save_threshold;
    bool m_Save_thresholdIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Preserve_user_paths;
    bool m_Preserve_user_pathsIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Preserve_uuid;
    bool m_Preserve_uuidIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Preserve_uuid_nodetypes;
    bool m_Preserve_uuid_nodetypesIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Preserve_uuid_subtrees;
    bool m_Preserve_uuid_subtreesIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Auto_commit;
    bool m_Auto_commitIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties_H_ */