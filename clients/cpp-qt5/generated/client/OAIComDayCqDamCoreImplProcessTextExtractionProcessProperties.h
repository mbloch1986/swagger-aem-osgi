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
 * OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties_H_
#define OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties: public OAIObject {
public:
    OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties();
    OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties(QString json);
    ~OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getMimeTypes();
    void setMimeTypes(OAIConfigNodePropertyArray* mime_types);

    OAIConfigNodePropertyInteger* getMaxExtract();
    void setMaxExtract(OAIConfigNodePropertyInteger* max_extract);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* mime_types;
    bool m_mime_types_isSet;

    OAIConfigNodePropertyInteger* max_extract;
    bool m_max_extract_isSet;

};

}

#endif /* OAIComDayCqDamCoreImplProcessTextExtractionProcessProperties_H_ */
