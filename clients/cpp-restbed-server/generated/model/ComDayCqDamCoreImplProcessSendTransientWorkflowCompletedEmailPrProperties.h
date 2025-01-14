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
 * ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties.h
 *
 * 
 */

#ifndef ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties_H_
#define ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties
{
public:
    ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties();
    virtual ~ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getProcessLabel() const;
    void setProcessLabel(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getNotifyOnComplete() const;
    void setNotifyOnComplete(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Process_label;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Notify_on_Complete;
};

}
}
}
}

#endif /* ComDayCqDamCoreImplProcessSendTransientWorkflowCompletedEmailPrProperties_H_ */
