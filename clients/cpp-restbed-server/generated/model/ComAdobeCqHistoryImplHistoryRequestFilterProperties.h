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
 * ComAdobeCqHistoryImplHistoryRequestFilterProperties.h
 *
 * 
 */

#ifndef ComAdobeCqHistoryImplHistoryRequestFilterProperties_H_
#define ComAdobeCqHistoryImplHistoryRequestFilterProperties_H_



#include "ConfigNodePropertyArray.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqHistoryImplHistoryRequestFilterProperties
{
public:
    ComAdobeCqHistoryImplHistoryRequestFilterProperties();
    virtual ~ComAdobeCqHistoryImplHistoryRequestFilterProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqHistoryImplHistoryRequestFilterProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getHistoryRequestFilterExcludedSelectors() const;
    void setHistoryRequestFilterExcludedSelectors(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getHistoryRequestFilterExcludedExtensions() const;
    void setHistoryRequestFilterExcludedExtensions(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_History_requestFilter_excludedSelectors;
    std::shared_ptr<ConfigNodePropertyArray> m_History_requestFilter_excludedExtensions;
};

}
}
}
}

#endif /* ComAdobeCqHistoryImplHistoryRequestFilterProperties_H_ */
