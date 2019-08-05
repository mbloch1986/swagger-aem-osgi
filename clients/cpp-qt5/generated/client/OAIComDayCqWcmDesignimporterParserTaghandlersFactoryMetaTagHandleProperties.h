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
 * OAIComDayCqWcmDesignimporterParserTaghandlersFactoryMetaTagHandleProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmDesignimporterParserTaghandlersFactoryMetaTagHandleProperties_H_
#define OAIComDayCqWcmDesignimporterParserTaghandlersFactoryMetaTagHandleProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyInteger.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmDesignimporterParserTaghandlersFactoryMetaTagHandleProperties: public OAIObject {
public:
    OAIComDayCqWcmDesignimporterParserTaghandlersFactoryMetaTagHandleProperties();
    OAIComDayCqWcmDesignimporterParserTaghandlersFactoryMetaTagHandleProperties(QString json);
    ~OAIComDayCqWcmDesignimporterParserTaghandlersFactoryMetaTagHandleProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqWcmDesignimporterParserTaghandlersFactoryMetaTagHandleProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger* getServiceRanking();
    void setServiceRanking(OAIConfigNodePropertyInteger* service_ranking);

    OAIConfigNodePropertyString* getTagpattern();
    void setTagpattern(OAIConfigNodePropertyString* tagpattern);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyInteger* service_ranking;
    bool m_service_ranking_isSet;

    OAIConfigNodePropertyString* tagpattern;
    bool m_tagpattern_isSet;

};

}

#endif /* OAIComDayCqWcmDesignimporterParserTaghandlersFactoryMetaTagHandleProperties_H_ */