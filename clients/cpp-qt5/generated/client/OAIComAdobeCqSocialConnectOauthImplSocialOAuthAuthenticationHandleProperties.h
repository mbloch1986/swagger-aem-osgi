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
 * OAIComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleProperties_H_
#define OAIComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleProperties: public OAIObject {
public:
    OAIComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleProperties();
    OAIComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleProperties(QString json);
    ~OAIComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getPath();
    void setPath(OAIConfigNodePropertyArray* path);

    OAIConfigNodePropertyInteger* getServiceRanking();
    void setServiceRanking(OAIConfigNodePropertyInteger* service_ranking);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* path;
    bool m_path_isSet;

    OAIConfigNodePropertyInteger* service_ranking;
    bool m_service_ranking_isSet;

};

}

#endif /* OAIComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleProperties_H_ */
