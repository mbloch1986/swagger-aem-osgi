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
 * ComAdobeGraniteWorkflowCoreJobJobHandlerProperties.h
 *
 * 
 */

#ifndef ComAdobeGraniteWorkflowCoreJobJobHandlerProperties_H_
#define ComAdobeGraniteWorkflowCoreJobJobHandlerProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteWorkflowCoreJobJobHandlerProperties
    : public ModelBase
{
public:
    ComAdobeGraniteWorkflowCoreJobJobHandlerProperties();
    virtual ~ComAdobeGraniteWorkflowCoreJobJobHandlerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteWorkflowCoreJobJobHandlerProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getJobTopics() const;
    void setJobTopics(ConfigNodePropertyArray const& value);
    bool jobTopicsIsSet() const;
    void unsetJob_topics();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getAllowSelfProcessTermination() const;
    void setAllowSelfProcessTermination(ConfigNodePropertyBoolean const& value);
    bool allowSelfProcessTerminationIsSet() const;
    void unsetAllow_self_process_termination();

protected:
    ConfigNodePropertyArray m_Job_topics;
    bool m_Job_topicsIsSet;
    ConfigNodePropertyBoolean m_Allow_self_process_termination;
    bool m_Allow_self_process_terminationIsSet;
};

}
}
}
}

#endif /* ComAdobeGraniteWorkflowCoreJobJobHandlerProperties_H_ */
