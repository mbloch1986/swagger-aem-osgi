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
 * OrgApacheSlingModelsImplModelAdapterFactoryInfo.h
 *
 * 
 */

#ifndef OrgApacheSlingModelsImplModelAdapterFactoryInfo_H_
#define OrgApacheSlingModelsImplModelAdapterFactoryInfo_H_



#include <string>
#include "OrgApacheSlingModelsImplModelAdapterFactoryProperties.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingModelsImplModelAdapterFactoryInfo
{
public:
    OrgApacheSlingModelsImplModelAdapterFactoryInfo();
    virtual ~OrgApacheSlingModelsImplModelAdapterFactoryInfo();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheSlingModelsImplModelAdapterFactoryInfo members
    
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
    std::shared_ptr<OrgApacheSlingModelsImplModelAdapterFactoryProperties> getProperties() const;
    void setProperties(std::shared_ptr<OrgApacheSlingModelsImplModelAdapterFactoryProperties> value);

protected:
    std::string m_Pid;
    std::string m_Title;
    std::string m_Description;
    std::shared_ptr<OrgApacheSlingModelsImplModelAdapterFactoryProperties> m_Properties;
};

}
}
}
}

#endif /* OrgApacheSlingModelsImplModelAdapterFactoryInfo_H_ */
