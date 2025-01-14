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
 * OAIComAdobeCqSocialMembersEndpointsImplCommunityMemberGroupProfileProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialMembersEndpointsImplCommunityMemberGroupProfileProperties_H
#define OAIComAdobeCqSocialMembersEndpointsImplCommunityMemberGroupProfileProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialMembersEndpointsImplCommunityMemberGroupProfileProperties: public OAIObject {
public:
    OAIComAdobeCqSocialMembersEndpointsImplCommunityMemberGroupProfileProperties();
    OAIComAdobeCqSocialMembersEndpointsImplCommunityMemberGroupProfileProperties(QString json);
    ~OAIComAdobeCqSocialMembersEndpointsImplCommunityMemberGroupProfileProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getFieldWhitelist() const;
    void setFieldWhitelist(const OAIConfigNodePropertyArray &field_whitelist);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray field_whitelist;
    bool m_field_whitelist_isSet;

};

}

#endif // OAIComAdobeCqSocialMembersEndpointsImplCommunityMemberGroupProfileProperties_H
