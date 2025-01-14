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
 * OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties.h
 *
 * 
 */

#ifndef OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties_H
#define OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyDropDown.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties: public OAIObject {
public:
    OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties();
    OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties(QString json);
    ~OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getPath() const;
    void setPath(const OAIConfigNodePropertyString &path);

    OAIConfigNodePropertyDropDown getTokenRequiredAttr() const;
    void setTokenRequiredAttr(const OAIConfigNodePropertyDropDown &token_required_attr);

    OAIConfigNodePropertyString getTokenAlternateUrl() const;
    void setTokenAlternateUrl(const OAIConfigNodePropertyString &token_alternate_url);

    OAIConfigNodePropertyBoolean getTokenEncapsulated() const;
    void setTokenEncapsulated(const OAIConfigNodePropertyBoolean &token_encapsulated);

    OAIConfigNodePropertyArray getSkipTokenRefresh() const;
    void setSkipTokenRefresh(const OAIConfigNodePropertyArray &skip_token_refresh);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString path;
    bool m_path_isSet;

    OAIConfigNodePropertyDropDown token_required_attr;
    bool m_token_required_attr_isSet;

    OAIConfigNodePropertyString token_alternate_url;
    bool m_token_alternate_url_isSet;

    OAIConfigNodePropertyBoolean token_encapsulated;
    bool m_token_encapsulated_isSet;

    OAIConfigNodePropertyArray skip_token_refresh;
    bool m_skip_token_refresh_isSet;

};

}

#endif // OAIComDayCrxSecurityTokenImplImplTokenAuthenticationHandlerProperties_H
