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
 * OAIComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties_H
#define OAIComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyInteger.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties: public OAIObject {
public:
    OAIComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties();
    OAIComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties(QString json);
    ~OAIComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getEventFilter() const;
    void setEventFilter(const OAIConfigNodePropertyString &event_filter);

    OAIConfigNodePropertyInteger getMinThreadPoolSize() const;
    void setMinThreadPoolSize(const OAIConfigNodePropertyInteger &min_thread_pool_size);

    OAIConfigNodePropertyInteger getMaxThreadPoolSize() const;
    void setMaxThreadPoolSize(const OAIConfigNodePropertyInteger &max_thread_pool_size);

    OAIConfigNodePropertyBoolean getCqWcmWorkflowTerminateOnActivate() const;
    void setCqWcmWorkflowTerminateOnActivate(const OAIConfigNodePropertyBoolean &cq_wcm_workflow_terminate_on_activate);

    OAIConfigNodePropertyArray getCqWcmWorklfowTerminateExclusionList() const;
    void setCqWcmWorklfowTerminateExclusionList(const OAIConfigNodePropertyArray &cq_wcm_worklfow_terminate_exclusion_list);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString event_filter;
    bool m_event_filter_isSet;

    OAIConfigNodePropertyInteger min_thread_pool_size;
    bool m_min_thread_pool_size_isSet;

    OAIConfigNodePropertyInteger max_thread_pool_size;
    bool m_max_thread_pool_size_isSet;

    OAIConfigNodePropertyBoolean cq_wcm_workflow_terminate_on_activate;
    bool m_cq_wcm_workflow_terminate_on_activate_isSet;

    OAIConfigNodePropertyArray cq_wcm_worklfow_terminate_exclusion_list;
    bool m_cq_wcm_worklfow_terminate_exclusion_list_isSet;

};

}

#endif // OAIComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties_H