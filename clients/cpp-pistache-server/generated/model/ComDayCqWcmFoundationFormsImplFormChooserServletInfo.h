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
 * ComDayCqWcmFoundationFormsImplFormChooserServletInfo.h
 *
 * 
 */

#ifndef ComDayCqWcmFoundationFormsImplFormChooserServletInfo_H_
#define ComDayCqWcmFoundationFormsImplFormChooserServletInfo_H_


#include "ModelBase.h"

#include "ComDayCqWcmFoundationFormsImplFormChooserServletProperties.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmFoundationFormsImplFormChooserServletInfo
    : public ModelBase
{
public:
    ComDayCqWcmFoundationFormsImplFormChooserServletInfo();
    virtual ~ComDayCqWcmFoundationFormsImplFormChooserServletInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmFoundationFormsImplFormChooserServletInfo members

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
    ComDayCqWcmFoundationFormsImplFormChooserServletProperties getProperties() const;
    void setProperties(ComDayCqWcmFoundationFormsImplFormChooserServletProperties const& value);
    bool propertiesIsSet() const;
    void unsetProperties();

protected:
    std::string m_Pid;
    bool m_PidIsSet;
    std::string m_Title;
    bool m_TitleIsSet;
    std::string m_Description;
    bool m_DescriptionIsSet;
    ComDayCqWcmFoundationFormsImplFormChooserServletProperties m_Properties;
    bool m_PropertiesIsSet;
};

}
}
}
}

#endif /* ComDayCqWcmFoundationFormsImplFormChooserServletInfo_H_ */
