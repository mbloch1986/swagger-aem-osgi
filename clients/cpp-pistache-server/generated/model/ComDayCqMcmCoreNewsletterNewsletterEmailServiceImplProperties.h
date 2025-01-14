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
 * ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties.h
 *
 * 
 */

#ifndef ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties_H_
#define ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties
    : public ModelBase
{
public:
    ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties();
    virtual ~ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getFromAddress() const;
    void setFromAddress(ConfigNodePropertyString const& value);
    bool fromAddressIsSet() const;
    void unsetFrom_address();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getSenderHost() const;
    void setSenderHost(ConfigNodePropertyString const& value);
    bool senderHostIsSet() const;
    void unsetSender_host();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getMaxBounceCount() const;
    void setMaxBounceCount(ConfigNodePropertyString const& value);
    bool maxBounceCountIsSet() const;
    void unsetMax_bounce_count();

protected:
    ConfigNodePropertyString m_From_address;
    bool m_From_addressIsSet;
    ConfigNodePropertyString m_Sender_host;
    bool m_Sender_hostIsSet;
    ConfigNodePropertyString m_Max_bounce_count;
    bool m_Max_bounce_countIsSet;
};

}
}
}
}

#endif /* ComDayCqMcmCoreNewsletterNewsletterEmailServiceImplProperties_H_ */
