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
 * OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties_H_
#define OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties
    : public ModelBase
{
public:
    OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties();
    virtual ~OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getJasperCompilerTargetVM() const;
    void setJasperCompilerTargetVM(ConfigNodePropertyString const& value);
    bool jasperCompilerTargetVMIsSet() const;
    void unsetJasper_compilerTargetVM();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getJasperCompilerSourceVM() const;
    void setJasperCompilerSourceVM(ConfigNodePropertyString const& value);
    bool jasperCompilerSourceVMIsSet() const;
    void unsetJasper_compilerSourceVM();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getJasperClassdebuginfo() const;
    void setJasperClassdebuginfo(ConfigNodePropertyBoolean const& value);
    bool jasperClassdebuginfoIsSet() const;
    void unsetJasper_classdebuginfo();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getJasperEnablePooling() const;
    void setJasperEnablePooling(ConfigNodePropertyBoolean const& value);
    bool jasperEnablePoolingIsSet() const;
    void unsetJasper_enablePooling();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getJasperIeClassId() const;
    void setJasperIeClassId(ConfigNodePropertyString const& value);
    bool jasperIeClassIdIsSet() const;
    void unsetJasper_ieClassId();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getJasperGenStringAsCharArray() const;
    void setJasperGenStringAsCharArray(ConfigNodePropertyBoolean const& value);
    bool jasperGenStringAsCharArrayIsSet() const;
    void unsetJasper_genStringAsCharArray();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getJasperKeepgenerated() const;
    void setJasperKeepgenerated(ConfigNodePropertyBoolean const& value);
    bool jasperKeepgeneratedIsSet() const;
    void unsetJasper_keepgenerated();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getJasperMappedfile() const;
    void setJasperMappedfile(ConfigNodePropertyBoolean const& value);
    bool jasperMappedfileIsSet() const;
    void unsetJasper_mappedfile();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getJasperTrimSpaces() const;
    void setJasperTrimSpaces(ConfigNodePropertyBoolean const& value);
    bool jasperTrimSpacesIsSet() const;
    void unsetJasper_trimSpaces();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getJasperDisplaySourceFragments() const;
    void setJasperDisplaySourceFragments(ConfigNodePropertyBoolean const& value);
    bool jasperDisplaySourceFragmentsIsSet() const;
    void unsetJasper_displaySourceFragments();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getDefaultIsSession() const;
    void setDefaultIsSession(ConfigNodePropertyBoolean const& value);
    bool defaultIsSessionIsSet() const;
    void unsetDefault_is_session();

protected:
    ConfigNodePropertyString m_Jasper_compilerTargetVM;
    bool m_Jasper_compilerTargetVMIsSet;
    ConfigNodePropertyString m_Jasper_compilerSourceVM;
    bool m_Jasper_compilerSourceVMIsSet;
    ConfigNodePropertyBoolean m_Jasper_classdebuginfo;
    bool m_Jasper_classdebuginfoIsSet;
    ConfigNodePropertyBoolean m_Jasper_enablePooling;
    bool m_Jasper_enablePoolingIsSet;
    ConfigNodePropertyString m_Jasper_ieClassId;
    bool m_Jasper_ieClassIdIsSet;
    ConfigNodePropertyBoolean m_Jasper_genStringAsCharArray;
    bool m_Jasper_genStringAsCharArrayIsSet;
    ConfigNodePropertyBoolean m_Jasper_keepgenerated;
    bool m_Jasper_keepgeneratedIsSet;
    ConfigNodePropertyBoolean m_Jasper_mappedfile;
    bool m_Jasper_mappedfileIsSet;
    ConfigNodePropertyBoolean m_Jasper_trimSpaces;
    bool m_Jasper_trimSpacesIsSet;
    ConfigNodePropertyBoolean m_Jasper_displaySourceFragments;
    bool m_Jasper_displaySourceFragmentsIsSet;
    ConfigNodePropertyBoolean m_Default_is_session;
    bool m_Default_is_sessionIsSet;
};

}
}
}
}

#endif /* OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties_H_ */
