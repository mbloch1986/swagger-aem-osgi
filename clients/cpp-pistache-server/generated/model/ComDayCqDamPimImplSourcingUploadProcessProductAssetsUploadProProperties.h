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
 * ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties.h
 *
 * 
 */

#ifndef ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties_H_
#define ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties
    : public ModelBase
{
public:
    ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties();
    virtual ~ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getDeleteZipFile() const;
    void setDeleteZipFile(ConfigNodePropertyBoolean const& value);
    bool deleteZipFileIsSet() const;
    void unsetDelete_zip_file();

protected:
    ConfigNodePropertyBoolean m_Delete_zip_file;
    bool m_Delete_zip_fileIsSet;
};

}
}
}
}

#endif /* ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties_H_ */
