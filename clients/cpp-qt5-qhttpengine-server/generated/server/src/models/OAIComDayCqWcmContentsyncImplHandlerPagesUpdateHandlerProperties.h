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
 * OAIComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties_H
#define OAIComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties: public OAIObject {
public:
    OAIComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties();
    OAIComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties(QString json);
    ~OAIComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getCqPagesupdatehandlerImageresourcetypes() const;
    void setCqPagesupdatehandlerImageresourcetypes(const OAIConfigNodePropertyArray &cq_pagesupdatehandler_imageresourcetypes);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray cq_pagesupdatehandler_imageresourcetypes;
    bool m_cq_pagesupdatehandler_imageresourcetypes_isSet;

};

}

#endif // OAIComDayCqWcmContentsyncImplHandlerPagesUpdateHandlerProperties_H
