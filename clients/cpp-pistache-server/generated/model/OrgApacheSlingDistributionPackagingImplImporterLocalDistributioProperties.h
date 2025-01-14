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
 * OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties_H_
#define OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties
    : public ModelBase
{
public:
    OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties();
    virtual ~OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties members

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

#endif /* OrgApacheSlingDistributionPackagingImplImporterLocalDistributioProperties_H_ */
