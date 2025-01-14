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
 * ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties_H_
#define ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties_H_



#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties
{
public:
    ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties();
    virtual ~ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getEventTopics() const;
    void setEventTopics(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getEventFilter() const;
    void setEventFilter(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getTranslateListenerType() const;
    void setTranslateListenerType(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getTranslatePropertyList() const;
    void setTranslatePropertyList(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getPoolSize() const;
    void setPoolSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMaxPoolSize() const;
    void setMaxPoolSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getQueueSize() const;
    void setQueueSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getKeepAliveTime() const;
    void setKeepAliveTime(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Event_topics;
    std::shared_ptr<ConfigNodePropertyString> m_Event_filter;
    std::shared_ptr<ConfigNodePropertyArray> m_Translate_listener_type;
    std::shared_ptr<ConfigNodePropertyArray> m_Translate_property_list;
    std::shared_ptr<ConfigNodePropertyInteger> m_PoolSize;
    std::shared_ptr<ConfigNodePropertyInteger> m_MaxPoolSize;
    std::shared_ptr<ConfigNodePropertyInteger> m_QueueSize;
    std::shared_ptr<ConfigNodePropertyInteger> m_KeepAliveTime;
};

}
}
}
}

#endif /* ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties_H_ */
