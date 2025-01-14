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


#include "ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties()
{
    m_Cq_wcm_msm_action_excludednodetypesIsSet = false;
    m_Cq_wcm_msm_action_excludedparagraphitemsIsSet = false;
    m_Cq_wcm_msm_action_excludedpropsIsSet = false;
    m_Cq_wcm_msm_impl_actions_pagemove_prop_referenceUpdateIsSet = false;
    
}

ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::~ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties()
{
}

void ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Cq_wcm_msm_action_excludednodetypesIsSet)
    {
        val["cq.wcm.msm.action.excludednodetypes"] = ModelBase::toJson(m_Cq_wcm_msm_action_excludednodetypes);
    }
    if(m_Cq_wcm_msm_action_excludedparagraphitemsIsSet)
    {
        val["cq.wcm.msm.action.excludedparagraphitems"] = ModelBase::toJson(m_Cq_wcm_msm_action_excludedparagraphitems);
    }
    if(m_Cq_wcm_msm_action_excludedpropsIsSet)
    {
        val["cq.wcm.msm.action.excludedprops"] = ModelBase::toJson(m_Cq_wcm_msm_action_excludedprops);
    }
    if(m_Cq_wcm_msm_impl_actions_pagemove_prop_referenceUpdateIsSet)
    {
        val["cq.wcm.msm.impl.actions.pagemove.prop_referenceUpdate"] = ModelBase::toJson(m_Cq_wcm_msm_impl_actions_pagemove_prop_referenceUpdate);
    }
    

    return val;
}

void ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::fromJson(nlohmann::json& val)
{
    if(val.find("cq.wcm.msm.action.excludednodetypes") != val.end())
    {
        if(!val["cq.wcm.msm.action.excludednodetypes"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["cq.wcm.msm.action.excludednodetypes"]);
            setCqWcmMsmActionExcludednodetypes( newItem );
        }
        
    }
    if(val.find("cq.wcm.msm.action.excludedparagraphitems") != val.end())
    {
        if(!val["cq.wcm.msm.action.excludedparagraphitems"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["cq.wcm.msm.action.excludedparagraphitems"]);
            setCqWcmMsmActionExcludedparagraphitems( newItem );
        }
        
    }
    if(val.find("cq.wcm.msm.action.excludedprops") != val.end())
    {
        if(!val["cq.wcm.msm.action.excludedprops"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["cq.wcm.msm.action.excludedprops"]);
            setCqWcmMsmActionExcludedprops( newItem );
        }
        
    }
    if(val.find("cq.wcm.msm.impl.actions.pagemove.prop_referenceUpdate") != val.end())
    {
        if(!val["cq.wcm.msm.impl.actions.pagemove.prop_referenceUpdate"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["cq.wcm.msm.impl.actions.pagemove.prop_referenceUpdate"]);
            setCqWcmMsmImplActionsPagemovePropReferenceUpdate( newItem );
        }
        
    }
    
}


ConfigNodePropertyArray ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::getCqWcmMsmActionExcludednodetypes() const
{
    return m_Cq_wcm_msm_action_excludednodetypes;
}
void ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::setCqWcmMsmActionExcludednodetypes(ConfigNodePropertyArray const& value)
{
    m_Cq_wcm_msm_action_excludednodetypes = value;
    m_Cq_wcm_msm_action_excludednodetypesIsSet = true;
}
bool ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::cqWcmMsmActionExcludednodetypesIsSet() const
{
    return m_Cq_wcm_msm_action_excludednodetypesIsSet;
}
void ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::unsetCq_wcm_msm_action_excludednodetypes()
{
    m_Cq_wcm_msm_action_excludednodetypesIsSet = false;
}
ConfigNodePropertyArray ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::getCqWcmMsmActionExcludedparagraphitems() const
{
    return m_Cq_wcm_msm_action_excludedparagraphitems;
}
void ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::setCqWcmMsmActionExcludedparagraphitems(ConfigNodePropertyArray const& value)
{
    m_Cq_wcm_msm_action_excludedparagraphitems = value;
    m_Cq_wcm_msm_action_excludedparagraphitemsIsSet = true;
}
bool ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::cqWcmMsmActionExcludedparagraphitemsIsSet() const
{
    return m_Cq_wcm_msm_action_excludedparagraphitemsIsSet;
}
void ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::unsetCq_wcm_msm_action_excludedparagraphitems()
{
    m_Cq_wcm_msm_action_excludedparagraphitemsIsSet = false;
}
ConfigNodePropertyArray ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::getCqWcmMsmActionExcludedprops() const
{
    return m_Cq_wcm_msm_action_excludedprops;
}
void ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::setCqWcmMsmActionExcludedprops(ConfigNodePropertyArray const& value)
{
    m_Cq_wcm_msm_action_excludedprops = value;
    m_Cq_wcm_msm_action_excludedpropsIsSet = true;
}
bool ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::cqWcmMsmActionExcludedpropsIsSet() const
{
    return m_Cq_wcm_msm_action_excludedpropsIsSet;
}
void ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::unsetCq_wcm_msm_action_excludedprops()
{
    m_Cq_wcm_msm_action_excludedpropsIsSet = false;
}
ConfigNodePropertyBoolean ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::getCqWcmMsmImplActionsPagemovePropReferenceUpdate() const
{
    return m_Cq_wcm_msm_impl_actions_pagemove_prop_referenceUpdate;
}
void ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::setCqWcmMsmImplActionsPagemovePropReferenceUpdate(ConfigNodePropertyBoolean const& value)
{
    m_Cq_wcm_msm_impl_actions_pagemove_prop_referenceUpdate = value;
    m_Cq_wcm_msm_impl_actions_pagemove_prop_referenceUpdateIsSet = true;
}
bool ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::cqWcmMsmImplActionsPagemovePropReferenceUpdateIsSet() const
{
    return m_Cq_wcm_msm_impl_actions_pagemove_prop_referenceUpdateIsSet;
}
void ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties::unsetCq_wcm_msm_impl_actions_pagemove_prop_referenceUpdate()
{
    m_Cq_wcm_msm_impl_actions_pagemove_prop_referenceUpdateIsSet = false;
}

}
}
}
}

