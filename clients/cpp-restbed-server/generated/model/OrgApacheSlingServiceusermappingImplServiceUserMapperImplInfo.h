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
 * OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo.h
 *
 * 
 */

#ifndef OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo_H_
#define OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo_H_



#include <string>
#include "OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo
{
public:
    OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo();
    virtual ~OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo members
    
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
    std::shared_ptr<OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties> getProperties() const;
    void setProperties(std::shared_ptr<OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties> value);
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
    std::shared_ptr<OrgApacheSlingServiceusermappingImplServiceUserMapperImplProperties> m_Properties;
    std::string m_Bundle_location;
    std::string m_Service_location;
};

}
}
}
}

#endif /* OrgApacheSlingServiceusermappingImplServiceUserMapperImplInfo_H_ */
