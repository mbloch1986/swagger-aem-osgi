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
 * ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties.h
 *
 * 
 */

#ifndef ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties_H_
#define ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace server {
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

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getPreserveHierarchyNodes() const;
    void setPreserveHierarchyNodes(ConfigNodePropertyBoolean const& value);
    bool preserveHierarchyNodesIsSet() const;
    void unsetPreserve_hierarchy_nodes();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getIgnoreVersioning() const;
    void setIgnoreVersioning(ConfigNodePropertyBoolean const& value);
    bool ignoreVersioningIsSet() const;
    void unsetIgnore_versioning();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getImportAcl() const;
    void setImportAcl(ConfigNodePropertyBoolean const& value);
    bool importAclIsSet() const;
    void unsetImport_acl();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getSaveThreshold() const;
    void setSaveThreshold(ConfigNodePropertyInteger const& value);
    bool saveThresholdIsSet() const;
    void unsetSave_threshold();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getPreserveUserPaths() const;
    void setPreserveUserPaths(ConfigNodePropertyBoolean const& value);
    bool preserveUserPathsIsSet() const;
    void unsetPreserve_user_paths();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getPreserveUuid() const;
    void setPreserveUuid(ConfigNodePropertyBoolean const& value);
    bool preserveUuidIsSet() const;
    void unsetPreserve_uuid();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getPreserveUuidNodetypes() const;
    void setPreserveUuidNodetypes(ConfigNodePropertyArray const& value);
    bool preserveUuidNodetypesIsSet() const;
    void unsetPreserve_uuid_nodetypes();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getPreserveUuidSubtrees() const;
    void setPreserveUuidSubtrees(ConfigNodePropertyArray const& value);
    bool preserveUuidSubtreesIsSet() const;
    void unsetPreserve_uuid_subtrees();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getAutoCommit() const;
    void setAutoCommit(ConfigNodePropertyBoolean const& value);
    bool autoCommitIsSet() const;
    void unsetAuto_commit();

protected:
    ConfigNodePropertyBoolean m_Preserve_hierarchy_nodes;
    bool m_Preserve_hierarchy_nodesIsSet;
    ConfigNodePropertyBoolean m_Ignore_versioning;
    bool m_Ignore_versioningIsSet;
    ConfigNodePropertyBoolean m_Import_acl;
    bool m_Import_aclIsSet;
    ConfigNodePropertyInteger m_Save_threshold;
    bool m_Save_thresholdIsSet;
    ConfigNodePropertyBoolean m_Preserve_user_paths;
    bool m_Preserve_user_pathsIsSet;
    ConfigNodePropertyBoolean m_Preserve_uuid;
    bool m_Preserve_uuidIsSet;
    ConfigNodePropertyArray m_Preserve_uuid_nodetypes;
    bool m_Preserve_uuid_nodetypesIsSet;
    ConfigNodePropertyArray m_Preserve_uuid_subtrees;
    bool m_Preserve_uuid_subtreesIsSet;
    ConfigNodePropertyBoolean m_Auto_commit;
    bool m_Auto_commitIsSet;
};

}
}
}
}

#endif /* ComDayCqReplicationImplContentDurboDurboImportConfigurationProvProperties_H_ */