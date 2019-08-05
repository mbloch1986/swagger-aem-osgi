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
 * OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties_H_
#define OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties
    : public ModelBase
{
public:
    OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties();
    virtual ~OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getName() const;
    void setName(ConfigNodePropertyString const& value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getServiceName() const;
    void setServiceName(ConfigNodePropertyString const& value);
    bool serviceNameIsSet() const;
    void unsetService_name();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getPath() const;
    void setPath(ConfigNodePropertyString const& value);
    bool pathIsSet() const;
    void unsetPath();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getPrivilegeName() const;
    void setPrivilegeName(ConfigNodePropertyString const& value);
    bool privilegeNameIsSet() const;
    void unsetPrivilege_name();

protected:
    ConfigNodePropertyString m_Name;
    bool m_NameIsSet;
    ConfigNodePropertyString m_Service_name;
    bool m_Service_nameIsSet;
    ConfigNodePropertyString m_Path;
    bool m_PathIsSet;
    ConfigNodePropertyString m_Privilege_name;
    bool m_Privilege_nameIsSet;
};

}
}
}
}

#endif /* OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties_H_ */