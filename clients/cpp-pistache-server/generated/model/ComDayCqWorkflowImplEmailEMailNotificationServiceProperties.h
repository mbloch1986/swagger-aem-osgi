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
 * ComDayCqWorkflowImplEmailEMailNotificationServiceProperties.h
 *
 * 
 */

#ifndef ComDayCqWorkflowImplEmailEMailNotificationServiceProperties_H_
#define ComDayCqWorkflowImplEmailEMailNotificationServiceProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWorkflowImplEmailEMailNotificationServiceProperties
    : public ModelBase
{
public:
    ComDayCqWorkflowImplEmailEMailNotificationServiceProperties();
    virtual ~ComDayCqWorkflowImplEmailEMailNotificationServiceProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqWorkflowImplEmailEMailNotificationServiceProperties members

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
    ConfigNodePropertyString getHostPrefix() const;
    void setHostPrefix(ConfigNodePropertyString const& value);
    bool hostPrefixIsSet() const;
    void unsetHost_prefix();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getNotifyOnabort() const;
    void setNotifyOnabort(ConfigNodePropertyBoolean const& value);
    bool notifyOnabortIsSet() const;
    void unsetNotify_onabort();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getNotifyOncomplete() const;
    void setNotifyOncomplete(ConfigNodePropertyBoolean const& value);
    bool notifyOncompleteIsSet() const;
    void unsetNotify_oncomplete();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getNotifyOncontainercomplete() const;
    void setNotifyOncontainercomplete(ConfigNodePropertyBoolean const& value);
    bool notifyOncontainercompleteIsSet() const;
    void unsetNotify_oncontainercomplete();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getNotifyUseronly() const;
    void setNotifyUseronly(ConfigNodePropertyBoolean const& value);
    bool notifyUseronlyIsSet() const;
    void unsetNotify_useronly();

protected:
    ConfigNodePropertyString m_From_address;
    bool m_From_addressIsSet;
    ConfigNodePropertyString m_Host_prefix;
    bool m_Host_prefixIsSet;
    ConfigNodePropertyBoolean m_Notify_onabort;
    bool m_Notify_onabortIsSet;
    ConfigNodePropertyBoolean m_Notify_oncomplete;
    bool m_Notify_oncompleteIsSet;
    ConfigNodePropertyBoolean m_Notify_oncontainercomplete;
    bool m_Notify_oncontainercompleteIsSet;
    ConfigNodePropertyBoolean m_Notify_useronly;
    bool m_Notify_useronlyIsSet;
};

}
}
}
}

#endif /* ComDayCqWorkflowImplEmailEMailNotificationServiceProperties_H_ */