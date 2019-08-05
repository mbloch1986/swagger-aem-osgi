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
 * OAIComDayCqAnalyticsTestandtargetImplSegmentImporterProperties.h
 *
 * 
 */

#ifndef OAIComDayCqAnalyticsTestandtargetImplSegmentImporterProperties_H
#define OAIComDayCqAnalyticsTestandtargetImplSegmentImporterProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqAnalyticsTestandtargetImplSegmentImporterProperties: public OAIObject {
public:
    OAIComDayCqAnalyticsTestandtargetImplSegmentImporterProperties();
    OAIComDayCqAnalyticsTestandtargetImplSegmentImporterProperties(QString json);
    ~OAIComDayCqAnalyticsTestandtargetImplSegmentImporterProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean getCqAnalyticsTestandtargetSegmentimporterEnabled() const;
    void setCqAnalyticsTestandtargetSegmentimporterEnabled(const OAIConfigNodePropertyBoolean &cq_analytics_testandtarget_segmentimporter_enabled);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyBoolean cq_analytics_testandtarget_segmentimporter_enabled;
    bool m_cq_analytics_testandtarget_segmentimporter_enabled_isSet;

};

}

#endif // OAIComDayCqAnalyticsTestandtargetImplSegmentImporterProperties_H