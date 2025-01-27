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
 * OAIComAdobeCqCommerceImplAssetStaticImageHandlerProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqCommerceImplAssetStaticImageHandlerProperties_H_
#define OAIComAdobeCqCommerceImplAssetStaticImageHandlerProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqCommerceImplAssetStaticImageHandlerProperties: public OAIObject {
public:
    OAIComAdobeCqCommerceImplAssetStaticImageHandlerProperties();
    OAIComAdobeCqCommerceImplAssetStaticImageHandlerProperties(QString json);
    ~OAIComAdobeCqCommerceImplAssetStaticImageHandlerProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqCommerceImplAssetStaticImageHandlerProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean* getCqCommerceAssetHandlerActive();
    void setCqCommerceAssetHandlerActive(OAIConfigNodePropertyBoolean* cq_commerce_asset_handler_active);

    OAIConfigNodePropertyString* getCqCommerceAssetHandlerName();
    void setCqCommerceAssetHandlerName(OAIConfigNodePropertyString* cq_commerce_asset_handler_name);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyBoolean* cq_commerce_asset_handler_active;
    bool m_cq_commerce_asset_handler_active_isSet;

    OAIConfigNodePropertyString* cq_commerce_asset_handler_name;
    bool m_cq_commerce_asset_handler_name_isSet;

};

}

#endif /* OAIComAdobeCqCommerceImplAssetStaticImageHandlerProperties_H_ */
