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
 * ComDayCqWcmDesignimporterDesignPackageImporterProperties.h
 *
 * 
 */

#ifndef ComDayCqWcmDesignimporterDesignPackageImporterProperties_H_
#define ComDayCqWcmDesignimporterDesignPackageImporterProperties_H_



#include "ConfigNodePropertyArray.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmDesignimporterDesignPackageImporterProperties
{
public:
    ComDayCqWcmDesignimporterDesignPackageImporterProperties();
    virtual ~ComDayCqWcmDesignimporterDesignPackageImporterProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqWcmDesignimporterDesignPackageImporterProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getExtractFilter() const;
    void setExtractFilter(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Extract_filter;
};

}
}
}
}

#endif /* ComDayCqWcmDesignimporterDesignPackageImporterProperties_H_ */
