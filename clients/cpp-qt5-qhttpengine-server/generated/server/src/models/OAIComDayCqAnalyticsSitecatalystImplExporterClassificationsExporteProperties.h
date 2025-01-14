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
 * OAIComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties.h
 *
 * 
 */

#ifndef OAIComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties_H
#define OAIComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties: public OAIObject {
public:
    OAIComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties();
    OAIComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties(QString json);
    ~OAIComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray getAllowedPaths() const;
    void setAllowedPaths(const OAIConfigNodePropertyArray &allowed_paths);

    OAIConfigNodePropertyInteger getCqAnalyticsSaintExporterPagesize() const;
    void setCqAnalyticsSaintExporterPagesize(const OAIConfigNodePropertyInteger &cq_analytics_saint_exporter_pagesize);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyArray allowed_paths;
    bool m_allowed_paths_isSet;

    OAIConfigNodePropertyInteger cq_analytics_saint_exporter_pagesize;
    bool m_cq_analytics_saint_exporter_pagesize_isSet;

};

}

#endif // OAIComDayCqAnalyticsSitecatalystImplExporterClassificationsExporteProperties_H
