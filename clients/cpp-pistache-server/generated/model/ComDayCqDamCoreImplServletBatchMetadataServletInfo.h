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
 * ComDayCqDamCoreImplServletBatchMetadataServletInfo.h
 *
 * 
 */

#ifndef ComDayCqDamCoreImplServletBatchMetadataServletInfo_H_
#define ComDayCqDamCoreImplServletBatchMetadataServletInfo_H_


#include "ModelBase.h"

#include <string>
#include "ComDayCqDamCoreImplServletBatchMetadataServletProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamCoreImplServletBatchMetadataServletInfo
    : public ModelBase
{
public:
    ComDayCqDamCoreImplServletBatchMetadataServletInfo();
    virtual ~ComDayCqDamCoreImplServletBatchMetadataServletInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqDamCoreImplServletBatchMetadataServletInfo members

    /// <summary>
    /// 
    /// </summary>
    std::string getPid() const;
    void setPid(std::string const& value);
    bool pidIsSet() const;
    void unsetPid();
    /// <summary>
    /// 
    /// </summary>
    std::string getTitle() const;
    void setTitle(std::string const& value);
    bool titleIsSet() const;
    void unsetTitle();
    /// <summary>
    /// 
    /// </summary>
    std::string getDescription() const;
    void setDescription(std::string const& value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// 
    /// </summary>
    ComDayCqDamCoreImplServletBatchMetadataServletProperties getProperties() const;
    void setProperties(ComDayCqDamCoreImplServletBatchMetadataServletProperties const& value);
    bool propertiesIsSet() const;
    void unsetProperties();

protected:
    std::string m_Pid;
    bool m_PidIsSet;
    std::string m_Title;
    bool m_TitleIsSet;
    std::string m_Description;
    bool m_DescriptionIsSet;
    ComDayCqDamCoreImplServletBatchMetadataServletProperties m_Properties;
    bool m_PropertiesIsSet;
};

}
}
}
}

#endif /* ComDayCqDamCoreImplServletBatchMetadataServletInfo_H_ */