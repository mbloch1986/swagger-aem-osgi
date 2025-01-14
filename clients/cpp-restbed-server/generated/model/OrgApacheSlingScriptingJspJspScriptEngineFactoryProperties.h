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
 * OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties_H_
#define OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties_H_



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
class  OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties
{
public:
    OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties();
    virtual ~OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getJasperCompilerTargetVM() const;
    void setJasperCompilerTargetVM(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getJasperCompilerSourceVM() const;
    void setJasperCompilerSourceVM(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getJasperClassdebuginfo() const;
    void setJasperClassdebuginfo(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getJasperEnablePooling() const;
    void setJasperEnablePooling(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getJasperIeClassId() const;
    void setJasperIeClassId(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getJasperGenStringAsCharArray() const;
    void setJasperGenStringAsCharArray(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getJasperKeepgenerated() const;
    void setJasperKeepgenerated(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getJasperMappedfile() const;
    void setJasperMappedfile(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getJasperTrimSpaces() const;
    void setJasperTrimSpaces(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getJasperDisplaySourceFragments() const;
    void setJasperDisplaySourceFragments(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getDefaultIsSession() const;
    void setDefaultIsSession(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Jasper_compilerTargetVM;
    std::shared_ptr<ConfigNodePropertyString> m_Jasper_compilerSourceVM;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Jasper_classdebuginfo;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Jasper_enablePooling;
    std::shared_ptr<ConfigNodePropertyString> m_Jasper_ieClassId;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Jasper_genStringAsCharArray;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Jasper_keepgenerated;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Jasper_mappedfile;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Jasper_trimSpaces;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Jasper_displaySourceFragments;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Default_is_session;
};

}
}
}
}

#endif /* OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties_H_ */
