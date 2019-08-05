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
 * OAIComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerInfo.h
 *
 * 
 */

#ifndef OAIComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerInfo_H_
#define OAIComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerInfo_H_

#include <QJsonObject>


#include "OAIOAIComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerInfo: public OAIObject {
public:
    OAIComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerInfo();
    OAIComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerInfo(QString json);
    ~OAIComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties* getProperties();
    void setProperties(OAIComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerInfo_H_ */