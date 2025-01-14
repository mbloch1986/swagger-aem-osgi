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
 * OAIComDayCqWcmDesignimporterDesignPackageImporterProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmDesignimporterDesignPackageImporterProperties_H_
#define OAIComDayCqWcmDesignimporterDesignPackageImporterProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmDesignimporterDesignPackageImporterProperties: public OAIObject {
public:
    OAIComDayCqWcmDesignimporterDesignPackageImporterProperties();
    OAIComDayCqWcmDesignimporterDesignPackageImporterProperties(QString json);
    ~OAIComDayCqWcmDesignimporterDesignPackageImporterProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqWcmDesignimporterDesignPackageImporterProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getExtractFilter();
    void setExtractFilter(OAIConfigNodePropertyArray* extract_filter);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* extract_filter;
    bool m_extract_filter_isSet;

};

}

#endif /* OAIComDayCqWcmDesignimporterDesignPackageImporterProperties_H_ */
