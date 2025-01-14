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
 * OAIComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties_H_
#define OAIComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyInteger.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties: public OAIObject {
public:
    OAIComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties();
    OAIComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties(QString json);
    ~OAIComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getAttachmentTypeBlacklist();
    void setAttachmentTypeBlacklist(OAIConfigNodePropertyString* attachment_type_blacklist);

    OAIConfigNodePropertyInteger* getExtensionOrder();
    void setExtensionOrder(OAIConfigNodePropertyInteger* extension_order);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* attachment_type_blacklist;
    bool m_attachment_type_blacklist_isSet;

    OAIConfigNodePropertyInteger* extension_order;
    bool m_extension_order_isSet;

};

}

#endif /* OAIComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties_H_ */
