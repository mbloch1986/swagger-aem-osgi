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



#include "ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties::ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties()
{
    m_Dmreplicateonmodify_enabledIsSet = false;
    m_Dmreplicateonmodify_forcesyncdeletesIsSet = false;
}

ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties::~ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties()
{
}

void ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Dmreplicateonmodify_enabledIsSet)
    {
        val[utility::conversions::to_string_t("dmreplicateonmodify.enabled")] = ModelBase::toJson(m_Dmreplicateonmodify_enabled);
    }
    if(m_Dmreplicateonmodify_forcesyncdeletesIsSet)
    {
        val[utility::conversions::to_string_t("dmreplicateonmodify.forcesyncdeletes")] = ModelBase::toJson(m_Dmreplicateonmodify_forcesyncdeletes);
    }

    return val;
}

void ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("dmreplicateonmodify.enabled")))
    {
        if(!val[utility::conversions::to_string_t("dmreplicateonmodify.enabled")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("dmreplicateonmodify.enabled")]);
            setDmreplicateonmodifyEnabled( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dmreplicateonmodify.forcesyncdeletes")))
    {
        if(!val[utility::conversions::to_string_t("dmreplicateonmodify.forcesyncdeletes")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("dmreplicateonmodify.forcesyncdeletes")]);
            setDmreplicateonmodifyForcesyncdeletes( newItem );
        }
    }
}

void ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Dmreplicateonmodify_enabledIsSet)
    {
        if (m_Dmreplicateonmodify_enabled.get())
        {
            m_Dmreplicateonmodify_enabled->toMultipart(multipart, utility::conversions::to_string_t("dmreplicateonmodify.enabled."));
        }
    }
    if(m_Dmreplicateonmodify_forcesyncdeletesIsSet)
    {
        if (m_Dmreplicateonmodify_forcesyncdeletes.get())
        {
            m_Dmreplicateonmodify_forcesyncdeletes->toMultipart(multipart, utility::conversions::to_string_t("dmreplicateonmodify.forcesyncdeletes."));
        }
    }
}

void ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("dmreplicateonmodify.enabled")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("dmreplicateonmodify.enabled")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("dmreplicateonmodify.enabled."));
            setDmreplicateonmodifyEnabled( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dmreplicateonmodify.forcesyncdeletes")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("dmreplicateonmodify.forcesyncdeletes")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("dmreplicateonmodify.forcesyncdeletes."));
            setDmreplicateonmodifyForcesyncdeletes( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties::getDmreplicateonmodifyEnabled() const
{
    return m_Dmreplicateonmodify_enabled;
}


void ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties::setDmreplicateonmodifyEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Dmreplicateonmodify_enabled = value;
    m_Dmreplicateonmodify_enabledIsSet = true;
}
bool ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties::dmreplicateonmodifyEnabledIsSet() const
{
    return m_Dmreplicateonmodify_enabledIsSet;
}

void ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties::unsetDmreplicateonmodify_enabled()
{
    m_Dmreplicateonmodify_enabledIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties::getDmreplicateonmodifyForcesyncdeletes() const
{
    return m_Dmreplicateonmodify_forcesyncdeletes;
}


void ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties::setDmreplicateonmodifyForcesyncdeletes(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Dmreplicateonmodify_forcesyncdeletes = value;
    m_Dmreplicateonmodify_forcesyncdeletesIsSet = true;
}
bool ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties::dmreplicateonmodifyForcesyncdeletesIsSet() const
{
    return m_Dmreplicateonmodify_forcesyncdeletesIsSet;
}

void ComAdobeCqDamIpsImplReplicationTriggerReplicateOnModifyWorkerProperties::unsetDmreplicateonmodify_forcesyncdeletes()
{
    m_Dmreplicateonmodify_forcesyncdeletesIsSet = false;
}

}
}
}
}

