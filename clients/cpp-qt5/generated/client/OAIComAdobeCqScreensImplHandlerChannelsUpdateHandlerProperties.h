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
 * OAIComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties_H_
#define OAIComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties: public OAIObject {
public:
    OAIComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties();
    OAIComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties(QString json);
    ~OAIComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getCqPagesupdatehandlerImageresourcetypes();
    void setCqPagesupdatehandlerImageresourcetypes(OAIConfigNodePropertyArray* cq_pagesupdatehandler_imageresourcetypes);

    OAIConfigNodePropertyArray* getCqPagesupdatehandlerProductresourcetypes();
    void setCqPagesupdatehandlerProductresourcetypes(OAIConfigNodePropertyArray* cq_pagesupdatehandler_productresourcetypes);

    OAIConfigNodePropertyArray* getCqPagesupdatehandlerVideoresourcetypes();
    void setCqPagesupdatehandlerVideoresourcetypes(OAIConfigNodePropertyArray* cq_pagesupdatehandler_videoresourcetypes);

    OAIConfigNodePropertyArray* getCqPagesupdatehandlerDynamicsequenceresourcetypes();
    void setCqPagesupdatehandlerDynamicsequenceresourcetypes(OAIConfigNodePropertyArray* cq_pagesupdatehandler_dynamicsequenceresourcetypes);

    OAIConfigNodePropertyArray* getCqPagesupdatehandlerPreviewmodepaths();
    void setCqPagesupdatehandlerPreviewmodepaths(OAIConfigNodePropertyArray* cq_pagesupdatehandler_previewmodepaths);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* cq_pagesupdatehandler_imageresourcetypes;
    bool m_cq_pagesupdatehandler_imageresourcetypes_isSet;

    OAIConfigNodePropertyArray* cq_pagesupdatehandler_productresourcetypes;
    bool m_cq_pagesupdatehandler_productresourcetypes_isSet;

    OAIConfigNodePropertyArray* cq_pagesupdatehandler_videoresourcetypes;
    bool m_cq_pagesupdatehandler_videoresourcetypes_isSet;

    OAIConfigNodePropertyArray* cq_pagesupdatehandler_dynamicsequenceresourcetypes;
    bool m_cq_pagesupdatehandler_dynamicsequenceresourcetypes_isSet;

    OAIConfigNodePropertyArray* cq_pagesupdatehandler_previewmodepaths;
    bool m_cq_pagesupdatehandler_previewmodepaths_isSet;

};

}

#endif /* OAIComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties_H_ */