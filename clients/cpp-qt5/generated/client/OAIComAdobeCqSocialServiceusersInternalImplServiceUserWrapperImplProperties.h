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
 * OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties_H_
#define OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties: public OAIObject {
public:
    OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties();
    OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties(QString json);
    ~OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean* getEnableFallback();
    void setEnableFallback(OAIConfigNodePropertyBoolean* enable_fallback);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyBoolean* enable_fallback;
    bool m_enable_fallback_isSet;

};

}

#endif /* OAIComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties_H_ */
