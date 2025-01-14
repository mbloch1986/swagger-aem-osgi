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
 * OAIComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties_H_
#define OAIComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties: public OAIObject {
public:
    OAIComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties();
    OAIComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties(QString json);
    ~OAIComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean* getOffloadingOffloaderEnabled();
    void setOffloadingOffloaderEnabled(OAIConfigNodePropertyBoolean* offloading_offloader_enabled);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyBoolean* offloading_offloader_enabled;
    bool m_offloading_offloader_enabled_isSet;

};

}

#endif /* OAIComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties_H_ */
