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
 * OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties_H
#define OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties: public OAIObject {
public:
    OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties();
    OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties(QString json);
    ~OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger getCqDamAdhocAssetSharePrezipMaxcontentsize() const;
    void setCqDamAdhocAssetSharePrezipMaxcontentsize(const OAIConfigNodePropertyInteger &cq_dam_adhoc_asset_share_prezip_maxcontentsize);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyInteger cq_dam_adhoc_asset_share_prezip_maxcontentsize;
    bool m_cq_dam_adhoc_asset_share_prezip_maxcontentsize_isSet;

};

}

#endif // OAIComDayCqDamCoreImplAssetlinkshareAdhocAssetShareProxyServletProperties_H
