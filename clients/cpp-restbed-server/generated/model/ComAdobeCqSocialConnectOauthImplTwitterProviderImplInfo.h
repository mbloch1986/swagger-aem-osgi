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
 * ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo.h
 *
 * 
 */

#ifndef ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo_H_
#define ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo_H_



#include "ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties.h"
#include <string>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo
{
public:
    ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo();
    virtual ~ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo members
    
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
    std::shared_ptr<ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties> getProperties() const;
    void setProperties(std::shared_ptr<ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties> value);

protected:
    std::string m_Pid;
    std::string m_Title;
    std::string m_Description;
    std::shared_ptr<ComAdobeCqSocialConnectOauthImplTwitterProviderImplProperties> m_Properties;
};

}
}
}
}

#endif /* ComAdobeCqSocialConnectOauthImplTwitterProviderImplInfo_H_ */
