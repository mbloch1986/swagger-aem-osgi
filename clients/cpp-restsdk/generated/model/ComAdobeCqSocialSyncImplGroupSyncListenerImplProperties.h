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
 * ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties();
    virtual ~ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getNodetypes() const;
    bool nodetypesIsSet() const;
    void unsetNodetypes();
    void setNodetypes(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getIgnorableprops() const;
    bool ignorablepropsIsSet() const;
    void unsetIgnorableprops();
    void setIgnorableprops(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getIgnorablenodes() const;
    bool ignorablenodesIsSet() const;
    void unsetIgnorablenodes();
    void setIgnorablenodes(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getEnabled() const;
    bool enabledIsSet() const;
    void unsetEnabled();
    void setEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getDistfolders() const;
    bool distfoldersIsSet() const;
    void unsetDistfolders();
    void setDistfolders(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Nodetypes;
    bool m_NodetypesIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Ignorableprops;
    bool m_IgnorablepropsIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Ignorablenodes;
    bool m_IgnorablenodesIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Enabled;
    bool m_EnabledIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Distfolders;
    bool m_DistfoldersIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties_H_ */