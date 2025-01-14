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
 * ComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties.h
 *
 * 
 */

#ifndef ComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties_H_
#define ComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties
    : public ModelBase
{
public:
    ComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties();
    virtual ~ComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getCqWcmMsmActionExcludednodetypes() const;
    void setCqWcmMsmActionExcludednodetypes(ConfigNodePropertyArray const& value);
    bool cqWcmMsmActionExcludednodetypesIsSet() const;
    void unsetCq_wcm_msm_action_excludednodetypes();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getCqWcmMsmActionExcludedparagraphitems() const;
    void setCqWcmMsmActionExcludedparagraphitems(ConfigNodePropertyArray const& value);
    bool cqWcmMsmActionExcludedparagraphitemsIsSet() const;
    void unsetCq_wcm_msm_action_excludedparagraphitems();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getCqWcmMsmActionExcludedprops() const;
    void setCqWcmMsmActionExcludedprops(ConfigNodePropertyArray const& value);
    bool cqWcmMsmActionExcludedpropsIsSet() const;
    void unsetCq_wcm_msm_action_excludedprops();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyDropDown getContentcopyactionOrderStyle() const;
    void setContentcopyactionOrderStyle(ConfigNodePropertyDropDown const& value);
    bool contentcopyactionOrderStyleIsSet() const;
    void unsetContentcopyaction_order_style();

protected:
    ConfigNodePropertyArray m_Cq_wcm_msm_action_excludednodetypes;
    bool m_Cq_wcm_msm_action_excludednodetypesIsSet;
    ConfigNodePropertyArray m_Cq_wcm_msm_action_excludedparagraphitems;
    bool m_Cq_wcm_msm_action_excludedparagraphitemsIsSet;
    ConfigNodePropertyArray m_Cq_wcm_msm_action_excludedprops;
    bool m_Cq_wcm_msm_action_excludedpropsIsSet;
    ConfigNodePropertyDropDown m_Contentcopyaction_order_style;
    bool m_Contentcopyaction_order_styleIsSet;
};

}
}
}
}

#endif /* ComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties_H_ */
