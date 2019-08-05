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
 * OAIComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties_H_
#define OAIComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties: public OAIObject {
public:
    OAIComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties();
    OAIComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties(QString json);
    ~OAIComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean* getXmpFilterApplyWhitelist();
    void setXmpFilterApplyWhitelist(OAIConfigNodePropertyBoolean* xmp_filter_apply_whitelist);

    OAIConfigNodePropertyArray* getXmpFilterWhitelist();
    void setXmpFilterWhitelist(OAIConfigNodePropertyArray* xmp_filter_whitelist);

    OAIConfigNodePropertyBoolean* getXmpFilterApplyBlacklist();
    void setXmpFilterApplyBlacklist(OAIConfigNodePropertyBoolean* xmp_filter_apply_blacklist);

    OAIConfigNodePropertyArray* getXmpFilterBlacklist();
    void setXmpFilterBlacklist(OAIConfigNodePropertyArray* xmp_filter_blacklist);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyBoolean* xmp_filter_apply_whitelist;
    bool m_xmp_filter_apply_whitelist_isSet;

    OAIConfigNodePropertyArray* xmp_filter_whitelist;
    bool m_xmp_filter_whitelist_isSet;

    OAIConfigNodePropertyBoolean* xmp_filter_apply_blacklist;
    bool m_xmp_filter_apply_blacklist_isSet;

    OAIConfigNodePropertyArray* xmp_filter_blacklist;
    bool m_xmp_filter_blacklist_isSet;

};

}

#endif /* OAIComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties_H_ */