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


#include "OrgApacheFelixJaasConfigurationFactoryProperties.h"

namespace org {
namespace openapitools {
namespace server {
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

nlohmann::json OrgApacheFelixJaasConfigurationFactoryProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Jaas_controlFlagIsSet)
    {
        val["jaas.controlFlag"] = ModelBase::toJson(m_Jaas_controlFlag);
    }
    if(m_Jaas_rankingIsSet)
    {
        val["jaas.ranking"] = ModelBase::toJson(m_Jaas_ranking);
    }
    if(m_Jaas_realmNameIsSet)
    {
        val["jaas.realmName"] = ModelBase::toJson(m_Jaas_realmName);
    }
    if(m_Jaas_classnameIsSet)
    {
        val["jaas.classname"] = ModelBase::toJson(m_Jaas_classname);
    }
    if(m_Jaas_optionsIsSet)
    {
        val["jaas.options"] = ModelBase::toJson(m_Jaas_options);
    }
    

    return val;
}

void OrgApacheFelixJaasConfigurationFactoryProperties::fromJson(nlohmann::json& val)
{
    if(val.find("jaas.controlFlag") != val.end())
    {
        if(!val["jaas.controlFlag"].is_null())
        {
            ConfigNodePropertyDropDown newItem;
            newItem.fromJson(val["jaas.controlFlag"]);
            setJaasControlFlag( newItem );
        }
        
    }
    if(val.find("jaas.ranking") != val.end())
    {
        if(!val["jaas.ranking"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["jaas.ranking"]);
            setJaasRanking( newItem );
        }
        
    }
    if(val.find("jaas.realmName") != val.end())
    {
        if(!val["jaas.realmName"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["jaas.realmName"]);
            setJaasRealmName( newItem );
        }
        
    }
    if(val.find("jaas.classname") != val.end())
    {
        if(!val["jaas.classname"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["jaas.classname"]);
            setJaasClassname( newItem );
        }
        
    }
    if(val.find("jaas.options") != val.end())
    {
        if(!val["jaas.options"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["jaas.options"]);
            setJaasOptions( newItem );
        }
        
    }
    
}


ConfigNodePropertyDropDown OrgApacheFelixJaasConfigurationFactoryProperties::getJaasControlFlag() const
{
    return m_Jaas_controlFlag;
}
void OrgApacheFelixJaasConfigurationFactoryProperties::setJaasControlFlag(ConfigNodePropertyDropDown const& value)
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
ConfigNodePropertyInteger OrgApacheFelixJaasConfigurationFactoryProperties::getJaasRanking() const
{
    return m_Jaas_ranking;
}
void OrgApacheFelixJaasConfigurationFactoryProperties::setJaasRanking(ConfigNodePropertyInteger const& value)
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
ConfigNodePropertyString OrgApacheFelixJaasConfigurationFactoryProperties::getJaasRealmName() const
{
    return m_Jaas_realmName;
}
void OrgApacheFelixJaasConfigurationFactoryProperties::setJaasRealmName(ConfigNodePropertyString const& value)
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
ConfigNodePropertyString OrgApacheFelixJaasConfigurationFactoryProperties::getJaasClassname() const
{
    return m_Jaas_classname;
}
void OrgApacheFelixJaasConfigurationFactoryProperties::setJaasClassname(ConfigNodePropertyString const& value)
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
ConfigNodePropertyArray OrgApacheFelixJaasConfigurationFactoryProperties::getJaasOptions() const
{
    return m_Jaas_options;
}
void OrgApacheFelixJaasConfigurationFactoryProperties::setJaasOptions(ConfigNodePropertyArray const& value)
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

