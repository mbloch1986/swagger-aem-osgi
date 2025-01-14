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
 * OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties.h
 *
 * 
 */

#ifndef OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties_H_
#define OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyDropDown.h"
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
class  OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties
    : public ModelBase
{
public:
    OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties();
    virtual ~OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getPathDescField() const;
    void setPathDescField(ConfigNodePropertyString const& value);
    bool pathDescFieldIsSet() const;
    void unsetPath_desc_field();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getPathChildField() const;
    void setPathChildField(ConfigNodePropertyString const& value);
    bool pathChildFieldIsSet() const;
    void unsetPath_child_field();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getPathParentField() const;
    void setPathParentField(ConfigNodePropertyString const& value);
    bool pathParentFieldIsSet() const;
    void unsetPath_parent_field();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getPathExactField() const;
    void setPathExactField(ConfigNodePropertyString const& value);
    bool pathExactFieldIsSet() const;
    void unsetPath_exact_field();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getCatchAllField() const;
    void setCatchAllField(ConfigNodePropertyString const& value);
    bool catchAllFieldIsSet() const;
    void unsetCatch_all_field();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getCollapsedPathField() const;
    void setCollapsedPathField(ConfigNodePropertyString const& value);
    bool collapsedPathFieldIsSet() const;
    void unsetCollapsed_path_field();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getPathDepthField() const;
    void setPathDepthField(ConfigNodePropertyString const& value);
    bool pathDepthFieldIsSet() const;
    void unsetPath_depth_field();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyDropDown getCommitPolicy() const;
    void setCommitPolicy(ConfigNodePropertyDropDown const& value);
    bool commitPolicyIsSet() const;
    void unsetCommit_policy();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getRows() const;
    void setRows(ConfigNodePropertyInteger const& value);
    bool rowsIsSet() const;
    void unsetRows();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getPathRestrictions() const;
    void setPathRestrictions(ConfigNodePropertyBoolean const& value);
    bool pathRestrictionsIsSet() const;
    void unsetPath_restrictions();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getPropertyRestrictions() const;
    void setPropertyRestrictions(ConfigNodePropertyBoolean const& value);
    bool propertyRestrictionsIsSet() const;
    void unsetProperty_restrictions();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getPrimarytypesRestrictions() const;
    void setPrimarytypesRestrictions(ConfigNodePropertyBoolean const& value);
    bool primarytypesRestrictionsIsSet() const;
    void unsetPrimarytypes_restrictions();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getIgnoredProperties() const;
    void setIgnoredProperties(ConfigNodePropertyArray const& value);
    bool ignoredPropertiesIsSet() const;
    void unsetIgnored_properties();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getUsedProperties() const;
    void setUsedProperties(ConfigNodePropertyArray const& value);
    bool usedPropertiesIsSet() const;
    void unsetUsed_properties();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getTypeMappings() const;
    void setTypeMappings(ConfigNodePropertyArray const& value);
    bool typeMappingsIsSet() const;
    void unsetType_mappings();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getPropertyMappings() const;
    void setPropertyMappings(ConfigNodePropertyArray const& value);
    bool propertyMappingsIsSet() const;
    void unsetProperty_mappings();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getCollapseJcrcontentNodes() const;
    void setCollapseJcrcontentNodes(ConfigNodePropertyBoolean const& value);
    bool collapseJcrcontentNodesIsSet() const;
    void unsetCollapse_jcrcontent_nodes();

protected:
    ConfigNodePropertyString m_Path_desc_field;
    bool m_Path_desc_fieldIsSet;
    ConfigNodePropertyString m_Path_child_field;
    bool m_Path_child_fieldIsSet;
    ConfigNodePropertyString m_Path_parent_field;
    bool m_Path_parent_fieldIsSet;
    ConfigNodePropertyString m_Path_exact_field;
    bool m_Path_exact_fieldIsSet;
    ConfigNodePropertyString m_Catch_all_field;
    bool m_Catch_all_fieldIsSet;
    ConfigNodePropertyString m_Collapsed_path_field;
    bool m_Collapsed_path_fieldIsSet;
    ConfigNodePropertyString m_Path_depth_field;
    bool m_Path_depth_fieldIsSet;
    ConfigNodePropertyDropDown m_Commit_policy;
    bool m_Commit_policyIsSet;
    ConfigNodePropertyInteger m_Rows;
    bool m_RowsIsSet;
    ConfigNodePropertyBoolean m_Path_restrictions;
    bool m_Path_restrictionsIsSet;
    ConfigNodePropertyBoolean m_Property_restrictions;
    bool m_Property_restrictionsIsSet;
    ConfigNodePropertyBoolean m_Primarytypes_restrictions;
    bool m_Primarytypes_restrictionsIsSet;
    ConfigNodePropertyArray m_Ignored_properties;
    bool m_Ignored_propertiesIsSet;
    ConfigNodePropertyArray m_Used_properties;
    bool m_Used_propertiesIsSet;
    ConfigNodePropertyArray m_Type_mappings;
    bool m_Type_mappingsIsSet;
    ConfigNodePropertyArray m_Property_mappings;
    bool m_Property_mappingsIsSet;
    ConfigNodePropertyBoolean m_Collapse_jcrcontent_nodes;
    bool m_Collapse_jcrcontent_nodesIsSet;
};

}
}
}
}

#endif /* OrgApacheJackrabbitOakPluginsIndexSolrOsgiOakSolrConfigurationProperties_H_ */
