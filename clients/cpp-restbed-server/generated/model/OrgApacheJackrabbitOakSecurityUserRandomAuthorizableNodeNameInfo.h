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
 * OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameInfo.h
 *
 * 
 */

#ifndef OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameInfo_H_
#define OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameInfo_H_



#include "OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties.h"
#include <string>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameInfo
{
public:
    OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameInfo();
    virtual ~OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameInfo();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameInfo members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getPid() const;
    void setPid(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getTitle() const;
    void setTitle(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getDescription() const;
    void setDescription(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties> getProperties() const;
    void setProperties(std::shared_ptr<OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties> value);
    /// <summary>
    /// 
    /// </summary>
    std::string getBundleLocation() const;
    void setBundleLocation(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getServiceLocation() const;
    void setServiceLocation(std::string value);

protected:
    std::string m_Pid;
    std::string m_Title;
    std::string m_Description;
    std::shared_ptr<OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameProperties> m_Properties;
    std::string m_Bundle_location;
    std::string m_Service_location;
};

}
}
}
}

#endif /* OrgApacheJackrabbitOakSecurityUserRandomAuthorizableNodeNameInfo_H_ */
