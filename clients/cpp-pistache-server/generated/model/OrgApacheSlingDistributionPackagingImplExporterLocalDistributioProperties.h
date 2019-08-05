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
 * OrgApacheSlingDistributionPackagingImplExporterLocalDistributioProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingDistributionPackagingImplExporterLocalDistributioProperties_H_
#define OrgApacheSlingDistributionPackagingImplExporterLocalDistributioProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingDistributionPackagingImplExporterLocalDistributioProperties
    : public ModelBase
{
public:
    OrgApacheSlingDistributionPackagingImplExporterLocalDistributioProperties();
    virtual ~OrgApacheSlingDistributionPackagingImplExporterLocalDistributioProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingDistributionPackagingImplExporterLocalDistributioProperties members

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
    ConfigNodePropertyString getPackageBuilderTarget() const;
    void setPackageBuilderTarget(ConfigNodePropertyString const& value);
    bool packageBuilderTargetIsSet() const;
    void unsetPackageBuilder_target();

protected:
    ConfigNodePropertyString m_Name;
    bool m_NameIsSet;
    ConfigNodePropertyString m_PackageBuilder_target;
    bool m_PackageBuilder_targetIsSet;
};

}
}
}
}

#endif /* OrgApacheSlingDistributionPackagingImplExporterLocalDistributioProperties_H_ */