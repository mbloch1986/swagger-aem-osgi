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
 * OrgApacheSlingJcrRepoinitRepositoryInitializerInfo.h
 *
 * 
 */

#ifndef OrgApacheSlingJcrRepoinitRepositoryInitializerInfo_H_
#define OrgApacheSlingJcrRepoinitRepositoryInitializerInfo_H_


#include "ModelBase.h"

#include <string>
#include "OrgApacheSlingJcrRepoinitRepositoryInitializerProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingJcrRepoinitRepositoryInitializerInfo
    : public ModelBase
{
public:
    OrgApacheSlingJcrRepoinitRepositoryInitializerInfo();
    virtual ~OrgApacheSlingJcrRepoinitRepositoryInitializerInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingJcrRepoinitRepositoryInitializerInfo members

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
    OrgApacheSlingJcrRepoinitRepositoryInitializerProperties getProperties() const;
    void setProperties(OrgApacheSlingJcrRepoinitRepositoryInitializerProperties const& value);
    bool propertiesIsSet() const;
    void unsetProperties();

protected:
    std::string m_Pid;
    bool m_PidIsSet;
    std::string m_Title;
    bool m_TitleIsSet;
    std::string m_Description;
    bool m_DescriptionIsSet;
    OrgApacheSlingJcrRepoinitRepositoryInitializerProperties m_Properties;
    bool m_PropertiesIsSet;
};

}
}
}
}

#endif /* OrgApacheSlingJcrRepoinitRepositoryInitializerInfo_H_ */
