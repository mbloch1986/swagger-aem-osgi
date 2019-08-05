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
 * ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties.h
 *
 * 
 */

#ifndef ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties_H_
#define ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties_H_


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
class  ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties
    : public ModelBase
{
public:
    ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties();
    virtual ~ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getProcessLabel() const;
    void setProcessLabel(ConfigNodePropertyString const& value);
    bool processLabelIsSet() const;
    void unsetProcess_label();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getNotifyOnComplete() const;
    void setNotifyOnComplete(ConfigNodePropertyBoolean const& value);
    bool notifyOnCompleteIsSet() const;
    void unsetNotify_on_Complete();

protected:
    ConfigNodePropertyString m_Process_label;
    bool m_Process_labelIsSet;
    ConfigNodePropertyBoolean m_Notify_on_Complete;
    bool m_Notify_on_CompleteIsSet;
};

}
}
}
}

#endif /* ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties_H_ */