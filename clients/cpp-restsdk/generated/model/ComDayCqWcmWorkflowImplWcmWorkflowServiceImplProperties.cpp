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



#include "ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties()
{
    m_Event_filterIsSet = false;
    m_MinThreadPoolSizeIsSet = false;
    m_MaxThreadPoolSizeIsSet = false;
    m_Cq_wcm_workflow_terminate_on_activateIsSet = false;
    m_Cq_wcm_worklfow_terminate_exclusion_listIsSet = false;
}

ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::~ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties()
{
}

void ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Event_filterIsSet)
    {
        val[utility::conversions::to_string_t("event.filter")] = ModelBase::toJson(m_Event_filter);
    }
    if(m_MinThreadPoolSizeIsSet)
    {
        val[utility::conversions::to_string_t("minThreadPoolSize")] = ModelBase::toJson(m_MinThreadPoolSize);
    }
    if(m_MaxThreadPoolSizeIsSet)
    {
        val[utility::conversions::to_string_t("maxThreadPoolSize")] = ModelBase::toJson(m_MaxThreadPoolSize);
    }
    if(m_Cq_wcm_workflow_terminate_on_activateIsSet)
    {
        val[utility::conversions::to_string_t("cq.wcm.workflow.terminate.on.activate")] = ModelBase::toJson(m_Cq_wcm_workflow_terminate_on_activate);
    }
    if(m_Cq_wcm_worklfow_terminate_exclusion_listIsSet)
    {
        val[utility::conversions::to_string_t("cq.wcm.worklfow.terminate.exclusion.list")] = ModelBase::toJson(m_Cq_wcm_worklfow_terminate_exclusion_list);
    }

    return val;
}

void ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("event.filter")))
    {
        if(!val[utility::conversions::to_string_t("event.filter")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("event.filter")]);
            setEventFilter( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minThreadPoolSize")))
    {
        if(!val[utility::conversions::to_string_t("minThreadPoolSize")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("minThreadPoolSize")]);
            setMinThreadPoolSize( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxThreadPoolSize")))
    {
        if(!val[utility::conversions::to_string_t("maxThreadPoolSize")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("maxThreadPoolSize")]);
            setMaxThreadPoolSize( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cq.wcm.workflow.terminate.on.activate")))
    {
        if(!val[utility::conversions::to_string_t("cq.wcm.workflow.terminate.on.activate")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("cq.wcm.workflow.terminate.on.activate")]);
            setCqWcmWorkflowTerminateOnActivate( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cq.wcm.worklfow.terminate.exclusion.list")))
    {
        if(!val[utility::conversions::to_string_t("cq.wcm.worklfow.terminate.exclusion.list")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("cq.wcm.worklfow.terminate.exclusion.list")]);
            setCqWcmWorklfowTerminateExclusionList( newItem );
        }
    }
}

void ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Event_filterIsSet)
    {
        if (m_Event_filter.get())
        {
            m_Event_filter->toMultipart(multipart, utility::conversions::to_string_t("event.filter."));
        }
    }
    if(m_MinThreadPoolSizeIsSet)
    {
        if (m_MinThreadPoolSize.get())
        {
            m_MinThreadPoolSize->toMultipart(multipart, utility::conversions::to_string_t("minThreadPoolSize."));
        }
    }
    if(m_MaxThreadPoolSizeIsSet)
    {
        if (m_MaxThreadPoolSize.get())
        {
            m_MaxThreadPoolSize->toMultipart(multipart, utility::conversions::to_string_t("maxThreadPoolSize."));
        }
    }
    if(m_Cq_wcm_workflow_terminate_on_activateIsSet)
    {
        if (m_Cq_wcm_workflow_terminate_on_activate.get())
        {
            m_Cq_wcm_workflow_terminate_on_activate->toMultipart(multipart, utility::conversions::to_string_t("cq.wcm.workflow.terminate.on.activate."));
        }
    }
    if(m_Cq_wcm_worklfow_terminate_exclusion_listIsSet)
    {
        if (m_Cq_wcm_worklfow_terminate_exclusion_list.get())
        {
            m_Cq_wcm_worklfow_terminate_exclusion_list->toMultipart(multipart, utility::conversions::to_string_t("cq.wcm.worklfow.terminate.exclusion.list."));
        }
    }
}

void ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("event.filter")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("event.filter")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("event.filter."));
            setEventFilter( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("minThreadPoolSize")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("minThreadPoolSize")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("minThreadPoolSize."));
            setMinThreadPoolSize( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maxThreadPoolSize")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("maxThreadPoolSize")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("maxThreadPoolSize."));
            setMaxThreadPoolSize( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cq.wcm.workflow.terminate.on.activate")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("cq.wcm.workflow.terminate.on.activate")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("cq.wcm.workflow.terminate.on.activate."));
            setCqWcmWorkflowTerminateOnActivate( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cq.wcm.worklfow.terminate.exclusion.list")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("cq.wcm.worklfow.terminate.exclusion.list")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("cq.wcm.worklfow.terminate.exclusion.list."));
            setCqWcmWorklfowTerminateExclusionList( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::getEventFilter() const
{
    return m_Event_filter;
}


void ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::setEventFilter(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Event_filter = value;
    m_Event_filterIsSet = true;
}
bool ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::eventFilterIsSet() const
{
    return m_Event_filterIsSet;
}

void ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::unsetEvent_filter()
{
    m_Event_filterIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::getMinThreadPoolSize() const
{
    return m_MinThreadPoolSize;
}


void ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::setMinThreadPoolSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_MinThreadPoolSize = value;
    m_MinThreadPoolSizeIsSet = true;
}
bool ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::minThreadPoolSizeIsSet() const
{
    return m_MinThreadPoolSizeIsSet;
}

void ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::unsetMinThreadPoolSize()
{
    m_MinThreadPoolSizeIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::getMaxThreadPoolSize() const
{
    return m_MaxThreadPoolSize;
}


void ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::setMaxThreadPoolSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_MaxThreadPoolSize = value;
    m_MaxThreadPoolSizeIsSet = true;
}
bool ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::maxThreadPoolSizeIsSet() const
{
    return m_MaxThreadPoolSizeIsSet;
}

void ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::unsetMaxThreadPoolSize()
{
    m_MaxThreadPoolSizeIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::getCqWcmWorkflowTerminateOnActivate() const
{
    return m_Cq_wcm_workflow_terminate_on_activate;
}


void ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::setCqWcmWorkflowTerminateOnActivate(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Cq_wcm_workflow_terminate_on_activate = value;
    m_Cq_wcm_workflow_terminate_on_activateIsSet = true;
}
bool ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::cqWcmWorkflowTerminateOnActivateIsSet() const
{
    return m_Cq_wcm_workflow_terminate_on_activateIsSet;
}

void ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::unsetCq_wcm_workflow_terminate_on_activate()
{
    m_Cq_wcm_workflow_terminate_on_activateIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::getCqWcmWorklfowTerminateExclusionList() const
{
    return m_Cq_wcm_worklfow_terminate_exclusion_list;
}


void ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::setCqWcmWorklfowTerminateExclusionList(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Cq_wcm_worklfow_terminate_exclusion_list = value;
    m_Cq_wcm_worklfow_terminate_exclusion_listIsSet = true;
}
bool ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::cqWcmWorklfowTerminateExclusionListIsSet() const
{
    return m_Cq_wcm_worklfow_terminate_exclusion_listIsSet;
}

void ComDayCqWcmWorkflowImplWcmWorkflowServiceImplProperties::unsetCq_wcm_worklfow_terminate_exclusion_list()
{
    m_Cq_wcm_worklfow_terminate_exclusion_listIsSet = false;
}

}
}
}
}

