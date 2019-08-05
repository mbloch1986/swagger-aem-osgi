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
 * OAIComAdobeCqSocialForumDispatcherImplFlushOperationsProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialForumDispatcherImplFlushOperationsProperties_H_
#define OAIComAdobeCqSocialForumDispatcherImplFlushOperationsProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialForumDispatcherImplFlushOperationsProperties: public OAIObject {
public:
    OAIComAdobeCqSocialForumDispatcherImplFlushOperationsProperties();
    OAIComAdobeCqSocialForumDispatcherImplFlushOperationsProperties(QString json);
    ~OAIComAdobeCqSocialForumDispatcherImplFlushOperationsProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialForumDispatcherImplFlushOperationsProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger* getExtensionOrder();
    void setExtensionOrder(OAIConfigNodePropertyInteger* extension_order);

    OAIConfigNodePropertyBoolean* getFlushForumontopic();
    void setFlushForumontopic(OAIConfigNodePropertyBoolean* flush_forumontopic);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyInteger* extension_order;
    bool m_extension_order_isSet;

    OAIConfigNodePropertyBoolean* flush_forumontopic;
    bool m_flush_forumontopic_isSet;

};

}

#endif /* OAIComAdobeCqSocialForumDispatcherImplFlushOperationsProperties_H_ */