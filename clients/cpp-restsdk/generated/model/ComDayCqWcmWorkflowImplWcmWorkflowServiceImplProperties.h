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
 * ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties
    : public ModelBase
{
public:
    ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties();
    virtual ~ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getEventFilter() const;
    bool eventFilterIsSet() const;
    void unsetEvent_filter();
    void setEventFilter(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMinThreadPoolSize() const;
    bool minThreadPoolSizeIsSet() const;
    void unsetMinThreadPoolSize();
    void setMinThreadPoolSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMaxThreadPoolSize() const;
    bool maxThreadPoolSizeIsSet() const;
    void unsetMaxThreadPoolSize();
    void setMaxThreadPoolSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getCqWcmWorkflowTerminateOnActivate() const;
    bool cqWcmWorkflowTerminateOnActivateIsSet() const;
    void unsetCq_wcm_workflow_terminate_on_activate();
    void setCqWcmWorkflowTerminateOnActivate(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getCqWcmWorklfowTerminateExclusionList() const;
    bool cqWcmWorklfowTerminateExclusionListIsSet() const;
    void unsetCq_wcm_worklfow_terminate_exclusion_list();
    void setCqWcmWorklfowTerminateExclusionList(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Event_filter;
    bool m_Event_filterIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_MinThreadPoolSize;
    bool m_MinThreadPoolSizeIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_MaxThreadPoolSize;
    bool m_MaxThreadPoolSizeIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Cq_wcm_workflow_terminate_on_activate;
    bool m_Cq_wcm_workflow_terminate_on_activateIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Cq_wcm_worklfow_terminate_exclusion_list;
    bool m_Cq_wcm_worklfow_terminate_exclusion_listIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties_H_ */
