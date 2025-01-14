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
 * ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties_H_
#define ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties();
    virtual ~ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getAttachmentTypeBlacklist() const;
    void setAttachmentTypeBlacklist(ConfigNodePropertyString const& value);
    bool attachmentTypeBlacklistIsSet() const;
    void unsetAttachmentTypeBlacklist();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getExtensionOrder() const;
    void setExtensionOrder(ConfigNodePropertyInteger const& value);
    bool extensionOrderIsSet() const;
    void unsetExtension_order();

protected:
    ConfigNodePropertyString m_AttachmentTypeBlacklist;
    bool m_AttachmentTypeBlacklistIsSet;
    ConfigNodePropertyInteger m_Extension_order;
    bool m_Extension_orderIsSet;
};

}
}
}
}

#endif /* ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties_H_ */
