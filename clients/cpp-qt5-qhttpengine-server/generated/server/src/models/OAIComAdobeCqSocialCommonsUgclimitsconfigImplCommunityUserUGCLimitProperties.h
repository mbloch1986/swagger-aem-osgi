/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties_H
#define OAIComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties: public OAIObject {
public:
    OAIComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties();
    OAIComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties(QString json);
    ~OAIComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean getEnable() const;
    void setEnable(const OAIConfigNodePropertyBoolean &enable);

    OAIConfigNodePropertyInteger getUgcLimit() const;
    void setUgcLimit(const OAIConfigNodePropertyInteger &ugc_limit);

    OAIConfigNodePropertyInteger getUgcLimitDuration() const;
    void setUgcLimitDuration(const OAIConfigNodePropertyInteger &ugc_limit_duration);

    OAIConfigNodePropertyArray getDomains() const;
    void setDomains(const OAIConfigNodePropertyArray &domains);

    OAIConfigNodePropertyArray getToList() const;
    void setToList(const OAIConfigNodePropertyArray &to_list);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyBoolean enable;
    bool m_enable_isSet;

    OAIConfigNodePropertyInteger ugc_limit;
    bool m_ugc_limit_isSet;

    OAIConfigNodePropertyInteger ugc_limit_duration;
    bool m_ugc_limit_duration_isSet;

    OAIConfigNodePropertyArray domains;
    bool m_domains_isSet;

    OAIConfigNodePropertyArray to_list;
    bool m_to_list_isSet;

};

}

#endif // OAIComAdobeCqSocialCommonsUgclimitsconfigImplCommunityUserUGCLimitProperties_H
