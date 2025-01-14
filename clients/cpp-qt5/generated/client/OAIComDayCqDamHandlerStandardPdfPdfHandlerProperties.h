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
 * OAIComDayCqDamHandlerStandardPdfPdfHandlerProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamHandlerStandardPdfPdfHandlerProperties_H_
#define OAIComDayCqDamHandlerStandardPdfPdfHandlerProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamHandlerStandardPdfPdfHandlerProperties: public OAIObject {
public:
    OAIComDayCqDamHandlerStandardPdfPdfHandlerProperties();
    OAIComDayCqDamHandlerStandardPdfPdfHandlerProperties(QString json);
    ~OAIComDayCqDamHandlerStandardPdfPdfHandlerProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamHandlerStandardPdfPdfHandlerProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean* getRasterAnnotation();
    void setRasterAnnotation(OAIConfigNodePropertyBoolean* raster_annotation);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyBoolean* raster_annotation;
    bool m_raster_annotation_isSet;

};

}

#endif /* OAIComDayCqDamHandlerStandardPdfPdfHandlerProperties_H_ */
