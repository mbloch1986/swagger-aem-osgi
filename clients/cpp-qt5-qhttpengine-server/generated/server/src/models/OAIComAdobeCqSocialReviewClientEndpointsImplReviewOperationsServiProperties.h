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
 * OAIComAdobeCqSocialReviewClientEndpointsImplReviewOperationsServiProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialReviewClientEndpointsImplReviewOperationsServiProperties_H
#define OAIComAdobeCqSocialReviewClientEndpointsImplReviewOperationsServiProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialReviewClientEndpointsImplReviewOperationsServiProperties: public OAIObject {
public:
    OAIComAdobeCqSocialReviewClientEndpointsImplReviewOperationsServiProperties();
    OAIComAdobeCqSocialReviewClientEndpointsImplReviewOperationsServiProperties(QString json);
    ~OAIComAdobeCqSocialReviewClientEndpointsImplReviewOperationsServiProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getFieldWhitelist() const;
    void setFieldWhitelist(const OAIConfigNodePropertyArray &field_whitelist);

    OAIConfigNodePropertyArray getAttachmentTypeBlacklist() const;
    void setAttachmentTypeBlacklist(const OAIConfigNodePropertyArray &attachment_type_blacklist);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray field_whitelist;
    bool m_field_whitelist_isSet;

    OAIConfigNodePropertyArray attachment_type_blacklist;
    bool m_attachment_type_blacklist_isSet;

};

}

#endif // OAIComAdobeCqSocialReviewClientEndpointsImplReviewOperationsServiProperties_H
