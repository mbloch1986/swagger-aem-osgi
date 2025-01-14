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
 * ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties.h
 *
 * 
 */

#ifndef ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties_H_
#define ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties_H_



#include "ConfigNodePropertyArray.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties
{
public:
    ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties();
    virtual ~ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getDefaultAttachmentTypeBlacklist() const;
    void setDefaultAttachmentTypeBlacklist(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getBaselineAttachmentTypeBlacklist() const;
    void setBaselineAttachmentTypeBlacklist(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Default_attachment_type_blacklist;
    std::shared_ptr<ConfigNodePropertyArray> m_Baseline_attachment_type_blacklist;
};

}
}
}
}

#endif /* ComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties_H_ */
