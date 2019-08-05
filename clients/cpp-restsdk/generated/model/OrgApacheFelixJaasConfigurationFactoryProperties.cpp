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



#include "OrgApacheFelixJaasConfigurationFactoryProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheFelixJaasConfigurationFactoryProperties::OrgApacheFelixJaasConfigurationFactoryProperties()
{
    m_Jaas_controlFlagIsSet = false;
    m_Jaas_rankingIsSet = false;
    m_Jaas_realmNameIsSet = false;
    m_Jaas_classnameIsSet = false;
    m_Jaas_optionsIsSet = false;
}

OrgApacheFelixJaasConfigurationFactoryProperties::~OrgApacheFelixJaasConfigurationFactoryProperties()
{
}

void OrgApacheFelixJaasConfigurationFactoryProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheFelixJaasConfigurationFactoryProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Jaas_controlFlagIsSet)
    {
        val[utility::conversions::to_string_t("jaas.controlFlag")] = ModelBase::toJson(m_Jaas_controlFlag);
    }
    if(m_Jaas_rankingIsSet)
    {
        val[utility::conversions::to_string_t("jaas.ranking")] = ModelBase::toJson(m_Jaas_ranking);
    }
    if(m_Jaas_realmNameIsSet)
    {
        val[utility::conversions::to_string_t("jaas.realmName")] = ModelBase::toJson(m_Jaas_realmName);
    }
    if(m_Jaas_classnameIsSet)
    {
        val[utility::conversions::to_string_t("jaas.classname")] = ModelBase::toJson(m_Jaas_classname);
    }
    if(m_Jaas_optionsIsSet)
    {
        val[utility::conversions::to_string_t("jaas.options")] = ModelBase::toJson(m_Jaas_options);
    }

    return val;
}

void OrgApacheFelixJaasConfigurationFactoryProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("jaas.controlFlag")))
    {
        if(!val[utility::conversions::to_string_t("jaas.controlFlag")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromJson(val[utility::conversions::to_string_t("jaas.controlFlag")]);
            setJaasControlFlag( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jaas.ranking")))
    {
        if(!val[utility::conversions::to_string_t("jaas.ranking")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("jaas.ranking")]);
            setJaasRanking( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jaas.realmName")))
    {
        if(!val[utility::conversions::to_string_t("jaas.realmName")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("jaas.realmName")]);
            setJaasRealmName( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jaas.classname")))
    {
        if(!val[utility::conversions::to_string_t("jaas.classname")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("jaas.classname")]);
            setJaasClassname( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jaas.options")))
    {
        if(!val[utility::conversions::to_string_t("jaas.options")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("jaas.options")]);
            setJaasOptions( newItem );
        }
    }
}

void OrgApacheFelixJaasConfigurationFactoryProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Jaas_controlFlagIsSet)
    {
        if (m_Jaas_controlFlag.get())
        {
            m_Jaas_controlFlag->toMultipart(multipart, utility::conversions::to_string_t("jaas.controlFlag."));
        }
    }
    if(m_Jaas_rankingIsSet)
    {
        if (m_Jaas_ranking.get())
        {
            m_Jaas_ranking->toMultipart(multipart, utility::conversions::to_string_t("jaas.ranking."));
        }
    }
    if(m_Jaas_realmNameIsSet)
    {
        if (m_Jaas_realmName.get())
        {
            m_Jaas_realmName->toMultipart(multipart, utility::conversions::to_string_t("jaas.realmName."));
        }
    }
    if(m_Jaas_classnameIsSet)
    {
        if (m_Jaas_classname.get())
        {
            m_Jaas_classname->toMultipart(multipart, utility::conversions::to_string_t("jaas.classname."));
        }
    }
    if(m_Jaas_optionsIsSet)
    {
        if (m_Jaas_options.get())
        {
            m_Jaas_options->toMultipart(multipart, utility::conversions::to_string_t("jaas.options."));
        }
    }
}

void OrgApacheFelixJaasConfigurationFactoryProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("jaas.controlFlag")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("jaas.controlFlag")))
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("jaas.controlFlag."));
            setJaasControlFlag( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("jaas.ranking")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("jaas.ranking")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("jaas.ranking."));
            setJaasRanking( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("jaas.realmName")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("jaas.realmName")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("jaas.realmName."));
            setJaasRealmName( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("jaas.classname")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("jaas.classname")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("jaas.classname."));
            setJaasClassname( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("jaas.options")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("jaas.options")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("jaas.options."));
            setJaasOptions( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheFelixJaasConfigurationFactoryProperties::getJaasControlFlag() const
{
    return m_Jaas_controlFlag;
}


void OrgApacheFelixJaasConfigurationFactoryProperties::setJaasControlFlag(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Jaas_controlFlag = value;
    m_Jaas_controlFlagIsSet = true;
}
bool OrgApacheFelixJaasConfigurationFactoryProperties::jaasControlFlagIsSet() const
{
    return m_Jaas_controlFlagIsSet;
}

void OrgApacheFelixJaasConfigurationFactoryProperties::unsetJaas_controlFlag()
{
    m_Jaas_controlFlagIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> OrgApacheFelixJaasConfigurationFactoryProperties::getJaasRanking() const
{
    return m_Jaas_ranking;
}


void OrgApacheFelixJaasConfigurationFactoryProperties::setJaasRanking(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Jaas_ranking = value;
    m_Jaas_rankingIsSet = true;
}
bool OrgApacheFelixJaasConfigurationFactoryProperties::jaasRankingIsSet() const
{
    return m_Jaas_rankingIsSet;
}

void OrgApacheFelixJaasConfigurationFactoryProperties::unsetJaas_ranking()
{
    m_Jaas_rankingIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheFelixJaasConfigurationFactoryProperties::getJaasRealmName() const
{
    return m_Jaas_realmName;
}


void OrgApacheFelixJaasConfigurationFactoryProperties::setJaasRealmName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Jaas_realmName = value;
    m_Jaas_realmNameIsSet = true;
}
bool OrgApacheFelixJaasConfigurationFactoryProperties::jaasRealmNameIsSet() const
{
    return m_Jaas_realmNameIsSet;
}

void OrgApacheFelixJaasConfigurationFactoryProperties::unsetJaas_realmName()
{
    m_Jaas_realmNameIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheFelixJaasConfigurationFactoryProperties::getJaasClassname() const
{
    return m_Jaas_classname;
}


void OrgApacheFelixJaasConfigurationFactoryProperties::setJaasClassname(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Jaas_classname = value;
    m_Jaas_classnameIsSet = true;
}
bool OrgApacheFelixJaasConfigurationFactoryProperties::jaasClassnameIsSet() const
{
    return m_Jaas_classnameIsSet;
}

void OrgApacheFelixJaasConfigurationFactoryProperties::unsetJaas_classname()
{
    m_Jaas_classnameIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> OrgApacheFelixJaasConfigurationFactoryProperties::getJaasOptions() const
{
    return m_Jaas_options;
}


void OrgApacheFelixJaasConfigurationFactoryProperties::setJaasOptions(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Jaas_options = value;
    m_Jaas_optionsIsSet = true;
}
bool OrgApacheFelixJaasConfigurationFactoryProperties::jaasOptionsIsSet() const
{
    return m_Jaas_optionsIsSet;
}

void OrgApacheFelixJaasConfigurationFactoryProperties::unsetJaas_options()
{
    m_Jaas_optionsIsSet = false;
}

}
}
}
}
