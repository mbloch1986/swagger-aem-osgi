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
 * OAIComDayCqDamCoreImplReportsReportExportServiceProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreImplReportsReportExportServiceProperties_H
#define OAIComDayCqDamCoreImplReportsReportExportServiceProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplReportsReportExportServiceProperties: public OAIObject {
public:
    OAIComDayCqDamCoreImplReportsReportExportServiceProperties();
    OAIComDayCqDamCoreImplReportsReportExportServiceProperties(QString json);
    ~OAIComDayCqDamCoreImplReportsReportExportServiceProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger getQueryBatchSize() const;
    void setQueryBatchSize(const OAIConfigNodePropertyInteger &query_batch_size);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyInteger query_batch_size;
    bool m_query_batch_size_isSet;

};

}

#endif // OAIComDayCqDamCoreImplReportsReportExportServiceProperties_H
