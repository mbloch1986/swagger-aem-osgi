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
 * OAIComDayCqWcmCoreImplLanguageManagerImplProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmCoreImplLanguageManagerImplProperties_H_
#define OAIComDayCqWcmCoreImplLanguageManagerImplProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmCoreImplLanguageManagerImplProperties: public OAIObject {
public:
    OAIComDayCqWcmCoreImplLanguageManagerImplProperties();
    OAIComDayCqWcmCoreImplLanguageManagerImplProperties(QString json);
    ~OAIComDayCqWcmCoreImplLanguageManagerImplProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqWcmCoreImplLanguageManagerImplProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getLangmgrListPath();
    void setLangmgrListPath(OAIConfigNodePropertyString* langmgr_list_path);

    OAIConfigNodePropertyArray* getLangmgrCountryDefault();
    void setLangmgrCountryDefault(OAIConfigNodePropertyArray* langmgr_country_default);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* langmgr_list_path;
    bool m_langmgr_list_path_isSet;

    OAIConfigNodePropertyArray* langmgr_country_default;
    bool m_langmgr_country_default_isSet;

};

}

#endif /* OAIComDayCqWcmCoreImplLanguageManagerImplProperties_H_ */
