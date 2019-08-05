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
 * ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplInfo.h
 *
 * 
 */

#ifndef ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplInfo_H_
#define ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplInfo_H_



#include <string>
#include "ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplInfo
{
public:
    ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplInfo();
    virtual ~ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplInfo();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplInfo members
    
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
    std::shared_ptr<ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties> getProperties() const;
    void setProperties(std::shared_ptr<ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties> value);

protected:
    std::string m_Pid;
    std::string m_Title;
    std::string m_Description;
    std::shared_ptr<ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplProperties> m_Properties;
};

}
}
}
}

#endif /* ComAdobeCqCommercePimImplProductfeedProductFeedServiceImplInfo_H_ */