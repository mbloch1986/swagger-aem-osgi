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
 * ComDayCqWcmDesignimporterParserTaghandlersFactoryTextComponentProperties.h
 *
 * 
 */

#ifndef ComDayCqWcmDesignimporterParserTaghandlersFactoryTextComponentProperties_H_
#define ComDayCqWcmDesignimporterParserTaghandlersFactoryTextComponentProperties_H_



#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmDesignimporterParserTaghandlersFactoryTextComponentProperties
{
public:
    ComDayCqWcmDesignimporterParserTaghandlersFactoryTextComponentProperties();
    virtual ~ComDayCqWcmDesignimporterParserTaghandlersFactoryTextComponentProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqWcmDesignimporterParserTaghandlersFactoryTextComponentProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getServiceRanking() const;
    void setServiceRanking(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getTagpattern() const;
    void setTagpattern(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getComponentResourceType() const;
    void setComponentResourceType(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Service_ranking;
    std::shared_ptr<ConfigNodePropertyString> m_Tagpattern;
    std::shared_ptr<ConfigNodePropertyString> m_Component_resourceType;
};

}
}
}
}

#endif /* ComDayCqWcmDesignimporterParserTaghandlersFactoryTextComponentProperties_H_ */
