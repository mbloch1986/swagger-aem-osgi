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



#include "ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties()
{
    m_EnabledIsSet = false;
    m_AgentNameIsSet = false;
    m_DiffPathIsSet = false;
    m_ObservedPathIsSet = false;
    m_ServiceNameIsSet = false;
    m_PropertyNamesIsSet = false;
    m_DistributionDelayIsSet = false;
    m_ServiceUser_targetIsSet = false;
}

ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::~ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties()
{
}

void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_EnabledIsSet)
    {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(m_Enabled);
    }
    if(m_AgentNameIsSet)
    {
        val[utility::conversions::to_string_t("agentName")] = ModelBase::toJson(m_AgentName);
    }
    if(m_DiffPathIsSet)
    {
        val[utility::conversions::to_string_t("diffPath")] = ModelBase::toJson(m_DiffPath);
    }
    if(m_ObservedPathIsSet)
    {
        val[utility::conversions::to_string_t("observedPath")] = ModelBase::toJson(m_ObservedPath);
    }
    if(m_ServiceNameIsSet)
    {
        val[utility::conversions::to_string_t("serviceName")] = ModelBase::toJson(m_ServiceName);
    }
    if(m_PropertyNamesIsSet)
    {
        val[utility::conversions::to_string_t("propertyNames")] = ModelBase::toJson(m_PropertyNames);
    }
    if(m_DistributionDelayIsSet)
    {
        val[utility::conversions::to_string_t("distributionDelay")] = ModelBase::toJson(m_DistributionDelay);
    }
    if(m_ServiceUser_targetIsSet)
    {
        val[utility::conversions::to_string_t("serviceUser.target")] = ModelBase::toJson(m_ServiceUser_target);
    }

    return val;
}

void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("enabled")))
    {
        if(!val[utility::conversions::to_string_t("enabled")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("enabled")]);
            setEnabled( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agentName")))
    {
        if(!val[utility::conversions::to_string_t("agentName")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("agentName")]);
            setAgentName( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diffPath")))
    {
        if(!val[utility::conversions::to_string_t("diffPath")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("diffPath")]);
            setDiffPath( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("observedPath")))
    {
        if(!val[utility::conversions::to_string_t("observedPath")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("observedPath")]);
            setObservedPath( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serviceName")))
    {
        if(!val[utility::conversions::to_string_t("serviceName")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("serviceName")]);
            setServiceName( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("propertyNames")))
    {
        if(!val[utility::conversions::to_string_t("propertyNames")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("propertyNames")]);
            setPropertyNames( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("distributionDelay")))
    {
        if(!val[utility::conversions::to_string_t("distributionDelay")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("distributionDelay")]);
            setDistributionDelay( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serviceUser.target")))
    {
        if(!val[utility::conversions::to_string_t("serviceUser.target")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("serviceUser.target")]);
            setServiceUserTarget( newItem );
        }
    }
}

void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_EnabledIsSet)
    {
        if (m_Enabled.get())
        {
            m_Enabled->toMultipart(multipart, utility::conversions::to_string_t("enabled."));
        }
    }
    if(m_AgentNameIsSet)
    {
        if (m_AgentName.get())
        {
            m_AgentName->toMultipart(multipart, utility::conversions::to_string_t("agentName."));
        }
    }
    if(m_DiffPathIsSet)
    {
        if (m_DiffPath.get())
        {
            m_DiffPath->toMultipart(multipart, utility::conversions::to_string_t("diffPath."));
        }
    }
    if(m_ObservedPathIsSet)
    {
        if (m_ObservedPath.get())
        {
            m_ObservedPath->toMultipart(multipart, utility::conversions::to_string_t("observedPath."));
        }
    }
    if(m_ServiceNameIsSet)
    {
        if (m_ServiceName.get())
        {
            m_ServiceName->toMultipart(multipart, utility::conversions::to_string_t("serviceName."));
        }
    }
    if(m_PropertyNamesIsSet)
    {
        if (m_PropertyNames.get())
        {
            m_PropertyNames->toMultipart(multipart, utility::conversions::to_string_t("propertyNames."));
        }
    }
    if(m_DistributionDelayIsSet)
    {
        if (m_DistributionDelay.get())
        {
            m_DistributionDelay->toMultipart(multipart, utility::conversions::to_string_t("distributionDelay."));
        }
    }
    if(m_ServiceUser_targetIsSet)
    {
        if (m_ServiceUser_target.get())
        {
            m_ServiceUser_target->toMultipart(multipart, utility::conversions::to_string_t("serviceUser.target."));
        }
    }
}

void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("enabled")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("enabled")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("enabled."));
            setEnabled( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("agentName")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("agentName")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("agentName."));
            setAgentName( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("diffPath")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("diffPath")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("diffPath."));
            setDiffPath( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("observedPath")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("observedPath")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("observedPath."));
            setObservedPath( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("serviceName")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("serviceName")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("serviceName."));
            setServiceName( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("propertyNames")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("propertyNames")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("propertyNames."));
            setPropertyNames( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("distributionDelay")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("distributionDelay")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("distributionDelay."));
            setDistributionDelay( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("serviceUser.target")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("serviceUser.target")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("serviceUser.target."));
            setServiceUserTarget( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::getEnabled() const
{
    return m_Enabled;
}


void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::setEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Enabled = value;
    m_EnabledIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::enabledIsSet() const
{
    return m_EnabledIsSet;
}

void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::unsetEnabled()
{
    m_EnabledIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::getAgentName() const
{
    return m_AgentName;
}


void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::setAgentName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_AgentName = value;
    m_AgentNameIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::agentNameIsSet() const
{
    return m_AgentNameIsSet;
}

void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::unsetAgentName()
{
    m_AgentNameIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::getDiffPath() const
{
    return m_DiffPath;
}


void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::setDiffPath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_DiffPath = value;
    m_DiffPathIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::diffPathIsSet() const
{
    return m_DiffPathIsSet;
}

void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::unsetDiffPath()
{
    m_DiffPathIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::getObservedPath() const
{
    return m_ObservedPath;
}


void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::setObservedPath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_ObservedPath = value;
    m_ObservedPathIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::observedPathIsSet() const
{
    return m_ObservedPathIsSet;
}

void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::unsetObservedPath()
{
    m_ObservedPathIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::getServiceName() const
{
    return m_ServiceName;
}


void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::setServiceName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_ServiceName = value;
    m_ServiceNameIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::serviceNameIsSet() const
{
    return m_ServiceNameIsSet;
}

void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::unsetServiceName()
{
    m_ServiceNameIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::getPropertyNames() const
{
    return m_PropertyNames;
}


void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::setPropertyNames(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_PropertyNames = value;
    m_PropertyNamesIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::propertyNamesIsSet() const
{
    return m_PropertyNamesIsSet;
}

void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::unsetPropertyNames()
{
    m_PropertyNamesIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::getDistributionDelay() const
{
    return m_DistributionDelay;
}


void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::setDistributionDelay(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_DistributionDelay = value;
    m_DistributionDelayIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::distributionDelayIsSet() const
{
    return m_DistributionDelayIsSet;
}

void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::unsetDistributionDelay()
{
    m_DistributionDelayIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::getServiceUserTarget() const
{
    return m_ServiceUser_target;
}


void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::setServiceUserTarget(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_ServiceUser_target = value;
    m_ServiceUser_targetIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::serviceUserTargetIsSet() const
{
    return m_ServiceUser_targetIsSet;
}

void ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties::unsetServiceUser_target()
{
    m_ServiceUser_targetIsSet = false;
}

}
}
}
}

