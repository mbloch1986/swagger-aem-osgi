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
 * ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo.h
 *
 * 
 */

#ifndef ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo_H_
#define ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo_H_


#include "ModelBase.h"

#include <string>
#include "ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo
    : public ModelBase
{
public:
    ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo();
    virtual ~ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo members

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
    ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties getProperties() const;
    void setProperties(ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties const& value);
    bool propertiesIsSet() const;
    void unsetProperties();

protected:
    std::string m_Pid;
    bool m_PidIsSet;
    std::string m_Title;
    bool m_TitleIsSet;
    std::string m_Description;
    bool m_DescriptionIsSet;
    ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties m_Properties;
    bool m_PropertiesIsSet;
};

}
}
}
}

#endif /* ComDayCqDamS7damCommonPostServletsSetModifyHandlerInfo_H_ */
