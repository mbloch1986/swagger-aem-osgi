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

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties();
    virtual ~ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getEventTopics() const;
    bool eventTopicsIsSet() const;
    void unsetEvent_topics();
    void setEventTopics(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getEventFilter() const;
    bool eventFilterIsSet() const;
    void unsetEvent_filter();
    void setEventFilter(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getTranslateListenerType() const;
    bool translateListenerTypeIsSet() const;
    void unsetTranslate_listener_type();
    void setTranslateListenerType(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getTranslatePropertyList() const;
    bool translatePropertyListIsSet() const;
    void unsetTranslate_property_list();
    void setTranslatePropertyList(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getPoolSize() const;
    bool poolSizeIsSet() const;
    void unsetPoolSize();
    void setPoolSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMaxPoolSize() const;
    bool maxPoolSizeIsSet() const;
    void unsetMaxPoolSize();
    void setMaxPoolSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getQueueSize() const;
    bool queueSizeIsSet() const;
    void unsetQueueSize();
    void setQueueSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getKeepAliveTime() const;
    bool keepAliveTimeIsSet() const;
    void unsetKeepAliveTime();
    void setKeepAliveTime(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Event_topics;
    bool m_Event_topicsIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Event_filter;
    bool m_Event_filterIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Translate_listener_type;
    bool m_Translate_listener_typeIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Translate_property_list;
    bool m_Translate_property_listIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_PoolSize;
    bool m_PoolSizeIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_MaxPoolSize;
    bool m_MaxPoolSizeIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_QueueSize;
    bool m_QueueSizeIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_KeepAliveTime;
    bool m_KeepAliveTimeIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialTranslationImplUGCLanguageDetectorProperties_H_ */