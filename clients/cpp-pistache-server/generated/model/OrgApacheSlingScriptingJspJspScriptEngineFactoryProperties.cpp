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


#include "OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties()
{
    m_Jasper_compilerTargetVMIsSet = false;
    m_Jasper_compilerSourceVMIsSet = false;
    m_Jasper_classdebuginfoIsSet = false;
    m_Jasper_enablePoolingIsSet = false;
    m_Jasper_ieClassIdIsSet = false;
    m_Jasper_genStringAsCharArrayIsSet = false;
    m_Jasper_keepgeneratedIsSet = false;
    m_Jasper_mappedfileIsSet = false;
    m_Jasper_trimSpacesIsSet = false;
    m_Jasper_displaySourceFragmentsIsSet = false;
    m_Default_is_sessionIsSet = false;
    
}

OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::~OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties()
{
}

void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Jasper_compilerTargetVMIsSet)
    {
        val["jasper.compilerTargetVM"] = ModelBase::toJson(m_Jasper_compilerTargetVM);
    }
    if(m_Jasper_compilerSourceVMIsSet)
    {
        val["jasper.compilerSourceVM"] = ModelBase::toJson(m_Jasper_compilerSourceVM);
    }
    if(m_Jasper_classdebuginfoIsSet)
    {
        val["jasper.classdebuginfo"] = ModelBase::toJson(m_Jasper_classdebuginfo);
    }
    if(m_Jasper_enablePoolingIsSet)
    {
        val["jasper.enablePooling"] = ModelBase::toJson(m_Jasper_enablePooling);
    }
    if(m_Jasper_ieClassIdIsSet)
    {
        val["jasper.ieClassId"] = ModelBase::toJson(m_Jasper_ieClassId);
    }
    if(m_Jasper_genStringAsCharArrayIsSet)
    {
        val["jasper.genStringAsCharArray"] = ModelBase::toJson(m_Jasper_genStringAsCharArray);
    }
    if(m_Jasper_keepgeneratedIsSet)
    {
        val["jasper.keepgenerated"] = ModelBase::toJson(m_Jasper_keepgenerated);
    }
    if(m_Jasper_mappedfileIsSet)
    {
        val["jasper.mappedfile"] = ModelBase::toJson(m_Jasper_mappedfile);
    }
    if(m_Jasper_trimSpacesIsSet)
    {
        val["jasper.trimSpaces"] = ModelBase::toJson(m_Jasper_trimSpaces);
    }
    if(m_Jasper_displaySourceFragmentsIsSet)
    {
        val["jasper.displaySourceFragments"] = ModelBase::toJson(m_Jasper_displaySourceFragments);
    }
    if(m_Default_is_sessionIsSet)
    {
        val["default.is.session"] = ModelBase::toJson(m_Default_is_session);
    }
    

    return val;
}

void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::fromJson(nlohmann::json& val)
{
    if(val.find("jasper.compilerTargetVM") != val.end())
    {
        if(!val["jasper.compilerTargetVM"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["jasper.compilerTargetVM"]);
            setJasperCompilerTargetVM( newItem );
        }
        
    }
    if(val.find("jasper.compilerSourceVM") != val.end())
    {
        if(!val["jasper.compilerSourceVM"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["jasper.compilerSourceVM"]);
            setJasperCompilerSourceVM( newItem );
        }
        
    }
    if(val.find("jasper.classdebuginfo") != val.end())
    {
        if(!val["jasper.classdebuginfo"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["jasper.classdebuginfo"]);
            setJasperClassdebuginfo( newItem );
        }
        
    }
    if(val.find("jasper.enablePooling") != val.end())
    {
        if(!val["jasper.enablePooling"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["jasper.enablePooling"]);
            setJasperEnablePooling( newItem );
        }
        
    }
    if(val.find("jasper.ieClassId") != val.end())
    {
        if(!val["jasper.ieClassId"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["jasper.ieClassId"]);
            setJasperIeClassId( newItem );
        }
        
    }
    if(val.find("jasper.genStringAsCharArray") != val.end())
    {
        if(!val["jasper.genStringAsCharArray"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["jasper.genStringAsCharArray"]);
            setJasperGenStringAsCharArray( newItem );
        }
        
    }
    if(val.find("jasper.keepgenerated") != val.end())
    {
        if(!val["jasper.keepgenerated"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["jasper.keepgenerated"]);
            setJasperKeepgenerated( newItem );
        }
        
    }
    if(val.find("jasper.mappedfile") != val.end())
    {
        if(!val["jasper.mappedfile"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["jasper.mappedfile"]);
            setJasperMappedfile( newItem );
        }
        
    }
    if(val.find("jasper.trimSpaces") != val.end())
    {
        if(!val["jasper.trimSpaces"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["jasper.trimSpaces"]);
            setJasperTrimSpaces( newItem );
        }
        
    }
    if(val.find("jasper.displaySourceFragments") != val.end())
    {
        if(!val["jasper.displaySourceFragments"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["jasper.displaySourceFragments"]);
            setJasperDisplaySourceFragments( newItem );
        }
        
    }
    if(val.find("default.is.session") != val.end())
    {
        if(!val["default.is.session"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["default.is.session"]);
            setDefaultIsSession( newItem );
        }
        
    }
    
}


ConfigNodePropertyString OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperCompilerTargetVM() const
{
    return m_Jasper_compilerTargetVM;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperCompilerTargetVM(ConfigNodePropertyString const& value)
{
    m_Jasper_compilerTargetVM = value;
    m_Jasper_compilerTargetVMIsSet = true;
}
bool OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::jasperCompilerTargetVMIsSet() const
{
    return m_Jasper_compilerTargetVMIsSet;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::unsetJasper_compilerTargetVM()
{
    m_Jasper_compilerTargetVMIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperCompilerSourceVM() const
{
    return m_Jasper_compilerSourceVM;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperCompilerSourceVM(ConfigNodePropertyString const& value)
{
    m_Jasper_compilerSourceVM = value;
    m_Jasper_compilerSourceVMIsSet = true;
}
bool OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::jasperCompilerSourceVMIsSet() const
{
    return m_Jasper_compilerSourceVMIsSet;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::unsetJasper_compilerSourceVM()
{
    m_Jasper_compilerSourceVMIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperClassdebuginfo() const
{
    return m_Jasper_classdebuginfo;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperClassdebuginfo(ConfigNodePropertyBoolean const& value)
{
    m_Jasper_classdebuginfo = value;
    m_Jasper_classdebuginfoIsSet = true;
}
bool OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::jasperClassdebuginfoIsSet() const
{
    return m_Jasper_classdebuginfoIsSet;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::unsetJasper_classdebuginfo()
{
    m_Jasper_classdebuginfoIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperEnablePooling() const
{
    return m_Jasper_enablePooling;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperEnablePooling(ConfigNodePropertyBoolean const& value)
{
    m_Jasper_enablePooling = value;
    m_Jasper_enablePoolingIsSet = true;
}
bool OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::jasperEnablePoolingIsSet() const
{
    return m_Jasper_enablePoolingIsSet;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::unsetJasper_enablePooling()
{
    m_Jasper_enablePoolingIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperIeClassId() const
{
    return m_Jasper_ieClassId;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperIeClassId(ConfigNodePropertyString const& value)
{
    m_Jasper_ieClassId = value;
    m_Jasper_ieClassIdIsSet = true;
}
bool OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::jasperIeClassIdIsSet() const
{
    return m_Jasper_ieClassIdIsSet;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::unsetJasper_ieClassId()
{
    m_Jasper_ieClassIdIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperGenStringAsCharArray() const
{
    return m_Jasper_genStringAsCharArray;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperGenStringAsCharArray(ConfigNodePropertyBoolean const& value)
{
    m_Jasper_genStringAsCharArray = value;
    m_Jasper_genStringAsCharArrayIsSet = true;
}
bool OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::jasperGenStringAsCharArrayIsSet() const
{
    return m_Jasper_genStringAsCharArrayIsSet;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::unsetJasper_genStringAsCharArray()
{
    m_Jasper_genStringAsCharArrayIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperKeepgenerated() const
{
    return m_Jasper_keepgenerated;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperKeepgenerated(ConfigNodePropertyBoolean const& value)
{
    m_Jasper_keepgenerated = value;
    m_Jasper_keepgeneratedIsSet = true;
}
bool OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::jasperKeepgeneratedIsSet() const
{
    return m_Jasper_keepgeneratedIsSet;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::unsetJasper_keepgenerated()
{
    m_Jasper_keepgeneratedIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperMappedfile() const
{
    return m_Jasper_mappedfile;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperMappedfile(ConfigNodePropertyBoolean const& value)
{
    m_Jasper_mappedfile = value;
    m_Jasper_mappedfileIsSet = true;
}
bool OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::jasperMappedfileIsSet() const
{
    return m_Jasper_mappedfileIsSet;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::unsetJasper_mappedfile()
{
    m_Jasper_mappedfileIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperTrimSpaces() const
{
    return m_Jasper_trimSpaces;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperTrimSpaces(ConfigNodePropertyBoolean const& value)
{
    m_Jasper_trimSpaces = value;
    m_Jasper_trimSpacesIsSet = true;
}
bool OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::jasperTrimSpacesIsSet() const
{
    return m_Jasper_trimSpacesIsSet;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::unsetJasper_trimSpaces()
{
    m_Jasper_trimSpacesIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getJasperDisplaySourceFragments() const
{
    return m_Jasper_displaySourceFragments;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setJasperDisplaySourceFragments(ConfigNodePropertyBoolean const& value)
{
    m_Jasper_displaySourceFragments = value;
    m_Jasper_displaySourceFragmentsIsSet = true;
}
bool OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::jasperDisplaySourceFragmentsIsSet() const
{
    return m_Jasper_displaySourceFragmentsIsSet;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::unsetJasper_displaySourceFragments()
{
    m_Jasper_displaySourceFragmentsIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::getDefaultIsSession() const
{
    return m_Default_is_session;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::setDefaultIsSession(ConfigNodePropertyBoolean const& value)
{
    m_Default_is_session = value;
    m_Default_is_sessionIsSet = true;
}
bool OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::defaultIsSessionIsSet() const
{
    return m_Default_is_sessionIsSet;
}
void OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties::unsetDefault_is_session()
{
    m_Default_is_sessionIsSet = false;
}

}
}
}
}

